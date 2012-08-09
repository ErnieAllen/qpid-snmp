/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
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
#include "VhostTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table brokerVhostTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * QPID-MESSAGING-MIB::brokerVhostTable is subid 1 of brokerVhosts.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.5.1, length: 12
 */
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * brokerVhostTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * brokerVhostTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (brokerVhostTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
brokerVhostTable_undo_setup(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostTable_undo_setup",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:451:M: |-> Setup brokerVhostTable undo.
     * set up brokerVhostTable undo information, in preparation for a set.
     * Undo storage is in (* brokerVhostFederationTag_val_ptr_ptr )*
     */

    return rc;
}                               /* brokerVhostTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (brokerVhostTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
brokerVhostTable_undo(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostTable_undo",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:451:M: |-> brokerVhostTable undo.
     * brokerVhostTable undo information, in response to a failed set.
     * Undo storage is in (* brokerVhostFederationTag_val_ptr_ptr )*
     */

    return rc;
}                               /* brokerVhostTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (brokerVhostTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
brokerVhostTable_undo_cleanup(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostTable_undo_cleanup",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:452:M: |-> Cleanup brokerVhostTable undo.
     * Undo storage is in (* brokerVhostFederationTag_val_ptr_ptr )*
     */

    return rc;
}                               /* brokerVhostTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * brokerVhostTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param brokerVhostTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
brokerVhostTable_commit(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostTable_commit",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit brokerVhostTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_brokerVHOSTBROKERREF_FLAG) {
        save_flags &= ~COLUMN_brokerVHOSTBROKERREF_FLAG;        /* clear brokerVhostBrokerRef */
        /*
         * TODO:482:o: |-> commit column brokerVhostBrokerRef.
         */
        rc = -1;
        if (-1 == rc) {
            snmp_log(LOG_ERR,
                     "brokerVhostTable column brokerVhostBrokerRef commit failed\n");
        } else {
            /*
             * set flag, in case we need to undo brokerVhostBrokerRef
             */
            rowreq_ctx->column_set_flags |=
                COLUMN_brokerVHOSTBROKERREF_FLAG;
        }
    }

    if (save_flags & COLUMN_brokerVHOSTNAME_FLAG) {
        save_flags &= ~COLUMN_brokerVHOSTNAME_FLAG;     /* clear brokerVhostName */
        /*
         * TODO:482:o: |-> commit column brokerVhostName.
         */
        rc = -1;
        if (-1 == rc) {
            snmp_log(LOG_ERR,
                     "brokerVhostTable column brokerVhostName commit failed\n");
        } else {
            /*
             * set flag, in case we need to undo brokerVhostName
             */
            rowreq_ctx->column_set_flags |= COLUMN_brokerVHOSTNAME_FLAG;
        }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
        snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n",
                 save_flags);
        return MFD_ERROR;
    }

    return rc;
}                               /* brokerVhostTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * brokerVhostTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param brokerVhostTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
brokerVhostTable_undo_commit(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostTable_undo_commit",
                "called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:485:M: |-> Undo brokerVhostTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */


    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
}                               /* brokerVhostTable_undo_commit */

/*
 * TODO:440:M: Implement brokerVhostTable node value checks.
 * TODO:450:M: Implement brokerVhostTable undo functions.
 * TODO:460:M: Implement brokerVhostTable set functions.
 * TODO:480:M: Implement brokerVhostTable commit functions.
 */
/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerVhostEntry.brokerVhostBrokerRef
 * brokerVhostBrokerRef is subid 1 of brokerVhostEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.5.1.1.1
 * Description:
