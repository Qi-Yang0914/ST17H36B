#ifndef _FEMTO_REG_WDT_H_
#define _FEMTO_REG_WDT_H_

#define FEMTO_REG_WDT_COUNT 13

#define FEMTO_REG_WDT_BASE_ADDR 0x40002000

#define FEMTO_REG_WDT_SIZE 0x000000FC


 /**
 * @brief CR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05              no_name   0
 *  04:02                  RPL   0b0
 *     01                 RMOD   0
 *     00               WDT_EN   0
 * </pre>
 */
#define FEMTO_REG_WDT_CR_OFFSET 0x00000000


__INLINE static uint32_t wdt_cr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

__INLINE static void wdt_cr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, value);
}

// field definitions
#define WDT_CR_NO_NAME_BIT                           ((uint32_t)0x00000020)
#define WDT_CR_NO_NAME_POS                           5
#define WDT_CR_RPL_MASK                              ((uint32_t)0x0000001C)
#define WDT_CR_RPL_LSB                               2
#define WDT_CR_RPL_WIDTH                             ((uint32_t)0x00000003)
#define WDT_CR_RMOD_BIT                              ((uint32_t)0x00000002)
#define WDT_CR_RMOD_POS                              1
#define WDT_CR_WDT_EN_BIT                            ((uint32_t)0x00000001)
#define WDT_CR_WDT_EN_POS                            0

#define WDT_CR_NO_NAME_RST                           0x0
#define WDT_CR_RPL_RST                               0x0
#define WDT_CR_RMOD_RST                              0x0
#define WDT_CR_WDT_EN_RST                            0x0

__INLINE static void wdt_cr_pack(uint8_t noname, uint8_t rpl, uint8_t rmod, uint8_t wdten)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR,  ((uint32_t)noname << 5) | ((uint32_t)rpl << 2) | ((uint32_t)rmod << 1) | ((uint32_t)wdten << 0));
}

__INLINE static void wdt_cr_unpack(uint8_t* noname, uint8_t* rpl, uint8_t* rmod, uint8_t* wdten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *noname = (localVal & ((uint32_t)0x00000020)) >> 5;
    *rpl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *rmod = (localVal & ((uint32_t)0x00000002)) >> 1;
    *wdten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t wdt_cr_no_name_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void wdt_cr_no_name_setf(uint8_t noname)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)noname << 5));
}

__INLINE static uint8_t wdt_cr_rpl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void wdt_cr_rpl_setf(uint8_t rpl)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)rpl << 2));
}

__INLINE static uint8_t wdt_cr_rmod_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void wdt_cr_rmod_setf(uint8_t rmod)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rmod << 1));
}

__INLINE static uint8_t wdt_cr_wdt_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void wdt_cr_wdt_en_setf(uint8_t wdten)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_CR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)wdten << 0));
}

 /**
 * @brief TORR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:04             TOP_INIT   0b0
 *  03:00                  TOP   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_TORR_OFFSET 0x00000004


__INLINE static uint32_t wdt_torr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

__INLINE static void wdt_torr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_TORR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, value);
}

// field definitions
#define WDT_TORR_TOP_INIT_MASK                         ((uint32_t)0x000000F0)
#define WDT_TORR_TOP_INIT_LSB                          4
#define WDT_TORR_TOP_INIT_WIDTH                        ((uint32_t)0x00000004)
#define WDT_TORR_TOP_MASK                              ((uint32_t)0x0000000F)
#define WDT_TORR_TOP_LSB                               0
#define WDT_TORR_TOP_WIDTH                             ((uint32_t)0x00000004)

#define WDT_TORR_TOP_INIT_RST                          0x0
#define WDT_TORR_TOP_RST                               0x0

__INLINE static void wdt_torr_pack(uint8_t topinit, uint8_t top)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_TORR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR,  ((uint32_t)topinit << 4) | ((uint32_t)top << 0));
}

__INLINE static void wdt_torr_unpack(uint8_t* topinit, uint8_t* top)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *topinit = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *top = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t wdt_torr_top_init_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void wdt_torr_top_init_setf(uint8_t topinit)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_TORR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)topinit << 4));
}

__INLINE static uint8_t wdt_torr_top_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void wdt_torr_top_setf(uint8_t top)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_TORR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_WDT_TORR_OFFSET + FEMTO_REG_WDT_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)top << 0));
}

 /**
 * @brief CCVR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:00                 CCVR   0bFFFF
 * </pre>
 */
#define FEMTO_REG_WDT_CCVR_OFFSET 0x00000008


__INLINE static uint32_t wdt_ccvr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_CCVR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_CCVR_CCVR_MASK                             ((uint32_t)0x00FFFFFF)
#define WDT_CCVR_CCVR_LSB                              0
#define WDT_CCVR_CCVR_WIDTH                            ((uint32_t)0x00000018)

