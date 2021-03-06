/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef brokerVHOSTTABLE_H
#define brokerVHOSTTABLE_H

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
config_require(QPID-MESSAGING-MIB/brokerVhostTable/brokerVhostTable_interface)
config_require(QPID-MESSAGING-MIB/brokerVhostTable/brokerVhostTable_data_access)
config_require(QPID-MESSAGING-MIB/brokerVhostTable/brokerVhostTable_data_get)
config_require(QPID-MESSAGING-MIB/brokerVhostTable/brokerVhostTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for brokerVhostTable 
     */
#include "VhostTable_oids.h"

    /*
     * enum definions 
     */
#include "../enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_VhostTable(void);
    void            shutdown_brokerVhostTable(void);

    /*
     *********************************************************************
     * Table declarations
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
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review brokerVhostTable registration context.
     */
    typedef netsnmp_data_list brokerVhostTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review brokerVhostTable data context structure.
     * This structure is used to represent the data for brokerVhostTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * brokerVhostTable.
     */
    typedef struct brokerVhostTable_data_s {

        /*
         * brokerVhostBrokerRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerVhostBrokerRef[255];
        size_t          brokerVhostBrokerRef_len;       /* # of char elements, not bytes */

        /*
         * brokerVhostName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            brokerVhostName[255];
        size_t          brokerVhostName_len;    /* # of char elements, not bytes */

        /*
         * brokerVhostFederationTag(3)/Sstr/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            brokerVhostFederationTag[255];
        size_t          brokerVhostFederationTag_len;   /* # of char elements, not bytes */

    } brokerVhostTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review brokerVhostTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef brokerVhostTable_data brokerVhostTable_undo_data;

    /*
     * TODO:120:r: |-> Review brokerVhostTable mib index.
     * This structure is used to represent the index for brokerVhostTable.
     */
    typedef struct brokerVhostTable_mib_index_s {

        /*
         * brokerVhostInternalIndex(4)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          brokerVhostInternalIndex;


    } brokerVhostTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review brokerVhostTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_brokerVhostTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review brokerVhostTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * brokerVhostTable_rowreq_ctx pointer.
     */
    typedef struct brokerVhostTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_brokerVhostTable_IDX_LEN];

        brokerVhostTable_mib_index tbl_idx;

        brokerVhostTable_data data;
        brokerVhostTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to brokerVhostTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *brokerVhostTable_data_list;

    } brokerVhostTable_rowreq_ctx;

    typedef struct brokerVhostTable_ref_rowreq_ctx_s {
        brokerVhostTable_rowreq_ctx *rowreq_ctx;
    } brokerVhostTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        brokerVhostTable_pre_request(brokerVhostTable_registration *
                                     user_context);
    int            
        brokerVhostTable_post_request(brokerVhostTable_registration *
                                      user_context, int rc);

    int            
        brokerVhostTable_rowreq_ctx_init(brokerVhostTable_rowreq_ctx *
                                         rowreq_ctx, void *user_init_ctx);
    void           
        brokerVhostTable_rowreq_ctx_cleanup(brokerVhostTable_rowreq_ctx *
                                            rowreq_ctx);

    int            
        brokerVhostTable_check_dependencies(brokerVhostTable_rowreq_ctx *
                                            rowreq_ctx);
    int             brokerVhostTable_commit(brokerVhostTable_rowreq_ctx *
                                            rowreq_ctx);

    brokerVhostTable_rowreq_ctx
        *brokerVhostTable_row_find_by_mib_index(brokerVhostTable_mib_index
                                                * mib_idx);

    extern const oid brokerVhostTable_oid[];
    extern const int brokerVhostTable_oid_size;


#include "VhostTable_interface.h"
#include "VhostTable_data_access.h"
#include "VhostTable_data_get.h"
#include "VhostTable_data_set.h"

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
#endif                          /* brokerVHOSTTABLE_H */
/** @} */