Vhost brokerRef
                     Additional info ( nodeType:property, references:Broker, index:y, parentRef:y )
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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerVhostBrokerRef_val_ptr
 *        A char containing the new value.
 * @param brokerVhostBrokerRef_val_ptr_len
 *        The size (in bytes) of the data pointed to by brokerVhostBrokerRef_val_ptr
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * brokerVhostTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_OCTET_STR
 *    The length is < sizeof(rowreq_ctx->data.brokerVhostBrokerRef).
 *    The length is in (one of) the range set(s):  0 - 255
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
brokerVhostBrokerRef_check_value(brokerVhostTable_rowreq_ctx * rowreq_ctx,
                                 char *brokerVhostBrokerRef_val_ptr,
                                 size_t brokerVhostBrokerRef_val_ptr_len)
{
    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostBrokerRef_check_value", "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != brokerVhostBrokerRef_val_ptr);

    /*
     * TODO:441:o: |-> Check for valid brokerVhostBrokerRef value.
     */

    return MFD_SUCCESS;         /* brokerVhostBrokerRef value not illegal */
}                               /* brokerVhostBrokerRef_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (brokerVhostTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * brokerVhostTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
brokerVhostBrokerRef_undo_setup(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostBrokerRef_undo_setup",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup brokerVhostBrokerRef undo.
     */
    /*
     * copy brokerVhostBrokerRef and brokerVhostBrokerRef_len data
     * set rowreq_ctx->undo->brokerVhostBrokerRef from rowreq_ctx->data.brokerVhostBrokerRef
     */
    memcpy(rowreq_ctx->undo->brokerVhostBrokerRef,
           rowreq_ctx->data.brokerVhostBrokerRef,
           (rowreq_ctx->data.brokerVhostBrokerRef_len *
            sizeof(rowreq_ctx->undo->brokerVhostBrokerRef[0])));
    rowreq_ctx->undo->brokerVhostBrokerRef_len =
        rowreq_ctx->data.brokerVhostBrokerRef_len;


    return MFD_SUCCESS;
}                               /* brokerVhostBrokerRef_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param brokerVhostBrokerRef_val_ptr
 *        A char containing the new value.
 * @param brokerVhostBrokerRef_val_ptr_len
 *        The size (in bytes) of the data pointed to by brokerVhostBrokerRef_val_ptr
 */
int
brokerVhostBrokerRef_set(brokerVhostTable_rowreq_ctx * rowreq_ctx,
                         char *brokerVhostBrokerRef_val_ptr,
                         size_t brokerVhostBrokerRef_val_ptr_len)
{

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostBrokerRef_set",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != brokerVhostBrokerRef_val_ptr);

    /*
     * TODO:461:M: |-> Set brokerVhostBrokerRef value.
     * set brokerVhostBrokerRef value in rowreq_ctx->data
     */
    memcpy(rowreq_ctx->data.brokerVhostBrokerRef,
           brokerVhostBrokerRef_val_ptr, brokerVhostBrokerRef_val_ptr_len);
    /** convert bytes to number of char */
    rowreq_ctx->data.brokerVhostBrokerRef_len =
        brokerVhostBrokerRef_val_ptr_len /
        sizeof(brokerVhostBrokerRef_val_ptr[0]);

    return MFD_SUCCESS;
}                               /* brokerVhostBrokerRef_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
brokerVhostBrokerRef_undo(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostBrokerRef_undo",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up brokerVhostBrokerRef undo.
     */
    /*
     * copy brokerVhostBrokerRef and brokerVhostBrokerRef_len data
     * set rowreq_ctx->data.brokerVhostBrokerRef from rowreq_ctx->undo->brokerVhostBrokerRef
     */
    memcpy(rowreq_ctx->data.brokerVhostBrokerRef,
           rowreq_ctx->undo->brokerVhostBrokerRef,
           (rowreq_ctx->undo->brokerVhostBrokerRef_len *
            sizeof(rowreq_ctx->data.brokerVhostBrokerRef[0])));
    rowreq_ctx->data.brokerVhostBrokerRef_len =
        rowreq_ctx->undo->brokerVhostBrokerRef_len;


    return MFD_SUCCESS;
}                               /* brokerVhostBrokerRef_undo */

