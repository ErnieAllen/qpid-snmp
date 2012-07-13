/*
 *
 * Copyright (c) 2012 The Apache Software Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
This program uses the pugixml library (http://pugixml.org).
pugixml is Copyright (C) 2006-2010 Arseny Kapoulkine.
It is available under the MIT licence.
*/

/*
    qpid-snmp-mibgen
        Generates a snmpv2 complant mib file

        Input should be the qpid management-schema.xml files
        and a text template file qpid-snmp.txt

 */

#include "pugixml.hpp"

#include <string.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <streambuf>
#include <map>
#include <vector>

#include <stdio.h>
#include <time.h>

using namespace std;

typedef map<const char *, string> mibVars;
typedef map<const char *, string>::iterator mibVarIterator;


#define initCap(s) if (s.length()) s.at(0) = toupper(s.at(0))

void usage()
{
    cout << "Usage: qpid-snmp-mibgen -t <template> -s <schema> [-s <schema> ] [-m <output mib>]" << endl;
    cout << "    <template> defaults to ./qpid-snmp.txt" << endl;
    cout << "    If -m <output mib> is not used, output is sent to stdout." << endl;
    cout << "    The first <schema> should be the main messaging schema." << endl;
    cout << "    Additional plugin schemas are optional (up to 10 additional schemas can be specified)." << endl << endl;
}

void xmlError(char * source, pugi::xml_parse_result & result)
{
    cout << "XML [" << source << "] parsed with errors" << endl;
    cout << "Error description: " << result.description() << endl;
    cout << "Error offset: " << result.offset << " (error at [..." << (source + result.offset) << "]" << endl << endl;

}

// combine the class name and xml node name to form the child name
void genChildName(const string & className, string & name, string & childName)
{
    string capClass = className;
    initCap(capClass);

    childName = capClass;
    if (name.length()) {
        string uName = name;
        initCap(uName);
        childName.append(uName);
    }
}

// mib names cannot contain an _ character, so remove them.
void fixPropertyName(string & name)
{
    size_t pos;
    size_t start = 0;
    string newName;

    pos = name.find('_');
    while (pos != string::npos) {
        newName.append(name.substr(start, pos - start));
        start = pos + 1;
        pos = name.find('_', start);
    }
    if (start < name.length())
        newName.append(name.substr(start, name.length() - start));
    name = newName;
}

// Replace all the %{today} strings in the file with today's date
void replaceToday(string& buffer)
{
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    char buf[13] = {0};
    sprintf(buf,"%04d%02d%02d0000", timeinfo->tm_year + 1900, timeinfo->tm_mon + 1, timeinfo->tm_mday);

    int posClasses = 0;
    while ((posClasses = buffer.find("%{today}", posClasses)) != string::npos) {
        buffer.replace(posClasses, 8, buf);
    }
}

// Generate a comma separated list of attribute names and insert them in the buf
void replaceKeyWithAttrList(string & text, const string & key, const pugi::xml_node & schema, const string & attr, bool match)
{
    string propertyName;
    string foundAttr;
    stringstream buf;
    string className;
    string childName;
    string childType;

    string sep = "";

    for (pugi::xml_node xclass = schema.child("class"); xclass; xclass = xclass.next_sibling("class")) {
        className = xclass.attribute("name").value();
        className.at(0) = tolower(className.at(0));

        for (pugi::xml_node property = xclass.first_child(); property; property = property.next_sibling()) {
            if (strcmp(property.name(), "method") == 0)
                continue;

            propertyName = property.attribute("name").value();
            // if there is a naked text block outside of a <property> tag
            if (propertyName.empty())
                continue;

            foundAttr = property.attribute(attr.c_str()).value();
            if ((!foundAttr.empty() && !match) || (foundAttr.empty() && match)) {
                fixPropertyName(propertyName);
                genChildName(className, propertyName, childName);
                childName = "qpid010" + childName;
                buf << "                " << sep << childName << endl;
                sep = ",";

                // expand all "hilo32 property tags into 2 additional tags
                childType = property.attribute("type").value();
                if (childType == "hilo32") {
                    string loName = childName + "Low";
                    buf << "                " << sep << loName << endl;

                    string hiName = childName + "Hi";
                    buf << "                " << sep << hiName << endl;
                }
            }
        }
    }
    int posKey = text.find(key);
    if (posKey != string::npos)
        text.replace(posKey, key.length(), buf.str());
}

