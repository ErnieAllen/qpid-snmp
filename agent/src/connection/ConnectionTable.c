/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for qpid010ConnectionTable
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
#include "ConnectionTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "ConnectionTable_interface.h"

const oid       qpid010ConnectionTable_oid[] =
    { qpid010CONNECTIONTABLE_OID };
const int       qpid010ConnectionTable_oid_size =
OID_LENGTH(qpid010ConnectionTable_oid);

qpid010ConnectionTable_registration qpid010ConnectionTable_user_context;

void            initialize_table_qpid010ConnectionTable(void);
void            shutdown_table_qpid010ConnectionTable(void);


/**
 * Initializes the qpid010ConnectionTable module
 */
void
init_ConnectionTable(void)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:init_ConnectionTable",
                "called\n"));

    /*
     * TODO:300:o: Perform qpid010ConnectionTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("qpid010ConnectionTable"))
        initialize_table_qpid010ConnectionTable();

}                               /* init_ConnectionTable */

/**
 * Shut-down the qpid010ConnectionTable module (agent is exiting)
 */
void
shutdown_qpid010ConnectionTable(void)
{
    if (should_init("qpid010ConnectionTable"))
        shutdown_table_qpid010ConnectionTable();

}

/**
 * Initialize the table qpid010ConnectionTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_qpid010ConnectionTable(void)
{
    qpid010ConnectionTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:qpid010ConnectionTable:initialize_table_qpid010ConnectionTable", "called\n"));

    /*
     * TODO:301:o: Perform qpid010ConnectionTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize qpid010ConnectionTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("qpid010ConnectionTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _qpid010ConnectionTable_initialize_interface(user_context, flags);
}                               /* initialize_table_qpid010ConnectionTable */

/**
 * Shutdown the table qpid010ConnectionTable 
 */
void
shutdown_table_qpid010ConnectionTable(void)
{
    /*
     * call interface shutdown code
     */
    _qpid010ConnectionTable_shutdown_interface
        (&qpid010ConnectionTable_user_context);
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
qpid010ConnectionTable_rowreq_ctx_init(qpid010ConnectionTable_rowreq_ctx *
                                      rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * Perform extra qpid010ConnectionTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.qpid010ConnectionVhostRef_len = 255;   /* # of char elements, not bytes */
    rowreq_ctx->data.qpid010ConnectionAddress_len = 255;
    rowreq_ctx->data.qpid010ConnectionAuthIdentity_len= 255;
    rowreq_ctx->data.qpid010ConnectionRemoteProcessName_len = 65535;
    rowreq_ctx->data.qpid010ConnectionSaslMechanism_len = 255;

    return MFD_SUCCESS;
}                               /* qpid010ConnectionTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
qpid010ConnectionTable_rowreq_ctx_cleanup(qpid010ConnectionTable_rowreq_ctx *
                                         rowreq_ctx)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra qpid010ConnectionTable rowreq cleanup.
     */
}                               /* qpid010ConnectionTable_rowreq_ctx_cleanup */

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
qpid010ConnectionTable_container_should_save
    (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx)
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
qpid010ConnectionTable_pre_request(qpid010ConnectionTable_registration *
                                  user_context)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform qpid010ConnectionTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* qpid010ConnectionTable_pre_request */

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
qpid010ConnectionTable_post_request(qpid010ConnectionTable_registration *
                                   user_context, int rc)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform qpid010ConnectionTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (qpid010ConnectionTable_dirty_get()) {
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

        qpid010ConnectionTable_dirty_set(0);     /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* qpid010ConnectionTable_post_request */


/** @{ */
