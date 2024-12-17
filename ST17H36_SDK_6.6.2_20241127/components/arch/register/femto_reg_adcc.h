#ifndef _FEMTO_REG_ADCC_H_
#define _FEMTO_REG_ADCC_H_

#define FEMTO_REG_ADCC_COUNT 5

#define FEMTO_REG_ADCC_BASE_ADDR 0x40050000

#define FEMTO_REG_ADCC_SIZE 0x00000010


 /**
 * @brief ADCC_DATA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00            adcc_data   0b0
 * </pre>
 */
#define FEMTO_REG_ADCC_ADCC_DATA_OFFSET 0x00000000


__INLINE static uint32_t adcc_adcc_data_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_DATA_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
}

// field definitions
#define ADCC_ADCC_DATA_ADCC_DATA_MASK                        ((uint32_t)0xFFFFFFFF)
#define ADCC_ADCC_DATA_ADCC_DATA_LSB                         0
#define ADCC_ADCC_DATA_ADCC_DATA_WIDTH                       ((uint32_t)0x00000020)

#define ADCC_ADCC_DATA_ADCC_DATA_RST                         0x0

__INLINE static void adcc_adcc_data_unpack(uint8_t* adccdata)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_DATA_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);

    *adccdata = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t adcc_adcc_data_adcc_data_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_DATA_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief ADCC_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:17          adc_cmp_hth   0b0
 *  15:04          adc_cmp_lth   0b0
 *     02    adc_cmp_direction   0
 *     01           adc_cmp_en   0
 *     00               adc_en   0
 * </pre>
 */
#define FEMTO_REG_ADCC_ADCC_REG0_OFFSET 0x00000004


__INLINE static uint32_t adcc_adcc_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
}

__INLINE static void adcc_adcc_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, value);
}

// field definitions
#define ADCC_ADCC_REG0_ADC_CMP_HTH_MASK                      ((uint32_t)0x1FFE0000)
#define ADCC_ADCC_REG0_ADC_CMP_HTH_LSB                       17
#define ADCC_ADCC_REG0_ADC_CMP_HTH_WIDTH                     ((uint32_t)0x0000000C)
#define ADCC_ADCC_REG0_ADC_CMP_LTH_MASK                      ((uint32_t)0x0000FFF0)
#define ADCC_ADCC_REG0_ADC_CMP_LTH_LSB                       4
#define ADCC_ADCC_REG0_ADC_CMP_LTH_WIDTH                     ((uint32_t)0x0000000C)
#define ADCC_ADCC_REG0_ADC_CMP_DIRECTION_BIT                 ((uint32_t)0x00000004)
#define ADCC_ADCC_REG0_ADC_CMP_DIRECTION_POS                 2
#define ADCC_ADCC_REG0_ADC_CMP_EN_BIT                        ((uint32_t)0x00000002)
#define ADCC_ADCC_REG0_ADC_CMP_EN_POS                        1
#define ADCC_ADCC_REG0_ADC_EN_BIT                            ((uint32_t)0x00000001)
#define ADCC_ADCC_REG0_ADC_EN_POS                            0

#define ADCC_ADCC_REG0_ADC_CMP_HTH_RST                       0x0
#define ADCC_ADCC_REG0_ADC_CMP_LTH_RST                       0x0
#define ADCC_ADCC_REG0_ADC_CMP_DIRECTION_RST                 0x0
#define ADCC_ADCC_REG0_ADC_CMP_EN_RST                        0x0
#define ADCC_ADCC_REG0_ADC_EN_RST                            0x0

__INLINE static void adcc_adcc_reg0_pack(uint16_t adccmphth, uint16_t adccmplth, uint8_t adccmpdirection, uint8_t adccmpen, uint8_t adcen)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR,  ((uint32_t)adccmphth << 17) | ((uint32_t)adccmplth << 4) | ((uint32_t)adccmpdirection << 2) | ((uint32_t)adccmpen << 1) | ((uint32_t)adcen << 0));
}