// Extract a block of text from the string buffer.
// Puts a place-holder tag in the buf where the block was found
// For example: if the buf looks like
//    blah blah <key>foo bar text</key> hmm hmmm
// Then after extraction buf will look like
//    blah blah %{key} hmm hmmm
// And block will contain "foo bar text"
void extractBlock(string& block, string& buf, string key, const char *predicate)
{
    block.clear();

    stringstream placeholder;
    placeholder << "%{" << predicate << key << "}";

    stringstream beginning;
    beginning << "<" << predicate << key << ">";

    stringstream ending;
    ending << "</" << predicate << key << ">";

    int blockStartPos = buf.find(beginning.str());
    if (blockStartPos != string::npos) {
        int blockEndPos = buf.find(ending.str(), blockStartPos);
        if (blockEndPos != string::npos) {
            int blockSize = blockEndPos - blockStartPos - beginning.str().length();
            if (blockSize > 0) {
                block = buf.substr(blockStartPos + beginning.str().length(), blockSize);
                buf.replace(blockStartPos, blockEndPos + ending.str().length() - blockStartPos, placeholder.str());
            }
        }
    }
}

// replace all occurances of key with value in the provided string block
void replaceAll(string& block, const char * key, const string& value)
{
    int pos = 0;
    while ((pos = block.find(key, pos)) != string::npos) {
        block.replace(pos, strlen(key), value);
    }
}

// translate the schema data types into mib data types
void translateAttr(string & child)
{
    map<string, string> attrMap;
    attrMap["sstr"] =       "Sstr";
    attrMap["count32"] =    "Counter32";
    attrMap["uint64"] =     "Uint64";
    attrMap["count64"] =    "Counter64";
    attrMap["uint16"] =     "Uint16";
    attrMap["uint32"] =     "Unsigned32";
    attrMap["bool"] =       "TruthValue";
    attrMap["lstr"] =       "Lstr";
    attrMap["objId"] =      "ObjId";
    attrMap["uuid"] =       "Uuid";
    attrMap["mmaTime"] =    "TimeTicks";
    attrMap["absTime"] =    "TimeTicks";
    attrMap["deltaTime"] =  "TimeTicks";
    attrMap["hilo32"] =     "Hilo32";
    attrMap["map"] =        "Map";
    attrMap["list"] =       "Sstr";

    attrMap["RO"] = "read-only";
    attrMap["RC"] = "read-write";
    attrMap["RW"] = "read-write";

    map<string, string>::iterator it;
    it = attrMap.find(child);
    if (it != attrMap.end()) {
        child = attrMap[child];
    }
}

// Generate a mib description for this node
// If there is no desc attribute in the schema, make one up by combining the class and property names
// Add the other attributes found in the schema
void genDescription(string & desc, const string & className, const string & propertyName, pugi::xml_node & property)
{
    string nodeType = property.name();
    stringstream buf;
    if (desc.empty()) {
        buf << className << " " << propertyName;
    } else
        buf << desc;

    buf << endl << "                     Additional info ( nodeType:" << nodeType;

    for (pugi::xml_attribute attr = property.first_attribute(); attr; attr = attr.next_attribute()) {
        string attrName = attr.name();
        // skip known attributes that are already included in the mib
        if ((attrName == "name") ||
                (attrName == "desc") ||
                (attrName == "access") ||
                (attrName == "unit") ||
                (attrName == "type")) {
            continue;
        }
        buf << ", " << attrName << ":" << attr.value();
    }
    buf << " )";
    desc = buf.str();
}