#define WDT_CCVR_CCVR_RST                              0xFFFF

__INLINE static void wdt_ccvr_unpack(uint8_t* ccvr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CCVR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *ccvr = (localVal & ((uint32_t)0x00FFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_ccvr_ccvr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_CCVR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FFFFFF)) >> 0);
}

 /**
 * @brief CRR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00                  CRR   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_CRR_OFFSET 0x0000000C


__INLINE static uint32_t wdt_crr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_CRR_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

__INLINE static void wdt_crr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CRR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, value);
}

// field definitions
#define WDT_CRR_CRR_MASK                              ((uint32_t)0x000000FF)
#define WDT_CRR_CRR_LSB                               0
#define WDT_CRR_CRR_WIDTH                             ((uint32_t)0x00000008)

#define WDT_CRR_CRR_RST                               0x0

__INLINE static void wdt_crr_pack(uint8_t crr)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CRR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR,  ((uint32_t)crr << 0));
}

__INLINE static void wdt_crr_crr_setf(uint8_t crr)
{
    _FEMTO_REG_WR(FEMTO_REG_WDT_CRR_OFFSET+ FEMTO_REG_WDT_BASE_ADDR, (uint32_t)crr << 0);
}

 /**
 * @brief STAT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                  ISR   0
 * </pre>
 */
#define FEMTO_REG_WDT_STAT_OFFSET 0x00000010


__INLINE static uint32_t wdt_stat_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_STAT_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_STAT_ISR_BIT                               ((uint32_t)0x00000001)
#define WDT_STAT_ISR_POS                               0

#define WDT_STAT_ISR_RST                               0x0

