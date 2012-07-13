/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "Cluster.h"

#include "../qpid_api.h"

/** Initializes the qpid010Cluster module */
void
init_Cluster(void)
{
    const oid       qpid010ClusterBrokerRef_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 1 };
    const oid       qpid010ClusterClusterName_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 2 };
    const oid       qpid010ClusterClusterID_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 3 };
    const oid       qpid010ClusterMemberID_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 4 };
    const oid       qpid010ClusterPublishedURL_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 5 };
    const oid       qpid010ClusterClusterSize_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 6 };
    const oid       qpid010ClusterStatus_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 7 };
    const oid       qpid010ClusterMembers_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 8 };
    const oid       qpid010ClusterMemberIDs_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060,5672, 1, 2, 2, 9 };

    DEBUGMSGTL(("qpid010Cluster", "Initializing\n"));

    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterBrokerRef",
                             handle_qpid010ClusterBrokerRef,
                             qpid010ClusterBrokerRef_oid,
                             OID_LENGTH(qpid010ClusterBrokerRef_oid),
                             HANDLER_CAN_RWRITE));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterClusterName",
                             handle_qpid010ClusterClusterName,
                             qpid010ClusterClusterName_oid,
                             OID_LENGTH(qpid010ClusterClusterName_oid),
                             HANDLER_CAN_RWRITE));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterClusterID",
                             handle_qpid010ClusterClusterID,
                             qpid010ClusterClusterID_oid,
                             OID_LENGTH(qpid010ClusterClusterID_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterMemberID",
                             handle_qpid010ClusterMemberID,
                             qpid010ClusterMemberID_oid,
                             OID_LENGTH(qpid010ClusterMemberID_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterPublishedURL",
                             handle_qpid010ClusterPublishedURL,
                             qpid010ClusterPublishedURL_oid,
                             OID_LENGTH(qpid010ClusterPublishedURL_oid),
                             HANDLER_CAN_RWRITE));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterClusterSize",
                             handle_qpid010ClusterClusterSize,
                             qpid010ClusterClusterSize_oid,
                             OID_LENGTH(qpid010ClusterClusterSize_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterStatus",
                             handle_qpid010ClusterStatus,
                             qpid010ClusterStatus_oid,
                             OID_LENGTH(qpid010ClusterStatus_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterMembers",
                             handle_qpid010ClusterMembers,
                             qpid010ClusterMembers_oid,
                             OID_LENGTH(qpid010ClusterMembers_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010ClusterMemberIDs",
                             handle_qpid010ClusterMemberIDs,
                             qpid010ClusterMemberIDs_oid,
                             OID_LENGTH(qpid010ClusterMemberIDs_oid),
                             HANDLER_CAN_RONLY));
}

int
handle_qpid010ClusterBrokerRef(netsnmp_mib_handler *handler,
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

    char data[256];
    qpidGetScalarString("cluster", "brokerRef", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
        		strlen(data)	// the length of the data in bytes
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
        if ( 0/* XXX if malloc, or whatever, failed: */ ) {
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
        if ( 0/* XXX: error? */ ) {
        	netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_GENERR);
        }
        break;

    case MODE_SET_COMMIT:
        /*
         * XXX: delete temporary storage 
         */
        if ( 0/* XXX: error? */ ) {
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
        if ( 0/* XXX: error? */ ) {
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
                 "unknown mode (%d) in handle_qpid010ClusterBrokerRef\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterClusterName(netsnmp_mib_handler *handler,
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

    char data[256];
    qpidGetScalarString("cluster", "clusterName", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
        		strlen(data)	// the length of the data in bytes
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
        if ( 0/* XXX if malloc, or whatever, failed: */ ) {
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
        if ( 0/* XXX: error? */ ) {
        	netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_GENERR);
        }
        break;

    case MODE_SET_COMMIT:
        /*
         * XXX: delete temporary storage 
         */
        if ( 0/* XXX: error? */ ) {
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
        if ( 0/* XXX: error? */ ) {
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
                 "unknown mode (%d) in handle_qpid010ClusterClusterName\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterClusterID(netsnmp_mib_handler *handler,
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
    qpidGetScalarString("cluster", "clusterID", data, 255);

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
                 "unknown mode (%d) in handle_qpid010ClusterClusterID\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterMemberID(netsnmp_mib_handler *handler,
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
    qpidGetScalarString("cluster", "memberID", data, 255);

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
                 "unknown mode (%d) in handle_qpid010ClusterMemberID\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterPublishedURL(netsnmp_mib_handler *handler,
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

    char data[256];
    qpidGetScalarString("cluster", "publishedURL", data, 255);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_OCTET_STR,
        		data, 			// a pointer to the scalar's data
        		strlen(data)	// the length of the data in bytes
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
        if ( 0/* XXX if malloc, or whatever, failed: */ ) {
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
        if ( 0/* XXX: error? */ ) {
        	netsnmp_set_request_error(reqinfo, requests, SNMP_ERR_GENERR);
        }
        break;

    case MODE_SET_COMMIT:
        /*
         * XXX: delete temporary storage 
         */
        if ( 0/* XXX: error? */ ) {
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
        if ( 0/* XXX: error? */ ) {
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
                 "unknown mode (%d) in handle_qpid010ClusterPublishedURL\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterClusterSize(netsnmp_mib_handler *handler,
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

	uint16_t u16;
	qpidGetScalarU16("cluster", "clusterSize", &u16);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_INTEGER,
        		&u16,		// a pointer to the scalar's data
        		sizeof(u16)	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010ClusterClusterSize\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterStatus(netsnmp_mib_handler *handler,
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
    qpidGetScalarString("cluster", "status", data, 255);

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
                 "unknown mode (%d) in handle_qpid010ClusterStatus\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterMembers(netsnmp_mib_handler *handler,
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

    char data[65535];
    qpidGetScalarString("cluster", "members", data, 65534);

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
                 "unknown mode (%d) in handle_qpid010ClusterMembers\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010ClusterMemberIDs(netsnmp_mib_handler *handler,
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

    char data[65535];
    qpidGetScalarString("cluster", "memberIDs", data, 65534);

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
                 "unknown mode (%d) in handle_qpid010ClusterMemberIDs\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}