// If the schema contains a unit attribute, generate a mib UNIT line
void genUnit(string & unit)
{
    if (!unit.empty()) {
        stringstream buf;
        buf << "UNITS       \"" << unit << "\"" << endl << "        ";
        unit = buf.str();
    }
}

// Add up all the usable xml child nodes and return the count
void calcNextChildNumber(pugi::xml_node & xclass, string & nextChildNumber)
{
	string propertyName;
	int num = 1;
    for (pugi::xml_node property = xclass.first_child(); property; property = property.next_sibling()) {
        if (strcmp(property.name(), "method") == 0)
            continue;

        // skip naked text outside of an element
        propertyName = property.attribute("name").value();
        if (propertyName.empty())
            continue;

        ++num;
        // add the hi and lo generated numbers
        if (strcmp(property.attribute("type").value(), "hilo32") == 0) {
            num += 2;
        }
    }
    stringstream buf;
    buf << num;
    nextChildNumber = buf.str();
}

// For better formatting of the output, add spaces to line up the columns
void expandSpace(string & block, const char * key, const string & fixed, int padding)
{
    string value;
    int spaces = padding - fixed.length();
    if (spaces <= 0)
        spaces = 1;

    value.assign(spaces, ' ');

    replaceAll(block, key, value);
}

// Some schema classes should be handled as a single object, and some
// should be handled as tables.
// Determine if this class type should be handled for this blockType
bool isProcessable(const string & className, const string & blockType)
{
    static const char *singles[] = {"system", "broker", "memory", "agent", "managementSetupState"};
    if (blockType == "both")
        return true;

    for (int i=0; i<sizeof(singles)/sizeof(singles[0]); i++) {
        if (className.compare(singles[i]) == 0) {
            if (blockType == "single")
                return true;
            else
                return false;
        }
    }
    if (blockType == "single")
        return false;
    return true;
}

// Convert "name1, name2, name3" to "qpid010EvtName1, qpid010EvtName2, qpid010EvtName3"
void fixEventArgs(string & args)
{
    vector<string> names;
    string token;
    int pos;
    int start = 0;

    // split on commas and remove spaces
    pos = args.find(',');
    while (pos != string::npos) {
        if (pos > start) {
            token = args.substr(start, pos - start);
            replaceAll(token, " ", "");
            names.push_back(token);
        }

        start = pos + 1;
        pos = args.find(',', start);
    }
    // handle last token, or first token if there weren'e any commas
    if (start < args.length()) {
        token = args.substr(start, args.length() - start);
        replaceAll(token, " ", "");
        names.push_back(token);
    }

    // put the tokens back together
    stringstream buf;
    string sep = "";
    vector<string>::iterator it;
    for (it = names.begin(); it != names.end(); ++it) {
        token = *it;
        initCap(token);
        buf << sep << "qpid010Evt" << token;
        sep = ", ";
    }
    args = buf.str();
}

// Replace the <Events>...</Events> block of text with a section for each
// event in the schema
void processEventBlock(string & buf, const pugi::xml_node & schema)
{
    string block;

    // extract the <Events> blocks of text
    extractBlock(block, buf, "Events", "");
    string eachEvent;
    string allEvents;
    // the attributes we need
    string eventName;
    string eventSev;
    string eventArgs;

    int eventSeq = 1;
    // loop through each arg in the eventArguments xml section
    for (pugi::xml_node event = schema.child("event"); event; event = event.next_sibling("event")) {
        stringstream eventSequence;
        string seq;

        eventName = event.attribute("name").value();
        eventSev = event.attribute("sev").value();
        eventArgs = event.attribute("args").value();

        initCap(eventName);
        fixEventArgs(eventArgs);

        eventSequence << eventSeq++;
        seq = eventSequence.str();

        eachEvent = block;
        // replace all the variables in this block
        replaceAll(eachEvent, "%{eventName}", eventName);
        replaceAll(eachEvent, "%{eventSev}", eventSev);
        replaceAll(eachEvent, "%{eventArguments}", eventArgs);
        replaceAll(eachEvent, "%{eventSequence}", seq);

        // accumulate the blocks for each event
        allEvents.append(eachEvent);
    }
    // replace the placeholder with all the event blocks
    replaceAll(buf, "%{Events}", allEvents);

}

