/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef RHM010BINDINGTABLE_H
#define RHM010BINDINGTABLE_H

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
config_require(MRG-MESSAGING-MIB/rhm010BindingTable/rhm010BindingTable_interface)
config_require(MRG-MESSAGING-MIB/rhm010BindingTable/rhm010BindingTable_data_access)
config_require(MRG-MESSAGING-MIB/rhm010BindingTable/rhm010BindingTable_data_get)
config_require(MRG-MESSAGING-MIB/rhm010BindingTable/rhm010BindingTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for rhm010BindingTable 
     */
#include "rhm010BindingTable_oids.h"

    /*
     * enum definions 
     */
#include "../enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_rhm010BindingTable(void);
    void            shutdown_rhm010BindingTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table rhm010BindingTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010BindingTable is subid 1 of rhm010Bindings.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.8.1, length: 12
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
     * TODO:101:o: |-> Review rhm010BindingTable registration context.
     */
    typedef netsnmp_data_list rhm010BindingTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review rhm010BindingTable data context structure.
     * This structure is used to represent the data for rhm010BindingTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * rhm010BindingTable.
     */
    typedef struct rhm010BindingTable_data_s {

        /*
         * rhm010BindingExchangeRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010BindingExchangeRef[255];
        size_t          rhm010BindingExchangeRef_len;   /* # of char elements, not bytes */

        /*
         * rhm010BindingQueueRef(2)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010BindingQueueRef[255];
        size_t          rhm010BindingQueueRef_len;      /* # of char elements, not bytes */

        /*
         * rhm010BindingBindingKey(3)/Lstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010BindingBindingKey[65535];
        size_t          rhm010BindingBindingKey_len;    /* # of char elements, not bytes */

        /*
         * rhm010BindingArguments(4)/Map/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010BindingArguments[65535];
        size_t          rhm010BindingArguments_len;     /* # of char elements, not bytes */

        /*
         * rhm010BindingOrigin(5)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            rhm010BindingOrigin[255];
        size_t          rhm010BindingOrigin_len;        /* # of char elements, not bytes */

        /*
         * rhm010BindingMsgMatched(6)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010BindingMsgMatched;

    } rhm010BindingTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review rhm010BindingTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef rhm010BindingTable_data rhm010BindingTable_undo_data;

    /*
     * TODO:120:r: |-> Review rhm010BindingTable mib index.
     * This structure is used to represent the index for rhm010BindingTable.
     */
    typedef struct rhm010BindingTable_mib_index_s {

        /*
         * rhm010BindingInternalIndex(7)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          rhm010BindingInternalIndex;


    } rhm010BindingTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review rhm010BindingTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_rhm010BindingTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review rhm010BindingTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * rhm010BindingTable_rowreq_ctx pointer.
     */
    typedef struct rhm010BindingTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_rhm010BindingTable_IDX_LEN];

        rhm010BindingTable_mib_index tbl_idx;

        rhm010BindingTable_data data;
        rhm010BindingTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to rhm010BindingTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *rhm010BindingTable_data_list;

    } rhm010BindingTable_rowreq_ctx;

    typedef struct rhm010BindingTable_ref_rowreq_ctx_s {
        rhm010BindingTable_rowreq_ctx *rowreq_ctx;
    } rhm010BindingTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        rhm010BindingTable_pre_request(rhm010BindingTable_registration *
                                       user_context);
    int            
        rhm010BindingTable_post_request(rhm010BindingTable_registration *
                                        user_context, int rc);

    int            
        rhm010BindingTable_rowreq_ctx_init(rhm010BindingTable_rowreq_ctx *
                                           rowreq_ctx,
                                           void *user_init_ctx);
    void           
        rhm010BindingTable_rowreq_ctx_cleanup(rhm010BindingTable_rowreq_ctx
                                              * rowreq_ctx);

    int            
        rhm010BindingTable_check_dependencies(rhm010BindingTable_rowreq_ctx
                                              * rowreq_ctx);
    int             rhm010BindingTable_commit(rhm010BindingTable_rowreq_ctx
                                              * rowreq_ctx);

    rhm010BindingTable_rowreq_ctx
        *rhm010BindingTable_row_find_by_mib_index
        (rhm010BindingTable_mib_index * mib_idx);

    extern const oid rhm010BindingTable_oid[];
    extern const int rhm010BindingTable_oid_size;


#include "rhm010BindingTable_interface.h"
#include "rhm010BindingTable_data_access.h"
#include "rhm010BindingTable_data_get.h"
#include "rhm010BindingTable_data_set.h"

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
#endif                          /* RHM010BINDINGTABLE_H */
/** @} */