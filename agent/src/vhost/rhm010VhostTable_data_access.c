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
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include "../qpid_api.h"

/*
 * include our parent header 
 */
#include "rhm010VhostTable.h"


#include "rhm010VhostTable_data_access.h"

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
 *** Table rhm010VhostTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * MRG-MESSAGING-MIB::rhm010VhostTable is subid 1 of rhm010Vhosts.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.5.1, length: 12
 */

/**
 * initialization for rhm010VhostTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param rhm010VhostTable_reg
 *        Pointer to rhm010VhostTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
rhm010VhostTable_init_data(rhm010VhostTable_registration *
                           rhm010VhostTable_reg)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_init_data",
                "called\n"));

    /*
     * TODO:303:o: Initialize rhm010VhostTable data.
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
}                               /* rhm010VhostTable_init_data */

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
rhm010VhostTable_container_init(netsnmp_container ** container_ptr_ptr,
                                netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_container_init",
                "called\n"));

    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to rhm010VhostTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to rhm010VhostTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up rhm010VhostTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = RHM010VHOSTTABLE_CACHE_TIMEOUT;    /* seconds */
}                               /* rhm010VhostTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before rhm010VhostTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
rhm010VhostTable_container_shutdown(netsnmp_container * container_ptr)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to rhm010VhostTable_container_shutdown\n");
        return;
    }

}                               /* rhm010VhostTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement rhm010VhostTable data load
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
 *  rhm010VhostTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
rhm010VhostTable_container_load(netsnmp_container * container)
{
    rhm010VhostTable_rowreq_ctx *rowreq_ctx;
    size_t          count = 0;

    /*
     * temporary storage for index values
     */
    /*
     * rhm010VhostInternalIndex(4)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
     */
    u_long          rhm010VhostInternalIndex;
    rhm010VhostTable_data qmfData;

    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_container_load",
                "called\n"));

    void *pEvent = qpidGet("vhost");

    int vHostIndex;
    uint vHosts;
    vHosts = qpidGetCount(pEvent);

    rhm010VhostInternalIndex = 0;
    for (vHostIndex = 0; vHostIndex < vHosts; ++vHostIndex) {

    	void * pRow = qpidGetDataRow(pEvent, vHostIndex);
    	if (!pRow)
    		continue;

        strncpy(qmfData.rhm010VhostBrokerRef,
        		qpidGetString(pRow, "brokerRef"), 254);
        qmfData.rhm010VhostBrokerRef_len = strlen(qmfData.rhm010VhostBrokerRef) + 1;

        strncpy(qmfData.rhm010VhostName,
        		qpidGetString(pRow, "name"), 254);
        qmfData.rhm010VhostName_len = strlen(qmfData.rhm010VhostName) + 1;

        strncpy(qmfData.rhm010VhostFederationTag,
        		qpidGetString(pRow, "federationTag"), 254);
        qmfData.rhm010VhostFederationTag_len = strlen(qmfData.rhm010VhostFederationTag) + 1;

        /*
         * set indexes in new rhm010VhostTable rowreq context.
         * data context will be set from the param (unless NULL,
         *      in which case a new data context will be allocated)
         */
        rowreq_ctx = rhm010VhostTable_allocate_rowreq_ctx(NULL);
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            return MFD_RESOURCE_UNAVAILABLE;
        }
        if (MFD_SUCCESS !=
            rhm010VhostTable_indexes_set(rowreq_ctx,
                                         rhm010VhostInternalIndex)) {
            snmp_log(LOG_ERR,
                     "error setting index while loading "
                     "rhm010VhostTable data.\n");
            rhm010VhostTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }

        /*
         * TODO:352:r: |   |-> populate rhm010VhostTable data context.
         * Populate data context here. (optionally, delay until row prep)
         */
        /*
         * TRANSIENT or semi-TRANSIENT data:
         * copy data or save any info needed to do it in row_prep.
         */
        /*
         * setup/save data for rhm010VhostBrokerRef
         * rhm010VhostBrokerRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for rhm010VhostBrokerRef data
         */
        if ((NULL == rowreq_ctx->data.rhm010VhostBrokerRef) ||
            (rowreq_ctx->data.rhm010VhostBrokerRef_len <
             (qmfData.rhm010VhostBrokerRef_len *
              sizeof(qmfData.rhm010VhostBrokerRef[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (rhm010VhostBrokerRef)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.rhm010VhostBrokerRef_len =
        		qmfData.rhm010VhostBrokerRef_len * sizeof(qmfData.rhm010VhostBrokerRef[0]);
        memcpy(rowreq_ctx->data.rhm010VhostBrokerRef, qmfData.rhm010VhostBrokerRef,
        		qmfData.rhm010VhostBrokerRef_len * sizeof(qmfData.rhm010VhostBrokerRef[0]));

        /*
         * setup/save data for rhm010VhostName
         * rhm010VhostName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for rhm010VhostName data
         */
        if ((NULL == rowreq_ctx->data.rhm010VhostName) ||
            (rowreq_ctx->data.rhm010VhostName_len <
             (qmfData.rhm010VhostName_len * sizeof(qmfData.rhm010VhostName[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (rhm010VhostName)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.rhm010VhostName_len =
        		qmfData.rhm010VhostName_len * sizeof(qmfData.rhm010VhostName[0]);
        memcpy(rowreq_ctx->data.rhm010VhostName, qmfData.rhm010VhostName,
        		qmfData.rhm010VhostName_len * sizeof(qmfData.rhm010VhostName[0]));

        /*
         * setup/save data for rhm010VhostFederationTag
         * rhm010VhostFederationTag(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for rhm010VhostFederationTag data
         */
        if ((NULL == rowreq_ctx->data.rhm010VhostFederationTag) ||
            (rowreq_ctx->data.rhm010VhostFederationTag_len <
             (qmfData.rhm010VhostFederationTag_len *
              sizeof(qmfData.rhm010VhostFederationTag[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (rhm010VhostFederationTag)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.rhm010VhostFederationTag_len =
        		qmfData.rhm010VhostFederationTag_len *
            sizeof(qmfData.rhm010VhostFederationTag[0]);
        memcpy(rowreq_ctx->data.rhm010VhostFederationTag,
        		qmfData.rhm010VhostFederationTag,
        		qmfData.rhm010VhostFederationTag_len *
               sizeof(qmfData.rhm010VhostFederationTag[0]));


        /*
         * insert into table container
         */
        CONTAINER_INSERT(container, rowreq_ctx);
        ++count;

        qpidReleaseDataRow(pRow);

    }
    qpidRelease(pEvent);

    DEBUGMSGT(("verbose:rhm010VhostTable:rhm010VhostTable_container_load",
               "inserted %d records\n", (int)count));

    return MFD_SUCCESS;
}                               /* rhm010VhostTable_container_load */

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
rhm010VhostTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_container_free",
                "called\n"));

    /*
     * TODO:380:M: Free rhm010VhostTable container data.
     */
}                               /* rhm010VhostTable_container_free */

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
rhm010VhostTable_row_prep(rhm010VhostTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_row_prep",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* rhm010VhostTable_row_prep */

/*
 * TODO:420:r: Implement rhm010VhostTable index validation.
 */
/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010VhostEntry.rhm010VhostInternalIndex
 * rhm010VhostInternalIndex is subid 4 of rhm010VhostEntry.
 * Its status is Current, and its access level is NoAccess.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.5.1.1.4
 * Description:
Internal index for vhost table
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
 * NOTE: NODE rhm010VhostInternalIndex IS NOT ACCESSIBLE
 *
 *
 */
/**
 * check validity of rhm010VhostInternalIndex index portion
 *
 * @retval MFD_SUCCESS   : the incoming value is legal
 * @retval MFD_ERROR     : the incoming value is NOT legal
 *
 * @note this is not the place to do any checks for the sanity
 *       of multiple indexes. Those types of checks should be done in the
 *       rhm010VhostTable_validate_index() function.
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
rhm010VhostInternalIndex_check_index(rhm010VhostTable_rowreq_ctx *
                                     rowreq_ctx)
{
    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostInternalIndex_check_index", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:426:M: |-> Check rhm010VhostTable index rhm010VhostInternalIndex.
     * check that index value in the table context is legal.
     * (rowreq_ctx->tbl_index.rhm010VhostInternalIndex)
     */

    return MFD_SUCCESS;         /* rhm010VhostInternalIndex index ok */
}                               /* rhm010VhostInternalIndex_check_index */

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
 * @param rhm010VhostTable_reg
 *        Pointer to the user registration data
 * @param rhm010VhostTable_rowreq_ctx
 *        Pointer to the users context.
 * @retval MFD_SUCCESS            : success
 * @retval MFD_CANNOT_CREATE_NOW  : index not valid right now
 * @retval MFD_CANNOT_CREATE_EVER : index never valid
 */
int
rhm010VhostTable_validate_index(rhm010VhostTable_registration *
                                rhm010VhostTable_reg,
                                rhm010VhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:rhm010VhostTable:rhm010VhostTable_validate_index",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:430:M: |-> Validate potential rhm010VhostTable index.
     */
    if (1) {
        snmp_log(LOG_WARNING, "invalid index for a new row in the "
                 "rhm010VhostTable table.\n");
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
}                               /* rhm010VhostTable_validate_index */

/** @} */