// Replace the <EventArguments>...</EventArguments> block of text with a section for each
// argument in each event in the schema
void processEventArguments(string & buf, const pugi::xml_node & schema)
{
    string block;
    // extract the <EventArguments> blocks of text
    extractBlock(block, buf, "EventArguments", "");
    string eachEventArgument;
    string allEventArguments;
    // the attributes we need
    string argName;
    string argType;
    string argDesc;

    int eventArgumentSeq = 1;
    pugi::xml_node eventArguments = schema.child("eventArguments");
    // loop through each arg in the eventArguments xml section
    for (pugi::xml_node arg = eventArguments.first_child(); arg; arg = arg.next_sibling()) {
        stringstream argDescBuf;
        stringstream eventArgumentSequence;
        string seq;

        argName = arg.attribute("name").value();
        argType = arg.attribute("type").value();
        argDesc = arg.attribute("desc").value();

        initCap(argName);
        translateAttr(argType);

        if (argDesc.empty()) {
            argDescBuf << "Description for " << argName << " is missing from the schema";
            argDesc = argDescBuf.str();
        }

        eventArgumentSequence << eventArgumentSeq++;
        seq = eventArgumentSequence.str();

        eachEventArgument = block;
        // replace the variables in this block
        replaceAll(eachEventArgument, "%{argumentName}", argName);
        replaceAll(eachEventArgument, "%{argumentType}", argType);
        replaceAll(eachEventArgument, "%{argumentDesc}", argDesc);
        replaceAll(eachEventArgument, "%{eventArgumentSequence}", seq);

        // accumulate all the blocks
        allEventArguments.append(eachEventArgument);
    }
    // and finally, replace the placeholder with the accululated blocks
    replaceAll(buf, "%{EventArguments}", allEventArguments);
}

// Build up a comma separated string of arguments that are passed to events
void processEventArgumentGroup(string & buf, const pugi::xml_node & schema)
{
    stringstream block;
    string sep;
    string argName;

    pugi::xml_node eventArguments = schema.child("eventArguments");
    // loop through each arg in the eventArguments xml section
    for (pugi::xml_node arg = eventArguments.first_child(); arg; arg = arg.next_sibling()) {

        argName = arg.attribute("name").value();
        initCap(argName);

        block << "                " << sep << "qpid010Evt" << argName << endl;
        sep = ",";
    }
    replaceAll(buf, "%{allEventArguments}", block.str());
}

