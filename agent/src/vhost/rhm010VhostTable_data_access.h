/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef RHM010VHOSTTABLE_DATA_ACCESS_H
#define RHM010VHOSTTABLE_DATA_ACCESS_H

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
 *** Table rhm010VhostTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010VhostTable is subid 1 of rhm010Vhosts.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.5.1, length: 12
     */


    int            
        rhm010VhostTable_init_data(rhm010VhostTable_registration *
                                   rhm010VhostTable_reg);


    /*
     * TODO:180:o: Review rhm010VhostTable cache timeout.
     * The number of seconds before the cache times out
     */
#define RHM010VHOSTTABLE_CACHE_TIMEOUT   60

    void            rhm010VhostTable_container_init(netsnmp_container **
                                                    container_ptr_ptr,
                                                    netsnmp_cache * cache);
    void            rhm010VhostTable_container_shutdown(netsnmp_container *
                                                        container_ptr);

    int             rhm010VhostTable_container_load(netsnmp_container *
                                                    container);
    void            rhm010VhostTable_container_free(netsnmp_container *
                                                    container);

    int             rhm010VhostTable_cache_load(netsnmp_container *
                                                container);
    void            rhm010VhostTable_cache_free(netsnmp_container *
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
    int             rhm010VhostTable_row_prep(rhm010VhostTable_rowreq_ctx *
                                              rowreq_ctx);

    int            
        rhm010VhostTable_validate_index(rhm010VhostTable_registration *
                                        rhm010VhostTable_reg,
                                        rhm010VhostTable_rowreq_ctx *
                                        rowreq_ctx);
    int             rhm010VhostInternalIndex_check_index(rhm010VhostTable_rowreq_ctx * rowreq_ctx);     /* internal */


#ifdef __cplusplus
}
#endif
#endif                          /* RHM010VHOSTTABLE_DATA_ACCESS_H */