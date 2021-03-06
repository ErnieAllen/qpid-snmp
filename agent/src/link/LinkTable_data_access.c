/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include "../include/net-snmp-features.h"
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include "../qpid_api.h"

/*
 * include our parent header 
 */
#include "LinkTable.h"


#include "LinkTable_data_access.h"

/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table brokerLinkTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * QPID-MESSAGING-MIB::brokerLinkTable is subid 1 of brokerLinks.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.11.1, length: 12
 */

/**
 * initialization for brokerLinkTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param brokerLinkTable_reg
 *        Pointer to brokerLinkTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
brokerLinkTable_init_data(brokerLinkTable_registration *
                           brokerLinkTable_reg)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_init_data",
                "called\n"));

    /*
     * TODO:303:o: Initialize brokerLinkTable data.
     */
    /*
     ***************************************************
     ***             START EXAMPLE CODE              ***
     ***---------------------------------------------***/
    /*
     * if you are the sole writer for the file, you could
     * open it here. However, as stated earlier, we are assuming
     * the worst case, which in this case means that the file is
     * written to by someone else, and might not even exist when
     * we start up. So we can't do anything here.
     */
    /*
     ***---------------------------------------------***
     ***              END  EXAMPLE CODE              ***
     ***************************************************/

    return MFD_SUCCESS;
}                               /* brokerLinkTable_init_data */

/**
 * container overview
 *
 */

