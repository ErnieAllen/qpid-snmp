/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for rhm010SessionTable
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
#include "rhm010SessionTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "rhm010SessionTable_interface.h"

const oid       rhm010SessionTable_oid[] = { RHM010SESSIONTABLE_OID };

const int       rhm010SessionTable_oid_size =
OID_LENGTH(rhm010SessionTable_oid);

rhm010SessionTable_registration rhm010SessionTable_user_context;

void            initialize_table_rhm010SessionTable(void);
void            shutdown_table_rhm010SessionTable(void);


/**
 * Initializes the rhm010SessionTable module
 */
void
init_rhm010SessionTable(void)
{
    DEBUGMSGTL(("verbose:rhm010SessionTable:init_rhm010SessionTable",
                "called\n"));

    /*
     * TODO:300:o: Perform rhm010SessionTable one-time module initialization.
     */

    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("rhm010SessionTable"))
        initialize_table_rhm010SessionTable();

}                               /* init_rhm010SessionTable */

/**
 * Shut-down the rhm010SessionTable module (agent is exiting)
 */
void
shutdown_rhm010SessionTable(void)
{
    if (should_init("rhm010SessionTable"))
        shutdown_table_rhm010SessionTable();

}

/**
 * Initialize the table rhm010SessionTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_rhm010SessionTable(void)
{
    rhm010SessionTable_registration *user_context;
    u_long          flags;

    DEBUGMSGTL(("verbose:rhm010SessionTable:initialize_table_rhm010SessionTable", "called\n"));

    /*
     * TODO:301:o: Perform rhm010SessionTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize rhm010SessionTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context =
        netsnmp_create_data_list("rhm010SessionTable", NULL, NULL);

    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;

    /*
     * call interface initialization code
     */
    _rhm010SessionTable_initialize_interface(user_context, flags);
}                               /* initialize_table_rhm010SessionTable */

/**
 * Shutdown the table rhm010SessionTable 
 */
void
shutdown_table_rhm010SessionTable(void)
{
    /*
     * call interface shutdown code
     */
    _rhm010SessionTable_shutdown_interface
        (&rhm010SessionTable_user_context);
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
rhm010SessionTable_rowreq_ctx_init(rhm010SessionTable_rowreq_ctx *
                                   rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:rhm010SessionTable:rhm010SessionTable_rowreq_ctx_init", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:210:o: |-> Perform extra rhm010SessionTable rowreq initialization. (eg DEFVALS)
     */
    rowreq_ctx->data.rhm010SessionVhostRef_len = sizeof(rowreq_ctx->data.rhm010SessionVhostRef) /
    		sizeof(rowreq_ctx->data.rhm010SessionVhostRef[0]);
    rowreq_ctx->data.rhm010SessionName_len = sizeof(rowreq_ctx->data.rhm010SessionName) /
    		sizeof(rowreq_ctx->data.rhm010SessionName[0]);
    rowreq_ctx->data.rhm010SessionConnectionRef_len = sizeof(rowreq_ctx->data.rhm010SessionConnectionRef) /
    		sizeof(rowreq_ctx->data.rhm010SessionConnectionRef[0]);

    return MFD_SUCCESS;
}                               /* rhm010SessionTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void
rhm010SessionTable_rowreq_ctx_cleanup(rhm010SessionTable_rowreq_ctx *
                                      rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rhm010SessionTable:rhm010SessionTable_rowreq_ctx_cleanup", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:211:o: |-> Perform extra rhm010SessionTable rowreq cleanup.
     */
}                               /* rhm010SessionTable_rowreq_ctx_cleanup */

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
rhm010SessionTable_container_should_save(rhm010SessionTable_rowreq_ctx *
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
rhm010SessionTable_pre_request(rhm010SessionTable_registration *
                               user_context)
{
    DEBUGMSGTL(("verbose:rhm010SessionTable:rhm010SessionTable_pre_request", "called\n"));

    /*
     * TODO:510:o: Perform rhm010SessionTable pre-request actions.
     */

    return MFD_SUCCESS;
}                               /* rhm010SessionTable_pre_request */

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
rhm010SessionTable_post_request(rhm010SessionTable_registration *
                                user_context, int rc)
{
    DEBUGMSGTL(("verbose:rhm010SessionTable:rhm010SessionTable_post_request", "called\n"));

    /*
     * TODO:511:o: Perform rhm010SessionTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (rhm010SessionTable_dirty_get()) {
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

        rhm010SessionTable_dirty_set(0);        /* clear table dirty flag */
    }

    return MFD_SUCCESS;
}                               /* rhm010SessionTable_post_request */


/** @{ */