__INLINE static void adcc_adcc_reg0_unpack(uint8_t* adccmphth, uint8_t* adccmplth, uint8_t* adccmpdirection, uint8_t* adccmpen, uint8_t* adcen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);

    *adccmphth = (localVal & ((uint32_t)0x1FFE0000)) >> 17;
    *adccmplth = (localVal & ((uint32_t)0x0000FFF0)) >> 4;
    *adccmpdirection = (localVal & ((uint32_t)0x00000004)) >> 2;
    *adccmpen = (localVal & ((uint32_t)0x00000002)) >> 1;
    *adcen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint16_t adcc_adcc_reg0_adc_cmp_hth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FFE0000)) >> 17);
}

__INLINE static void adcc_adcc_reg0_adc_cmp_hth_setf(uint16_t adccmphth)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x1FFE0000)) | ((uint32_t)adccmphth << 17));
}

__INLINE static uint16_t adcc_adcc_reg0_adc_cmp_lth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFF0)) >> 4);
}

__INLINE static void adcc_adcc_reg0_adc_cmp_lth_setf(uint16_t adccmplth)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x0000FFF0)) | ((uint32_t)adccmplth << 4));
}

__INLINE static uint8_t adcc_adcc_reg0_adc_cmp_direction_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void adcc_adcc_reg0_adc_cmp_direction_setf(uint8_t adccmpdirection)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)adccmpdirection << 2));
}

__INLINE static uint8_t adcc_adcc_reg0_adc_cmp_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void adcc_adcc_reg0_adc_cmp_en_setf(uint8_t adccmpen)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)adccmpen << 1));
}

__INLINE static uint8_t adcc_adcc_reg0_adc_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void adcc_adcc_reg0_adc_en_setf(uint8_t adcen)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG0_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG0_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)adcen << 0));
}

 /**
 * @brief ADCC_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  13:06            adc12_ctl   0b0
 *     04             adc12_pu   0
 *     02        adc_tconv_sel   0
 *  01:00          adc_clk_sel   0b10
 * </pre>
 */
#define FEMTO_REG_ADCC_ADCC_REG1_OFFSET 0x00000008


__INLINE static uint32_t adcc_adcc_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
}

__INLINE static void adcc_adcc_reg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, value);
}

// field definitions
#define ADCC_ADCC_REG1_ADC12_CTL_MASK                        ((uint32_t)0x00003FC0)
#define ADCC_ADCC_REG1_ADC12_CTL_LSB                         6
#define ADCC_ADCC_REG1_ADC12_CTL_WIDTH                       ((uint32_t)0x00000008)
#define ADCC_ADCC_REG1_ADC12_PU_BIT                          ((uint32_t)0x00000010)
#define ADCC_ADCC_REG1_ADC12_PU_POS                          4
#define ADCC_ADCC_REG1_ADC_TCONV_SEL_BIT                     ((uint32_t)0x00000004)
#define ADCC_ADCC_REG1_ADC_TCONV_SEL_POS                     2
#define ADCC_ADCC_REG1_ADC_CLK_SEL_MASK                      ((uint32_t)0x00000003)
#define ADCC_ADCC_REG1_ADC_CLK_SEL_LSB                       0
#define ADCC_ADCC_REG1_ADC_CLK_SEL_WIDTH                     ((uint32_t)0x00000002)

#define ADCC_ADCC_REG1_ADC12_CTL_RST                         0x0
#define ADCC_ADCC_REG1_ADC12_PU_RST                          0x0
#define ADCC_ADCC_REG1_ADC_TCONV_SEL_RST                     0x0
#define ADCC_ADCC_REG1_ADC_CLK_SEL_RST                       0x10

__INLINE static void adcc_adcc_reg1_pack(uint8_t adc12ctl, uint8_t adc12pu, uint8_t adctconvsel, uint8_t adcclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR,  ((uint32_t)adc12ctl << 6) | ((uint32_t)adc12pu << 4) | ((uint32_t)adctconvsel << 2) | ((uint32_t)adcclksel << 0));
}