__INLINE static void wdt_stat_unpack(uint8_t* isr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_STAT_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *isr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t wdt_stat_isr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_STAT_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief EOI register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                  ICR   0
 * </pre>
 */
#define FEMTO_REG_WDT_EOI_OFFSET 0x00000014


__INLINE static uint32_t wdt_eoi_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_EOI_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_EOI_ICR_BIT                               ((uint32_t)0x00000001)
#define WDT_EOI_ICR_POS                               0

#define WDT_EOI_ICR_RST                               0x0

__INLINE static void wdt_eoi_unpack(uint8_t* icr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_EOI_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *icr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t wdt_eoi_icr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_EOI_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief COMP_PARAMS_5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00   CP_WDT_USER_TOP_MAX   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_PARAMS_5_OFFSET 0x000000E4


__INLINE static uint32_t wdt_comp_params_5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_5_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_PARAMS_5_CP_WDT_USER_TOP_MAX_MASK              ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_PARAMS_5_CP_WDT_USER_TOP_MAX_LSB               0
#define WDT_COMP_PARAMS_5_CP_WDT_USER_TOP_MAX_WIDTH             ((uint32_t)0x00000020)

#define WDT_COMP_PARAMS_5_CP_WDT_USER_TOP_MAX_RST               0x0

__INLINE static void wdt_comp_params_5_unpack(uint8_t* cpwdtusertopmax)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_5_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *cpwdtusertopmax = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_params_5_cp_wdt_user_top_max_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_5_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief COMP_PARAMS_4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00   CP_WDT_USER_TOP_INIT_MAX   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_PARAMS_4_OFFSET 0x000000E8


__INLINE static uint32_t wdt_comp_params_4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_4_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_PARAMS_4_CP_WDT_USER_TOP_INIT_MAX_MASK         ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_PARAMS_4_CP_WDT_USER_TOP_INIT_MAX_LSB          0
#define WDT_COMP_PARAMS_4_CP_WDT_USER_TOP_INIT_MAX_WIDTH        ((uint32_t)0x00000020)

#define WDT_COMP_PARAMS_4_CP_WDT_USER_TOP_INIT_MAX_RST          0x0

__INLINE static void wdt_comp_params_4_unpack(uint8_t* cpwdtusertopinitmax)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_4_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *cpwdtusertopinitmax = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_params_4_cp_wdt_user_top_init_max_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_4_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief COMP_PARAMS_3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       CP_WDT_TOP_RST   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_PARAMS_3_OFFSET 0x000000EC


__INLINE static uint32_t wdt_comp_params_3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_3_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_PARAMS_3_CP_WDT_TOP_RST_MASK                   ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_PARAMS_3_CP_WDT_TOP_RST_LSB                    0
#define WDT_COMP_PARAMS_3_CP_WDT_TOP_RST_WIDTH                  ((uint32_t)0x00000020)

#define WDT_COMP_PARAMS_3_CP_WDT_TOP_RST_RST                    0x0

__INLINE static void wdt_comp_params_3_unpack(uint8_t* cpwdttoprst)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_3_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *cpwdttoprst = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_params_3_cp_wdt_top_rst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_3_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief COMP_PARAMS_2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       CP_WDT_CNT_RST   0b0
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_PARAMS_2_OFFSET 0x000000F0


__INLINE static uint32_t wdt_comp_params_2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_2_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_PARAMS_2_CP_WDT_CNT_RST_MASK                   ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_PARAMS_2_CP_WDT_CNT_RST_LSB                    0
#define WDT_COMP_PARAMS_2_CP_WDT_CNT_RST_WIDTH                  ((uint32_t)0x00000020)

#define WDT_COMP_PARAMS_2_CP_WDT_CNT_RST_RST                    0x0

__INLINE static void wdt_comp_params_2_unpack(uint8_t* cpwdtcntrst)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_2_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *cpwdtcntrst = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_params_2_cp_wdt_cnt_rst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_2_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief COMP_PARAMS_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:24     CP_WDT_CNT_WIDTH   0b8
 *  23:20   CP_WDT_DFLT_TOP_INIT   0b0
 *  19:16      CP_WDT_DFLT_TOP   0b0
 *  12:10       CP_WDT_DFT_RPL   0b0
 *  09:08   CP_WDT_APB_DATA_WIDTH   0b2
 *     07         CP_WDT_PAUSE   0
 *     06   CP_WDT_USE_FIX_TOP   1
 *     05        CP_WDT_HC_TOP   0
 *     04        CP_WDT_HC_RPL   0
 *     03       CP_WDT_HC_RMOD   0
 *     02      CP_WDT_DUAL_TOP   0
 *     01     CP_WDT_DFLT_RMOD   0
 *     00     CP_WDT_ALWAYS_EN   0
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET 0x000000F4


__INLINE static uint32_t wdt_comp_params_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_PARAMS_1_CP_WDT_CNT_WIDTH_MASK                 ((uint32_t)0x1F000000)
#define WDT_COMP_PARAMS_1_CP_WDT_CNT_WIDTH_LSB                  24
#define WDT_COMP_PARAMS_1_CP_WDT_CNT_WIDTH_WIDTH                ((uint32_t)0x00000005)
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_INIT_MASK             ((uint32_t)0x00F00000)
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_INIT_LSB              20
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_INIT_WIDTH            ((uint32_t)0x00000004)
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_MASK                  ((uint32_t)0x000F0000)
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_LSB                   16
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_WIDTH                 ((uint32_t)0x00000004)
#define WDT_COMP_PARAMS_1_CP_WDT_DFT_RPL_MASK                   ((uint32_t)0x00001C00)
#define WDT_COMP_PARAMS_1_CP_WDT_DFT_RPL_LSB                    10
#define WDT_COMP_PARAMS_1_CP_WDT_DFT_RPL_WIDTH                  ((uint32_t)0x00000003)
#define WDT_COMP_PARAMS_1_CP_WDT_APB_DATA_WIDTH_MASK            ((uint32_t)0x00000300)
#define WDT_COMP_PARAMS_1_CP_WDT_APB_DATA_WIDTH_LSB             8
#define WDT_COMP_PARAMS_1_CP_WDT_APB_DATA_WIDTH_WIDTH           ((uint32_t)0x00000002)
#define WDT_COMP_PARAMS_1_CP_WDT_PAUSE_BIT                      ((uint32_t)0x00000080)
#define WDT_COMP_PARAMS_1_CP_WDT_PAUSE_POS                      7
#define WDT_COMP_PARAMS_1_CP_WDT_USE_FIX_TOP_BIT                ((uint32_t)0x00000040)
#define WDT_COMP_PARAMS_1_CP_WDT_USE_FIX_TOP_POS                6
#define WDT_COMP_PARAMS_1_CP_WDT_HC_TOP_BIT                     ((uint32_t)0x00000020)
#define WDT_COMP_PARAMS_1_CP_WDT_HC_TOP_POS                     5
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RPL_BIT                     ((uint32_t)0x00000010)
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RPL_POS                     4
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RMOD_BIT                    ((uint32_t)0x00000008)
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RMOD_POS                    3
#define WDT_COMP_PARAMS_1_CP_WDT_DUAL_TOP_BIT                   ((uint32_t)0x00000004)
#define WDT_COMP_PARAMS_1_CP_WDT_DUAL_TOP_POS                   2
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_RMOD_BIT                  ((uint32_t)0x00000002)
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_RMOD_POS                  1
#define WDT_COMP_PARAMS_1_CP_WDT_ALWAYS_EN_BIT                  ((uint32_t)0x00000001)
#define WDT_COMP_PARAMS_1_CP_WDT_ALWAYS_EN_POS                  0

#define WDT_COMP_PARAMS_1_CP_WDT_CNT_WIDTH_RST                  0x8
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_INIT_RST              0x0
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_TOP_RST                   0x0
#define WDT_COMP_PARAMS_1_CP_WDT_DFT_RPL_RST                    0x0
#define WDT_COMP_PARAMS_1_CP_WDT_APB_DATA_WIDTH_RST             0x2
#define WDT_COMP_PARAMS_1_CP_WDT_PAUSE_RST                      0x0
#define WDT_COMP_PARAMS_1_CP_WDT_USE_FIX_TOP_RST                0x1
#define WDT_COMP_PARAMS_1_CP_WDT_HC_TOP_RST                     0x0
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RPL_RST                     0x0
#define WDT_COMP_PARAMS_1_CP_WDT_HC_RMOD_RST                    0x0
#define WDT_COMP_PARAMS_1_CP_WDT_DUAL_TOP_RST                   0x0
#define WDT_COMP_PARAMS_1_CP_WDT_DFLT_RMOD_RST                  0x0
#define WDT_COMP_PARAMS_1_CP_WDT_ALWAYS_EN_RST                  0x0

__INLINE static void wdt_comp_params_1_unpack(uint8_t* cpwdtcntwidth, uint8_t* cpwdtdflttopinit, uint8_t* cpwdtdflttop, uint8_t* cpwdtdftrpl, uint8_t* cpwdtapbdatawidth, uint8_t* cpwdtpause, uint8_t* cpwdtusefixtop, uint8_t* cpwdthctop, uint8_t* cpwdthcrpl, uint8_t* cpwdthcrmod, uint8_t* cpwdtdualtop, uint8_t* cpwdtdfltrmod, uint8_t* cpwdtalwaysen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *cpwdtcntwidth = (localVal & ((uint32_t)0x1F000000)) >> 24;
    *cpwdtdflttopinit = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *cpwdtdflttop = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *cpwdtdftrpl = (localVal & ((uint32_t)0x00001C00)) >> 10;
    *cpwdtapbdatawidth = (localVal & ((uint32_t)0x00000300)) >> 8;
    *cpwdtpause = (localVal & ((uint32_t)0x00000080)) >> 7;
    *cpwdtusefixtop = (localVal & ((uint32_t)0x00000040)) >> 6;
    *cpwdthctop = (localVal & ((uint32_t)0x00000020)) >> 5;
    *cpwdthcrpl = (localVal & ((uint32_t)0x00000010)) >> 4;
    *cpwdthcrmod = (localVal & ((uint32_t)0x00000008)) >> 3;
    *cpwdtdualtop = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cpwdtdfltrmod = (localVal & ((uint32_t)0x00000002)) >> 1;
    *cpwdtalwaysen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_cnt_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1F000000)) >> 24);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_dflt_top_init_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_dflt_top_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_dft_rpl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001C00)) >> 10);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_apb_data_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_pause_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_use_fix_top_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_hc_top_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_hc_rpl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_hc_rmod_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_dual_top_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_dflt_rmod_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t wdt_comp_params_1_cp_wdt_always_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_PARAMS_1_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief COMP_VERSION register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  WCV   0b3130372A
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_VERSION_OFFSET 0x000000F8


