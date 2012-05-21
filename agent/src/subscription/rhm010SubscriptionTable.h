/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef RHM010SUBSCRIPTIONTABLE_H
#define RHM010SUBSCRIPTIONTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_add_mib(MRG-MESSAGING-MIB)
config_require(MRG-MESSAGING-MIB/rhm010SubscriptionTable/rhm010SubscriptionTable_interface)
config_require(MRG-MESSAGING-MIB/rhm010SubscriptionTable/rhm010SubscriptionTable_data_access)
config_require(MRG-MESSAGING-MIB/rhm010SubscriptionTable/rhm010SubscriptionTable_data_get)
config_require(MRG-MESSAGING-MIB/rhm010SubscriptionTable/rhm010SubscriptionTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for rhm010SubscriptionTable 
     */
#include "rhm010SubscriptionTable_oids.h"

    /*
     * enum definions 
     */
#include "rhm010SubscriptionTable_enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_rhm010SubscriptionTable(void);
    void            shutdown_rhm010SubscriptionTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table rhm010SubscriptionTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010SubscriptionTable is subid 1 of rhm010Subscriptions.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.9.1, length: 12
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review rhm010SubscriptionTable registration context.
     */
    typedef netsnmp_data_list rhm010SubscriptionTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review rhm010SubscriptionTable data context structure.
     * This structure is used to represent the data for rhm010SubscriptionTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * rhm010SubscriptionTable.
     */
    typedef struct rhm010SubscriptionTable_data_s {

        /*
         * rhm010SubscriptionSessionRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010SubscriptionSessionRef[255];
        size_t          rhm010SubscriptionSessionRef_len;       /* # of char elements, not bytes */

        /*
         * rhm010SubscriptionQueueRef(2)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010SubscriptionQueueRef[255];
        size_t          rhm010SubscriptionQueueRef_len; /* # of char elements, not bytes */

        /*
         * rhm010SubscriptionName(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010SubscriptionName[255];
        size_t          rhm010SubscriptionName_len;     /* # of char elements, not bytes */

        /*
         * rhm010SubscriptionBrowsing(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010SubscriptionBrowsing;

        /*
         * rhm010SubscriptionAcknowledged(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010SubscriptionAcknowledged;

        /*
         * rhm010SubscriptionExclusive(6)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010SubscriptionExclusive;

        /*
         * rhm010SubscriptionCreditMode(7)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            rhm010SubscriptionCreditMode[255];
        size_t          rhm010SubscriptionCreditMode_len;       /* # of char elements, not bytes */

        /*
         * rhm010SubscriptionArguments(8)/Map/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010SubscriptionArguments[65535];
        size_t          rhm010SubscriptionArguments_len;        /* # of char elements, not bytes */

        /*
         * rhm010SubscriptionDelivered(9)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010SubscriptionDelivered;

    } rhm010SubscriptionTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review rhm010SubscriptionTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef rhm010SubscriptionTable_data rhm010SubscriptionTable_undo_data;

    /*
     * TODO:120:r: |-> Review rhm010SubscriptionTable mib index.
     * This structure is used to represent the index for rhm010SubscriptionTable.
     */
    typedef struct rhm010SubscriptionTable_mib_index_s {

        /*
         * rhm010SubscriptionInternalIndex(10)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          rhm010SubscriptionInternalIndex;


    } rhm010SubscriptionTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review rhm010SubscriptionTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_rhm010SubscriptionTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review rhm010SubscriptionTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * rhm010SubscriptionTable_rowreq_ctx pointer.
     */
    typedef struct rhm010SubscriptionTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_rhm010SubscriptionTable_IDX_LEN];

        rhm010SubscriptionTable_mib_index tbl_idx;

        rhm010SubscriptionTable_data data;
        rhm010SubscriptionTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to rhm010SubscriptionTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *rhm010SubscriptionTable_data_list;

    } rhm010SubscriptionTable_rowreq_ctx;

    typedef struct rhm010SubscriptionTable_ref_rowreq_ctx_s {
        rhm010SubscriptionTable_rowreq_ctx *rowreq_ctx;
    } rhm010SubscriptionTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        rhm010SubscriptionTable_pre_request
        (rhm010SubscriptionTable_registration * user_context);
    int            
        rhm010SubscriptionTable_post_request
        (rhm010SubscriptionTable_registration * user_context, int rc);

    int            
        rhm010SubscriptionTable_rowreq_ctx_init
        (rhm010SubscriptionTable_rowreq_ctx * rowreq_ctx,
         void *user_init_ctx);
    void           
        rhm010SubscriptionTable_rowreq_ctx_cleanup
        (rhm010SubscriptionTable_rowreq_ctx * rowreq_ctx);

    int            
        rhm010SubscriptionTable_check_dependencies
        (rhm010SubscriptionTable_rowreq_ctx * rowreq_ctx);
    int            
        rhm010SubscriptionTable_commit(rhm010SubscriptionTable_rowreq_ctx *
                                       rowreq_ctx);

    rhm010SubscriptionTable_rowreq_ctx
        *rhm010SubscriptionTable_row_find_by_mib_index
        (rhm010SubscriptionTable_mib_index * mib_idx);

    extern const oid rhm010SubscriptionTable_oid[];
    extern const int rhm010SubscriptionTable_oid_size;


#include "rhm010SubscriptionTable_interface.h"
#include "rhm010SubscriptionTable_data_access.h"
#include "rhm010SubscriptionTable_data_get.h"
#include "rhm010SubscriptionTable_data_set.h"

    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* RHM010SUBSCRIPTIONTABLE_H */
/** @} */