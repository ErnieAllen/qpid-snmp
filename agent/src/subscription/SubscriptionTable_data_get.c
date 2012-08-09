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
#include "SubscriptionTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement brokerSubscriptionTable get routines.
 * TODO:240:M: Implement brokerSubscriptionTable mapping routines (if any).
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
 *** Table brokerSubscriptionTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * QPID-MESSAGING-MIB::brokerSubscriptionTable is subid 1 of brokerSubscriptions.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1, length: 12
 */

/*
 * ---------------------------------------------------------------------
 * * TODO:200:r: Implement brokerSubscriptionTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param brokerSubscriptionInternalIndex_val
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
brokerSubscriptionTable_indexes_set_tbl_idx
    (brokerSubscriptionTable_mib_index * tbl_idx,
     u_long brokerSubscriptionInternalIndex_val)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_indexes_set_tbl_idx", "called\n"));

    /*
     * brokerSubscriptionInternalIndex(10)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h 
     */
    tbl_idx->brokerSubscriptionInternalIndex =
        brokerSubscriptionInternalIndex_val;


    return MFD_SUCCESS;
}                               /* brokerSubscriptionTable_indexes_set_tbl_idx */

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
brokerSubscriptionTable_indexes_set(brokerSubscriptionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long
                                    brokerSubscriptionInternalIndex_val)
{
    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionTable_indexes_set", "called\n"));

    if (MFD_SUCCESS !=
        brokerSubscriptionTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx,
                                                    brokerSubscriptionInternalIndex_val))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if (0 != brokerSubscriptionTable_index_to_oid(&rowreq_ctx->oid_idx,
                                                  &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
}                               /* brokerSubscriptionTable_indexes_set */


/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionSessionRef
 * brokerSubscriptionSessionRef is subid 1 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.1
 * Description:
Subscription sessionRef
                     Additional info ( nodeType:property, references:Session, index:y, parentRef:y )
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
 * Extract the current value of the brokerSubscriptionSessionRef data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionSessionRef_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param brokerSubscriptionSessionRef_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by brokerSubscriptionSessionRef.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*brokerSubscriptionSessionRef_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update brokerSubscriptionSessionRef_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
brokerSubscriptionSessionRef_get(brokerSubscriptionTable_rowreq_ctx *
                                 rowreq_ctx,
                                 char
                                 **brokerSubscriptionSessionRef_val_ptr_ptr,
                                 size_t
                                 *brokerSubscriptionSessionRef_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != brokerSubscriptionSessionRef_val_ptr_ptr)
                   && (NULL != *brokerSubscriptionSessionRef_val_ptr_ptr));
    netsnmp_assert(NULL != brokerSubscriptionSessionRef_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionSessionRef_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionSessionRef data.
     * copy (* brokerSubscriptionSessionRef_val_ptr_ptr ) data and (* brokerSubscriptionSessionRef_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for brokerSubscriptionSessionRef data
     */
    if ((NULL == (*brokerSubscriptionSessionRef_val_ptr_ptr)) ||
        ((*brokerSubscriptionSessionRef_val_ptr_len_ptr) <
         (rowreq_ctx->data.brokerSubscriptionSessionRef_len *
          sizeof(rowreq_ctx->data.brokerSubscriptionSessionRef[0])))) {
        /*
         * allocate space for brokerSubscriptionSessionRef data
         */
        (*brokerSubscriptionSessionRef_val_ptr_ptr) =
            malloc(rowreq_ctx->data.brokerSubscriptionSessionRef_len *
                   sizeof(rowreq_ctx->data.
                          brokerSubscriptionSessionRef[0]));
        if (NULL == (*brokerSubscriptionSessionRef_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.brokerSubscriptionSessionRef)\n");
            return MFD_ERROR;
        }
    }
    (*brokerSubscriptionSessionRef_val_ptr_len_ptr) =
        rowreq_ctx->data.brokerSubscriptionSessionRef_len *
        sizeof(rowreq_ctx->data.brokerSubscriptionSessionRef[0]);
    memcpy((*brokerSubscriptionSessionRef_val_ptr_ptr),
           rowreq_ctx->data.brokerSubscriptionSessionRef,
           rowreq_ctx->data.brokerSubscriptionSessionRef_len *
           sizeof(rowreq_ctx->data.brokerSubscriptionSessionRef[0]));

    return MFD_SUCCESS;
}                               /* brokerSubscriptionSessionRef_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionQueueRef
 * brokerSubscriptionQueueRef is subid 2 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.2
 * Description:
Subscription queueRef
                     Additional info ( nodeType:property, references:Queue, index:y )
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
 * Extract the current value of the brokerSubscriptionQueueRef data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionQueueRef_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param brokerSubscriptionQueueRef_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by brokerSubscriptionQueueRef.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*brokerSubscriptionQueueRef_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update brokerSubscriptionQueueRef_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
brokerSubscriptionQueueRef_get(brokerSubscriptionTable_rowreq_ctx *
                               rowreq_ctx,
                               char
                               **brokerSubscriptionQueueRef_val_ptr_ptr,
                               size_t
                               *brokerSubscriptionQueueRef_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != brokerSubscriptionQueueRef_val_ptr_ptr)
                   && (NULL != *brokerSubscriptionQueueRef_val_ptr_ptr));
    netsnmp_assert(NULL != brokerSubscriptionQueueRef_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionQueueRef_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionQueueRef data.
     * copy (* brokerSubscriptionQueueRef_val_ptr_ptr ) data and (* brokerSubscriptionQueueRef_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for brokerSubscriptionQueueRef data
     */
    if ((NULL == (*brokerSubscriptionQueueRef_val_ptr_ptr)) ||
        ((*brokerSubscriptionQueueRef_val_ptr_len_ptr) <
         (rowreq_ctx->data.brokerSubscriptionQueueRef_len *
          sizeof(rowreq_ctx->data.brokerSubscriptionQueueRef[0])))) {
        /*
         * allocate space for brokerSubscriptionQueueRef data
         */
        (*brokerSubscriptionQueueRef_val_ptr_ptr) =
            malloc(rowreq_ctx->data.brokerSubscriptionQueueRef_len *
                   sizeof(rowreq_ctx->data.brokerSubscriptionQueueRef[0]));
        if (NULL == (*brokerSubscriptionQueueRef_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.brokerSubscriptionQueueRef)\n");
            return MFD_ERROR;
        }
    }
    (*brokerSubscriptionQueueRef_val_ptr_len_ptr) =
        rowreq_ctx->data.brokerSubscriptionQueueRef_len *
        sizeof(rowreq_ctx->data.brokerSubscriptionQueueRef[0]);
    memcpy((*brokerSubscriptionQueueRef_val_ptr_ptr),
           rowreq_ctx->data.brokerSubscriptionQueueRef,
           rowreq_ctx->data.brokerSubscriptionQueueRef_len *
           sizeof(rowreq_ctx->data.brokerSubscriptionQueueRef[0]));

    return MFD_SUCCESS;
}                               /* brokerSubscriptionQueueRef_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionName
 * brokerSubscriptionName is subid 3 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.3
 * Description:
Subscription name
                     Additional info ( nodeType:property, index:y )
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
 * Extract the current value of the brokerSubscriptionName data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionName_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param brokerSubscriptionName_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by brokerSubscriptionName.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*brokerSubscriptionName_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update brokerSubscriptionName_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
brokerSubscriptionName_get(brokerSubscriptionTable_rowreq_ctx * rowreq_ctx,
                           char **brokerSubscriptionName_val_ptr_ptr,
                           size_t *brokerSubscriptionName_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != brokerSubscriptionName_val_ptr_ptr)
                   && (NULL != *brokerSubscriptionName_val_ptr_ptr));
    netsnmp_assert(NULL != brokerSubscriptionName_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionName_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionName data.
     * copy (* brokerSubscriptionName_val_ptr_ptr ) data and (* brokerSubscriptionName_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for brokerSubscriptionName data
     */
    if ((NULL == (*brokerSubscriptionName_val_ptr_ptr)) ||
        ((*brokerSubscriptionName_val_ptr_len_ptr) <
         (rowreq_ctx->data.brokerSubscriptionName_len *
          sizeof(rowreq_ctx->data.brokerSubscriptionName[0])))) {
        /*
         * allocate space for brokerSubscriptionName data
         */
        (*brokerSubscriptionName_val_ptr_ptr) =
            malloc(rowreq_ctx->data.brokerSubscriptionName_len *
                   sizeof(rowreq_ctx->data.brokerSubscriptionName[0]));
        if (NULL == (*brokerSubscriptionName_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.brokerSubscriptionName)\n");
            return MFD_ERROR;
        }
    }
    (*brokerSubscriptionName_val_ptr_len_ptr) =
        rowreq_ctx->data.brokerSubscriptionName_len *
        sizeof(rowreq_ctx->data.brokerSubscriptionName[0]);
    memcpy((*brokerSubscriptionName_val_ptr_ptr),
           rowreq_ctx->data.brokerSubscriptionName,
           rowreq_ctx->data.brokerSubscriptionName_len *
           sizeof(rowreq_ctx->data.brokerSubscriptionName[0]));

    return MFD_SUCCESS;
}                               /* brokerSubscriptionName_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionBrowsing
 * brokerSubscriptionBrowsing is subid 4 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.4
 * Description:
Subscription browsing
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
 * Extract the current value of the brokerSubscriptionBrowsing data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionBrowsing_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
brokerSubscriptionBrowsing_get(brokerSubscriptionTable_rowreq_ctx *
                               rowreq_ctx,
                               u_long * brokerSubscriptionBrowsing_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != brokerSubscriptionBrowsing_val_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionBrowsing_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionBrowsing data.
     * copy (* brokerSubscriptionBrowsing_val_ptr ) from rowreq_ctx->data
     */
    (*brokerSubscriptionBrowsing_val_ptr) =
        rowreq_ctx->data.brokerSubscriptionBrowsing;

    return MFD_SUCCESS;
}                               /* brokerSubscriptionBrowsing_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionAcknowledged
 * brokerSubscriptionAcknowledged is subid 5 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.5
 * Description:
Subscription acknowledged
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
 * Extract the current value of the brokerSubscriptionAcknowledged data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionAcknowledged_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
brokerSubscriptionAcknowledged_get(brokerSubscriptionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   u_long *
                                   brokerSubscriptionAcknowledged_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != brokerSubscriptionAcknowledged_val_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionAcknowledged_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionAcknowledged data.
     * copy (* brokerSubscriptionAcknowledged_val_ptr ) from rowreq_ctx->data
     */
    (*brokerSubscriptionAcknowledged_val_ptr) =
        rowreq_ctx->data.brokerSubscriptionAcknowledged;

    return MFD_SUCCESS;
}                               /* brokerSubscriptionAcknowledged_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionExclusive
 * brokerSubscriptionExclusive is subid 6 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.6
 * Description:
Subscription exclusive
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
 * Extract the current value of the brokerSubscriptionExclusive data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionExclusive_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
brokerSubscriptionExclusive_get(brokerSubscriptionTable_rowreq_ctx *
                                rowreq_ctx,
                                u_long *
                                brokerSubscriptionExclusive_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != brokerSubscriptionExclusive_val_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionExclusive_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionExclusive data.
     * copy (* brokerSubscriptionExclusive_val_ptr ) from rowreq_ctx->data
     */
    (*brokerSubscriptionExclusive_val_ptr) =
        rowreq_ctx->data.brokerSubscriptionExclusive;

    return MFD_SUCCESS;
}                               /* brokerSubscriptionExclusive_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionCreditMode
 * brokerSubscriptionCreditMode is subid 7 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.7
 * Description:
WINDOW or CREDIT
                     Additional info ( nodeType:property )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is Sstr (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * Extract the current value of the brokerSubscriptionCreditMode data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionCreditMode_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param brokerSubscriptionCreditMode_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by brokerSubscriptionCreditMode.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*brokerSubscriptionCreditMode_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update brokerSubscriptionCreditMode_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
brokerSubscriptionCreditMode_get(brokerSubscriptionTable_rowreq_ctx *
                                 rowreq_ctx,
                                 char
                                 **brokerSubscriptionCreditMode_val_ptr_ptr,
                                 size_t
                                 *brokerSubscriptionCreditMode_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != brokerSubscriptionCreditMode_val_ptr_ptr)
                   && (NULL != *brokerSubscriptionCreditMode_val_ptr_ptr));
    netsnmp_assert(NULL != brokerSubscriptionCreditMode_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionCreditMode_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionCreditMode data.
     * copy (* brokerSubscriptionCreditMode_val_ptr_ptr ) data and (* brokerSubscriptionCreditMode_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for brokerSubscriptionCreditMode data
     */
    if ((NULL == (*brokerSubscriptionCreditMode_val_ptr_ptr)) ||
        ((*brokerSubscriptionCreditMode_val_ptr_len_ptr) <
         (rowreq_ctx->data.brokerSubscriptionCreditMode_len *
          sizeof(rowreq_ctx->data.brokerSubscriptionCreditMode[0])))) {
        /*
         * allocate space for brokerSubscriptionCreditMode data
         */
        (*brokerSubscriptionCreditMode_val_ptr_ptr) =
            malloc(rowreq_ctx->data.brokerSubscriptionCreditMode_len *
                   sizeof(rowreq_ctx->data.
                          brokerSubscriptionCreditMode[0]));
        if (NULL == (*brokerSubscriptionCreditMode_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.brokerSubscriptionCreditMode)\n");
            return MFD_ERROR;
        }
    }
    (*brokerSubscriptionCreditMode_val_ptr_len_ptr) =
        rowreq_ctx->data.brokerSubscriptionCreditMode_len *
        sizeof(rowreq_ctx->data.brokerSubscriptionCreditMode[0]);
    memcpy((*brokerSubscriptionCreditMode_val_ptr_ptr),
           rowreq_ctx->data.brokerSubscriptionCreditMode,
           rowreq_ctx->data.brokerSubscriptionCreditMode_len *
           sizeof(rowreq_ctx->data.brokerSubscriptionCreditMode[0]));

    return MFD_SUCCESS;
}                               /* brokerSubscriptionCreditMode_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionArguments
 * brokerSubscriptionArguments is subid 8 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.8
 * Description:
Subscription arguments
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
 * Its syntax is Map (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 65535)
 */
