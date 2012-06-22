/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "Memory.h"

#include "../qpid_api.h"

/** Initializes the qpid010Memory module */
void
init_Memory(void)
{
    const oid       qpid010MemoryName_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 1 };
    const oid       qpid010MemoryMallocarena_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 2 };
    const oid       qpid010MemoryMallocordblks_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 3 };
    const oid       qpid010MemoryMallochblks_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 4 };
    const oid       qpid010MemoryMallochblkhd_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 5 };
    const oid       qpid010MemoryMallocuordblks_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 6 };
    const oid       qpid010MemoryMallocfordblks_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 7 };
    const oid       qpid010MemoryMallockeepcost_oid[] =
        { 1, 3, 6, 1, 4, 1, 18060, 15, 1, 1, 2, 8 };

    DEBUGMSGTL(("qpid010Memory", "Initializing\n"));

    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryName", handle_qpid010MemoryName,
                             qpid010MemoryName_oid,
                             OID_LENGTH(qpid010MemoryName_oid),
                             HANDLER_CAN_RWRITE));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallocarena",
                             handle_qpid010MemoryMallocarena,
                             qpid010MemoryMallocarena_oid,
                             OID_LENGTH(qpid010MemoryMallocarena_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallocordblks",
                             handle_qpid010MemoryMallocordblks,
                             qpid010MemoryMallocordblks_oid,
                             OID_LENGTH(qpid010MemoryMallocordblks_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallochblks",
                             handle_qpid010MemoryMallochblks,
                             qpid010MemoryMallochblks_oid,
                             OID_LENGTH(qpid010MemoryMallochblks_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallochblkhd",
                             handle_qpid010MemoryMallochblkhd,
                             qpid010MemoryMallochblkhd_oid,
                             OID_LENGTH(qpid010MemoryMallochblkhd_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallocuordblks",
                             handle_qpid010MemoryMallocuordblks,
                             qpid010MemoryMallocuordblks_oid,
                             OID_LENGTH(qpid010MemoryMallocuordblks_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallocfordblks",
                             handle_qpid010MemoryMallocfordblks,
                             qpid010MemoryMallocfordblks_oid,
                             OID_LENGTH(qpid010MemoryMallocfordblks_oid),
                             HANDLER_CAN_RONLY));
    netsnmp_register_scalar(netsnmp_create_handler_registration
                            ("qpid010MemoryMallockeepcost",
                             handle_qpid010MemoryMallockeepcost,
                             qpid010MemoryMallockeepcost_oid,
                             OID_LENGTH(qpid010MemoryMallockeepcost_oid),
                             HANDLER_CAN_RONLY));
}

int
handle_qpid010MemoryName(netsnmp_mib_handler *handler,
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
    qpidGetScalarString("memory", "name", data, 255);

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
        snmp_log(LOG_ERR, "unknown mode (%d) in handle_qpid010MemoryName\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallocarena(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallocarena", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallocarena\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallocordblks(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallocordblks", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallocordblks\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallochblks(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallochblks", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallochblks\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallochblkhd(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallochblkhd", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallochblkhd\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallocuordblks(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallocuordblks", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallocuordblks\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallocfordblks(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "mallocfordblks", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallocfordblks\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}

int
handle_qpid010MemoryMallockeepcost(netsnmp_mib_handler *handler,
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

	U64 count64;
	qpidGetScalarS64("memory", "Mallockeepcost", &count64);

    switch (reqinfo->mode) {

    case MODE_GET:
        snmp_set_var_typed_value(requests->requestvb, ASN_COUNTER64,
        		&count64, 			// a pointer to the scalar's data
                sizeof(count64) 	// the length of the data in bytes
        );
        break;


    default:
        /*
         * we should never get here, so this is a really bad error 
         */
        snmp_log(LOG_ERR,
                 "unknown mode (%d) in handle_qpid010MemoryMallockeepcost\n",
                 reqinfo->mode);
        return SNMP_ERR_GENERR;
    }

    return SNMP_ERR_NOERROR;
}
