/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef brokerSUBSCRIPTIONTABLE_H
#define brokerSUBSCRIPTIONTABLE_H

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
config_add_mib(QPID-MESSAGING-MIB)
config_require(QPID-MESSAGING-MIB/brokerSubscriptionTable/brokerSubscriptionTable_interface)
config_require(QPID-MESSAGING-MIB/brokerSubscriptionTable/brokerSubscriptionTable_data_access)
config_require(QPID-MESSAGING-MIB/brokerSubscriptionTable/brokerSubscriptionTable_data_get)
config_require(QPID-MESSAGING-MIB/brokerSubscriptionTable/brokerSubscriptionTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for brokerSubscriptionTable 
     */
#include "SubscriptionTable_oids.h"

    /*
     * enum definions 
     */
#include "SubscriptionTable_enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_SubscriptionTable(void);
    void            shutdown_brokerSubscriptionTable(void);

    /*
     *********************************************************************
     * Table declarations
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
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review brokerSubscriptionTable registration context.
     */
    typedef netsnmp_data_list brokerSubscriptionTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review brokerSubscriptionTable data context structure.
     * This structure is used to represent the data for brokerSubscriptionTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * brokerSubscriptionTable.
     */
    typedef struct brokerSubscriptionTable_data_s {

        /*
         * brokerSubscriptionSessionRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerSubscriptionSessionRef[255];
        size_t          brokerSubscriptionSessionRef_len;       /* # of char elements, not bytes */

        /*
         * brokerSubscriptionQueueRef(2)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerSubscriptionQueueRef[255];
        size_t          brokerSubscriptionQueueRef_len; /* # of char elements, not bytes */

        /*
         * brokerSubscriptionName(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerSubscriptionName[255];
        size_t          brokerSubscriptionName_len;     /* # of char elements, not bytes */

        /*
         * brokerSubscriptionBrowsing(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          brokerSubscriptionBrowsing;

        /*
         * brokerSubscriptionAcknowledged(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          brokerSubscriptionAcknowledged;

        /*
         * brokerSubscriptionExclusive(6)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          brokerSubscriptionExclusive;

        /*
         * brokerSubscriptionCreditMode(7)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            brokerSubscriptionCreditMode[255];
        size_t          brokerSubscriptionCreditMode_len;       /* # of char elements, not bytes */

        /*
         * brokerSubscriptionArguments(8)/Map/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerSubscriptionArguments[65535];
        size_t          brokerSubscriptionArguments_len;        /* # of char elements, not bytes */

        /*
         * brokerSubscriptionDelivered(9)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             brokerSubscriptionDelivered;

    } brokerSubscriptionTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review brokerSubscriptionTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef brokerSubscriptionTable_data brokerSubscriptionTable_undo_data;

    /*
     * TODO:120:r: |-> Review brokerSubscriptionTable mib index.
     * This structure is used to represent the index for brokerSubscriptionTable.
     */
    typedef struct brokerSubscriptionTable_mib_index_s {

        /*
         * brokerSubscriptionInternalIndex(10)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          brokerSubscriptionInternalIndex;


    } brokerSubscriptionTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review brokerSubscriptionTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_brokerSubscriptionTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review brokerSubscriptionTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * brokerSubscriptionTable_rowreq_ctx pointer.
     */
    typedef struct brokerSubscriptionTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_brokerSubscriptionTable_IDX_LEN];

        brokerSubscriptionTable_mib_index tbl_idx;

        brokerSubscriptionTable_data data;
        brokerSubscriptionTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to brokerSubscriptionTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *brokerSubscriptionTable_data_list;

    } brokerSubscriptionTable_rowreq_ctx;

    typedef struct brokerSubscriptionTable_ref_rowreq_ctx_s {
        brokerSubscriptionTable_rowreq_ctx *rowreq_ctx;
    } brokerSubscriptionTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        brokerSubscriptionTable_pre_request
        (brokerSubscriptionTable_registration * user_context);
    int            
        brokerSubscriptionTable_post_request
        (brokerSubscriptionTable_registration * user_context, int rc);

    int            
        brokerSubscriptionTable_rowreq_ctx_init
        (brokerSubscriptionTable_rowreq_ctx * rowreq_ctx,
         void *user_init_ctx);
    void           
        brokerSubscriptionTable_rowreq_ctx_cleanup
        (brokerSubscriptionTable_rowreq_ctx * rowreq_ctx);

    int            
        brokerSubscriptionTable_check_dependencies
        (brokerSubscriptionTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerSubscriptionTable_commit(brokerSubscriptionTable_rowreq_ctx *
                                       rowreq_ctx);

    brokerSubscriptionTable_rowreq_ctx
        *brokerSubscriptionTable_row_find_by_mib_index
        (brokerSubscriptionTable_mib_index * mib_idx);

    extern const oid brokerSubscriptionTable_oid[];
    extern const int brokerSubscriptionTable_oid_size;


#include "SubscriptionTable_interface.h"
#include "SubscriptionTable_data_access.h"
#include "SubscriptionTable_data_get.h"
#include "SubscriptionTable_data_set.h"

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
#endif                          /* brokerSUBSCRIPTIONTABLE_H */
/** @} */
