/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for rhm010QueueTable
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
#include "rhm010QueueTable.h"

#include <net-snmp/agent/mib_modules.h>

const oid       rhm010QueueTable_oid[] = { RHM010QUEUETABLE_OID };

const int       rhm010QueueTable_oid_size =
OID_LENGTH(rhm010QueueTable_oid);

rhm010QueueTable_registration rhm010QueueTable_user_context;

void            initialize_table_rhm010QueueTable(void);
void            shutdown_table_rhm010QueueTable(void);


/**
 * Initializes the rhm010QueueTable module
 */
void
init_rhm010QueueTable(void)
{
    DEBUGMSGTL(("verbose:rhm010QueueTable:init_rhm010QueueTable",
                "called\n"));

    /*
     * TODO:300:o: Perform rhm010QueueTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("rhm010QueueTable"))
        initialize_table_rhm010QueueTable();

}                               /* init_rhm010QueueTable */

/**
 * Shut-down the rhm010QueueTable module (agent is exiting)
 */
void
shutdown_rhm010QueueTable(void)
{
    if (should_init("rhm010QueueTable"))
        shutdown_table_rhm010QueueTable();

}

/**
 * Initialize the table rhm010QueueTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_rhm010QueueTable(void)
{
    rhm010QueueTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:rhm010QueueTable:initialize_table_rhm010QueueTable", "called\n"));

    /*
     * TODO:301:o: Perform rhm010QueueTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize rhm010QueueTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("rhm010QueueTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _rhm010QueueTable_initialize_interface(user_context, flags);
}                               /* initialize_table_rhm010QueueTable */

/**
 * Shutdown the table rhm010QueueTable 
 */
void
shutdown_table_rhm010QueueTable(void)
{
    /*
     * call interface shutdown code
     */
    _rhm010QueueTable_shutdown_interface(&rhm010QueueTable_user_context);
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
rhm010QueueTable_rowreq_ctx_init(rhm010QueueTable_rowreq_ctx * rowreq_ctx,
                                 void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:rhm010QueueTable:rhm010QueueTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:210:o: |-> Perform extra rhm010QueueTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.rhm010QueueVhostRef_len = 255;
    rowreq_ctx->data.rhm010QueueName_len = 255;
    rowreq_ctx->data.rhm010QueueArguments_len = 65535;
    rowreq_ctx->data.rhm010QueueAltExchange_len = 255;

    return MFD_SUCCESS;
}                               /* rhm010QueueTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
rhm010QueueTable_rowreq_ctx_cleanup(rhm010QueueTable_rowreq_ctx *
                                    rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rhm010QueueTable:rhm010QueueTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra rhm010QueueTable rowreq cleanup.
     */
}                               /* rhm010QueueTable_rowreq_ctx_cleanup */

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
rhm010QueueTable_container_should_save(rhm010QueueTable_rowreq_ctx *
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
rhm010QueueTable_pre_request(rhm010QueueTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:rhm010QueueTable:rhm010QueueTable_pre_request",
                "called\n"));

    /*
     * TODO:510:o: Perform rhm010QueueTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* rhm010QueueTable_pre_request */

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
rhm010QueueTable_post_request(rhm010QueueTable_registration * user_context,
                              int rc)
{
    DEBUGMSGTL(("verbose:rhm010QueueTable:rhm010QueueTable_post_request",
                "called\n"));

    /*
     * TODO:511:o: Perform rhm010QueueTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (rhm010QueueTable_dirty_get()) {
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

        rhm010QueueTable_dirty_set(0);  /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* rhm010QueueTable_post_request */


/** @{ */