// The events in the xml schemas can have different severities.
// For each unique severity found in the schema, generate a separate
// severity group in the mib
void processSeverityGroups(string & buf, const pugi::xml_node & schema)
{
    string block;

    // extract the <forEachSeverity> blocks of text
    for (extractBlock(block, buf, "Severity", "forEach"); block.length(); extractBlock(block, buf, "Severity", "forEach")) {

        string eachEvent;
        string allEvents;
        // the attributes we need
        string eventName;
        string eventSev;

        typedef vector<string> nameList;
        map<string, nameList *> eventNameMap;

        int eventSeq = 4;
        // loop through each event node
        // accumulate all the unique sev values
        for (pugi::xml_node event = schema.child("event"); event; event = event.next_sibling("event")) {
            eventName = event.attribute("name").value();
            initCap(eventName);

            eventSev = event.attribute("sev").value();
            initCap(eventSev);

            if (eventNameMap.find(eventSev) == eventNameMap.end()) {
                eventNameMap[eventSev] = new nameList;
            }
            eventNameMap[eventSev]->push_back(eventName);
        }

        map<string, nameList *>::iterator itMap;
        for (itMap = eventNameMap.begin(); itMap != eventNameMap.end(); ++itMap) {
            stringstream eventNamesBuf;
            string sep = "                ";

            nameList::iterator it;
            for (it = (*itMap).second->begin(); it != (*itMap).second->end(); ++it) {
                eventNamesBuf << sep << "qpid010Evt" << (*it) << endl;
                sep = "                ,";
            }

            stringstream eventSequence;
            string seq;
            eventSequence << eventSeq++;
            seq = eventSequence.str();

            eachEvent = block;
            replaceAll(eachEvent, "%{eventNames}", eventNamesBuf.str());
            replaceAll(eachEvent, "%{sev}", (*itMap).first);
            replaceAll(eachEvent, "%{sevSequence}", seq);

            allEvents.append(eachEvent);
        }
        replaceAll(buf, "%{forEachSeverity}", allEvents);

    }
}

// Given a map of variable names to string values,
// replace each variable name with it's value in the target buffer.
void processElement(int childSeq, const string & block, mibVars & vars, string & targetBuf,
                    const string & spaceVar, const string & spaceName, int padding)
{
    stringstream buf;
    string childSequence;
    string eachProperty;

    buf << childSeq;
    childSequence = buf.str();

    vars["%{childSequence}"] = childSequence;

    eachProperty = block;
    for (mibVarIterator it = vars.begin(); it != vars.end(); ++it) {
        replaceAll(eachProperty, (*it).first, (*it).second);
    }
    expandSpace(eachProperty, spaceVar.c_str(), spaceName, padding);
    targetBuf.append(eachProperty);
}