/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
brokerLinkTable_container_init(netsnmp_container ** container_ptr_ptr,
                                netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_container_init",
                "called\n"));

    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to brokerLinkTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to brokerLinkTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up brokerLinkTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = brokerLINKTABLE_CACHE_TIMEOUT;    /* seconds */
}                               /* brokerLinkTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before brokerLinkTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
brokerLinkTable_container_shutdown(netsnmp_container * container_ptr)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to brokerLinkTable_container_shutdown\n");
        return;
    }

}                               /* brokerLinkTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement brokerLinkTable data load
 * This function will also be called by the cache helper to load
 * the container again (after the container free function has been
 * called to free the previous contents).
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  brokerLinkTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
brokerLinkTable_container_load(netsnmp_container * container)
{
    brokerLinkTable_rowreq_ctx *rowreq_ctx;

    /*
     * temporary storage for index values
     */
    /*
     * brokerLinkInternalIndex(10)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
     */
    u_long          brokerLinkInternalIndex;
    brokerLinkTable_data qmfData;



    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_container_load",
                "called\n"));

    /*
     * Load/update data in the brokerLinkTable container.
     * loop over your brokerLinkTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
    uint64_t u64Data;

    void *pEvent = qpidGet("link");

    int index;
    uint objects;
    objects = qpidGetCount(pEvent);

    brokerLinkInternalIndex = 0;
    for (index = 0; index < objects; ++index) {

    	void * pRow = qpidGetDataRow(pEvent, index);
    	if (!pRow)
    		continue;

        strncpy(qmfData.brokerLinkVhostRef,
        		qpidGetString(pRow, "vhostRef"), 254);
        qmfData.brokerLinkVhostRef_len = strlen(qmfData.brokerLinkVhostRef) + 1;

        strncpy(qmfData.brokerLinkName,
        		qpidGetString(pRow, "name"), 254);
        qmfData.brokerLinkName_len = strlen(qmfData.brokerLinkName) + 1;

        strncpy(qmfData.brokerLinkHost,
        		qpidGetString(pRow, "host"), 254);
        qmfData.brokerLinkHost_len = strlen(qmfData.brokerLinkHost) + 1;

        strncpy(qmfData.brokerLinkTransport,
        		qpidGetString(pRow, "transport"), 254);
        qmfData.brokerLinkTransport_len = strlen(qmfData.brokerLinkTransport) + 1;

        strncpy(qmfData.brokerLinkConnectionRef,
        		qpidGetString(pRow, "connectionRef"), 254);
        qmfData.brokerLinkConnectionRef_len = strlen(qmfData.brokerLinkConnectionRef) + 1;

        strncpy(qmfData.brokerLinkState,
        		qpidGetString(pRow, "state"), 254);
        qmfData.brokerLinkState_len = strlen(qmfData.brokerLinkState) + 1;

        strncpy(qmfData.brokerLinkLastError,
        		qpidGetString(pRow, "lastError"), 65534);
        qmfData.brokerLinkLastError_len = strlen(qmfData.brokerLinkLastError) + 1;

        qmfData.brokerLinkDurable = qpidGetBool(pRow, "durable");
        qmfData.brokerLinkPort = qpidGetU32(pRow, "port");

        /*
         * set indexes in new brokerLinkTable rowreq context.
         * data context will be set from the param (unless NULL,
         *      in which case a new data context will be allocated)
         */
        rowreq_ctx = brokerLinkTable_allocate_rowreq_ctx(NULL);
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            return MFD_RESOURCE_UNAVAILABLE;
        }
        if (MFD_SUCCESS !=
            brokerLinkTable_indexes_set(rowreq_ctx,
                                         brokerLinkInternalIndex)) {
            snmp_log(LOG_ERR,
                     "error setting index while loading "
                     "brokerLinkTable data.\n");
            brokerLinkTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }
        ++brokerLinkInternalIndex;

        /*
         * setup/save data for brokerLinkVhostRef
         * brokerLinkVhostRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkVhostRef data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkVhostRef) ||
            (rowreq_ctx->data.brokerLinkVhostRef_len <
             (qmfData.brokerLinkVhostRef_len * sizeof(qmfData.brokerLinkVhostRef[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkVhostRef)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkVhostRef_len =
            qmfData.brokerLinkVhostRef_len * sizeof(qmfData.brokerLinkVhostRef[0]);
        memcpy(rowreq_ctx->data.brokerLinkVhostRef, qmfData.brokerLinkVhostRef,
        		qmfData.brokerLinkVhostRef_len * sizeof(qmfData.brokerLinkVhostRef[0]));

        /*
         * setup/save data for brokerLinkName
         * brokerLinkName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkName data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkName) ||
            (rowreq_ctx->data.brokerLinkName_len <
             (qmfData.brokerLinkName_len * sizeof(qmfData.brokerLinkName[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkName)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkName_len =
        		qmfData.brokerLinkName_len * sizeof(qmfData.brokerLinkName[0]);
        memcpy(rowreq_ctx->data.brokerLinkName, qmfData.brokerLinkName,
        		qmfData.brokerLinkName_len * sizeof(qmfData.brokerLinkName[0]));

        /*
         * setup/save data for brokerLinkHost
         * brokerLinkHost(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkHost data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkHost) ||
            (rowreq_ctx->data.brokerLinkHost_len <
             (qmfData.brokerLinkHost_len * sizeof(qmfData.brokerLinkHost[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkHost)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkHost_len =
        		qmfData.brokerLinkHost_len * sizeof(qmfData.brokerLinkHost[0]);
        memcpy(rowreq_ctx->data.brokerLinkHost, qmfData.brokerLinkHost,
        		qmfData.brokerLinkHost_len * sizeof(qmfData.brokerLinkHost[0]));

        /*
         * setup/save data for brokerLinkPort
         * brokerLinkPort(4)/Uint16/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerLinkPort = qmfData.brokerLinkPort;

        /*
         * setup/save data for brokerLinkTransport
         * brokerLinkTransport(5)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkTransport data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkTransport) ||
            (rowreq_ctx->data.brokerLinkTransport_len <
             (qmfData.brokerLinkTransport_len *
              sizeof(qmfData.brokerLinkTransport[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkTransport)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkTransport_len =
        		qmfData.brokerLinkTransport_len * sizeof(qmfData.brokerLinkTransport[0]);
        memcpy(rowreq_ctx->data.brokerLinkTransport, qmfData.brokerLinkTransport,
        		qmfData.brokerLinkTransport_len * sizeof(qmfData.brokerLinkTransport[0]));

        /*
         * setup/save data for brokerLinkDurable
         * brokerLinkDurable(6)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */

        if (qmfData.brokerLinkDurable == 0)
        	qmfData.brokerLinkDurable = TRUTHVALUE_FALSE;
        rowreq_ctx->data.brokerLinkDurable = qmfData.brokerLinkDurable;

        /*
         * setup/save data for brokerLinkConnectionRef
         * brokerLinkConnectionRef(7)/ObjId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkConnectionRef data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkConnectionRef) ||
            (rowreq_ctx->data.brokerLinkConnectionRef_len <
             (qmfData.brokerLinkConnectionRef_len *
              sizeof(qmfData.brokerLinkConnectionRef[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkConnectionRef)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkConnectionRef_len =
        		qmfData.brokerLinkConnectionRef_len *
            sizeof(qmfData.brokerLinkConnectionRef[0]);
        memcpy(rowreq_ctx->data.brokerLinkConnectionRef,
        		qmfData.brokerLinkConnectionRef,
        		qmfData.brokerLinkConnectionRef_len *
               sizeof(qmfData.brokerLinkConnectionRef[0]));

        /*
         * setup/save data for brokerLinkState
         * brokerLinkState(8)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkState data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkState) ||
            (rowreq_ctx->data.brokerLinkState_len <
             (qmfData.brokerLinkState_len * sizeof(qmfData.brokerLinkState[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkState)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkState_len =
        		qmfData.brokerLinkState_len * sizeof(qmfData.brokerLinkState[0]);
        memcpy(rowreq_ctx->data.brokerLinkState, qmfData.brokerLinkState,
        		qmfData.brokerLinkState_len * sizeof(qmfData.brokerLinkState[0]));

        /*
         * setup/save data for brokerLinkLastError
         * brokerLinkLastError(9)/Lstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerLinkLastError data
         */
        if ((NULL == rowreq_ctx->data.brokerLinkLastError) ||
            (rowreq_ctx->data.brokerLinkLastError_len <
             (qmfData.brokerLinkLastError_len *
              sizeof(qmfData.brokerLinkLastError[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerLinkLastError)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerLinkLastError_len =
        		qmfData.brokerLinkLastError_len * sizeof(qmfData.brokerLinkLastError[0]);
        memcpy(rowreq_ctx->data.brokerLinkLastError, qmfData.brokerLinkLastError,
        		qmfData.brokerLinkLastError_len * sizeof(qmfData.brokerLinkLastError[0]));

        /*
         * insert into table container
         */
        CONTAINER_INSERT(container, rowreq_ctx);
        qpidReleaseDataRow(pRow);
    }

    qpidRelease(pEvent);

    DEBUGMSGT(("verbose:brokerLinkTable:brokerLinkTable_container_load",
               "inserted %d records\n", brokerLinkInternalIndex));

    return MFD_SUCCESS;
}                               /* brokerLinkTable_container_load */


/**
 * container clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
brokerLinkTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_container_free",
                "called\n"));

    /*
     * TODO:380:M: Free brokerLinkTable container data.
     */
}                               /* brokerLinkTable_container_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
brokerLinkTable_row_prep(brokerLinkTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_row_prep",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* brokerLinkTable_row_prep */

/*
 * TODO:420:r: Implement brokerLinkTable index validation.
 */
/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerLinkEntry.brokerLinkInternalIndex
 * brokerLinkInternalIndex is subid 10 of brokerLinkEntry.
 * Its status is Current, and its access level is NoAccess.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.11.1.1.10
 * Description:
Internal index for link table
 *
 * Attributes:
 *   accessible 0     isscalar 0     enums  0      hasdefval 0
 *   readable   0     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is UNSIGNED32 (based on perltype UNSIGNED32)
 * The net-snmp type is ASN_UNSIGNED. The C type decl is u_long (u_long)
 *
 *
 *
 * NOTE: NODE brokerLinkInternalIndex IS NOT ACCESSIBLE
 *
 *
 */
/**
 * check validity of brokerLinkInternalIndex index portion
 *
 * @retval MFD_SUCCESS   : the incoming value is legal
 * @retval MFD_ERROR     : the incoming value is NOT legal
 *
 * @note this is not the place to do any checks for the sanity
 *       of multiple indexes. Those types of checks should be done in the
 *       brokerLinkTable_validate_index() function.
 *
 * @note Also keep in mind that if the index refers to a row in this or
 *       some other table, you can't check for that row here to make
 *       decisions, since that row might not be created yet, but may
 *       be created during the processing this request. If you have
 *       such checks, they should be done in the check_dependencies
 *       function, because any new/deleted/changed rows should be
 *       available then.
 *
 * The following checks have already been done for you:
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 */
int
brokerLinkInternalIndex_check_index(brokerLinkTable_rowreq_ctx *
                                     rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkInternalIndex_check_index", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:426:M: |-> Check brokerLinkTable index brokerLinkInternalIndex.
     * check that index value in the table context is legal.
     * (rowreq_ctx->tbl_index.brokerLinkInternalIndex)
     */

    return MFD_SUCCESS;         /* brokerLinkInternalIndex index ok */
}                               /* brokerLinkInternalIndex_check_index */

/**
 * verify specified index is valid.
 *
 * This check is independent of whether or not the values specified for
 * the columns of the new row are valid. Column values and row consistency
 * will be checked later. At this point, only the index values should be
 * checked.
 *
 * All of the individual index validation functions have been called, so this
 * is the place to make sure they are valid as a whole when combined. If
 * you only have one index, then you probably don't need to do anything else
 * here.
 * 
 * @note Keep in mind that if the indexes refer to a row in this or
 *       some other table, you can't check for that row here to make
 *       decisions, since that row might not be created yet, but may
 *       be created during the processing this request. If you have
 *       such checks, they should be done in the check_dependencies
 *       function, because any new/deleted/changed rows should be
 *       available then.
 *
 *
 * @param brokerLinkTable_reg
 *        Pointer to the user registration data
 * @param brokerLinkTable_rowreq_ctx
 *        Pointer to the users context.
 * @retval MFD_SUCCESS            : success
 * @retval MFD_CANNOT_CREATE_NOW  : index not valid right now
 * @retval MFD_CANNOT_CREATE_EVER : index never valid
 */
int
brokerLinkTable_validate_index(brokerLinkTable_registration *
                                brokerLinkTable_reg,
                                brokerLinkTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerLinkTable:brokerLinkTable_validate_index",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:430:M: |-> Validate potential brokerLinkTable index.
     */
    if (1) {
        snmp_log(LOG_WARNING, "invalid index for a new row in the "
                 "brokerLinkTable table.\n");
        /*
         * determine failure type.
         *
         * If the index could not ever be created, return MFD_NOT_EVER
         * If the index can not be created under the present circumstances
         * (even though it could be created under other circumstances),
         * return MFD_NOT_NOW.
         */
        if (0) {
            return MFD_CANNOT_CREATE_EVER;
        } else {
            return MFD_CANNOT_CREATE_NOW;
        }
    }

    return rc;
}                               /* brokerLinkTable_validate_index */

/** @} */
