#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements. See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership. The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License. You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied. See the License for the
# specific language governing permissions and limitations
# under the License.
#

cmake_minimum_required(VERSION 2.6)

SET(CMAKE_CXX_FLAGS "-g")

PROJECT(qpid-snmpd)

FIND_LIBRARY(qmf2 qmf2)
FIND_LIBRARY(netsnmp netsnmp)
FIND_LIBRARY(netsnmpagent netsnmpagent)

SET(snmpd_HEADERS
    acl/Acl.h
    agent/Agent.h
    binding/BindingTable_data_access.h
    binding/BindingTable_data_get.h
    binding/BindingTable_data_set.h
    binding/BindingTable_interface.h
    binding/BindingTable_oids.h
    binding/BindingTable.h
    bridge/BridgeTable_data_access.h
    bridge/BridgeTable_data_get.h
    bridge/BridgeTable_data_set.h
    bridge/BridgeTable_enums.h
    bridge/BridgeTable_interface.h
    bridge/BridgeTable_oids.h
    bridge/BridgeTable.h
    broker/Broker.h
    cluster/Cluster.h
    connection/ConnectionTable_data_access.h
    connection/ConnectionTable_data_get.h
    connection/ConnectionTable_data_set.h
    connection/ConnectionTable_enums.h
    connection/ConnectionTable_interface.h
    connection/ConnectionTable_oids.h
    connection/ConnectionTable.h
    exchange/ExchangeTable_data_access.h
    exchange/ExchangeTable_data_get.h
    exchange/ExchangeTable_data_set.h
    exchange/ExchangeTable_interface.h
    exchange/ExchangeTable_oids.h
    exchange/ExchangeTable.h
    ha/HaBroker.h
    link/LinkTable_data_access.h
    link/LinkTable_data_get.h
    link/LinkTable_data_set.h
    link/LinkTable_interface.h
    link/LinkTable_oids.h
    link/LinkTable.h
    memory/Memory.h
    queue/QueueTable_data_access.h
    queue/QueueTable_data_get.h
    queue/QueueTable_data_set.h
    queue/QueueTable_interface.h
    queue/QueueTable_oids.h
    queue/QueueTable.h
    session/SessionTable_data_access.h
    session/SessionTable_data_get.h
    session/SessionTable_data_set.h
    session/SessionTable_enums.h
    session/SessionTable_interface.h
    session/SessionTable_oids.h
    session/SessionTable.h
    state/ManagementSetupState.h
    subscription/SubscriptionTable_data_access.h
    subscription/SubscriptionTable_data_get.h
    subscription/SubscriptionTable_data_set.h
    subscription/SubscriptionTable_enums.h
    subscription/SubscriptionTable_interface.h
    subscription/SubscriptionTable_oids.h
    subscription/SubscriptionTable.h
    system/System.h
    traps/Events.h
    vhost/VhostTable_data_access.h
    vhost/VhostTable_data_get.h
    vhost/VhostTable_data_set.h
    vhost/VhostTable_interface.h
    vhost/VhostTable_oids.h
    vhost/VhostTable.h
    enums.h
    qpid_api.h
    qpid.hpp
    )

SET(snmpd_SOURCES
    acl/Acl.c
    agent/Agent.c
    binding/BindingTable_data_access.c
    binding/BindingTable_data_get.c
    binding/BindingTable_data_set.c
    binding/BindingTable_interface.c
    binding/BindingTable.c
    bridge/BridgeTable_data_access.c
    bridge/BridgeTable_data_get.c
    bridge/BridgeTable_data_set.c
    bridge/BridgeTable_interface.c
    bridge/BridgeTable.c
    broker/Broker.c
    cluster/Cluster.c
    connection/ConnectionTable_data_access.c
    connection/ConnectionTable_data_get.c
    connection/ConnectionTable_data_set.c
    connection/ConnectionTable_interface.c
    connection/ConnectionTable.c
    exchange/ExchangeTable_data_access.c
    exchange/ExchangeTable_data_get.c
    exchange/ExchangeTable_data_set.c
    exchange/ExchangeTable_interface.c
    exchange/ExchangeTable.c
    ha/HaBroker.c
    link/LinkTable_data_access.c
    link/LinkTable_data_get.c
    link/LinkTable_data_set.c
    link/LinkTable_interface.c
    link/LinkTable.c
    memory/Memory.c
    queue/QueueTable_data_access.c
    queue/QueueTable_data_get.c
    queue/QueueTable_data_set.c
    queue/QueueTable_interface.c
    queue/QueueTable.c
    session/SessionTable_data_access.c
    session/SessionTable_data_get.c
    session/SessionTable_data_set.c
    session/SessionTable_interface.c
    session/SessionTable.c
    state/ManagementSetupState.c
    subscription/SubscriptionTable_data_access.c
    subscription/SubscriptionTable_data_get.c
    subscription/SubscriptionTable_data_set.c
    subscription/SubscriptionTable_interface.c
    subscription/SubscriptionTable.c
    system/System.c
    traps/Events.c
    vhost/VhostTable_data_access.c
    vhost/VhostTable_data_get.c
    vhost/VhostTable_data_set.c
    vhost/VhostTable_interface.c
    vhost/VhostTable.c
    qpid.cpp
    subagent.c
    )

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

ADD_EXECUTABLE(qpid-snmpd ${snmpd_SOURCES} ${snmpd_HEADERS})
TARGET_LINK_LIBRARIES(qpid-snmpd netsnmpmibs pci dl rpm rpmio netsnmpagent netsnmp crypto qmf2 qpidmessaging qpidtypes pthread)

INSTALL (TARGETS qpid-snmpd RUNTIME DESTINATION bin)
