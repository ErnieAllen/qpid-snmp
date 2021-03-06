/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef brokerLINKTABLE_DATA_ACCESS_H
#define brokerLINKTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table brokerLinkTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * QPID-MESSAGING-MIB::brokerLinkTable is subid 1 of brokerLinks.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.11.1, length: 12
     */


    int            
        brokerLinkTable_init_data(brokerLinkTable_registration *
                                   brokerLinkTable_reg);


    /*
     * TODO:180:o: Review brokerLinkTable cache timeout.
     * The number of seconds before the cache times out
     */
#define brokerLINKTABLE_CACHE_TIMEOUT   60

    void            brokerLinkTable_container_init(netsnmp_container **
                                                    container_ptr_ptr,
                                                    netsnmp_cache * cache);
    void            brokerLinkTable_container_shutdown(netsnmp_container *
                                                        container_ptr);

    int             brokerLinkTable_container_load(netsnmp_container *
                                                    container);
    void            brokerLinkTable_container_free(netsnmp_container *
                                                    container);

    int             brokerLinkTable_cache_load(netsnmp_container *
                                                container);
    void            brokerLinkTable_cache_free(netsnmp_container *
                                                container);

    /*
     ***************************************************
     ***             START EXAMPLE CODE              ***
     ***---------------------------------------------***/
    /*
     *********************************************************************
     * Since we have no idea how you really access your data, we'll go with
     * a worst case example: a flat text file.
     */
#define MAX_LINE_SIZE 256
    /*
     ***---------------------------------------------***
     ***              END  EXAMPLE CODE              ***
     ***************************************************/
    int             brokerLinkTable_row_prep(brokerLinkTable_rowreq_ctx *
                                              rowreq_ctx);

    int            
        brokerLinkTable_validate_index(brokerLinkTable_registration *
                                        brokerLinkTable_reg,
                                        brokerLinkTable_rowreq_ctx *
                                        rowreq_ctx);
    int             brokerLinkInternalIndex_check_index(brokerLinkTable_rowreq_ctx * rowreq_ctx);     /* internal */


#ifdef __cplusplus
}
#endif
#endif                          /* brokerLINKTABLE_DATA_ACCESS_H */
