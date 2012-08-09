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
#include "ExchangeTable.h"

#include "ExchangeTable_data_access.h"

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
 *** Table brokerExchangeTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * QPID-MESSAGING-MIB::brokerExchangeTable is subid 1 of brokerExchanges.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.7.1, length: 12
 */

/**
 * initialization for brokerExchangeTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param brokerExchangeTable_reg
 *        Pointer to brokerExchangeTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
brokerExchangeTable_init_data(brokerExchangeTable_registration *
                              brokerExchangeTable_reg)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_init_data", "called\n"));

    /*
     * TODO:303:o: Initialize brokerExchangeTable data.
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
}                               /* brokerExchangeTable_init_data */

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
brokerExchangeTable_container_init(netsnmp_container ** container_ptr_ptr,
                                   netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_container_init", "called\n"));

    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to brokerExchangeTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to brokerExchangeTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up brokerExchangeTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = brokerEXCHANGETABLE_CACHE_TIMEOUT; /* seconds */
}                               /* brokerExchangeTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before brokerExchangeTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
brokerExchangeTable_container_shutdown(netsnmp_container * container_ptr)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to brokerExchangeTable_container_shutdown\n");
        return;
    }

}                               /* brokerExchangeTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement brokerExchangeTable data load
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
 *  brokerExchangeTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
brokerExchangeTable_container_load(netsnmp_container * container)
{
    brokerExchangeTable_rowreq_ctx *rowreq_ctx;
    size_t          count = 0;

    /*
     * temporary storage for index values
     */
    /*
     * brokerExchangeInternalIndex(20)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
     */
    u_long          brokerExchangeInternalIndex;
    brokerExchangeTable_data qmfData;

    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_container_load", "called\n"));

    /*
     ***************************************************
     ***             START EXAMPLE CODE              ***
     ***---------------------------------------------***/
    /*
     ***---------------------------------------------***
     ***              END  EXAMPLE CODE              ***
     ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the brokerExchangeTable container.
     * loop over your brokerExchangeTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */


    uint64_t u64Data;

    void *pEvent = qpidGet("exchange");

    int exchangeIndex;
    uint exchanges;
    exchanges = qpidGetCount(pEvent);

    brokerExchangeInternalIndex = 0;
    for (exchangeIndex = 0; exchangeIndex < exchanges; ++exchangeIndex) {

    	void * pRow = qpidGetDataRow(pEvent, exchangeIndex);
    	if (!pRow)
    		continue;

        strncpy(qmfData.brokerExchangeVhostRef,
        		qpidGetString(pRow, "vhostRef"), 254);
        qmfData.brokerExchangeVhostRef_len = strlen(qmfData.brokerExchangeVhostRef) + 1;

        strncpy(qmfData.brokerExchangeName,
        		qpidGetString(pRow, "name"), 254);
        qmfData.brokerExchangeName_len = strlen(qmfData.brokerExchangeName) + 1;

        strncpy(qmfData.brokerExchangeType,
        		qpidGetString(pRow, "type"), 254);
        qmfData.brokerExchangeType_len = strlen(qmfData.brokerExchangeType) + 1;

        qmfData.brokerExchangeDurable = qpidGetBool(pRow, "durable");
        qmfData.brokerExchangeAutoDelete = qpidGetBool(pRow, "autoDelete");

        strncpy(qmfData.brokerExchangeAltExchange,
        		qpidGetString(pRow, "altExchange"), 254);
        qmfData.brokerExchangeAltExchange_len = strlen(qmfData.brokerExchangeAltExchange) + 1;

        strncpy(qmfData.brokerExchangeArguments,
        		qpidGetString(pRow, "arguments"), 65534);
        qmfData.brokerExchangeArguments_len = strlen(qmfData.brokerExchangeArguments) + 1;

        qmfData.brokerExchangeProducerCount = qpidGetU32(pRow, "producerCount");
        qmfData.brokerExchangeProducerCountHi = qpidGetU32(pRow, "producerCountHi");
        qmfData.brokerExchangeProducerCountLow = qpidGetU32(pRow, "producerCountLow");

        qmfData.brokerExchangeBindingCount = qpidGetU32(pRow, "bindingCount");
        qmfData.brokerExchangeBindingCountHi = qpidGetU32(pRow, "bindingCountHi");
        qmfData.brokerExchangeBindingCountLow = qpidGetU32(pRow, "bindingCountLow");

        u64Data = qpidGetU64(pRow, "msgReceives");
        qmfData.brokerExchangeMsgReceives.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeMsgReceives.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "msgDrops");
        qmfData.brokerExchangeMsgDrops.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeMsgDrops.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "msgRoutes");
        qmfData.brokerExchangeMsgRoutes.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeMsgRoutes.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "byteReceives");
        qmfData.brokerExchangeByteReceives.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeByteReceives.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "byteDrops");
        qmfData.brokerExchangeByteDrops.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeByteDrops.low = LOWLONG(u64Data);

        u64Data = qpidGetU64(pRow, "byteRoutes");
        qmfData.brokerExchangeByteRoutes.high = HIGHLONG(u64Data);
        qmfData.brokerExchangeByteRoutes.low = LOWLONG(u64Data);

        /*
         * set indexes in new brokerExchangeTable rowreq context.
         * data context will be set from the param (unless NULL,
         *      in which case a new data context will be allocated)
         */
        rowreq_ctx = brokerExchangeTable_allocate_rowreq_ctx(NULL);
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            return MFD_RESOURCE_UNAVAILABLE;
        }
        if (MFD_SUCCESS !=
            brokerExchangeTable_indexes_set(rowreq_ctx,
                                            brokerExchangeInternalIndex)) {
            snmp_log(LOG_ERR,
                     "error setting index while loading "
                     "brokerExchangeTable data.\n");
            brokerExchangeTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }
        ++brokerExchangeInternalIndex;

        /*
         * Populate data context here.
         */
        /*
         * TRANSIENT or semi-TRANSIENT data:
         * copy data or save any info needed to do it in row_prep.
         */
        /*
         * setup/save data for brokerExchangeVhostRef
         * brokerExchangeVhostRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerExchangeVhostRef data
         */
        if (NULL == rowreq_ctx->data.brokerExchangeVhostRef) {
            snmp_log(LOG_ERR,
                     "brokerExchangeVhostRef is null\n");
        }

        if (rowreq_ctx->data.brokerExchangeVhostRef_len <
            		qmfData.brokerExchangeVhostRef_len *
            		sizeof(qmfData.brokerExchangeVhostRef[0])) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerExchangeVhostRef)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerExchangeVhostRef_len =
        		qmfData.brokerExchangeVhostRef_len * sizeof(qmfData.brokerExchangeVhostRef[0]);
        memcpy(rowreq_ctx->data.brokerExchangeVhostRef,
        		qmfData.brokerExchangeVhostRef,
        		qmfData.brokerExchangeVhostRef_len *
               sizeof(qmfData.brokerExchangeVhostRef[0]));

        /*
         * setup/save data for brokerExchangeName
         * brokerExchangeName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerExchangeName data
         */
        if ((NULL == rowreq_ctx->data.brokerExchangeName) ||
            (rowreq_ctx->data.brokerExchangeName_len <
             (qmfData.brokerExchangeName_len * sizeof(qmfData.brokerExchangeName[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerExchangeName)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerExchangeName_len =
        		qmfData.brokerExchangeName_len * sizeof(qmfData.brokerExchangeName[0]);
        memcpy(rowreq_ctx->data.brokerExchangeName, qmfData.brokerExchangeName,
        		qmfData.brokerExchangeName_len * sizeof(qmfData.brokerExchangeName[0]));

        /*
         * setup/save data for brokerExchangeType
         * brokerExchangeType(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerExchangeType data
         */
        if ((NULL == rowreq_ctx->data.brokerExchangeType) ||
            (rowreq_ctx->data.brokerExchangeType_len <
             (qmfData.brokerExchangeType_len * sizeof(qmfData.brokerExchangeType[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerExchangeType)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerExchangeType_len =
        		qmfData.brokerExchangeType_len * sizeof(qmfData.brokerExchangeType[0]);
        memcpy(rowreq_ctx->data.brokerExchangeType, qmfData.brokerExchangeType,
        		qmfData.brokerExchangeType_len * sizeof(qmfData.brokerExchangeType[0]));

        /*
         * setup/save data for brokerExchangeDurable
         * brokerExchangeDurable(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeDurable =
        		qmfData.brokerExchangeDurable;

        /*
         * setup/save data for brokerExchangeAutoDelete
         * brokerExchangeAutoDelete(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeAutoDelete =
        		qmfData.brokerExchangeAutoDelete;

        /*
         * setup/save data for brokerExchangeAltExchange
         * brokerExchangeAltExchange(6)/ObjId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerExchangeAltExchange data
         */
        if ((NULL == rowreq_ctx->data.brokerExchangeAltExchange) ||
            (rowreq_ctx->data.brokerExchangeAltExchange_len <
             (qmfData.brokerExchangeAltExchange_len *
              sizeof(qmfData.brokerExchangeAltExchange[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerExchangeAltExchange)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerExchangeAltExchange_len =
        		qmfData.brokerExchangeAltExchange_len *
            sizeof(qmfData.brokerExchangeAltExchange[0]);
        memcpy(rowreq_ctx->data.brokerExchangeAltExchange,
        		qmfData.brokerExchangeAltExchange,
        		qmfData.brokerExchangeAltExchange_len *
               sizeof(qmfData.brokerExchangeAltExchange[0]));

        /*
         * setup/save data for brokerExchangeArguments
         * brokerExchangeArguments(7)/Map/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
    /** no mapping */
        /*
         * make sure there is enough space for brokerExchangeArguments data
         */
        if ((NULL == rowreq_ctx->data.brokerExchangeArguments) ||
            (rowreq_ctx->data.brokerExchangeArguments_len <
             (qmfData.brokerExchangeArguments_len *
              sizeof(qmfData.brokerExchangeArguments[0])))) {
            snmp_log(LOG_ERR,
                     "not enough space for value (brokerExchangeArguments)\n");
            return MFD_ERROR;
        }
        rowreq_ctx->data.brokerExchangeArguments_len =
        		qmfData.brokerExchangeArguments_len *
            sizeof(qmfData.brokerExchangeArguments[0]);
        memcpy(rowreq_ctx->data.brokerExchangeArguments,
        		qmfData.brokerExchangeArguments,
        		qmfData.brokerExchangeArguments_len *
               sizeof(qmfData.brokerExchangeArguments[0]));

        /*
         * setup/save data for brokerExchangeProducerCount
         * brokerExchangeProducerCount(8)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeProducerCount =
        		qmfData.brokerExchangeProducerCount;

        /*
         * setup/save data for brokerExchangeProducerCountHi
         * brokerExchangeProducerCountHi(9)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeProducerCountHi =
        		qmfData.brokerExchangeProducerCountHi;

        /*
         * setup/save data for brokerExchangeProducerCountLow
         * brokerExchangeProducerCountLow(10)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeProducerCountLow =
        		qmfData.brokerExchangeProducerCountLow;

        /*
         * setup/save data for brokerExchangeBindingCount
         * brokerExchangeBindingCount(11)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeBindingCount =
        		qmfData.brokerExchangeBindingCount;

        /*
         * setup/save data for brokerExchangeBindingCountHi
         * brokerExchangeBindingCountHi(12)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeBindingCountHi =
        		qmfData.brokerExchangeBindingCountHi;

        /*
         * setup/save data for brokerExchangeBindingCountLow
         * brokerExchangeBindingCountLow(13)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeBindingCountLow =
        		qmfData.brokerExchangeBindingCountLow;

        /*
         * setup/save data for brokerExchangeMsgReceives
         * brokerExchangeMsgReceives(14)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeMsgReceives.high =
        		qmfData.brokerExchangeMsgReceives.high;
        rowreq_ctx->data.brokerExchangeMsgReceives.low =
        		qmfData.brokerExchangeMsgReceives.low;

        /*
         * setup/save data for brokerExchangeMsgDrops
         * brokerExchangeMsgDrops(15)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeMsgDrops.high =
        		qmfData.brokerExchangeMsgDrops.high;
        rowreq_ctx->data.brokerExchangeMsgDrops.low =
        		qmfData.brokerExchangeMsgDrops.low;

        /*
         * setup/save data for brokerExchangeMsgRoutes
         * brokerExchangeMsgRoutes(16)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeMsgRoutes.high =
        		qmfData.brokerExchangeMsgRoutes.high;
        rowreq_ctx->data.brokerExchangeMsgRoutes.low =
        		qmfData.brokerExchangeMsgRoutes.low;

        /*
         * setup/save data for brokerExchangeByteReceives
         * brokerExchangeByteReceives(17)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeByteReceives.high =
        		qmfData.brokerExchangeByteReceives.high;
        rowreq_ctx->data.brokerExchangeByteReceives.low =
        		qmfData.brokerExchangeByteReceives.low;

        /*
         * setup/save data for brokerExchangeByteDrops
         * brokerExchangeByteDrops(18)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeByteDrops.high =
        		qmfData.brokerExchangeByteDrops.high;
        rowreq_ctx->data.brokerExchangeByteDrops.low =
        		qmfData.brokerExchangeByteDrops.low;

        /*
         * setup/save data for brokerExchangeByteRoutes
         * brokerExchangeByteRoutes(19)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
    /** no mapping */
        rowreq_ctx->data.brokerExchangeByteRoutes.high =
        		qmfData.brokerExchangeByteRoutes.high;
        rowreq_ctx->data.brokerExchangeByteRoutes.low =
        		qmfData.brokerExchangeByteRoutes.low;


        /*
         * insert into table container
         */
        CONTAINER_INSERT(container, rowreq_ctx);
        ++count;

        qpidReleaseDataRow(pRow);
    }

    qpidRelease(pEvent);

    DEBUGMSGT(("verbose:brokerExchangeTable:brokerExchangeTable_container_load", "inserted %d records\n", (int)count));

    return MFD_SUCCESS;
}                               /* brokerExchangeTable_container_load */

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
brokerExchangeTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_container_free", "called\n"));

    /*
     * TODO:380:M: Free brokerExchangeTable container data.
     */
}                               /* brokerExchangeTable_container_free */

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
brokerExchangeTable_row_prep(brokerExchangeTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_row_prep",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* brokerExchangeTable_row_prep */

/*
 * TODO:420:r: Implement brokerExchangeTable index validation.
 */
/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerExchangeEntry.brokerExchangeInternalIndex
 * brokerExchangeInternalIndex is subid 20 of brokerExchangeEntry.
 * Its status is Current, and its access level is NoAccess.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.7.1.1.20
 * Description:
Internal index for exchange table
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
 * NOTE: NODE brokerExchangeInternalIndex IS NOT ACCESSIBLE
 *
 *
 */
/**
 * check validity of brokerExchangeInternalIndex index portion
 *
 * @retval MFD_SUCCESS   : the incoming value is legal
 * @retval MFD_ERROR     : the incoming value is NOT legal
 *
 * @note this is not the place to do any checks for the sanity
 *       of multiple indexes. Those types of checks should be done in the
 *       brokerExchangeTable_validate_index() function.
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
brokerExchangeInternalIndex_check_index(brokerExchangeTable_rowreq_ctx *
                                        rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeInternalIndex_check_index", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:426:M: |-> Check brokerExchangeTable index brokerExchangeInternalIndex.
     * check that index value in the table context is legal.
     * (rowreq_ctx->tbl_index.brokerExchangeInternalIndex)
     */

    return MFD_SUCCESS;         /* brokerExchangeInternalIndex index ok */
}                               /* brokerExchangeInternalIndex_check_index */

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
 * @param brokerExchangeTable_reg
 *        Pointer to the user registration data
 * @param brokerExchangeTable_rowreq_ctx
 *        Pointer to the users context.
 * @retval MFD_SUCCESS            : success
 * @retval MFD_CANNOT_CREATE_NOW  : index not valid right now
 * @retval MFD_CANNOT_CREATE_EVER : index never valid
 */
int
brokerExchangeTable_validate_index(brokerExchangeTable_registration *
                                   brokerExchangeTable_reg,
                                   brokerExchangeTable_rowreq_ctx *
                                   rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerExchangeTable:brokerExchangeTable_validate_index", "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:430:M: |-> Validate potential brokerExchangeTable index.
     */
    if (0) {
        snmp_log(LOG_WARNING, "invalid index for a new row in the "
                 "brokerExchangeTable table.\n");
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
}                               /* brokerExchangeTable_validate_index */

/** @} */
