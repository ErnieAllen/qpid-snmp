/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef qpid010BINDINGTABLE_H
#define qpid010BINDINGTABLE_H

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
config_require(MRG-MESSAGING-MIB/qpid010BindingTable/qpid010BindingTable_interface)
config_require(MRG-MESSAGING-MIB/qpid010BindingTable/qpid010BindingTable_data_access)
config_require(MRG-MESSAGING-MIB/qpid010BindingTable/qpid010BindingTable_data_get)
config_require(MRG-MESSAGING-MIB/qpid010BindingTable/qpid010BindingTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for qpid010BindingTable 
     */
#include "BindingTable_oids.h"

    /*
     * enum definions 
     */
#include "../enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_BindingTable(void);
    void            shutdown_qpid010BindingTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table qpid010BindingTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010BindingTable is subid 1 of qpid010Bindings.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060,15.1.1.8.1, length: 12
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
     * TODO:101:o: |-> Review qpid010BindingTable registration context.
     */
    typedef netsnmp_data_list qpid010BindingTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review qpid010BindingTable data context structure.
     * This structure is used to represent the data for qpid010BindingTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * qpid010BindingTable.
     */
    typedef struct qpid010BindingTable_data_s {

        /*
         * qpid010BindingExchangeRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010BindingExchangeRef[255];
        size_t          qpid010BindingExchangeRef_len;   /* # of char elements, not bytes */

        /*
         * qpid010BindingQueueRef(2)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010BindingQueueRef[255];
        size_t          qpid010BindingQueueRef_len;      /* # of char elements, not bytes */

        /*
         * qpid010BindingBindingKey(3)/Lstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010BindingBindingKey[65535];
        size_t          qpid010BindingBindingKey_len;    /* # of char elements, not bytes */

        /*
         * qpid010BindingArguments(4)/Map/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010BindingArguments[65535];
        size_t          qpid010BindingArguments_len;     /* # of char elements, not bytes */

        /*
         * qpid010BindingOrigin(5)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            qpid010BindingOrigin[255];
        size_t          qpid010BindingOrigin_len;        /* # of char elements, not bytes */

        /*
         * qpid010BindingMsgMatched(6)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010BindingMsgMatched;

    } qpid010BindingTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review qpid010BindingTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef qpid010BindingTable_data qpid010BindingTable_undo_data;

    /*
     * TODO:120:r: |-> Review qpid010BindingTable mib index.
     * This structure is used to represent the index for qpid010BindingTable.
     */
    typedef struct qpid010BindingTable_mib_index_s {

        /*
         * qpid010BindingInternalIndex(7)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          qpid010BindingInternalIndex;


    } qpid010BindingTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review qpid010BindingTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_qpid010BindingTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review qpid010BindingTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * qpid010BindingTable_rowreq_ctx pointer.
     */
    typedef struct qpid010BindingTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_qpid010BindingTable_IDX_LEN];

        qpid010BindingTable_mib_index tbl_idx;

        qpid010BindingTable_data data;
        qpid010BindingTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to qpid010BindingTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *qpid010BindingTable_data_list;

    } qpid010BindingTable_rowreq_ctx;

    typedef struct qpid010BindingTable_ref_rowreq_ctx_s {
        qpid010BindingTable_rowreq_ctx *rowreq_ctx;
    } qpid010BindingTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        qpid010BindingTable_pre_request(qpid010BindingTable_registration *
                                       user_context);
    int            
        qpid010BindingTable_post_request(qpid010BindingTable_registration *
                                        user_context, int rc);

    int            
        qpid010BindingTable_rowreq_ctx_init(qpid010BindingTable_rowreq_ctx *
                                           rowreq_ctx,
                                           void *user_init_ctx);
    void           
        qpid010BindingTable_rowreq_ctx_cleanup(qpid010BindingTable_rowreq_ctx
                                              * rowreq_ctx);

    int            
        qpid010BindingTable_check_dependencies(qpid010BindingTable_rowreq_ctx
                                              * rowreq_ctx);
    int             qpid010BindingTable_commit(qpid010BindingTable_rowreq_ctx
                                              * rowreq_ctx);

    qpid010BindingTable_rowreq_ctx
        *qpid010BindingTable_row_find_by_mib_index
        (qpid010BindingTable_mib_index * mib_idx);

    extern const oid qpid010BindingTable_oid[];
    extern const int qpid010BindingTable_oid_size;


#include "BindingTable_interface.h"
#include "BindingTable_data_access.h"
#include "BindingTable_data_get.h"
#include "BindingTable_data_set.h"

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
#endif                          /* qpid010BINDINGTABLE_H */
/** @} */