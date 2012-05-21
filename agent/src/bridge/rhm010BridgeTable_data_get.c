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

/*
 * include our parent header 
 */
#include "rhm010BridgeTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement rhm010BridgeTable get routines.
 * TODO:240:M: Implement rhm010BridgeTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table rhm010BridgeTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * MRG-MESSAGING-MIB::rhm010BridgeTable is subid 1 of rhm010Bridges.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1, length: 12
 */

/*
 * ---------------------------------------------------------------------
 * * TODO:200:r: Implement rhm010BridgeTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param rhm010BridgeInternalIndex_val
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
rhm010BridgeTable_indexes_set_tbl_idx(rhm010BridgeTable_mib_index *
                                      tbl_idx,
                                      u_long rhm010BridgeInternalIndex_val)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_indexes_set_tbl_idx", "called\n"));

    /*
     * rhm010BridgeInternalIndex(13)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h 
     */
    tbl_idx->rhm010BridgeInternalIndex = rhm010BridgeInternalIndex_val;


    return MFD_SUCCESS;
}                               /* rhm010BridgeTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
rhm010BridgeTable_indexes_set(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                              u_long rhm010BridgeInternalIndex_val)
{
    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTable_indexes_set",
                "called\n"));

    if (MFD_SUCCESS !=
        rhm010BridgeTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx,
                                              rhm010BridgeInternalIndex_val))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if (0 != rhm010BridgeTable_index_to_oid(&rowreq_ctx->oid_idx,
                                            &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
}                               /* rhm010BridgeTable_indexes_set */


/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeLinkRef
 * rhm010BridgeLinkRef is subid 1 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.1
 * Description:
Bridge linkRef
                     Additional info ( nodeType:property, references:Link, index:y, parentRef:y )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is ObjId (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the rhm010BridgeLinkRef data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeLinkRef_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeLinkRef_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeLinkRef.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeLinkRef_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeLinkRef_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeLinkRef_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                        char **rhm010BridgeLinkRef_val_ptr_ptr,
                        size_t *rhm010BridgeLinkRef_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeLinkRef_val_ptr_ptr)
                   && (NULL != *rhm010BridgeLinkRef_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeLinkRef_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeLinkRef_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeLinkRef data.
     * copy (* rhm010BridgeLinkRef_val_ptr_ptr ) data and (* rhm010BridgeLinkRef_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeLinkRef data
     */
    if ((NULL == (*rhm010BridgeLinkRef_val_ptr_ptr)) ||
        ((*rhm010BridgeLinkRef_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeLinkRef_len *
          sizeof(rowreq_ctx->data.rhm010BridgeLinkRef[0])))) {
        /*
         * allocate space for rhm010BridgeLinkRef data
         */
        (*rhm010BridgeLinkRef_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeLinkRef_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeLinkRef[0]));
        if (NULL == (*rhm010BridgeLinkRef_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeLinkRef)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeLinkRef_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeLinkRef_len *
        sizeof(rowreq_ctx->data.rhm010BridgeLinkRef[0]);
    memcpy((*rhm010BridgeLinkRef_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeLinkRef,
           rowreq_ctx->data.rhm010BridgeLinkRef_len *
           sizeof(rowreq_ctx->data.rhm010BridgeLinkRef[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeLinkRef_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeChannelId
 * rhm010BridgeChannelId is subid 2 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.2
 * Description:
Bridge channelId
                     Additional info ( nodeType:property, index:y )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   1
 *   settable   1
 *   hint: d
 *
 *
 * Its syntax is Uint16 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rhm010BridgeChannelId data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeChannelId_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeChannelId_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                          long *rhm010BridgeChannelId_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeChannelId_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeChannelId_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeChannelId data.
     * copy (* rhm010BridgeChannelId_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeChannelId_val_ptr) =
        rowreq_ctx->data.rhm010BridgeChannelId;

    return MFD_SUCCESS;
}                               /* rhm010BridgeChannelId_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeDurable
 * rhm010BridgeDurable is subid 3 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.3
 * Description:
Bridge durable
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rhm010BridgeDurable data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeDurable_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeDurable_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                        u_long * rhm010BridgeDurable_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeDurable_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeDurable_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeDurable data.
     * copy (* rhm010BridgeDurable_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeDurable_val_ptr) = rowreq_ctx->data.rhm010BridgeDurable;

    return MFD_SUCCESS;
}                               /* rhm010BridgeDurable_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeSrc
 * rhm010BridgeSrc is subid 4 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.4
 * Description:
Bridge src
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is Sstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the rhm010BridgeSrc data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeSrc_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeSrc_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeSrc.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeSrc_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeSrc_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeSrc_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                    char **rhm010BridgeSrc_val_ptr_ptr,
                    size_t *rhm010BridgeSrc_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeSrc_val_ptr_ptr)
                   && (NULL != *rhm010BridgeSrc_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeSrc_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeSrc_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeSrc data.
     * copy (* rhm010BridgeSrc_val_ptr_ptr ) data and (* rhm010BridgeSrc_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeSrc data
     */
    if ((NULL == (*rhm010BridgeSrc_val_ptr_ptr)) ||
        ((*rhm010BridgeSrc_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeSrc_len *
          sizeof(rowreq_ctx->data.rhm010BridgeSrc[0])))) {
        /*
         * allocate space for rhm010BridgeSrc data
         */
        (*rhm010BridgeSrc_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeSrc_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeSrc[0]));
        if (NULL == (*rhm010BridgeSrc_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeSrc)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeSrc_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeSrc_len *
        sizeof(rowreq_ctx->data.rhm010BridgeSrc[0]);
    memcpy((*rhm010BridgeSrc_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeSrc,
           rowreq_ctx->data.rhm010BridgeSrc_len *
           sizeof(rowreq_ctx->data.rhm010BridgeSrc[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeSrc_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeDest
 * rhm010BridgeDest is subid 5 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.5
 * Description:
Bridge dest
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is Sstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the rhm010BridgeDest data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeDest_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeDest_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeDest.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeDest_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeDest_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeDest_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                     char **rhm010BridgeDest_val_ptr_ptr,
                     size_t *rhm010BridgeDest_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeDest_val_ptr_ptr)
                   && (NULL != *rhm010BridgeDest_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeDest_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeDest_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeDest data.
     * copy (* rhm010BridgeDest_val_ptr_ptr ) data and (* rhm010BridgeDest_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeDest data
     */
    if ((NULL == (*rhm010BridgeDest_val_ptr_ptr)) ||
        ((*rhm010BridgeDest_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeDest_len *
          sizeof(rowreq_ctx->data.rhm010BridgeDest[0])))) {
        /*
         * allocate space for rhm010BridgeDest data
         */
        (*rhm010BridgeDest_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeDest_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeDest[0]));
        if (NULL == (*rhm010BridgeDest_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeDest)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeDest_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeDest_len *
        sizeof(rowreq_ctx->data.rhm010BridgeDest[0]);
    memcpy((*rhm010BridgeDest_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeDest,
           rowreq_ctx->data.rhm010BridgeDest_len *
           sizeof(rowreq_ctx->data.rhm010BridgeDest[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeDest_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeKey
 * rhm010BridgeKey is subid 6 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.6
 * Description:
Bridge key
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 65535a
 *
 * Ranges:  0 - 65535;
 *
 * Its syntax is Lstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 65535)
 */
/**
 * Extract the current value of the rhm010BridgeKey data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeKey_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeKey_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeKey.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeKey_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeKey_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeKey_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                    char **rhm010BridgeKey_val_ptr_ptr,
                    size_t *rhm010BridgeKey_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeKey_val_ptr_ptr)
                   && (NULL != *rhm010BridgeKey_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeKey_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeKey_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeKey data.
     * copy (* rhm010BridgeKey_val_ptr_ptr ) data and (* rhm010BridgeKey_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeKey data
     */
    if ((NULL == (*rhm010BridgeKey_val_ptr_ptr)) ||
        ((*rhm010BridgeKey_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeKey_len *
          sizeof(rowreq_ctx->data.rhm010BridgeKey[0])))) {
        /*
         * allocate space for rhm010BridgeKey data
         */
        (*rhm010BridgeKey_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeKey_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeKey[0]));
        if (NULL == (*rhm010BridgeKey_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeKey)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeKey_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeKey_len *
        sizeof(rowreq_ctx->data.rhm010BridgeKey[0]);
    memcpy((*rhm010BridgeKey_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeKey,
           rowreq_ctx->data.rhm010BridgeKey_len *
           sizeof(rowreq_ctx->data.rhm010BridgeKey[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeKey_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeSrcIsQueue
 * rhm010BridgeSrcIsQueue is subid 7 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.7
 * Description:
Bridge srcIsQueue
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rhm010BridgeSrcIsQueue data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeSrcIsQueue_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeSrcIsQueue_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                           u_long * rhm010BridgeSrcIsQueue_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeSrcIsQueue_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeSrcIsQueue_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeSrcIsQueue data.
     * copy (* rhm010BridgeSrcIsQueue_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeSrcIsQueue_val_ptr) =
        rowreq_ctx->data.rhm010BridgeSrcIsQueue;

    return MFD_SUCCESS;
}                               /* rhm010BridgeSrcIsQueue_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeSrcIsLocal
 * rhm010BridgeSrcIsLocal is subid 8 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.8
 * Description:
Bridge srcIsLocal
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rhm010BridgeSrcIsLocal data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeSrcIsLocal_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeSrcIsLocal_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                           u_long * rhm010BridgeSrcIsLocal_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeSrcIsLocal_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeSrcIsLocal_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeSrcIsLocal data.
     * copy (* rhm010BridgeSrcIsLocal_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeSrcIsLocal_val_ptr) =
        rowreq_ctx->data.rhm010BridgeSrcIsLocal;

    return MFD_SUCCESS;
}                               /* rhm010BridgeSrcIsLocal_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeTag
 * rhm010BridgeTag is subid 9 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.9
 * Description:
Bridge tag
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is Sstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the rhm010BridgeTag data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeTag_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeTag_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeTag.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeTag_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeTag_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeTag_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                    char **rhm010BridgeTag_val_ptr_ptr,
                    size_t *rhm010BridgeTag_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeTag_val_ptr_ptr)
                   && (NULL != *rhm010BridgeTag_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeTag_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeTag_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeTag data.
     * copy (* rhm010BridgeTag_val_ptr_ptr ) data and (* rhm010BridgeTag_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeTag data
     */
    if ((NULL == (*rhm010BridgeTag_val_ptr_ptr)) ||
        ((*rhm010BridgeTag_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeTag_len *
          sizeof(rowreq_ctx->data.rhm010BridgeTag[0])))) {
        /*
         * allocate space for rhm010BridgeTag data
         */
        (*rhm010BridgeTag_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeTag_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeTag[0]));
        if (NULL == (*rhm010BridgeTag_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeTag)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeTag_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeTag_len *
        sizeof(rowreq_ctx->data.rhm010BridgeTag[0]);
    memcpy((*rhm010BridgeTag_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeTag,
           rowreq_ctx->data.rhm010BridgeTag_len *
           sizeof(rowreq_ctx->data.rhm010BridgeTag[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeTag_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeExcludes
 * rhm010BridgeExcludes is subid 10 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.10
 * Description:
Bridge excludes
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is Sstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the rhm010BridgeExcludes data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeExcludes_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param rhm010BridgeExcludes_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by rhm010BridgeExcludes.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*rhm010BridgeExcludes_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update rhm010BridgeExcludes_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
rhm010BridgeExcludes_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                         char **rhm010BridgeExcludes_val_ptr_ptr,
                         size_t *rhm010BridgeExcludes_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != rhm010BridgeExcludes_val_ptr_ptr)
                   && (NULL != *rhm010BridgeExcludes_val_ptr_ptr));
    netsnmp_assert(NULL != rhm010BridgeExcludes_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeExcludes_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeExcludes data.
     * copy (* rhm010BridgeExcludes_val_ptr_ptr ) data and (* rhm010BridgeExcludes_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for rhm010BridgeExcludes data
     */
    if ((NULL == (*rhm010BridgeExcludes_val_ptr_ptr)) ||
        ((*rhm010BridgeExcludes_val_ptr_len_ptr) <
         (rowreq_ctx->data.rhm010BridgeExcludes_len *
          sizeof(rowreq_ctx->data.rhm010BridgeExcludes[0])))) {
        /*
         * allocate space for rhm010BridgeExcludes data
         */
        (*rhm010BridgeExcludes_val_ptr_ptr) =
            malloc(rowreq_ctx->data.rhm010BridgeExcludes_len *
                   sizeof(rowreq_ctx->data.rhm010BridgeExcludes[0]));
        if (NULL == (*rhm010BridgeExcludes_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.rhm010BridgeExcludes)\n");
            return MFD_ERROR;
        }
    }
    (*rhm010BridgeExcludes_val_ptr_len_ptr) =
        rowreq_ctx->data.rhm010BridgeExcludes_len *
        sizeof(rowreq_ctx->data.rhm010BridgeExcludes[0]);
    memcpy((*rhm010BridgeExcludes_val_ptr_ptr),
           rowreq_ctx->data.rhm010BridgeExcludes,
           rowreq_ctx->data.rhm010BridgeExcludes_len *
           sizeof(rowreq_ctx->data.rhm010BridgeExcludes[0]));

    return MFD_SUCCESS;
}                               /* rhm010BridgeExcludes_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeDynamic
 * rhm010BridgeDynamic is subid 11 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.11
 * Description:
Bridge dynamic
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the rhm010BridgeDynamic data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeDynamic_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeDynamic_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                        u_long * rhm010BridgeDynamic_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeDynamic_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeDynamic_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeDynamic data.
     * copy (* rhm010BridgeDynamic_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeDynamic_val_ptr) = rowreq_ctx->data.rhm010BridgeDynamic;

    return MFD_SUCCESS;
}                               /* rhm010BridgeDynamic_get */

/*---------------------------------------------------------------------
 * MRG-MESSAGING-MIB::rhm010BridgeEntry.rhm010BridgeSync
 * rhm010BridgeSync is subid 12 of rhm010BridgeEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.2312.5672.1.1.12.1.1.12
 * Description:
Bridge sync
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   1
 *   settable   1
 *   hint: d
 *
 *
 * Its syntax is Uint16 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the rhm010BridgeSync data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param rhm010BridgeSync_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
rhm010BridgeSync_get(rhm010BridgeTable_rowreq_ctx * rowreq_ctx,
                     long *rhm010BridgeSync_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rhm010BridgeSync_val_ptr);


    DEBUGMSGTL(("verbose:rhm010BridgeTable:rhm010BridgeSync_get",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the rhm010BridgeSync data.
     * copy (* rhm010BridgeSync_val_ptr ) from rowreq_ctx->data
     */
    (*rhm010BridgeSync_val_ptr) = rowreq_ctx->data.rhm010BridgeSync;

    return MFD_SUCCESS;
}                               /* rhm010BridgeSync_get */



/** @} */