// This does most of the work of parsing the input template,
// looping through the xml schema and expanding all the replacable variables in the template.
void processXML(pugi::xml_node & schema, const char * blockType, string & buf)
{
    string capClassName;
    string className;
    string capChildName;
    string childType;
    string childAccess;
    string childDesc;
    string childUnit;

    string block;
    // extract the next <forEachClass> block of text
    for (extractBlock(block, buf, blockType, "forEach"); block.length(); extractBlock(block, buf, blockType, "forEach")) {

        char classSequence[3] = {0};
        string seq;
        string eachClass;
        string allClasses;
        string nextChildNumber;

        // the <forEachClass> block can contain seperate blocks for classes that occur a single
        // time in the mib and class that should be represented by tables
        string single;
        string multiple;

        extractBlock(single, block, "Object", "single");
        extractBlock(multiple, block, "Objects", "multiple");

        map<string, string> blocks;
        if (single.empty() && multiple.empty())
            blocks["both"] = block;
        if (!multiple.empty())
            blocks["multiple"] = multiple;
        if (!single.empty())
            blocks["single"] = single;

        int classSeq = 1;
        // loop through each class in the source xml and emit the block customized for each class
        for (pugi::xml_node xclass = schema.child("class"); xclass; xclass = xclass.next_sibling("class")) {
            capClassName = xclass.attribute("name").value();
            className = capClassName;
            className.at(0) = tolower(className.at(0));

            sprintf(classSequence, "%d", classSeq++);
            seq = classSequence;

            calcNextChildNumber(xclass, nextChildNumber);
            // for each sub-block to replace
            map<string, string>::iterator it;
            for (it=blocks.begin(); it != blocks.end(); ++it) {
                // if this class shouldn't be processed, skip it
                if (!isProcessable(className, (*it).first)) {
                    continue;
                }

                eachClass = (*it).second;

                replaceAll(eachClass, "%{className}", className);
                replaceAll(eachClass, "%{capClassName}", capClassName);
                replaceAll(eachClass, "%{classSequence}", seq);
                replaceAll(eachClass, "%{nextChildNumber}", nextChildNumber);
                expandSpace(eachClass, "%{classNameSpace}", className, 22);

                string pBlock;
                string propertyName;
                // extract the next <forEachProperty> block of text from the class block
                for (extractBlock(pBlock, eachClass, "Property", "forEach"); pBlock.length(); extractBlock(pBlock, eachClass, "Property", "forEach")) {
                    char childSeqBuf[4] = {0};
                    string eachProperty;
                    string allProperties;

                    int childSeq = 1;
                    // loop through each property in current class
                    for (pugi::xml_node property = xclass.first_child(); property; property = property.next_sibling()) {
                        if (strcmp(property.name(), "method") == 0)
                            continue;

                        propertyName = property.attribute("name").value();
                        // if there is a naked text block outside of a <property> tag
                        if (propertyName.empty())
                            continue;

                        fixPropertyName(propertyName);
                        genChildName(className, propertyName, capChildName);

                        childType = property.attribute("type").value();
                        translateAttr(childType);

                        childAccess = property.attribute("access").value();
                        if (childAccess.empty())
                            childAccess = "RO";
                        translateAttr(childAccess);

                        childDesc = property.attribute("desc").value();
                        genDescription(childDesc, capClassName, propertyName, property);

                        childUnit = property.attribute("unit").value();
                        genUnit(childUnit);

                        mibVars vars;
                        vars["%{capChildName}"] = capChildName;
                        vars["%{childType}"] = childType;
                        vars["%{childAccess}"] = childAccess;
                        vars["%{childDesc}"] = childDesc;
                        vars["%{unit}"] = childUnit;

                        processElement(childSeq++, pBlock, vars, allProperties, "%{capChildNameSpace}", capChildName, 30);

                        // if the property type is "hilo32", expand it to 3 separate properties
                        if (childType == "Hilo32") {
                            string hiName = capChildName + "Hi";
                            vars["%{capChildName}"] = hiName;
                            processElement(childSeq++, pBlock, vars, allProperties, "%{capChildNameSpace}", hiName, 30);
                            string loName = capChildName + "Low";
                            vars["%{capChildName}"] = loName;
                            processElement(childSeq++, pBlock, vars, allProperties, "%{capChildNameSpace}", loName, 30);
                        }

                    }
                    replaceAll(eachClass, "%{forEachProperty}", allProperties);
                }
                allClasses.append(eachClass);
                //cout << "-------- eachClass " << endl << eachClass << endl;
            }
            //cout << "--- end of sub-blocks loop allClasses: " << endl << allClasses << endl;
        }
        stringstream replaceKey;
        replaceKey << "%{forEach" << blockType << "}";
        replaceAll(buf, replaceKey.str().c_str(), allClasses);
    }
}

// Open the plugin schemas and add the <class> nodes to the main schema
int combineSchemas(char * plugins[], size_t size, pugi::xml_node & schema)
{
    for (int i = 1; i < size; ++i) {
        pugi::xml_document doc;
        pugi::xml_parse_result result = doc.load_file(plugins[i]);

        if (result) {
            pugi::xml_node nextSchema = doc.child("schema");
            for (pugi::xml_node xclass = nextSchema.first_child(); xclass; xclass = xclass.next_sibling()) {
                schema.append_copy(xclass);
            }
        } else {
            usage();
            xmlError(plugins[i], result);
            return -1;
        }
    }
    return 0;
}

