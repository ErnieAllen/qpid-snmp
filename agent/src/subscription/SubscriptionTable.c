/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for brokerSubscriptionTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "SubscriptionTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "SubscriptionTable_interface.h"

const oid       brokerSubscriptionTable_oid[] =
    { brokerSUBSCRIPTIONTABLE_OID };
const int       brokerSubscriptionTable_oid_size =
OID_LENGTH(brokerSubscriptionTable_oid);

brokerSubscriptionTable_registration brokerSubscriptionTable_user_context;

void            initialize_table_brokerSubscriptionTable(void);
void            shutdown_table_brokerSubscriptionTable(void);


/**
 * Initializes the brokerSubscriptionTable module
 */
void
init_SubscriptionTable(void)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:init_SubscriptionTable", "called\n"));

    /*
     * TODO:300:o: Perform brokerSubscriptionTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("brokerSubscriptionTable"))
        initialize_table_brokerSubscriptionTable();

}                               /* init_SubscriptionTable */

/**
 * Shut-down the brokerSubscriptionTable module (agent is exiting)
 */
void
shutdown_brokerSubscriptionTable(void)
{
    if (should_init("brokerSubscriptionTable"))
        shutdown_table_brokerSubscriptionTable();

}

/**
 * Initialize the table brokerSubscriptionTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_brokerSubscriptionTable(void)
{
    brokerSubscriptionTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:brokerSubscriptionTable:initialize_table_brokerSubscriptionTable", "called\n"));

    /*
     * TODO:301:o: Perform brokerSubscriptionTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize brokerSubscriptionTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("brokerSubscriptionTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _brokerSubscriptionTable_initialize_interface(user_context, flags);
}                               /* initialize_table_brokerSubscriptionTable */

/**
 * Shutdown the table brokerSubscriptionTable 
 */
void
shutdown_table_brokerSubscriptionTable(void)
{
    /*
     * call interface shutdown code
     */
    _brokerSubscriptionTable_shutdown_interface
        (&brokerSubscriptionTable_user_context);
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
brokerSubscriptionTable_rowreq_ctx_init(brokerSubscriptionTable_rowreq_ctx
                                        * rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * Perform extra brokerSubscriptionTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.brokerSubscriptionSessionRef_len = 255;
    rowreq_ctx->data.brokerSubscriptionQueueRef_len = 255;
    rowreq_ctx->data.brokerSubscriptionName_len = 255;
    rowreq_ctx->data.brokerSubscriptionCreditMode_len = 255;
    rowreq_ctx->data.brokerSubscriptionArguments_len = 65535;

    return MFD_SUCCESS;
}                               /* brokerSubscriptionTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
brokerSubscriptionTable_rowreq_ctx_cleanup
    (brokerSubscriptionTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra brokerSubscriptionTable rowreq cleanup.
     */
}                               /* brokerSubscriptionTable_rowreq_ctx_cleanup */

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
brokerSubscriptionTable_container_should_save
    (brokerSubscriptionTable_rowreq_ctx * rowreq_ctx)
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
brokerSubscriptionTable_pre_request(brokerSubscriptionTable_registration *
                                    user_context)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform brokerSubscriptionTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* brokerSubscriptionTable_pre_request */

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
brokerSubscriptionTable_post_request(brokerSubscriptionTable_registration *
                                     user_context, int rc)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform brokerSubscriptionTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (brokerSubscriptionTable_dirty_get()) {
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

        brokerSubscriptionTable_dirty_set(0);   /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* brokerSubscriptionTable_post_request */


/** @{ */
