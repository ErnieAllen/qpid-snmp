/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for brokerBindingTable
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
#include "BindingTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "BindingTable_interface.h"

const oid       brokerBindingTable_oid[] = { brokerBINDINGTABLE_OID };

const int       brokerBindingTable_oid_size =
OID_LENGTH(brokerBindingTable_oid);

brokerBindingTable_registration brokerBindingTable_user_context;

void            initialize_table_brokerBindingTable(void);
void            shutdown_table_brokerBindingTable(void);


/**
 * Initializes the brokerBindingTable module
 */
void
init_BindingTable(void)
{
    DEBUGMSGTL(("verbose:brokerBindingTable:init_BindingTable",
                "called\n"));

    /*
     * TODO:300:o: Perform brokerBindingTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("brokerBindingTable"))
        initialize_table_brokerBindingTable();

}                               /* init_BindingTable */

/**
 * Shut-down the brokerBindingTable module (agent is exiting)
 */
void
shutdown_brokerBindingTable(void)
{
    if (should_init("brokerBindingTable"))
        shutdown_table_brokerBindingTable();

}

/**
 * Initialize the table brokerBindingTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_brokerBindingTable(void)
{
    brokerBindingTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:brokerBindingTable:initialize_table_brokerBindingTable", "called\n"));

    /*
     * TODO:301:o: Perform brokerBindingTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize brokerBindingTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("brokerBindingTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _brokerBindingTable_initialize_interface(user_context, flags);
}                               /* initialize_table_brokerBindingTable */

/**
 * Shutdown the table brokerBindingTable 
 */
void
shutdown_table_brokerBindingTable(void)
{
    /*
     * call interface shutdown code
     */
    _brokerBindingTable_shutdown_interface
        (&brokerBindingTable_user_context);
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
brokerBindingTable_rowreq_ctx_init(brokerBindingTable_rowreq_ctx *
                                   rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:brokerBindingTable:brokerBindingTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * Perform extra brokerBindingTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.brokerBindingExchangeRef_len = 255;
    rowreq_ctx->data.brokerBindingQueueRef_len = 255;
    rowreq_ctx->data.brokerBindingBindingKey_len = 65535;
    rowreq_ctx->data.brokerBindingArguments_len = 65535;
    rowreq_ctx->data.brokerBindingOrigin_len = 255;

    return MFD_SUCCESS;
}                               /* brokerBindingTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
brokerBindingTable_rowreq_ctx_cleanup(brokerBindingTable_rowreq_ctx *
                                      rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerBindingTable:brokerBindingTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra brokerBindingTable rowreq cleanup.
     */
}                               /* brokerBindingTable_rowreq_ctx_cleanup */

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
brokerBindingTable_container_should_save(brokerBindingTable_rowreq_ctx *
                                         rowreq_ctx)
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
brokerBindingTable_pre_request(brokerBindingTable_registration *
                               user_context)
{
    DEBUGMSGTL(("verbose:brokerBindingTable:brokerBindingTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform brokerBindingTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* brokerBindingTable_pre_request */

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
brokerBindingTable_post_request(brokerBindingTable_registration *
                                user_context, int rc)
{
    DEBUGMSGTL(("verbose:brokerBindingTable:brokerBindingTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform brokerBindingTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (brokerBindingTable_dirty_get()) {
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

        brokerBindingTable_dirty_set(0);        /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* brokerBindingTable_post_request */


/** @{ */