/*---------------------------------------------------------------------
 * QPID-MESSAGING-MIB::brokerVhostEntry.brokerVhostName
 * brokerVhostName is subid 2 of brokerVhostEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.18060.5672.1.1.5.1.1.2
 * Description:
Vhost name
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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param brokerVhostName_val_ptr
 *        A char containing the new value.
 * @param brokerVhostName_val_ptr_len
 *        The size (in bytes) of the data pointed to by brokerVhostName_val_ptr
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * brokerVhostTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_OCTET_STR
 *    The length is < sizeof(rowreq_ctx->data.brokerVhostName).
 *    The length is in (one of) the range set(s):  0 - 255
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
brokerVhostName_check_value(brokerVhostTable_rowreq_ctx * rowreq_ctx,
                            char *brokerVhostName_val_ptr,
                            size_t brokerVhostName_val_ptr_len)
{
    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostName_check_value",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != brokerVhostName_val_ptr);

    /*
     * TODO:441:o: |-> Check for valid brokerVhostName value.
     */

    return MFD_SUCCESS;         /* brokerVhostName value not illegal */
}                               /* brokerVhostName_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (brokerVhostTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * brokerVhostTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
brokerVhostName_undo_setup(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostName_undo_setup",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup brokerVhostName undo.
     */
    /*
     * copy brokerVhostName and brokerVhostName_len data
     * set rowreq_ctx->undo->brokerVhostName from rowreq_ctx->data.brokerVhostName
     */
    memcpy(rowreq_ctx->undo->brokerVhostName,
           rowreq_ctx->data.brokerVhostName,
           (rowreq_ctx->data.brokerVhostName_len *
            sizeof(rowreq_ctx->undo->brokerVhostName[0])));
    rowreq_ctx->undo->brokerVhostName_len =
        rowreq_ctx->data.brokerVhostName_len;


    return MFD_SUCCESS;
}                               /* brokerVhostName_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param brokerVhostName_val_ptr
 *        A char containing the new value.
 * @param brokerVhostName_val_ptr_len
 *        The size (in bytes) of the data pointed to by brokerVhostName_val_ptr
 */
int
brokerVhostName_set(brokerVhostTable_rowreq_ctx * rowreq_ctx,
                    char *brokerVhostName_val_ptr,
                    size_t brokerVhostName_val_ptr_len)
{

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostName_set",
                "called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);
    netsnmp_assert(NULL != brokerVhostName_val_ptr);

    /*
     * TODO:461:M: |-> Set brokerVhostName value.
     * set brokerVhostName value in rowreq_ctx->data
     */
    memcpy(rowreq_ctx->data.brokerVhostName, brokerVhostName_val_ptr,
           brokerVhostName_val_ptr_len);
    /** convert bytes to number of char */
    rowreq_ctx->data.brokerVhostName_len =
        brokerVhostName_val_ptr_len / sizeof(brokerVhostName_val_ptr[0]);

    return MFD_SUCCESS;
}                               /* brokerVhostName_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
brokerVhostName_undo(brokerVhostTable_rowreq_ctx * rowreq_ctx)
{

    DEBUGMSGTL(("verbose:brokerVhostTable:brokerVhostName_undo",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up brokerVhostName undo.
     */
    /*
     * copy brokerVhostName and brokerVhostName_len data
     * set rowreq_ctx->data.brokerVhostName from rowreq_ctx->undo->brokerVhostName
     */
    memcpy(rowreq_ctx->data.brokerVhostName,
           rowreq_ctx->undo->brokerVhostName,
           (rowreq_ctx->undo->brokerVhostName_len *
            sizeof(rowreq_ctx->data.brokerVhostName[0])));
    rowreq_ctx->data.brokerVhostName_len =
        rowreq_ctx->undo->brokerVhostName_len;


    return MFD_SUCCESS;
}                               /* brokerVhostName_undo */

/**
 * check dependencies
 *
 * This is useful for for tables which have dependencies between columns
 * (or rows, or tables). For example, two columns allocating a percentage
 * of something add up 100%.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * brokerVhostTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @retval MFD_SUCCESS all the changes to the row are legal
 * @retval MFD_ERROR   one or more changes are not legal
 *
 * (see README-table-brokerVhostTable if you don't have dependencies)
 */
int
brokerVhostTable_check_dependencies(brokerVhostTable_rowreq_ctx *
                                    rowreq_ctx)
{
    int             rc = MFD_SUCCESS;

    DEBUGMSGTL(("internal:brokerVhostTable:brokerVhostTable_check_dependencies", "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:470:o: Check brokerVhostTable row dependencies.
     * check that all new value are legal and consistent with each other
     */
    return rc;
}                               /* brokerVhostTable_check_dependencies */

/** @} */
