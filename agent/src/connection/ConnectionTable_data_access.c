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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../qpid_api.h"

/*
 * include our parent header 
 */
#include "ConnectionTable.h"


#include "ConnectionTable_data_access.h"

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
 *** Table qpid010ConnectionTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * MRG-MESSAGING-MIB::qpid010ConnectionTable is subid 1 of qpid010Connections.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18060,15.1.1.10.1, length: 12
 */

/**
 * initialization for qpid010ConnectionTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param qpid010ConnectionTable_reg
 *        Pointer to qpid010ConnectionTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
qpid010ConnectionTable_init_data(qpid010ConnectionTable_registration *
                                qpid010ConnectionTable_reg)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_init_data", "called\n"));

    /*
     * TODO:303:o: Initialize qpid010ConnectionTable data.
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
}                               /* qpid010ConnectionTable_init_data */

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
qpid010ConnectionTable_container_init(netsnmp_container **
                                     container_ptr_ptr,
                                     netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_container_init", "called\n"));

    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to qpid010ConnectionTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to qpid010ConnectionTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up qpid010ConnectionTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = qpid010CONNECTIONTABLE_CACHE_TIMEOUT;       /* seconds */
    cache->flags |= NETSNMP_CACHE_PRELOAD;
}                               /* qpid010ConnectionTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before qpid010ConnectionTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
qpid010ConnectionTable_container_shutdown(netsnmp_container * container_ptr)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to qpid010ConnectionTable_container_shutdown\n");
        return;
    }

}                               /* qpid010ConnectionTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement qpid010ConnectionTable data load
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
 *  qpid010ConnectionTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
qpid010ConnectionTable_container_load(netsnmp_container * container)
{
    qpid010ConnectionTable_rowreq_ctx *rowreq_ctx;
    size_t          count = 0;

    /*
     * temporary storage for index values
     */
    /*
     * qpid010ConnectionInternalIndex(21)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
     */
    u_long          qpid010ConnectionInternalIndex;
    qpid010ConnectionTable_data qmfData;

    uint64_t u64Data;

    void *pEvent = qpidGet("connection");

    int index;
    uint objects;
    objects = qpidGetCount(pEvent);

    qpid010ConnectionInternalIndex = 0;
    for (index = 0; index < objects; ++index) {

    	void * pRow = qpidGetDataRow(pEvent, index);
    	if (!pRow)
    		continue;

        strncpy(qmfData.qpid010ConnectionVhostRef,
        		qpidGetString(pRow, "vhostRef"), 254);
        qmfData.qpid010ConnectionVhostRef_len = strlen(qmfData.qpid010ConnectionVhostRef) + 1;

        strncpy(qmfData.qpid010ConnectionAddress,
        		qpidGetString(pRow, "address"), 254);
        qmfData.qpid010ConnectionAddress_len = strlen(qmfData.qpid010ConnectionAddress) + 1;

        qmfData.qpid010ConnectionIncoming = qpidGetBool(pRow, "incoming");
        qmfData.qpid010ConnectionSystemConnection = qpidGetBool(pRow, "systemConnection");
        qmfData.qpid010ConnectionUserProxyAuth = qpidGetBool(pRow, "userProxyAuth");
        qmfData.qpid010ConnectionFederationLink = qpidGetBool(pRow, "federationLink");

        strncpy(qmfData.qpid010ConnectionAuthIdentity,
        		qpidGetString(pRow, "authIdentity"), 254);
        qmfData.qpid010ConnectionAuthIdentity_len = strlen(qmfData.qpid010ConnectionAuthIdentity) + 1;

        strncpy(qmfData.qpid010ConnectionRemoteProcessName,
        		qpidGetString(pRow, "remoteProcessName"), 65534);
        qmfData.qpid010ConnectionRemoteProcessName_len = strlen(qmfData.qpid010ConnectionRemoteProcessName) + 1;

        qmfData.qpid010ConnectionRemotePid = qpidGetU32(pRow, "remotePid");
        qmfData.qpid010ConnectionRemoteParentPid = qpidGetU32(pRow, "remoteParentPid");

        qmfData.qpid010ConnectionShadow = qpidGetBool(pRow, "shadow");

        strncpy(qmfData.qpid010ConnectionSaslMechanism,
        		qpidGetString(pRow, "saslMechanism"), 254);
        qmfData.qpid010ConnectionSaslMechanism_len = strlen(qmfData.qpid010ConnectionSaslMechanism) + 1;

        qmfData.qpid010ConnectionSaslSsf = qpidGetU16(pRow, "saslSsf");
        qmfData.qpid010ConnectionClosing = qpidGetBool(pRow, "closing");

        u64Data = qpidGetU64(pRow, "framesFromClient");
        qmfData.qpid010ConnectionFramesFromClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionFramesFromClient.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "framesToClient");
        qmfData.qpid010ConnectionFramesToClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionFramesToClient.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "bytesFromClient");
        qmfData.qpid010ConnectionBytesFromClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionBytesFromClient.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "bytesToClient");
        qmfData.qpid010ConnectionBytesToClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionBytesToClient.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "msgsFromClient");
        qmfData.qpid010ConnectionMsgsFromClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionMsgsFromClient.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "msgsToClient");
        qmfData.qpid010ConnectionMsgsToClient.high = HIGHLONG(u64Data);
        qmfData.qpid010ConnectionMsgsToClient.low = LOWLONG(u64Data);

        /*
         * TODO:352:M: |   |-> set indexes in new qpid010ConnectionTable rowreq context.
         * data context will be set from the param (unless NULL,
         *      in which case a new data context will be allocated)
         */
        rowreq_ctx = qpid010ConnectionTable_allocate_rowreq_ctx(NULL);
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            return MFD_RESOURCE_UNAVAILABLE;
        }
        if (MFD_SUCCESS !=
            qpid010ConnectionTable_indexes_set(rowreq_ctx,
                                              qpid010ConnectionInternalIndex))
        {
            snmp_log(LOG_ERR,
                     "error setting index while loading "
                     "qpid010ConnectionTable data.\n");
            qpid010ConnectionTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }
        qpid010ConnectionInternalIndex++;

        /*
         * setup/save data for qpid010ConnectionVhostRef
         * qpid010ConnectionVhostRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for qpid010ConnectionVhostRef data
         */
        if ((NULL == rowreq_ctx->data.qpid010ConnectionVhostRef) ||
            (rowreq_ctx->data.qpid010ConnectionVhostRef_len <
             (qmfData.qpid010ConnectionVhostRef_len *
              sizeof(qmfData.qpid010ConnectionVhostRef[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (qpid010ConnectionVhostRef)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.qpid010ConnectionVhostRef_len =
        		qmfData.qpid010ConnectionVhostRef_len *
            sizeof(qmfData.qpid010ConnectionVhostRef[0]);
        memcpy(rowreq_ctx->data.qpid010ConnectionVhostRef,
        		qmfData.qpid010ConnectionVhostRef,
        		qmfData.qpid010ConnectionVhostRef_len *
               sizeof(qmfData.qpid010ConnectionVhostRef[0]));

        /*
         * setup/save data for qpid010ConnectionAddress
         * qpid010ConnectionAddress(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for qpid010ConnectionAddress data
         */
        if ((NULL == rowreq_ctx->data.qpid010ConnectionAddress) ||
            (rowreq_ctx->data.qpid010ConnectionAddress_len <
             (qmfData.qpid010ConnectionAddress_len *
              sizeof(qmfData.qpid010ConnectionAddress[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (qpid010ConnectionAddress)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.qpid010ConnectionAddress_len =
        		qmfData.qpid010ConnectionAddress_len *
            sizeof(qmfData.qpid010ConnectionAddress[0]);
        memcpy(rowreq_ctx->data.qpid010ConnectionAddress,
        		qmfData.qpid010ConnectionAddress,
        		qmfData.qpid010ConnectionAddress_len *
               sizeof(qmfData.qpid010ConnectionAddress[0]));

        /*
         * setup/save data for qpid010ConnectionIncoming
         * qpid010ConnectionIncoming(3)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionIncoming =
        		qmfData.qpid010ConnectionIncoming;

        /*
         * setup/save data for qpid010ConnectionSystemConnection
         * qpid010ConnectionSystemConnection(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionSystemConnection =
        		qmfData.qpid010ConnectionSystemConnection;

        /*
         * setup/save data for qpid010ConnectionUserProxyAuth
         * qpid010ConnectionUserProxyAuth(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionUserProxyAuth =
        		qmfData.qpid010ConnectionUserProxyAuth;

        /*
         * setup/save data for qpid010ConnectionFederationLink
         * qpid010ConnectionFederationLink(6)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionFederationLink =
        		qmfData.qpid010ConnectionFederationLink;

        /*
         * setup/save data for qpid010ConnectionAuthIdentity
         * qpid010ConnectionAuthIdentity(7)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for qpid010ConnectionAuthIdentity data
         */
        if ((NULL == rowreq_ctx->data.qpid010ConnectionAuthIdentity) ||
            (rowreq_ctx->data.qpid010ConnectionAuthIdentity_len <
             (qmfData.qpid010ConnectionAuthIdentity_len *
              sizeof(qmfData.qpid010ConnectionAuthIdentity[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (qpid010ConnectionAuthIdentity)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.qpid010ConnectionAuthIdentity_len =
        		qmfData.qpid010ConnectionAuthIdentity_len *
            sizeof(qmfData.qpid010ConnectionAuthIdentity[0]);
        memcpy(rowreq_ctx->data.qpid010ConnectionAuthIdentity,
        		qmfData.qpid010ConnectionAuthIdentity,
        		qmfData.qpid010ConnectionAuthIdentity_len *
               sizeof(qmfData.qpid010ConnectionAuthIdentity[0]));

        /*
         * setup/save data for qpid010ConnectionRemoteProcessName
         * qpid010ConnectionRemoteProcessName(8)/Lstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for qpid010ConnectionRemoteProcessName data
         */
        if ((NULL == rowreq_ctx->data.qpid010ConnectionRemoteProcessName) ||
            (rowreq_ctx->data.qpid010ConnectionRemoteProcessName_len <
             (qmfData.qpid010ConnectionRemoteProcessName_len *
              sizeof(qmfData.qpid010ConnectionRemoteProcessName[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (qpid010ConnectionRemoteProcessName)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.qpid010ConnectionRemoteProcessName_len =
        		qmfData.qpid010ConnectionRemoteProcessName_len *
            sizeof(qmfData.qpid010ConnectionRemoteProcessName[0]);
        memcpy(rowreq_ctx->data.qpid010ConnectionRemoteProcessName,
        		qmfData.qpid010ConnectionRemoteProcessName,
        		qmfData.qpid010ConnectionRemoteProcessName_len *
               sizeof(qmfData.qpid010ConnectionRemoteProcessName[0]));

        /*
         * setup/save data for qpid010ConnectionRemotePid
         * qpid010ConnectionRemotePid(9)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionRemotePid =
        		qmfData.qpid010ConnectionRemotePid;

        /*
         * setup/save data for qpid010ConnectionRemoteParentPid
         * qpid010ConnectionRemoteParentPid(10)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionRemoteParentPid =
        		qmfData.qpid010ConnectionRemoteParentPid;

        /*
         * setup/save data for qpid010ConnectionShadow
         * qpid010ConnectionShadow(11)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionShadow = qmfData.qpid010ConnectionShadow;

        /*
         * setup/save data for qpid010ConnectionSaslMechanism
         * qpid010ConnectionSaslMechanism(12)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for qpid010ConnectionSaslMechanism data
         */
        if ((NULL == rowreq_ctx->data.qpid010ConnectionSaslMechanism) ||
            (rowreq_ctx->data.qpid010ConnectionSaslMechanism_len <
             (qmfData.qpid010ConnectionSaslMechanism_len *
              sizeof(qmfData.qpid010ConnectionSaslMechanism[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (qpid010ConnectionSaslMechanism)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.qpid010ConnectionSaslMechanism_len =
        		qmfData.qpid010ConnectionSaslMechanism_len *
            sizeof(qmfData.qpid010ConnectionSaslMechanism[0]);
        memcpy(rowreq_ctx->data.qpid010ConnectionSaslMechanism,
        		qmfData.qpid010ConnectionSaslMechanism,
        		qmfData.qpid010ConnectionSaslMechanism_len *
               sizeof(qmfData.qpid010ConnectionSaslMechanism[0]));

        /*
         * setup/save data for qpid010ConnectionSaslSsf
         * qpid010ConnectionSaslSsf(13)/Uint16/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionSaslSsf = qmfData.qpid010ConnectionSaslSsf;

        /*
         * setup/save data for qpid010ConnectionClosing
         * qpid010ConnectionClosing(14)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionClosing = qmfData.qpid010ConnectionClosing;

        /*
         * setup/save data for qpid010ConnectionFramesFromClient
         * qpid010ConnectionFramesFromClient(15)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionFramesFromClient.high =
        		qmfData.qpid010ConnectionFramesFromClient.high;
        rowreq_ctx->data.qpid010ConnectionFramesFromClient.low =
        		qmfData.qpid010ConnectionFramesFromClient.low;

        /*
         * setup/save data for qpid010ConnectionFramesToClient
         * qpid010ConnectionFramesToClient(16)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionFramesToClient.high =
        		qmfData.qpid010ConnectionFramesToClient.high;
        rowreq_ctx->data.qpid010ConnectionFramesToClient.low =
        		qmfData.qpid010ConnectionFramesToClient.low;

        /*
         * setup/save data for qpid010ConnectionBytesFromClient
         * qpid010ConnectionBytesFromClient(17)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionBytesFromClient.high =
        		qmfData.qpid010ConnectionBytesFromClient.high;
        rowreq_ctx->data.qpid010ConnectionBytesFromClient.low =
        		qmfData.qpid010ConnectionBytesFromClient.low;

        /*
         * setup/save data for qpid010ConnectionBytesToClient
         * qpid010ConnectionBytesToClient(18)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionBytesToClient.high =
        		qmfData.qpid010ConnectionBytesToClient.high;
        rowreq_ctx->data.qpid010ConnectionBytesToClient.low =
        		qmfData.qpid010ConnectionBytesToClient.low;

        /*
         * setup/save data for qpid010ConnectionMsgsFromClient
         * qpid010ConnectionMsgsFromClient(19)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionMsgsFromClient.high =
        		qmfData.qpid010ConnectionMsgsFromClient.high;
        rowreq_ctx->data.qpid010ConnectionMsgsFromClient.low =
        		qmfData.qpid010ConnectionMsgsFromClient.low;

        /*
         * setup/save data for qpid010ConnectionMsgsToClient
         * qpid010ConnectionMsgsToClient(20)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.qpid010ConnectionMsgsToClient.high =
        		qmfData.qpid010ConnectionMsgsToClient.high;
        rowreq_ctx->data.qpid010ConnectionMsgsToClient.low =
        		qmfData.qpid010ConnectionMsgsToClient.low;


        /*
         * insert into table container
         */
        CONTAINER_INSERT(container, rowreq_ctx);
        ++count;
        qpidReleaseDataRow(pRow);


    }
    qpidRelease(pEvent);

    DEBUGMSGT(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_container_load", "inserted %d records\n", count));

    return MFD_SUCCESS;
}                               /* qpid010ConnectionTable_container_load */

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
qpid010ConnectionTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_container_free", "called\n"));

    /*
     * TODO:380:M: Free qpid010ConnectionTable container data.
     */
}                               /* qpid010ConnectionTable_container_free */

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
qpid010ConnectionTable_row_prep(qpid010ConnectionTable_rowreq_ctx *
                               rowreq_ctx)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_row_prep", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* qpid010ConnectionTable_row_prep */

/*
 * TODO:420:r: Implement qpid010ConnectionTable index validation.
 */
/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::qpid010ConnectionEntry.qpid010ConnectionInternalIndex
 * qpid010ConnectionInternalIndex is subid 21 of qpid010ConnectionEntry.
 * Its status is Current, and its access level is NoAccess.
 * OID: .1.3.6.1.4.1.18060,15.1.1.10.1.1.21
 * Description:
Internal index for connection table
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
 * NOTE: NODE qpid010ConnectionInternalIndex IS NOT ACCESSIBLE
 *
 *
 */
/**
 * check validity of qpid010ConnectionInternalIndex index portion
 *
 * @retval MFD_SUCCESS   : the incoming value is legal
 * @retval MFD_ERROR     : the incoming value is NOT legal
 *
 * @note this is not the place to do any checks for the sanity
 *       of multiple indexes. Those types of checks should be done in the
 *       qpid010ConnectionTable_validate_index() function.
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
qpid010ConnectionInternalIndex_check_index(qpid010ConnectionTable_rowreq_ctx
                                          * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionInternalIndex_check_index", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:426:M: |-> Check qpid010ConnectionTable index qpid010ConnectionInternalIndex.
     * check that index value in the table context is legal.
     * (rowreq_ctx->tbl_index.qpid010ConnectionInternalIndex)
     */

    return MFD_SUCCESS;         /* qpid010ConnectionInternalIndex index ok */
}                               /* qpid010ConnectionInternalIndex_check_index */

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
 * @param qpid010ConnectionTable_reg
 *        Pointer to the user registration data
 * @param qpid010ConnectionTable_rowreq_ctx
 *        Pointer to the users context.
 * @retval MFD_SUCCESS            : success
 * @retval MFD_CANNOT_CREATE_NOW  : index not valid right now
 * @retval MFD_CANNOT_CREATE_EVER : index never valid
 */
int
qpid010ConnectionTable_validate_index(qpid010ConnectionTable_registration *
                                     qpid010ConnectionTable_reg,
                                     qpid010ConnectionTable_rowreq_ctx *
                                     rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:qpid010ConnectionTable:qpid010ConnectionTable_validate_index", "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:430:M: |-> Validate potential qpid010ConnectionTable index.
     */
    if (1) {
        snmp_log(LOG_WARNING, "invalid index for a new row in the "
                 "qpid010ConnectionTable table.\n");
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
}                               /* qpid010ConnectionTable_validate_index */

/** @} */