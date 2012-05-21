/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for rhm010BridgeTable
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
#include "rhm010BridgeTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "rhm010BridgeTable_interface.h"

const oid       rhm010BridgeTable_oid[] = { RHM010BRIDGETABLE_OID };

const int       rhm010BridgeTable_oid_size =
OID_LENGTH(rhm010BridgeTable_oid);

rhm010BridgeTable_registration rhm010BridgeTable_user_context;

void            initialize_table_rhm010BridgeTable(void);
void            shutdown_table_rhm010BridgeTable(void);


/**
 * Initializes the rhm010BridgeTable module
 */
void
init_rhm010BridgeTable(void)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:init_rhm010BridgeTable",
                "called\n"));

    /*
     * TODO:300:o: Perform rhm010BridgeTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("rhm010BridgeTable"))
        initialize_table_rhm010BridgeTable();

}                               /* init_rhm010BridgeTable */

/**
 * Shut-down the rhm010BridgeTable module (agent is exiting)
 */
void
shutdown_rhm010BridgeTable(void)
{
    if (should_init("rhm010BridgeTable"))
        shutdown_table_rhm010BridgeTable();

}

/**
 * Initialize the table rhm010BridgeTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_rhm010BridgeTable(void)
{
    rhm010BridgeTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:rhm010BridgeTable:initialize_table_rhm010BridgeTable", "called\n"));

    /*
     * TODO:301:o: Perform rhm010BridgeTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize rhm010BridgeTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("rhm010BridgeTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _rhm010BridgeTable_initialize_interface(user_context, flags);
}                               /* initialize_table_rhm010BridgeTable */

/**
 * Shutdown the table rhm010BridgeTable 
 */
void
shutdown_table_rhm010BridgeTable(void)
{
    /*
     * call interface shutdown code
     */
    _rhm010BridgeTable_shutdown_interface(&rhm010BridgeTable_user_context);
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
rhm010BridgeTable_rowreq_ctx_init(rhm010BridgeTable_rowreq_ctx *
                                  rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * Perform extra rhm010BridgeTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.rhm010BridgeLinkRef_len = 255;        /* # of char elements, not bytes */
    rowreq_ctx->data.rhm010BridgeSrc_len = 255;
    rowreq_ctx->data.rhm010BridgeDest_len = 255;
    rowreq_ctx->data.rhm010BridgeKey_len = 65535;
    rowreq_ctx->data.rhm010BridgeTag_len = 255;
    rowreq_ctx->data.rhm010BridgeExcludes_len = 255;

    return MFD_SUCCESS;
}                               /* rhm010BridgeTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
rhm010BridgeTable_rowreq_ctx_cleanup(rhm010BridgeTable_rowreq_ctx *
                                     rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra rhm010BridgeTable rowreq cleanup.
     */
}                               /* rhm010BridgeTable_rowreq_ctx_cleanup */

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
rhm010BridgeTable_container_should_save(rhm010BridgeTable_rowreq_ctx *
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
rhm010BridgeTable_pre_request(rhm010BridgeTable_registration *
                              user_context)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_pre_request",
                "called\n"));

    /*
     * TODO:510:o: Perform rhm010BridgeTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* rhm010BridgeTable_pre_request */

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
rhm010BridgeTable_post_request(rhm010BridgeTable_registration *
                               user_context, int rc)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_post_request",
                "called\n"));

    /*
     * TODO:511:o: Perform rhm010BridgeTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (rhm010BridgeTable_dirty_get()) {
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

        rhm010BridgeTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* rhm010BridgeTable_post_request */


/** @{ */
