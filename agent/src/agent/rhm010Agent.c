/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "rhm010Agent.h"

#include "../qpid_api.h"

/** Initializes the rhm010Agent module */
void
init_rhm010Agent(void)
{
    const oid       rhm010AgentConnectionRef_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 1 };
    const oid       rhm010AgentLabel_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 2 };
    const oid       rhm010AgentRegisteredTo_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 3 };
    const oid       rhm010AgentSystemId_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 4 };
    const oid       rhm010AgentBrokerBank_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 5 };
    const oid       rhm010AgentAgentBank_oid[] =
        { 1, 3, 6, 1, 4, 1, 2312, 5672, 1, 1, 4, 6 };

    DEBUGMSGTL(("rhm010Agent", "Initializing\n"));

    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentConnectionRef",
                             handle_rhm010AgentConnectionRef,
                             rhm010AgentConnectionRef_oid,
                             OID_LENGTH(rhm010AgentConnectionRef_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentLabel", handle_rhm010AgentLabel,
                             rhm010AgentLabel_oid,
                             OID_LENGTH(rhm010AgentLabel_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentRegisteredTo",
                             handle_rhm010AgentRegisteredTo,
                             rhm010AgentRegisteredTo_oid,
                             OID_LENGTH(rhm010AgentRegisteredTo_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentSystemId",
                             handle_rhm010AgentSystemId,
                             rhm010AgentSystemId_oid,
                             OID_LENGTH(rhm010AgentSystemId_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentBrokerBank",
                             handle_rhm010AgentBrokerBank,
                             rhm010AgentBrokerBank_oid,
                             OID_LENGTH(rhm010AgentBrokerBank_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("rhm010AgentAgentBank",
                             handle_rhm010AgentAgentBank,
                             rhm010AgentAgentBank_oid,
                             OID_LENGTH(rhm010AgentAgentBank_oid),
                             HANDLER_CAN_RONLY));
}

int
handle_rhm010AgentConnectionRef(netsnmp_mib_handler *handler,
                                netsnmp_handler_registration *reginfo,
                                netsnmp_agent_request_info *reqinfo,
                                netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */
	char data[256];
    qpidGetScalarString("agent", "connectionRef", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
                strlen(data)	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_rhm010AgentConnectionRef\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_rhm010AgentLabel(netsnmp_mib_handler *handler,
                        netsnmp_handler_registration *reginfo,
                        netsnmp_agent_request_info *reqinfo,
                        netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */

	char data[256];
    qpidGetScalarString("agent", "label", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
                strlen(data)	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR, "unknown mode (%d) in handle_rhm010AgentLabel\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_rhm010AgentRegisteredTo(netsnmp_mib_handler *handler,
                               netsnmp_handler_registration *reginfo,
                               netsnmp_agent_request_info *reqinfo,
                               netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */
	char data[256];
    qpidGetScalarString("agent", "registeredTo", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
                strlen(data)	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_rhm010AgentRegisteredTo\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_rhm010AgentSystemId(netsnmp_mib_handler *handler,
                           netsnmp_handler_registration *reginfo,
                           netsnmp_agent_request_info *reqinfo,
                           netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */

	char data[256];
    qpidGetScalarString("agent", "systemId", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
                strlen(data)	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_rhm010AgentSystemId\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_rhm010AgentBrokerBank(netsnmp_mib_handler *handler,
                             netsnmp_handler_registration *reginfo,
                             netsnmp_agent_request_info *reqinfo,
                             netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */

	uint32_t u32;
	qpidGetScalarU32("agent", "brokerBank", &u32);

	switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_UNSIGNED,
        		&u32, 			// a pointer to the scalar's data
                sizeof(u32)		// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_rhm010AgentBrokerBank\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_rhm010AgentAgentBank(netsnmp_mib_handler *handler,
                            netsnmp_handler_registration *reginfo,
                            netsnmp_agent_request_info *reqinfo,
                            netsnmp_request_info *requests)
{
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */

	uint32_t u32;
	qpidGetScalarU32("agent", "agentBank", &u32);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_UNSIGNED,
        		&u32, 			// a pointer to the scalar's data
                sizeof(u32)		// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_rhm010AgentAgentBank\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}
