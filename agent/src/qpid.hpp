#ifndef _qpid_h
#define _qpid_h
/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <qpid/messaging/Connection.h>
#include <qpid/messaging/Session.h>
#include <qmf/ConsoleSession.h>
#include <qmf/ConsoleEvent.h>
#include "qpid/types/Variant.h"
#include <qmf/Data.h>
#include <qmf/Query.h>

#include <pthread.h>

class QmfWrapper {
public:
	QmfWrapper();

	void connect(char * brokerUrl, char * connect_options, char * qmf_options);
	void disconnect();
	bool connected() { return isConnected; }
    void query(qmf::ConsoleEvent * pEvent, const char * buf);

    char emptyString[1];

protected:
    static void * threadEntryPoint(void*);
    void runThread();
    void emitEvent(qmf::ConsoleEvent &event);

private:
    void findString(std::string &s, qmf::Data &d, const char *name, const char *defVal);
    uint64_t findU64(qmf::Data &d, const char *name);
    bool findBool(qmf::Data &d, const char *name);

    qpid::messaging::Connection conn;
    qmf::ConsoleSession sess;
    qpid::messaging::Session qmsession;

    bool isConnected;
    // remember the broker object so we can make qmf calls
    qmf::Data brokerData;

    pthread_t threadEvents;

};

#endif
