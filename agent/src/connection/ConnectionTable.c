/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for brokerConnectionTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include "../include/net-snmp-features.h"
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "ConnectionTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "ConnectionTable_interface.h"

const oid       brokerConnectionTable_oid[] =
    { brokerCONNECTIONTABLE_OID };
const int       brokerConnectionTable_oid_size =
OID_LENGTH(brokerConnectionTable_oid);

brokerConnectionTable_registration brokerConnectionTable_user_context;

void            initialize_table_brokerConnectionTable(void);
void            shutdown_table_brokerConnectionTable(void);


/**
 * Initializes the brokerConnectionTable module
 */
void
init_ConnectionTable(void)
{
    DEBUGMSGTL(("verbose:brokerConnectionTable:init_ConnectionTable",
                "called\n"));

    /*
     * TODO:300:o: Perform brokerConnectionTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("brokerConnectionTable"))
        initialize_table_brokerConnectionTable();

}                               /* init_ConnectionTable */

/**
 * Shut-down the brokerConnectionTable module (agent is exiting)
 */
void
shutdown_brokerConnectionTable(void)
{
    if (should_init("brokerConnectionTable"))
        shutdown_table_brokerConnectionTable();

}

/**
 * Initialize the table brokerConnectionTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_brokerConnectionTable(void)
{
    brokerConnectionTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:brokerConnectionTable:initialize_table_brokerConnectionTable", "called\n"));

    /*
     * TODO:301:o: Perform brokerConnectionTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize brokerConnectionTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("brokerConnectionTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _brokerConnectionTable_initialize_interface(user_context, flags);
}                               /* initialize_table_brokerConnectionTable */

/**
 * Shutdown the table brokerConnectionTable 
 */
void
shutdown_table_brokerConnectionTable(void)
{
    /*
     * call interface shutdown code
     */
    _brokerConnectionTable_shutdown_interface
        (&brokerConnectionTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
brokerConnectionTable_rowreq_ctx_init(brokerConnectionTable_rowreq_ctx *
                                      rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:brokerConnectionTable:brokerConnectionTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * Perform extra brokerConnectionTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.brokerConnectionVhostRef_len = 255;   /* # of char elements, not bytes */
    rowreq_ctx->data.brokerConnectionAddress_len = 255;
    rowreq_ctx->data.brokerConnectionAuthIdentity_len= 255;
    rowreq_ctx->data.brokerConnectionRemoteProcessName_len = 65535;
    rowreq_ctx->data.brokerConnectionSaslMechanism_len = 255;

    return MFD_SUCCESS;
}                               /* brokerConnectionTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
brokerConnectionTable_rowreq_ctx_cleanup(brokerConnectionTable_rowreq_ctx *
                                         rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerConnectionTable:brokerConnectionTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra brokerConnectionTable rowreq cleanup.
     */
}                               /* brokerConnectionTable_rowreq_ctx_cleanup */

/************************************************************
 * the *_should_save routine is called to determine if a row
 * should be stored persistently.
 *
 * Note that this is not a 'dirty' check (i.e. if a row has changed),
 * but a check for volatile rows that should not be saved between
 * restarts.
 *
 * return 1 if the row should be stored
 * return 0 if the row should not be stored
 */
int
brokerConnectionTable_container_should_save
    (brokerConnectionTable_rowreq_ctx * rowreq_ctx)
{

    return 1;                   /* save the row */
}

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
brokerConnectionTable_pre_request(brokerConnectionTable_registration *
                                  user_context)
{
    DEBUGMSGTL(("verbose:brokerConnectionTable:brokerConnectionTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform brokerConnectionTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* brokerConnectionTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
brokerConnectionTable_post_request(brokerConnectionTable_registration *
                                   user_context, int rc)
{
    DEBUGMSGTL(("verbose:brokerConnectionTable:brokerConnectionTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform brokerConnectionTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (brokerConnectionTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
            snmp_store(netsnmp_ds_get_string(NETSNMP_DS_LIBRARY_ID,
                                             NETSNMP_DS_LIB_APPTYPE));
        }

        brokerConnectionTable_dirty_set(0);     /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* brokerConnectionTable_post_request */


/** @{ */
