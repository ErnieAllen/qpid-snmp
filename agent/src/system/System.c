/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "System.h"

#include "../qpid_api.h"

/** Initializes the brokerSystem module */
void
init_System(void)
{
    const oid       brokerSystemSystemId_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 1 };
    const oid       brokerSystemOsName_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 2 };
    const oid       brokerSystemNodeName_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 3 };
    const oid       brokerSystemRelease_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 4 };
    const oid       brokerSystemVersion_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 5 };
    const oid       brokerSystemMachine_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 1, 6 };

    DEBUGMSGTL(("brokerSystem", "Initializing\n"));

    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemSystemId",
                             handle_brokerSystemSystemId,
                             brokerSystemSystemId_oid,
                             OID_LENGTH(brokerSystemSystemId_oid),
                             HANDLER_CAN_RWRITE));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemOsName",
                             handle_brokerSystemOsName,
                             brokerSystemOsName_oid,
                             OID_LENGTH(brokerSystemOsName_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemNodeName",
                             handle_brokerSystemNodeName,
                             brokerSystemNodeName_oid,
                             OID_LENGTH(brokerSystemNodeName_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemRelease",
                             handle_brokerSystemRelease,
                             brokerSystemRelease_oid,
                             OID_LENGTH(brokerSystemRelease_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemVersion",
                             handle_brokerSystemVersion,
                             brokerSystemVersion_oid,
                             OID_LENGTH(brokerSystemVersion_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("brokerSystemMachine",
                             handle_brokerSystemMachine,
                             brokerSystemMachine_oid,
                             OID_LENGTH(brokerSystemMachine_oid),
                             HANDLER_CAN_RONLY));
}

int
handle_brokerSystemSystemId(netsnmp_mib_handler *handler,
                            netsnmp_handler_registration *reginfo,
                            netsnmp_agent_request_info *reqinfo,
                            netsnmp_request_info *requests)
{
    int             ret;
    /*
     * We are never called for a GETNEXT if it's registered as a
     * "instance", as it's "magically" handled for us.  
     */

    /*
     * a instance handler also only hands us one request at a time, so
     * we don't need to loop over a list of requests; we'll only get one. 
     */

    char systemId[256];
    qpidGetScalarString("system", "systemId", systemId, 255);

    switch (reqinfo->mode) {

    case MODE_GET:

    	snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
    			systemId,  		// a pointer to the scalar's data
                strlen(systemId) 	// the length of the data in bytes
    	);
        break;

        /*
         * SET REQUEST
         *
         * multiple states in the transaction.  See:
         * http://www.net-snmp.org/tutorial-5/toolkit/mib_module/set-actions.jpg
         */
    case MODE_SET_RESERVE1:
        /*
         * or you could use netsnmp_check_vb_type_and_size instead 
         */
        ret = netsnmp_check_vb_type(requests->requestvb, ASN_OCTET_STR);
        if (ret != SNMP_ERR_NOERROR) {
            netsnmp_set_request_error(reqinfo, requests, ret);
        }
        break;

    case MODE_SET_RESERVE2:
        /*
         * XXX malloc "undo" storage buffer 
         */
        if ( 0 ) /* XXX if malloc, or whatever, failed: */ {
            netsnmp_set_request_error(reqinfo, requests,
                                      SNMP_ERR_RESOURCEUNAVAILABLE);
        }
        break;

    case MODE_SET_FREE:
        /*
         * XXX: free resources allocated in RESERVE1 and/or
         * RESERVE2.  Something failed somewhere, and the states
         * below won't be called. 
         */
        break;

    case MODE_SET_ACTION:
        /*
         * XXX: perform the value change here 
         */
        if ( 0 /* XXX: error? */ ) {
        	netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_GENERR);
        }
        break;

    case MODE_SET_COMMIT:
        /*
         * XXX: delete temporary storage 
         */
        if ( 0 /* XXX: error? */ ) {
            /*
             * try _really_really_ hard to never get to this point 
             */
            netsnmp_set_request_error(reqinfo, requests,
                                      SNMP_ERR_COMMITFAILED);
        }
        break;

    case MODE_SET_UNDO:
        /*
         * XXX: UNDO and return to previous value for the object 
         */
        if ( 0 /* XXX: error? */ ) {
            /*
             * try _really_really_ hard to never get to this point 
             */
            netsnmp_set_request_error(reqinfo, requests,
                                      SNMP_ERR_UNDOFAILED);
        }
        break;

    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemSystemId\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_brokerSystemOsName(netsnmp_mib_handler *handler,
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

    char osName[256];
    qpidGetScalarString("system", "osName", osName, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		osName
        		/*
                                  * a pointer to the scalar's data
                                  */ ,
                strlen(osName)
                                  /*
                                  * the length of the data in bytes
                                  */ );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemOsName\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_brokerSystemNodeName(netsnmp_mib_handler *handler,
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

    char nodeName[256];
    qpidGetScalarString("system", "nodeName", nodeName, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		nodeName
                                 /*
                                  * XXX: a pointer to the scalar's data 
                                  */ ,
                strlen(nodeName)
                                 /*
                                  * XXX: the length of the data in bytes 
                                  */ );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemNodeName\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_brokerSystemRelease(netsnmp_mib_handler *handler,
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

    char release[256];
    qpidGetScalarString("system", "release", release, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		release
                                 /*
                                  * XXX: a pointer to the scalar's data 
                                  */ ,
                strlen(release)
                                 /*
                                  * XXX: the length of the data in bytes 
                                  */ );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemRelease\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_brokerSystemVersion(netsnmp_mib_handler *handler,
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

    char version[256];
    qpidGetScalarString("system", "version", version, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		version
                                 /*
                                  * XXX: a pointer to the scalar's data 
                                  */ ,
                strlen(version)
                                 /*
                                  * XXX: the length of the data in bytes 
                                  */ );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemVersion\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_brokerSystemMachine(netsnmp_mib_handler *handler,
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

    char machine[256];
    qpidGetScalarString("system", "machine", machine, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		machine
                                 /*
                                  * XXX: a pointer to the scalar's data 
                                  */ ,
                strlen(machine)
                                 /*
                                  * XXX: the length of the data in bytes 
                                  */ );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_brokerSystemMachine\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}
