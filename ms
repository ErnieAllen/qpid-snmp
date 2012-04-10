#! /bin/bash

clear

echo "============================================================="
echo "   making qpid-snmp-mibgen "
echo "============================================================="
g++ -g -O2                         \
 qpid-snmp-mibgen.cpp              \
 pugixml.cpp                       \
-o qpid-snmp-mibgen
echo  "-------------------------- done -------------------------------"