__INLINE static uint32_t wdt_comp_version_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_VERSION_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_VERSION_WCV_MASK                              ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_VERSION_WCV_LSB                               0
#define WDT_COMP_VERSION_WCV_WIDTH                             ((uint32_t)0x00000020)

#define WDT_COMP_VERSION_WCV_RST                               0x3130372A

__INLINE static void wdt_comp_version_unpack(uint8_t* wcv)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_VERSION_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *wcv = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_version_wcv_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_VERSION_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief COMP_TYPE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  CTR   0b44570120
 * </pre>
 */
#define FEMTO_REG_WDT_COMP_TYPE_OFFSET 0x000000FC


__INLINE static uint32_t wdt_comp_type_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_TYPE_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
}

// field definitions
#define WDT_COMP_TYPE_CTR_MASK                              ((uint32_t)0xFFFFFFFF)
#define WDT_COMP_TYPE_CTR_LSB                               0
#define WDT_COMP_TYPE_CTR_WIDTH                             ((uint32_t)0x00000020)

#define WDT_COMP_TYPE_CTR_RST                               0x44570120

__INLINE static void wdt_comp_type_unpack(uint8_t* ctr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_TYPE_OFFSET + FEMTO_REG_WDT_BASE_ADDR);

    *ctr = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t wdt_comp_type_ctr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_WDT_COMP_TYPE_OFFSET + FEMTO_REG_WDT_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}


#endif // _FEMTO_REG_WDT_H_