__INLINE static void adcc_adcc_reg1_unpack(uint8_t* adc12ctl, uint8_t* adc12pu, uint8_t* adctconvsel, uint8_t* adcclksel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);

    *adc12ctl = (localVal & ((uint32_t)0x00003FC0)) >> 6;
    *adc12pu = (localVal & ((uint32_t)0x00000010)) >> 4;
    *adctconvsel = (localVal & ((uint32_t)0x00000004)) >> 2;
    *adcclksel = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t adcc_adcc_reg1_adc12_ctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003FC0)) >> 6);
}

__INLINE static void adcc_adcc_reg1_adc12_ctl_setf(uint8_t adc12ctl)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00003FC0)) | ((uint32_t)adc12ctl << 6));
}

__INLINE static uint8_t adcc_adcc_reg1_adc12_pu_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void adcc_adcc_reg1_adc12_pu_setf(uint8_t adc12pu)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)adc12pu << 4));
}

__INLINE static uint8_t adcc_adcc_reg1_adc_tconv_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void adcc_adcc_reg1_adc_tconv_sel_setf(uint8_t adctconvsel)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)adctconvsel << 2));
}

__INLINE static uint8_t adcc_adcc_reg1_adc_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void adcc_adcc_reg1_adc_clk_sel_setf(uint8_t adcclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_ADCC_REG1_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG1_OFFSET + FEMTO_REG_ADCC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)adcclksel << 0));
}

 /**
 * @brief ADCC_REG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00          adc_int_src   0b0
 * </pre>
 */
#define FEMTO_REG_ADCC_ADCC_REG2_OFFSET 0x0000000C


__INLINE static uint32_t adcc_adcc_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG2_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
}

// field definitions
#define ADCC_ADCC_REG2_ADC_INT_SRC_MASK                      ((uint32_t)0x00000003)
#define ADCC_ADCC_REG2_ADC_INT_SRC_LSB                       0
#define ADCC_ADCC_REG2_ADC_INT_SRC_WIDTH                     ((uint32_t)0x00000002)

#define ADCC_ADCC_REG2_ADC_INT_SRC_RST                       0x0

__INLINE static void adcc_adcc_reg2_unpack(uint8_t* adcintsrc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG2_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);

    *adcintsrc = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t adcc_adcc_reg2_adc_int_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_ADCC_REG2_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

 /**
 * @brief AES_REG5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00         adc_int_mask   0b0
 * </pre>
 */
#define FEMTO_REG_ADCC_AES_REG5_OFFSET 0x00000010


__INLINE static uint32_t adcc_aes_reg5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_ADCC_AES_REG5_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
}

__INLINE static void adcc_aes_reg5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_AES_REG5_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, value);
}

// field definitions
#define ADCC_AES_REG5_ADC_INT_MASK_MASK                     ((uint32_t)0x00000003)
#define ADCC_AES_REG5_ADC_INT_MASK_LSB                      0
#define ADCC_AES_REG5_ADC_INT_MASK_WIDTH                    ((uint32_t)0x00000002)

#define ADCC_AES_REG5_ADC_INT_MASK_RST                      0x0

__INLINE static void adcc_aes_reg5_pack(uint8_t adcintmask)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_AES_REG5_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR,  ((uint32_t)adcintmask << 0));
}

__INLINE static void adcc_aes_reg5_unpack(uint8_t* adcintmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_AES_REG5_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);

    *adcintmask = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t adcc_aes_reg5_adc_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_ADCC_AES_REG5_OFFSET + FEMTO_REG_ADCC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void adcc_aes_reg5_adc_int_mask_setf(uint8_t adcintmask)
{
    _FEMTO_REG_WR(FEMTO_REG_ADCC_AES_REG5_OFFSET+ FEMTO_REG_ADCC_BASE_ADDR, (uint32_t)adcintmask << 0);
}


#endif // _FEMTO_REG_ADCC_H_

