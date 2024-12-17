#ifndef _FEMTO_REG_AON_RTC_H_
#define _FEMTO_REG_AON_RTC_H_

#define FEMTO_REG_AON_RTC_COUNT 4

#define FEMTO_REG_AON_RTC_BASE_ADDR 0x4000F000

#define FEMTO_REG_AON_RTC_SIZE 0x00000014


 /**
 * @brief RTC_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     20            cc_evt_en   0
 *     01              rtc_clr   0
 *     00              rtc_run   0
 * </pre>
 */
#define FEMTO_REG_AON_RTC_RTC_REG0_OFFSET 0x00000080


__INLINE static uint32_t aon_rtc_rtc_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
}

__INLINE static void aon_rtc_rtc_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, value);
}

// field definitions
#define AON_RTC_RTC_REG0_CC_EVT_EN_BIT                         ((uint32_t)0x00100000)
#define AON_RTC_RTC_REG0_CC_EVT_EN_POS                         20
#define AON_RTC_RTC_REG0_RTC_CLR_BIT                           ((uint32_t)0x00000002)
#define AON_RTC_RTC_REG0_RTC_CLR_POS                           1
#define AON_RTC_RTC_REG0_RTC_RUN_BIT                           ((uint32_t)0x00000001)
#define AON_RTC_RTC_REG0_RTC_RUN_POS                           0

#define AON_RTC_RTC_REG0_CC_EVT_EN_RST                         0x0
#define AON_RTC_RTC_REG0_RTC_CLR_RST                           0x0
#define AON_RTC_RTC_REG0_RTC_RUN_RST                           0x0

__INLINE static void aon_rtc_rtc_reg0_pack(uint8_t ccevten, uint8_t rtcclr, uint8_t rtcrun)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR,  ((uint32_t)ccevten << 20) | ((uint32_t)rtcclr << 1) | ((uint32_t)rtcrun << 0));
}

__INLINE static void aon_rtc_rtc_reg0_unpack(uint8_t* ccevten, uint8_t* rtcclr, uint8_t* rtcrun)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);

    *ccevten = (localVal & ((uint32_t)0x00100000)) >> 20;
    *rtcclr = (localVal & ((uint32_t)0x00000002)) >> 1;
    *rtcrun = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_rtc_rtc_reg0_cc_evt_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void aon_rtc_rtc_reg0_cc_evt_en_setf(uint8_t ccevten)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)ccevten << 20));
}

__INLINE static uint8_t aon_rtc_rtc_reg0_rtc_clr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void aon_rtc_rtc_reg0_rtc_clr_setf(uint8_t rtcclr)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rtcclr << 1));
}

__INLINE static uint8_t aon_rtc_rtc_reg0_rtc_run_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_rtc_rtc_reg0_rtc_run_setf(uint8_t rtcrun)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG0_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)rtcrun << 0));
}

 /**
 * @brief RTC_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:00              rtc_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_AON_RTC_RTC_REG1_OFFSET 0x00000084


__INLINE static uint32_t aon_rtc_rtc_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG1_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
}

// field definitions
#define AON_RTC_RTC_REG1_RTC_CNT_MASK                          ((uint32_t)0x000FFFFF)
#define AON_RTC_RTC_REG1_RTC_CNT_LSB                           0
#define AON_RTC_RTC_REG1_RTC_CNT_WIDTH                         ((uint32_t)0x00000014)

#define AON_RTC_RTC_REG1_RTC_CNT_RST                           0x0

__INLINE static void aon_rtc_rtc_reg1_unpack(uint8_t* rtccnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG1_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);

    *rtccnt = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint32_t aon_rtc_rtc_reg1_rtc_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG1_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

 /**
 * @brief RTC_REG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:00          rtc_cc0_val   0b0
 * </pre>
 */
#define FEMTO_REG_AON_RTC_RTC_REG2_OFFSET 0x00000088


__INLINE static uint32_t aon_rtc_rtc_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
}

__INLINE static void aon_rtc_rtc_reg2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, value);
}

// field definitions
#define AON_RTC_RTC_REG2_RTC_CC0_VAL_MASK                      ((uint32_t)0x000FFFFF)
#define AON_RTC_RTC_REG2_RTC_CC0_VAL_LSB                       0
#define AON_RTC_RTC_REG2_RTC_CC0_VAL_WIDTH                     ((uint32_t)0x00000014)

#define AON_RTC_RTC_REG2_RTC_CC0_VAL_RST                       0x0

__INLINE static void aon_rtc_rtc_reg2_pack(uint32_t rtccc0val)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR,  ((uint32_t)rtccc0val << 0));
}

__INLINE static void aon_rtc_rtc_reg2_unpack(uint8_t* rtccc0val)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);

    *rtccc0val = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint32_t aon_rtc_rtc_reg2_rtc_cc0_val_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void aon_rtc_rtc_reg2_rtc_cc0_val_setf(uint32_t rtccc0val)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_RTC_RTC_REG2_OFFSET+ FEMTO_REG_AON_RTC_BASE_ADDR, (uint32_t)rtccc0val << 0);
}

 /**
 * @brief RTC_REG5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00               rtc_cc   0
 * </pre>
 */
#define FEMTO_REG_AON_RTC_RTC_REG5_OFFSET 0x00000094


__INLINE static uint32_t aon_rtc_rtc_reg5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG5_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
}

// field definitions
#define AON_RTC_RTC_REG5_RTC_CC_BIT                            ((uint32_t)0x00000001)
#define AON_RTC_RTC_REG5_RTC_CC_POS                            0

#define AON_RTC_RTC_REG5_RTC_CC_RST                            0x0

__INLINE static void aon_rtc_rtc_reg5_unpack(uint8_t* rtccc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG5_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);

    *rtccc = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_rtc_rtc_reg5_rtc_cc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_RTC_RTC_REG5_OFFSET + FEMTO_REG_AON_RTC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}


#endif // _FEMTO_REG_AON_RTC_H_