// Add the nodes from the plugin schema to the main schema
// the eventArguments node is treated separately since it may contain duplicates
void combineAllSchemas(pugi::xml_node & schema, pugi::xml_node & schemaPlugins)
{
    for (pugi::xml_node xnode = schemaPlugins.first_child(); xnode; xnode = xnode.next_sibling()) {

        if (strcmp(xnode.name(), "eventArguments") == 0) {
            pugi::xml_node anodeMaster = schema.child("eventArguments");
            if (anodeMaster) {
                for (pugi::xml_node arg = xnode.first_child(); arg; arg = arg.next_sibling()) {
                    bool found = false;
                    for (pugi::xml_node argMaster = anodeMaster.first_child(); argMaster; argMaster = argMaster.next_sibling()) {
                        if (strcmp(argMaster.attribute("name").value(), arg.attribute("name").value()) == 0) {
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        anodeMaster.append_copy(arg);
                }
            }
        } else {
            schema.append_copy(xnode);
        }
    }
}

int main ( int argc, char* argv[] )
{

    if (argc < 3) {
        usage();
        return -1;
    }

    char * mib;
    char * source;
    const char * tpl = "qpid-snmp.txt";
    char * plugins[10];

    int schemaCount = 0;
    bool mibSpecified = false;
    for (int i = 1; i < argc; i+=2) {
        if (i + 1 != argc) { // all arguments come in pairs
            if (strcmp(argv[i], "-t") == 0) {
                tpl = argv[i + 1];
            } else if (strcmp(argv[i], "-m") == 0) {
                mib = argv[i + 1];
                mibSpecified = true;
            } else if (strcmp(argv[i], "-s") == 0) {
                if (schemaCount == 0) {
                    schemaCount++;
                    source = argv[i + 1];
                } else {
                    if (schemaCount < 10) {
                        plugins[schemaCount - 1] = argv[i + 1];
                        schemaCount++;
                    } else {
                        usage();
                        cout << "Too many additional schemas listed. Only 10 are allowed." << endl << endl;
                        return -1;
                    }
                }
            }
        } else {
            usage();
            cout << "Unbalanced arguments. Each argument must be preceeded by a -t, -m, or -s." << endl << endl;
            return -1;
        }
    }
    if (schemaCount == 0) {
        usage();
        cout << "At least one schema must be specified with the -s option." << endl << endl;
        return -1;
    }

    // read the template into the string buf
    ifstream t(tpl);
    if (!t.is_open()) {
        usage();
        cout << "Error opening template " << tpl << endl << endl;
        return -1;
    }
    stringstream buffer;
    buffer << t.rdbuf();
    string buf = buffer.str();

    // the mib is generated today
    replaceToday(buf);

    // open the main schema
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(source);
    if (result) {
        pugi::xml_node schema = doc.child("schema");

        // expand all class and property sections
        processXML(schema, "Class", buf);

        // mix in the plugin schemas if any
        if (schemaCount > 1) {
            pugi::xml_document docPlugins;
            result = docPlugins.load_file(plugins[0]);
            if (result) {
                pugi::xml_node schemaPlugins = docPlugins.child("schema");
                if (combineSchemas(plugins, schemaCount - 1, schemaPlugins) == -1)
                    return -1;

                processXML(schemaPlugins, "PluginClass", buf);

                combineAllSchemas(schema, schemaPlugins);
            } else {
                usage();
                xmlError(plugins[0], result);
                return -1;
            }
        } else {
            // remove the unused <forEachPluginClass> sections
            pugi::xml_node foo = doc.child("empty node");
            processXML(foo, "PluginClass", buf);
        }

        // Generate the conformance sections in the mib
        replaceKeyWithAttrList(buf, "%{required}", schema, "optional", true);
        replaceKeyWithAttrList(buf, "%{optional}", schema, "optional", false);

        processEventArguments(buf, schema);
        processEventBlock(buf, schema);
        processEventArgumentGroup(buf, schema);

        processSeverityGroups(buf, schema);

        // output the mib
        if (mibSpecified) {
            ofstream mibFile;
            mibFile.open (mib);

            if (mibFile.is_open()) {
                mibFile << buf;
                mibFile.close();
            } else {
                usage();
                cout << "Error creating specified output file: " << mib << endl << endl;
                return -1;
            }

        } else {
            // no -m was specified on the command line
            cout << buf;
        }
    }
    else
    {
        // undable to open the main schema xml file
        usage();
        xmlError(source, result);
        return -1;
    }

    return 0;
}