/**
 * Extract the current value of the brokerSubscriptionArguments data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionArguments_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param brokerSubscriptionArguments_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by brokerSubscriptionArguments.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*brokerSubscriptionArguments_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update brokerSubscriptionArguments_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
brokerSubscriptionArguments_get(brokerSubscriptionTable_rowreq_ctx *
                                rowreq_ctx,
                                char
                                **brokerSubscriptionArguments_val_ptr_ptr,
                                size_t
                                *brokerSubscriptionArguments_val_ptr_len_ptr)
{
   /** we should have a non-NULL pointer and enough storage */
    netsnmp_assert((NULL != brokerSubscriptionArguments_val_ptr_ptr)
                   && (NULL != *brokerSubscriptionArguments_val_ptr_ptr));
    netsnmp_assert(NULL != brokerSubscriptionArguments_val_ptr_len_ptr);


    DEBUGMSGTL(("verbose:brokerSubscriptionTable:brokerSubscriptionArguments_get", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:231:o: |-> Extract the current value of the brokerSubscriptionArguments data.
     * copy (* brokerSubscriptionArguments_val_ptr_ptr ) data and (* brokerSubscriptionArguments_val_ptr_len_ptr ) from rowreq_ctx->data
     */
    /*
     * make sure there is enough space for brokerSubscriptionArguments data
     */
    if ((NULL == (*brokerSubscriptionArguments_val_ptr_ptr)) ||
        ((*brokerSubscriptionArguments_val_ptr_len_ptr) <
         (rowreq_ctx->data.brokerSubscriptionArguments_len *
          sizeof(rowreq_ctx->data.brokerSubscriptionArguments[0])))) {
        /*
         * allocate space for brokerSubscriptionArguments data
         */
        (*brokerSubscriptionArguments_val_ptr_ptr) =
            malloc(rowreq_ctx->data.brokerSubscriptionArguments_len *
                   sizeof(rowreq_ctx->data.
                          brokerSubscriptionArguments[0]));
        if (NULL == (*brokerSubscriptionArguments_val_ptr_ptr)) {
            snmp_log(LOG_ERR,
                     "could not allocate memory (rowreq_ctx->data.brokerSubscriptionArguments)\n");
            return MFD_ERROR;
        }
    }
    (*brokerSubscriptionArguments_val_ptr_len_ptr) =
        rowreq_ctx->data.brokerSubscriptionArguments_len *
        sizeof(rowreq_ctx->data.brokerSubscriptionArguments[0]);
    memcpy((*brokerSubscriptionArguments_val_ptr_ptr),
           rowreq_ctx->data.brokerSubscriptionArguments,
           rowreq_ctx->data.brokerSubscriptionArguments_len *
           sizeof(rowreq_ctx->data.brokerSubscriptionArguments[0]));

    return MFD_SUCCESS;
}                               /* brokerSubscriptionArguments_get */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerSubscriptionEntry.brokerSubscriptionDelivered
 * brokerSubscriptionDelivered is subid 9 of brokerSubscriptionEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.9.1.1.9
 * Description:
Messages delivered
                     Additional info ( nodeType:statistic )
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the brokerSubscriptionDelivered data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerSubscriptionDelivered_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
brokerSubscriptionDelivered_get(brokerSubscriptionTable_rowreq_ctx *
                                rowreq_ctx,
                                U64 * brokerSubscriptionDelivered_val_ptr)
{
   /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != brokerSubscriptionDelivered_val_ptr);

    /*
     * TODO:231:o: |-> copy brokerSubscriptionDelivered data.
     * get (* brokerSubscriptionDelivered_val_ptr ).low and (* brokerSubscriptionDelivered_val_ptr ).high from rowreq_ctx->data
     */
    (*brokerSubscriptionDelivered_val_ptr).high =
        rowreq_ctx->data.brokerSubscriptionDelivered.high;
    (*brokerSubscriptionDelivered_val_ptr).low =
        rowreq_ctx->data.brokerSubscriptionDelivered.low;


    return MFD_SUCCESS;
}                               /* brokerSubscriptionDelivered_get */



/** @} */
