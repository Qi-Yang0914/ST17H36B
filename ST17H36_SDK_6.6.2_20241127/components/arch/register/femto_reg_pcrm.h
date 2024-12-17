#ifndef _FEMTO_REG_PCRM_H_
#define _FEMTO_REG_PCRM_H_

#define FEMTO_REG_PCRM_COUNT 31

#define FEMTO_REG_PCRM_BASE_ADDR 0x4000F800

#define FEMTO_REG_PCRM_SIZE 0x00000188


 /**
 * @brief CLKSEL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28            bbpll_div   0
 *     17         aon_pclk_inv   0
 *     16           lowclk_sel   0
 *     08              sel_32M   1
 *     06         clk_1p28m_en   1
 *     05   hclk_sel_en_override   1
 *     04   hclk_mux_done_override   1
 *  03:00             hclk_sel   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CLKSEL_OFFSET 0x00000000


__INLINE static uint32_t pcrm_clksel_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clksel_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLKSEL_BBPLL_DIV_BIT                         ((uint32_t)0x10000000)
#define PCRM_CLKSEL_BBPLL_DIV_POS                         28
#define PCRM_CLKSEL_AON_PCLK_INV_BIT                      ((uint32_t)0x00020000)
#define PCRM_CLKSEL_AON_PCLK_INV_POS                      17
#define PCRM_CLKSEL_LOWCLK_SEL_BIT                        ((uint32_t)0x00010000)
#define PCRM_CLKSEL_LOWCLK_SEL_POS                        16
#define PCRM_CLKSEL_SEL_32M_BIT                           ((uint32_t)0x00000100)
#define PCRM_CLKSEL_SEL_32M_POS                           8
#define PCRM_CLKSEL_CLK_1P28M_EN_BIT                      ((uint32_t)0x00000040)
#define PCRM_CLKSEL_CLK_1P28M_EN_POS                      6
#define PCRM_CLKSEL_HCLK_SEL_EN_OVERRIDE_BIT              ((uint32_t)0x00000020)
#define PCRM_CLKSEL_HCLK_SEL_EN_OVERRIDE_POS              5
#define PCRM_CLKSEL_HCLK_MUX_DONE_OVERRIDE_BIT            ((uint32_t)0x00000010)
#define PCRM_CLKSEL_HCLK_MUX_DONE_OVERRIDE_POS            4
#define PCRM_CLKSEL_HCLK_SEL_MASK                         ((uint32_t)0x0000000F)
#define PCRM_CLKSEL_HCLK_SEL_LSB                          0
#define PCRM_CLKSEL_HCLK_SEL_WIDTH                        ((uint32_t)0x00000004)

#define PCRM_CLKSEL_BBPLL_DIV_RST                         0x0
#define PCRM_CLKSEL_AON_PCLK_INV_RST                      0x0
#define PCRM_CLKSEL_LOWCLK_SEL_RST                        0x0
#define PCRM_CLKSEL_SEL_32M_RST                           0x1
#define PCRM_CLKSEL_CLK_1P28M_EN_RST                      0x1
#define PCRM_CLKSEL_HCLK_SEL_EN_OVERRIDE_RST              0x1
#define PCRM_CLKSEL_HCLK_MUX_DONE_OVERRIDE_RST            0x1
#define PCRM_CLKSEL_HCLK_SEL_RST                          0x0

__INLINE static void pcrm_clksel_pack(uint8_t bbplldiv, uint8_t aonpclkinv, uint8_t lowclksel, uint8_t sel32m, uint8_t clk1p28men, uint8_t hclkselenoverride, uint8_t hclkmuxdoneoverride, uint8_t hclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)bbplldiv << 28) | ((uint32_t)aonpclkinv << 17) | ((uint32_t)lowclksel << 16) | ((uint32_t)sel32m << 8) | ((uint32_t)clk1p28men << 6) | ((uint32_t)hclkselenoverride << 5) | ((uint32_t)hclkmuxdoneoverride << 4) | ((uint32_t)hclksel << 0));
}

__INLINE static void pcrm_clksel_unpack(uint8_t* bbplldiv, uint8_t* aonpclkinv, uint8_t* lowclksel, uint8_t* sel32m, uint8_t* clk1p28men, uint8_t* hclkselenoverride, uint8_t* hclkmuxdoneoverride, uint8_t* hclksel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *bbplldiv = (localVal & ((uint32_t)0x10000000)) >> 28;
    *aonpclkinv = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lowclksel = (localVal & ((uint32_t)0x00010000)) >> 16;
    *sel32m = (localVal & ((uint32_t)0x00000100)) >> 8;
    *clk1p28men = (localVal & ((uint32_t)0x00000040)) >> 6;
    *hclkselenoverride = (localVal & ((uint32_t)0x00000020)) >> 5;
    *hclkmuxdoneoverride = (localVal & ((uint32_t)0x00000010)) >> 4;
    *hclksel = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_clksel_bbpll_div_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void pcrm_clksel_bbpll_div_setf(uint8_t bbplldiv)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)bbplldiv << 28));
}

__INLINE static uint8_t pcrm_clksel_aon_pclk_inv_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcrm_clksel_aon_pclk_inv_setf(uint8_t aonpclkinv)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)aonpclkinv << 17));
}

__INLINE static uint8_t pcrm_clksel_lowclk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcrm_clksel_lowclk_sel_setf(uint8_t lowclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lowclksel << 16));
}

__INLINE static uint8_t pcrm_clksel_sel_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcrm_clksel_sel_32m_setf(uint8_t sel32m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)sel32m << 8));
}

__INLINE static uint8_t pcrm_clksel_clk_1p28m_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void pcrm_clksel_clk_1p28m_en_setf(uint8_t clk1p28men)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)clk1p28men << 6));
}

__INLINE static uint8_t pcrm_clksel_hclk_sel_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void pcrm_clksel_hclk_sel_en_override_setf(uint8_t hclkselenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)hclkselenoverride << 5));
}

__INLINE static uint8_t pcrm_clksel_hclk_mux_done_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_clksel_hclk_mux_done_override_setf(uint8_t hclkmuxdoneoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)hclkmuxdoneoverride << 4));
}

__INLINE static uint8_t pcrm_clksel_hclk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void pcrm_clksel_hclk_sel_setf(uint8_t hclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKSEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKSEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)hclksel << 0));
}

 /**
 * @brief CLKHF_CTL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     18      xtal_clk_dig_en   0
 *  05:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET 0x00000008


__INLINE static uint32_t pcrm_clkhf_ctl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clkhf_ctl0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLKHF_CTL0_XTAL_CLK_DIG_EN_BIT                   ((uint32_t)0x00040000)
#define PCRM_CLKHF_CTL0_XTAL_CLK_DIG_EN_POS                   18
#define PCRM_CLKHF_CTL0_RESERVED_MASK                         ((uint32_t)0x0000003F)
#define PCRM_CLKHF_CTL0_RESERVED_LSB                          0
#define PCRM_CLKHF_CTL0_RESERVED_WIDTH                        ((uint32_t)0x00000006)

#define PCRM_CLKHF_CTL0_XTAL_CLK_DIG_EN_RST                   0x0
#define PCRM_CLKHF_CTL0_RESERVED_RST                          0x0

__INLINE static void pcrm_clkhf_ctl0_pack(uint8_t xtalclkdigen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)xtalclkdigen << 18));
}

__INLINE static void pcrm_clkhf_ctl0_unpack(uint8_t* xtalclkdigen, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *xtalclkdigen = (localVal & ((uint32_t)0x00040000)) >> 18;
    *reserved = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t pcrm_clkhf_ctl0_xtal_clk_dig_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void pcrm_clkhf_ctl0_xtal_clk_dig_en_setf(uint8_t xtalclkdigen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)xtalclkdigen << 18);
}

 /**
 * @brief CLKHF_CTL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:24        rxadc_clk_sel   0b10
 *  23:22           rf_clk_sel   0b10
 *  21:20      dig_clk_32M_sel   0b10
 *     19     en_rxadc_clk_32M   0
 *     18            en_rf_clk   0
 *     16       en_dig_clk_96M   0
 *     15       en_dig_clk_64M   0
 *     14       en_dig_clk_48M   0
 *     13       en_dig_clk_32M   0
 *     08               ldo_en   0
 *     07               dll_en   0
 *  06:05         dll_ldo_ctrl   0b1
 *     04           dll_ldo_pu   0
 *  01:00   bbpll_ldo_vout_ctrl   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET 0x0000000C


__INLINE static uint32_t pcrm_clkhf_ctl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clkhf_ctl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLKHF_CTL1_RXADC_CLK_SEL_MASK                    ((uint32_t)0x03000000)
#define PCRM_CLKHF_CTL1_RXADC_CLK_SEL_LSB                     24
#define PCRM_CLKHF_CTL1_RXADC_CLK_SEL_WIDTH                   ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTL1_RF_CLK_SEL_MASK                       ((uint32_t)0x00C00000)
#define PCRM_CLKHF_CTL1_RF_CLK_SEL_LSB                        22
#define PCRM_CLKHF_CTL1_RF_CLK_SEL_WIDTH                      ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTL1_DIG_CLK_32M_SEL_MASK                  ((uint32_t)0x00300000)
#define PCRM_CLKHF_CTL1_DIG_CLK_32M_SEL_LSB                   20
#define PCRM_CLKHF_CTL1_DIG_CLK_32M_SEL_WIDTH                 ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTL1_EN_RXADC_CLK_32M_BIT                  ((uint32_t)0x00080000)
#define PCRM_CLKHF_CTL1_EN_RXADC_CLK_32M_POS                  19
#define PCRM_CLKHF_CTL1_EN_RF_CLK_BIT                         ((uint32_t)0x00040000)
#define PCRM_CLKHF_CTL1_EN_RF_CLK_POS                         18
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_96M_BIT                    ((uint32_t)0x00010000)
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_96M_POS                    16
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_64M_BIT                    ((uint32_t)0x00008000)
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_64M_POS                    15
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_48M_BIT                    ((uint32_t)0x00004000)
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_48M_POS                    14
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_32M_BIT                    ((uint32_t)0x00002000)
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_32M_POS                    13
#define PCRM_CLKHF_CTL1_LDO_EN_BIT                            ((uint32_t)0x00000100)
#define PCRM_CLKHF_CTL1_LDO_EN_POS                            8
#define PCRM_CLKHF_CTL1_DLL_EN_BIT                            ((uint32_t)0x00000080)
#define PCRM_CLKHF_CTL1_DLL_EN_POS                            7
#define PCRM_CLKHF_CTL1_DLL_LDO_CTRL_MASK                     ((uint32_t)0x00000060)
#define PCRM_CLKHF_CTL1_DLL_LDO_CTRL_LSB                      5
#define PCRM_CLKHF_CTL1_DLL_LDO_CTRL_WIDTH                    ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTL1_DLL_LDO_PU_BIT                        ((uint32_t)0x00000010)
#define PCRM_CLKHF_CTL1_DLL_LDO_PU_POS                        4
#define PCRM_CLKHF_CTL1_BBPLL_LDO_VOUT_CTRL_MASK              ((uint32_t)0x00000003)
#define PCRM_CLKHF_CTL1_BBPLL_LDO_VOUT_CTRL_LSB               0
#define PCRM_CLKHF_CTL1_BBPLL_LDO_VOUT_CTRL_WIDTH             ((uint32_t)0x00000002)

#define PCRM_CLKHF_CTL1_RXADC_CLK_SEL_RST                     0x10
#define PCRM_CLKHF_CTL1_RF_CLK_SEL_RST                        0x10
#define PCRM_CLKHF_CTL1_DIG_CLK_32M_SEL_RST                   0x10
#define PCRM_CLKHF_CTL1_EN_RXADC_CLK_32M_RST                  0x0
#define PCRM_CLKHF_CTL1_EN_RF_CLK_RST                         0x0
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_96M_RST                    0x0
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_64M_RST                    0x0
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_48M_RST                    0x0
#define PCRM_CLKHF_CTL1_EN_DIG_CLK_32M_RST                    0x0
#define PCRM_CLKHF_CTL1_LDO_EN_RST                            0x0
#define PCRM_CLKHF_CTL1_DLL_EN_RST                            0x0
#define PCRM_CLKHF_CTL1_DLL_LDO_CTRL_RST                      0x1
#define PCRM_CLKHF_CTL1_DLL_LDO_PU_RST                        0x0
#define PCRM_CLKHF_CTL1_BBPLL_LDO_VOUT_CTRL_RST               0x0

__INLINE static void pcrm_clkhf_ctl1_pack(uint8_t rxadcclksel, uint8_t rfclksel, uint8_t digclk32msel, uint8_t enrxadcclk32m, uint8_t enrfclk, uint8_t endigclk96m, uint8_t endigclk64m, uint8_t endigclk48m, uint8_t endigclk32m, uint8_t ldoen, uint8_t dllen, uint8_t dllldoctrl, uint8_t dllldopu, uint8_t bbpllldovoutctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)rxadcclksel << 24) | ((uint32_t)rfclksel << 22) | ((uint32_t)digclk32msel << 20) | ((uint32_t)enrxadcclk32m << 19) | ((uint32_t)enrfclk << 18) | ((uint32_t)endigclk96m << 16) | ((uint32_t)endigclk64m << 15) | ((uint32_t)endigclk48m << 14) | ((uint32_t)endigclk32m << 13) | ((uint32_t)ldoen << 8) | ((uint32_t)dllen << 7) | ((uint32_t)dllldoctrl << 5) | ((uint32_t)dllldopu << 4) | ((uint32_t)bbpllldovoutctrl << 0));
}

__INLINE static void pcrm_clkhf_ctl1_unpack(uint8_t* rxadcclksel, uint8_t* rfclksel, uint8_t* digclk32msel, uint8_t* enrxadcclk32m, uint8_t* enrfclk, uint8_t* endigclk96m, uint8_t* endigclk64m, uint8_t* endigclk48m, uint8_t* endigclk32m, uint8_t* ldoen, uint8_t* dllen, uint8_t* dllldoctrl, uint8_t* dllldopu, uint8_t* bbpllldovoutctrl)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *rxadcclksel = (localVal & ((uint32_t)0x03000000)) >> 24;
    *rfclksel = (localVal & ((uint32_t)0x00C00000)) >> 22;
    *digclk32msel = (localVal & ((uint32_t)0x00300000)) >> 20;
    *enrxadcclk32m = (localVal & ((uint32_t)0x00080000)) >> 19;
    *enrfclk = (localVal & ((uint32_t)0x00040000)) >> 18;
    *endigclk96m = (localVal & ((uint32_t)0x00010000)) >> 16;
    *endigclk64m = (localVal & ((uint32_t)0x00008000)) >> 15;
    *endigclk48m = (localVal & ((uint32_t)0x00004000)) >> 14;
    *endigclk32m = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ldoen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *dllen = (localVal & ((uint32_t)0x00000080)) >> 7;
    *dllldoctrl = (localVal & ((uint32_t)0x00000060)) >> 5;
    *dllldopu = (localVal & ((uint32_t)0x00000010)) >> 4;
    *bbpllldovoutctrl = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t pcrm_clkhf_ctl1_rxadc_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03000000)) >> 24);
}

__INLINE static void pcrm_clkhf_ctl1_rxadc_clk_sel_setf(uint8_t rxadcclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x03000000)) | ((uint32_t)rxadcclksel << 24));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_rf_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00C00000)) >> 22);
}

__INLINE static void pcrm_clkhf_ctl1_rf_clk_sel_setf(uint8_t rfclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00C00000)) | ((uint32_t)rfclksel << 22));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_dig_clk_32m_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00300000)) >> 20);
}

__INLINE static void pcrm_clkhf_ctl1_dig_clk_32m_sel_setf(uint8_t digclk32msel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00300000)) | ((uint32_t)digclk32msel << 20));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_rxadc_clk_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void pcrm_clkhf_ctl1_en_rxadc_clk_32m_setf(uint8_t enrxadcclk32m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)enrxadcclk32m << 19));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_rf_clk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void pcrm_clkhf_ctl1_en_rf_clk_setf(uint8_t enrfclk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)enrfclk << 18));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_dig_clk_96m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcrm_clkhf_ctl1_en_dig_clk_96m_setf(uint8_t endigclk96m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)endigclk96m << 16));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_dig_clk_64m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void pcrm_clkhf_ctl1_en_dig_clk_64m_setf(uint8_t endigclk64m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)endigclk64m << 15));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_dig_clk_48m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void pcrm_clkhf_ctl1_en_dig_clk_48m_setf(uint8_t endigclk48m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)endigclk48m << 14));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_en_dig_clk_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void pcrm_clkhf_ctl1_en_dig_clk_32m_setf(uint8_t endigclk32m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)endigclk32m << 13));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_ldo_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcrm_clkhf_ctl1_ldo_en_setf(uint8_t ldoen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)ldoen << 8));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_dll_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void pcrm_clkhf_ctl1_dll_en_setf(uint8_t dllen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)dllen << 7));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_dll_ldo_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void pcrm_clkhf_ctl1_dll_ldo_ctrl_setf(uint8_t dllldoctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)dllldoctrl << 5));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_dll_ldo_pu_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_clkhf_ctl1_dll_ldo_pu_setf(uint8_t dllldopu)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dllldopu << 4));
}

__INLINE static uint8_t pcrm_clkhf_ctl1_bbpll_ldo_vout_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void pcrm_clkhf_ctl1_bbpll_ldo_vout_ctrl_setf(uint8_t bbpllldovoutctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)bbpllldovoutctrl << 0));
}

 /**
 * @brief ANALOG_CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:29         boot_clk_sel   0b0
 *     28   micbias_vref_fil_en   0
 *     27           micbias_en   0
 *  26:24         pga_1st_gain   0b0
 *     23               pga_en   0
 *  22:20         pga_2nd_gain   0b0
 *  19:00            ia_config   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET 0x00000010


__INLINE static uint32_t pcrm_analog_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_analog_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_ANALOG_CTRL_BOOT_CLK_SEL_MASK                     ((uint32_t)0xE0000000)
#define PCRM_ANALOG_CTRL_BOOT_CLK_SEL_LSB                      29
#define PCRM_ANALOG_CTRL_BOOT_CLK_SEL_WIDTH                    ((uint32_t)0x00000003)
#define PCRM_ANALOG_CTRL_MICBIAS_VREF_FIL_EN_BIT               ((uint32_t)0x10000000)
#define PCRM_ANALOG_CTRL_MICBIAS_VREF_FIL_EN_POS               28
#define PCRM_ANALOG_CTRL_MICBIAS_EN_BIT                        ((uint32_t)0x08000000)
#define PCRM_ANALOG_CTRL_MICBIAS_EN_POS                        27
#define PCRM_ANALOG_CTRL_PGA_1ST_GAIN_MASK                     ((uint32_t)0x07000000)
#define PCRM_ANALOG_CTRL_PGA_1ST_GAIN_LSB                      24
#define PCRM_ANALOG_CTRL_PGA_1ST_GAIN_WIDTH                    ((uint32_t)0x00000003)
#define PCRM_ANALOG_CTRL_PGA_EN_BIT                            ((uint32_t)0x00800000)
#define PCRM_ANALOG_CTRL_PGA_EN_POS                            23
#define PCRM_ANALOG_CTRL_PGA_2ND_GAIN_MASK                     ((uint32_t)0x00700000)
#define PCRM_ANALOG_CTRL_PGA_2ND_GAIN_LSB                      20
#define PCRM_ANALOG_CTRL_PGA_2ND_GAIN_WIDTH                    ((uint32_t)0x00000003)
#define PCRM_ANALOG_CTRL_IA_CONFIG_MASK                        ((uint32_t)0x000FFFFF)
#define PCRM_ANALOG_CTRL_IA_CONFIG_LSB                         0
#define PCRM_ANALOG_CTRL_IA_CONFIG_WIDTH                       ((uint32_t)0x00000014)

#define PCRM_ANALOG_CTRL_BOOT_CLK_SEL_RST                      0x0
#define PCRM_ANALOG_CTRL_MICBIAS_VREF_FIL_EN_RST               0x0
#define PCRM_ANALOG_CTRL_MICBIAS_EN_RST                        0x0
#define PCRM_ANALOG_CTRL_PGA_1ST_GAIN_RST                      0x0
#define PCRM_ANALOG_CTRL_PGA_EN_RST                            0x0
#define PCRM_ANALOG_CTRL_PGA_2ND_GAIN_RST                      0x0
#define PCRM_ANALOG_CTRL_IA_CONFIG_RST                         0x0

__INLINE static void pcrm_analog_ctrl_pack(uint8_t micbiasvreffilen, uint8_t micbiasen, uint8_t pga1stgain, uint8_t pgaen, uint8_t pga2ndgain, uint32_t iaconfig)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)micbiasvreffilen << 28) | ((uint32_t)micbiasen << 27) | ((uint32_t)pga1stgain << 24) | ((uint32_t)pgaen << 23) | ((uint32_t)pga2ndgain << 20) | ((uint32_t)iaconfig << 0));
}

__INLINE static void pcrm_analog_ctrl_unpack(uint8_t* bootclksel, uint8_t* micbiasvreffilen, uint8_t* micbiasen, uint8_t* pga1stgain, uint8_t* pgaen, uint8_t* pga2ndgain, uint8_t* iaconfig)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *bootclksel = (localVal & ((uint32_t)0xE0000000)) >> 29;
    *micbiasvreffilen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *micbiasen = (localVal & ((uint32_t)0x08000000)) >> 27;
    *pga1stgain = (localVal & ((uint32_t)0x07000000)) >> 24;
    *pgaen = (localVal & ((uint32_t)0x00800000)) >> 23;
    *pga2ndgain = (localVal & ((uint32_t)0x00700000)) >> 20;
    *iaconfig = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t pcrm_analog_ctrl_boot_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xE0000000)) >> 29);
}

__INLINE static uint8_t pcrm_analog_ctrl_micbias_vref_fil_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void pcrm_analog_ctrl_micbias_vref_fil_en_setf(uint8_t micbiasvreffilen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)micbiasvreffilen << 28));
}

__INLINE static uint8_t pcrm_analog_ctrl_micbias_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void pcrm_analog_ctrl_micbias_en_setf(uint8_t micbiasen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)micbiasen << 27));
}

__INLINE static uint8_t pcrm_analog_ctrl_pga_1st_gain_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void pcrm_analog_ctrl_pga_1st_gain_setf(uint8_t pga1stgain)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)pga1stgain << 24));
}

__INLINE static uint8_t pcrm_analog_ctrl_pga_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void pcrm_analog_ctrl_pga_en_setf(uint8_t pgaen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)pgaen << 23));
}

__INLINE static uint8_t pcrm_analog_ctrl_pga_2nd_gain_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void pcrm_analog_ctrl_pga_2nd_gain_setf(uint8_t pga2ndgain)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)pga2ndgain << 20));
}

__INLINE static uint32_t pcrm_analog_ctrl_ia_config_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void pcrm_analog_ctrl_ia_config_setf(uint32_t iaconfig)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ANALOG_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)iaconfig << 0));
}

 /**
 * @brief TIMER_CLK_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24      spif_refclk_sel   0b0
 *     20       timerx_muxdone   1
 *     19    timerx_clk_mux_en   1
 *  18:16       timerx_clk_sel   0b7
 *     04        timer_muxdone   1
 *     03     timer_clk_mux_en   1
 *  02:00        timer_clk_sel   0b7
 * </pre>
 */
#define FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET 0x00000014


__INLINE static uint32_t pcrm_timer_clk_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_timer_clk_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_TIMER_CLK_CTL_SPIF_REFCLK_SEL_MASK                  ((uint32_t)0x07000000)
#define PCRM_TIMER_CLK_CTL_SPIF_REFCLK_SEL_LSB                   24
#define PCRM_TIMER_CLK_CTL_SPIF_REFCLK_SEL_WIDTH                 ((uint32_t)0x00000003)
#define PCRM_TIMER_CLK_CTL_TIMERX_MUXDONE_BIT                    ((uint32_t)0x00100000)
#define PCRM_TIMER_CLK_CTL_TIMERX_MUXDONE_POS                    20
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_MUX_EN_BIT                 ((uint32_t)0x00080000)
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_MUX_EN_POS                 19
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_SEL_MASK                   ((uint32_t)0x00070000)
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_SEL_LSB                    16
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_SEL_WIDTH                  ((uint32_t)0x00000003)
#define PCRM_TIMER_CLK_CTL_TIMER_MUXDONE_BIT                     ((uint32_t)0x00000010)
#define PCRM_TIMER_CLK_CTL_TIMER_MUXDONE_POS                     4
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_MUX_EN_BIT                  ((uint32_t)0x00000008)
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_MUX_EN_POS                  3
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_SEL_MASK                    ((uint32_t)0x00000007)
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_SEL_LSB                     0
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_SEL_WIDTH                   ((uint32_t)0x00000003)

#define PCRM_TIMER_CLK_CTL_SPIF_REFCLK_SEL_RST                   0x0
#define PCRM_TIMER_CLK_CTL_TIMERX_MUXDONE_RST                    0x1
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_MUX_EN_RST                 0x1
#define PCRM_TIMER_CLK_CTL_TIMERX_CLK_SEL_RST                    0x7
#define PCRM_TIMER_CLK_CTL_TIMER_MUXDONE_RST                     0x1
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_MUX_EN_RST                  0x1
#define PCRM_TIMER_CLK_CTL_TIMER_CLK_SEL_RST                     0x7

__INLINE static void pcrm_timer_clk_ctl_pack(uint8_t spifrefclksel, uint8_t timerxclkmuxen, uint8_t timerxclksel, uint8_t timerclkmuxen, uint8_t timerclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)spifrefclksel << 24) | ((uint32_t)timerxclkmuxen << 19) | ((uint32_t)timerxclksel << 16) | ((uint32_t)timerclkmuxen << 3) | ((uint32_t)timerclksel << 0));
}

__INLINE static void pcrm_timer_clk_ctl_unpack(uint8_t* spifrefclksel, uint8_t* timerxmuxdone, uint8_t* timerxclkmuxen, uint8_t* timerxclksel, uint8_t* timermuxdone, uint8_t* timerclkmuxen, uint8_t* timerclksel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *spifrefclksel = (localVal & ((uint32_t)0x07000000)) >> 24;
    *timerxmuxdone = (localVal & ((uint32_t)0x00100000)) >> 20;
    *timerxclkmuxen = (localVal & ((uint32_t)0x00080000)) >> 19;
    *timerxclksel = (localVal & ((uint32_t)0x00070000)) >> 16;
    *timermuxdone = (localVal & ((uint32_t)0x00000010)) >> 4;
    *timerclkmuxen = (localVal & ((uint32_t)0x00000008)) >> 3;
    *timerclksel = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t pcrm_timer_clk_ctl_spif_refclk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void pcrm_timer_clk_ctl_spif_refclk_sel_setf(uint8_t spifrefclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)spifrefclksel << 24));
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timerx_muxdone_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timerx_clk_mux_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void pcrm_timer_clk_ctl_timerx_clk_mux_en_setf(uint8_t timerxclkmuxen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)timerxclkmuxen << 19));
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timerx_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static void pcrm_timer_clk_ctl_timerx_clk_sel_setf(uint8_t timerxclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00070000)) | ((uint32_t)timerxclksel << 16));
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timer_muxdone_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timer_clk_mux_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcrm_timer_clk_ctl_timer_clk_mux_en_setf(uint8_t timerclkmuxen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)timerclkmuxen << 3));
}

__INLINE static uint8_t pcrm_timer_clk_ctl_timer_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void pcrm_timer_clk_ctl_timer_clk_sel_setf(uint8_t timerclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_TIMER_CLK_CTL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)timerclksel << 0));
}

 /**
 * @brief ROM_DVS register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04          rom1_0_dvse   0
 *  03:00           rom1_0_dvs   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_ROM_DVS_OFFSET 0x00000020


__INLINE static uint32_t pcrm_rom_dvs_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_rom_dvs_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ROM_DVS_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_ROM_DVS_ROM1_0_DVSE_BIT                       ((uint32_t)0x00000010)
#define PCRM_ROM_DVS_ROM1_0_DVSE_POS                       4
#define PCRM_ROM_DVS_ROM1_0_DVS_MASK                       ((uint32_t)0x0000000F)
#define PCRM_ROM_DVS_ROM1_0_DVS_LSB                        0
#define PCRM_ROM_DVS_ROM1_0_DVS_WIDTH                      ((uint32_t)0x00000004)

#define PCRM_ROM_DVS_ROM1_0_DVSE_RST                       0x0
#define PCRM_ROM_DVS_ROM1_0_DVS_RST                        0x0

__INLINE static void pcrm_rom_dvs_pack(uint8_t rom10dvse, uint8_t rom10dvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ROM_DVS_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)rom10dvse << 4) | ((uint32_t)rom10dvs << 0));
}

__INLINE static void pcrm_rom_dvs_unpack(uint8_t* rom10dvse, uint8_t* rom10dvs)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *rom10dvse = (localVal & ((uint32_t)0x00000010)) >> 4;
    *rom10dvs = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_rom_dvs_rom1_0_dvse_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_rom_dvs_rom1_0_dvse_setf(uint8_t rom10dvse)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ROM_DVS_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)rom10dvse << 4));
}

__INLINE static uint8_t pcrm_rom_dvs_rom1_0_dvs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void pcrm_rom_dvs_rom1_0_dvs_setf(uint8_t rom10dvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ROM_DVS_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ROM_DVS_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)rom10dvs << 0));
}

 /**
 * @brief RAM_DVS_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03            ram0_dvse   0
 *  02:00             ram0_dvs   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_RAM_DVS_0_OFFSET 0x00000024


__INLINE static uint32_t pcrm_ram_dvs_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_ram_dvs_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_RAM_DVS_0_RAM0_DVSE_BIT                         ((uint32_t)0x00000008)
#define PCRM_RAM_DVS_0_RAM0_DVSE_POS                         3
#define PCRM_RAM_DVS_0_RAM0_DVS_MASK                         ((uint32_t)0x00000007)
#define PCRM_RAM_DVS_0_RAM0_DVS_LSB                          0
#define PCRM_RAM_DVS_0_RAM0_DVS_WIDTH                        ((uint32_t)0x00000003)

#define PCRM_RAM_DVS_0_RAM0_DVSE_RST                         0x0
#define PCRM_RAM_DVS_0_RAM0_DVS_RST                          0x0

__INLINE static void pcrm_ram_dvs_0_pack(uint8_t ram0dvse, uint8_t ram0dvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)ram0dvse << 3) | ((uint32_t)ram0dvs << 0));
}

__INLINE static void pcrm_ram_dvs_0_unpack(uint8_t* ram0dvse, uint8_t* ram0dvs)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *ram0dvse = (localVal & ((uint32_t)0x00000008)) >> 3;
    *ram0dvs = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t pcrm_ram_dvs_0_ram0_dvse_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcrm_ram_dvs_0_ram0_dvse_setf(uint8_t ram0dvse)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)ram0dvse << 3));
}

__INLINE static uint8_t pcrm_ram_dvs_0_ram0_dvs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void pcrm_ram_dvs_0_ram0_dvs_setf(uint8_t ram0dvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS_0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)ram0dvs << 0));
}

 /**
 * @brief RAM_DVS2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12        adcc_ram_dvse   0
 *  11:08         adcc_ram_dvs   0b0
 *     04          bb_ram_dvse   0
 *  03:00           bb_ram_dvs   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_RAM_DVS2_OFFSET 0x00000030


__INLINE static uint32_t pcrm_ram_dvs2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_ram_dvs2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_RAM_DVS2_ADCC_RAM_DVSE_BIT                     ((uint32_t)0x00001000)
#define PCRM_RAM_DVS2_ADCC_RAM_DVSE_POS                     12
#define PCRM_RAM_DVS2_ADCC_RAM_DVS_MASK                     ((uint32_t)0x00000F00)
#define PCRM_RAM_DVS2_ADCC_RAM_DVS_LSB                      8
#define PCRM_RAM_DVS2_ADCC_RAM_DVS_WIDTH                    ((uint32_t)0x00000004)
#define PCRM_RAM_DVS2_BB_RAM_DVSE_BIT                       ((uint32_t)0x00000010)
#define PCRM_RAM_DVS2_BB_RAM_DVSE_POS                       4
#define PCRM_RAM_DVS2_BB_RAM_DVS_MASK                       ((uint32_t)0x0000000F)
#define PCRM_RAM_DVS2_BB_RAM_DVS_LSB                        0
#define PCRM_RAM_DVS2_BB_RAM_DVS_WIDTH                      ((uint32_t)0x00000004)

#define PCRM_RAM_DVS2_ADCC_RAM_DVSE_RST                     0x0
#define PCRM_RAM_DVS2_ADCC_RAM_DVS_RST                      0x0
#define PCRM_RAM_DVS2_BB_RAM_DVSE_RST                       0x0
#define PCRM_RAM_DVS2_BB_RAM_DVS_RST                        0x0

__INLINE static void pcrm_ram_dvs2_pack(uint8_t adccramdvse, uint8_t adccramdvs, uint8_t bbramdvse, uint8_t bbramdvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)adccramdvse << 12) | ((uint32_t)adccramdvs << 8) | ((uint32_t)bbramdvse << 4) | ((uint32_t)bbramdvs << 0));
}

__INLINE static void pcrm_ram_dvs2_unpack(uint8_t* adccramdvse, uint8_t* adccramdvs, uint8_t* bbramdvse, uint8_t* bbramdvs)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *adccramdvse = (localVal & ((uint32_t)0x00001000)) >> 12;
    *adccramdvs = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *bbramdvse = (localVal & ((uint32_t)0x00000010)) >> 4;
    *bbramdvs = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_ram_dvs2_adcc_ram_dvse_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void pcrm_ram_dvs2_adcc_ram_dvse_setf(uint8_t adccramdvse)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)adccramdvse << 12));
}

__INLINE static uint8_t pcrm_ram_dvs2_adcc_ram_dvs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void pcrm_ram_dvs2_adcc_ram_dvs_setf(uint8_t adccramdvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)adccramdvs << 8));
}

__INLINE static uint8_t pcrm_ram_dvs2_bb_ram_dvse_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_ram_dvs2_bb_ram_dvse_setf(uint8_t bbramdvse)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)bbramdvse << 4));
}

__INLINE static uint8_t pcrm_ram_dvs2_bb_ram_dvs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void pcrm_ram_dvs2_bb_ram_dvs_setf(uint8_t bbramdvs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_RAM_DVS2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_RAM_DVS2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)bbramdvs << 0));
}

 /**
 * @brief CHIP_STATE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06            test_mode   0
 *     05            scan_mode   0
 *  04:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CHIP_STATE_OFFSET 0x0000003C


__INLINE static uint32_t pcrm_chip_state_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CHIP_STATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CHIP_STATE_TEST_MODE_BIT                         ((uint32_t)0x00000040)
#define PCRM_CHIP_STATE_TEST_MODE_POS                         6
#define PCRM_CHIP_STATE_SCAN_MODE_BIT                         ((uint32_t)0x00000020)
#define PCRM_CHIP_STATE_SCAN_MODE_POS                         5
#define PCRM_CHIP_STATE_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define PCRM_CHIP_STATE_RESERVED_LSB                          0
#define PCRM_CHIP_STATE_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define PCRM_CHIP_STATE_TEST_MODE_RST                         0x0
#define PCRM_CHIP_STATE_SCAN_MODE_RST                         0x0
#define PCRM_CHIP_STATE_RESERVED_RST                          0x0

__INLINE static void pcrm_chip_state_unpack(uint8_t* testmode, uint8_t* scanmode, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHIP_STATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *testmode = (localVal & ((uint32_t)0x00000040)) >> 6;
    *scanmode = (localVal & ((uint32_t)0x00000020)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t pcrm_chip_state_test_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHIP_STATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t pcrm_chip_state_scan_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHIP_STATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

 /**
 * @brief CAL_RW register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     16        rc32k_clk_sel   0
 *  08:04      num_track_cycle   0b11111
 *     03       track_en_rc32k   0
 *     02             rccal_en   0
 *     01           cal_en_32M   0
 *     00           cal_en_32k   0
 * </pre>
 */
#define FEMTO_REG_PCRM_CAL_RW_OFFSET 0x00000040


__INLINE static uint32_t pcrm_cal_rw_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_cal_rw_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CAL_RW_RC32K_CLK_SEL_BIT                     ((uint32_t)0x00010000)
#define PCRM_CAL_RW_RC32K_CLK_SEL_POS                     16
#define PCRM_CAL_RW_NUM_TRACK_CYCLE_MASK                  ((uint32_t)0x000001F0)
#define PCRM_CAL_RW_NUM_TRACK_CYCLE_LSB                   4
#define PCRM_CAL_RW_NUM_TRACK_CYCLE_WIDTH                 ((uint32_t)0x00000005)
#define PCRM_CAL_RW_TRACK_EN_RC32K_BIT                    ((uint32_t)0x00000008)
#define PCRM_CAL_RW_TRACK_EN_RC32K_POS                    3
#define PCRM_CAL_RW_RCCAL_EN_BIT                          ((uint32_t)0x00000004)
#define PCRM_CAL_RW_RCCAL_EN_POS                          2
#define PCRM_CAL_RW_CAL_EN_32M_BIT                        ((uint32_t)0x00000002)
#define PCRM_CAL_RW_CAL_EN_32M_POS                        1
#define PCRM_CAL_RW_CAL_EN_32K_BIT                        ((uint32_t)0x00000001)
#define PCRM_CAL_RW_CAL_EN_32K_POS                        0

#define PCRM_CAL_RW_RC32K_CLK_SEL_RST                     0x0
#define PCRM_CAL_RW_NUM_TRACK_CYCLE_RST                   0x11111
#define PCRM_CAL_RW_TRACK_EN_RC32K_RST                    0x0
#define PCRM_CAL_RW_RCCAL_EN_RST                          0x0
#define PCRM_CAL_RW_CAL_EN_32M_RST                        0x0
#define PCRM_CAL_RW_CAL_EN_32K_RST                        0x0

__INLINE static void pcrm_cal_rw_pack(uint8_t rc32kclksel, uint8_t numtrackcycle, uint8_t trackenrc32k, uint8_t rccalen, uint8_t calen32m, uint8_t calen32k)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)rc32kclksel << 16) | ((uint32_t)numtrackcycle << 4) | ((uint32_t)trackenrc32k << 3) | ((uint32_t)rccalen << 2) | ((uint32_t)calen32m << 1) | ((uint32_t)calen32k << 0));
}

__INLINE static void pcrm_cal_rw_unpack(uint8_t* rc32kclksel, uint8_t* numtrackcycle, uint8_t* trackenrc32k, uint8_t* rccalen, uint8_t* calen32m, uint8_t* calen32k)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *rc32kclksel = (localVal & ((uint32_t)0x00010000)) >> 16;
    *numtrackcycle = (localVal & ((uint32_t)0x000001F0)) >> 4;
    *trackenrc32k = (localVal & ((uint32_t)0x00000008)) >> 3;
    *rccalen = (localVal & ((uint32_t)0x00000004)) >> 2;
    *calen32m = (localVal & ((uint32_t)0x00000002)) >> 1;
    *calen32k = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_cal_rw_rc32k_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcrm_cal_rw_rc32k_clk_sel_setf(uint8_t rc32kclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)rc32kclksel << 16));
}

__INLINE static uint8_t pcrm_cal_rw_num_track_cycle_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001F0)) >> 4);
}

__INLINE static void pcrm_cal_rw_num_track_cycle_setf(uint8_t numtrackcycle)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x000001F0)) | ((uint32_t)numtrackcycle << 4));
}

__INLINE static uint8_t pcrm_cal_rw_track_en_rc32k_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcrm_cal_rw_track_en_rc32k_setf(uint8_t trackenrc32k)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)trackenrc32k << 3));
}

__INLINE static uint8_t pcrm_cal_rw_rccal_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void pcrm_cal_rw_rccal_en_setf(uint8_t rccalen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)rccalen << 2));
}

__INLINE static uint8_t pcrm_cal_rw_cal_en_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcrm_cal_rw_cal_en_32m_setf(uint8_t calen32m)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)calen32m << 1));
}

__INLINE static uint8_t pcrm_cal_rw_cal_en_32k_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcrm_cal_rw_cal_en_32k_setf(uint8_t calen32k)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CAL_RW_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RW_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)calen32k << 0));
}

 /**
 * @brief CAL_RO0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  21:16    cal_word_fina_32k   0b0
 *  15:06    actu_cnt_fina_32M   0b0
 *  05:00    cal_word_fina_32M   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CAL_RO0_OFFSET 0x00000044


__INLINE static uint32_t pcrm_cal_ro0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CAL_RO0_CAL_WORD_FINA_32K_MASK                ((uint32_t)0x003F0000)
#define PCRM_CAL_RO0_CAL_WORD_FINA_32K_LSB                 16
#define PCRM_CAL_RO0_CAL_WORD_FINA_32K_WIDTH               ((uint32_t)0x00000006)
#define PCRM_CAL_RO0_ACTU_CNT_FINA_32M_MASK                ((uint32_t)0x0000FFC0)
#define PCRM_CAL_RO0_ACTU_CNT_FINA_32M_LSB                 6
#define PCRM_CAL_RO0_ACTU_CNT_FINA_32M_WIDTH               ((uint32_t)0x0000000A)
#define PCRM_CAL_RO0_CAL_WORD_FINA_32M_MASK                ((uint32_t)0x0000003F)
#define PCRM_CAL_RO0_CAL_WORD_FINA_32M_LSB                 0
#define PCRM_CAL_RO0_CAL_WORD_FINA_32M_WIDTH               ((uint32_t)0x00000006)

#define PCRM_CAL_RO0_CAL_WORD_FINA_32K_RST                 0x0
#define PCRM_CAL_RO0_ACTU_CNT_FINA_32M_RST                 0x0
#define PCRM_CAL_RO0_CAL_WORD_FINA_32M_RST                 0x0

__INLINE static void pcrm_cal_ro0_unpack(uint8_t* calwordfina32k, uint8_t* actucntfina32m, uint8_t* calwordfina32m)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *calwordfina32k = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *actucntfina32m = (localVal & ((uint32_t)0x0000FFC0)) >> 6;
    *calwordfina32m = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t pcrm_cal_ro0_cal_word_fina_32k_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static uint16_t pcrm_cal_ro0_actu_cnt_fina_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFC0)) >> 6);
}

__INLINE static uint8_t pcrm_cal_ro0_cal_word_fina_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO0_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

 /**
 * @brief CAL_RO1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:19    actu_cnt_fina_32k   0b0
 *  16:00   cnt_track_16M_fina   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CAL_RO1_OFFSET 0x00000048


__INLINE static uint32_t pcrm_cal_ro1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CAL_RO1_ACTU_CNT_FINA_32K_MASK                ((uint32_t)0xFFF80000)
#define PCRM_CAL_RO1_ACTU_CNT_FINA_32K_LSB                 19
#define PCRM_CAL_RO1_ACTU_CNT_FINA_32K_WIDTH               ((uint32_t)0x0000000D)
#define PCRM_CAL_RO1_CNT_TRACK_16M_FINA_MASK               ((uint32_t)0x0001FFFF)
#define PCRM_CAL_RO1_CNT_TRACK_16M_FINA_LSB                0
#define PCRM_CAL_RO1_CNT_TRACK_16M_FINA_WIDTH              ((uint32_t)0x00000011)

#define PCRM_CAL_RO1_ACTU_CNT_FINA_32K_RST                 0x0
#define PCRM_CAL_RO1_CNT_TRACK_16M_FINA_RST                0x0

__INLINE static void pcrm_cal_ro1_unpack(uint8_t* actucntfina32k, uint8_t* cnttrack16mfina)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *actucntfina32k = (localVal & ((uint32_t)0xFFF80000)) >> 19;
    *cnttrack16mfina = (localVal & ((uint32_t)0x0001FFFF)) >> 0;
}

__INLINE static uint16_t pcrm_cal_ro1_actu_cnt_fina_32k_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFF80000)) >> 19);
}

__INLINE static uint32_t pcrm_cal_ro1_cnt_track_16m_fina_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001FFFF)) >> 0);
}

 /**
 * @brief CAL_RO2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     09          rc32k_ready   0
 *     08         cal_done_32M   0
 *  07:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CAL_RO2_OFFSET 0x0000004C


__INLINE static uint32_t pcrm_cal_ro2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CAL_RO2_RC32K_READY_BIT                       ((uint32_t)0x00000200)
#define PCRM_CAL_RO2_RC32K_READY_POS                       9
#define PCRM_CAL_RO2_CAL_DONE_32M_BIT                      ((uint32_t)0x00000100)
#define PCRM_CAL_RO2_CAL_DONE_32M_POS                      8
#define PCRM_CAL_RO2_RESERVED_MASK                         ((uint32_t)0x000000FF)
#define PCRM_CAL_RO2_RESERVED_LSB                          0
#define PCRM_CAL_RO2_RESERVED_WIDTH                        ((uint32_t)0x00000008)

#define PCRM_CAL_RO2_RC32K_READY_RST                       0x0
#define PCRM_CAL_RO2_CAL_DONE_32M_RST                      0x0
#define PCRM_CAL_RO2_RESERVED_RST                          0x0

__INLINE static void pcrm_cal_ro2_unpack(uint8_t* rc32kready, uint8_t* caldone32m, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *rc32kready = (localVal & ((uint32_t)0x00000200)) >> 9;
    *caldone32m = (localVal & ((uint32_t)0x00000100)) >> 8;
    *reserved = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t pcrm_cal_ro2_rc32k_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t pcrm_cal_ro2_cal_done_32m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CAL_RO2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

 /**
 * @brief USB_REF_SEL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  06:05          dbg_mux_sel   0b0
 *  02:00      usb_ref_clk_sel   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_USB_REF_SEL_OFFSET 0x00000058


__INLINE static uint32_t pcrm_usb_ref_sel_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_usb_ref_sel_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_USB_REF_SEL_DBG_MUX_SEL_MASK                      ((uint32_t)0x00000060)
#define PCRM_USB_REF_SEL_DBG_MUX_SEL_LSB                       5
#define PCRM_USB_REF_SEL_DBG_MUX_SEL_WIDTH                     ((uint32_t)0x00000002)
#define PCRM_USB_REF_SEL_USB_REF_CLK_SEL_MASK                  ((uint32_t)0x00000007)
#define PCRM_USB_REF_SEL_USB_REF_CLK_SEL_LSB                   0
#define PCRM_USB_REF_SEL_USB_REF_CLK_SEL_WIDTH                 ((uint32_t)0x00000003)

#define PCRM_USB_REF_SEL_DBG_MUX_SEL_RST                       0x0
#define PCRM_USB_REF_SEL_USB_REF_CLK_SEL_RST                   0x0

__INLINE static void pcrm_usb_ref_sel_pack(uint8_t dbgmuxsel, uint8_t usbrefclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)dbgmuxsel << 5) | ((uint32_t)usbrefclksel << 0));
}

__INLINE static void pcrm_usb_ref_sel_unpack(uint8_t* dbgmuxsel, uint8_t* usbrefclksel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *dbgmuxsel = (localVal & ((uint32_t)0x00000060)) >> 5;
    *usbrefclksel = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t pcrm_usb_ref_sel_dbg_mux_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void pcrm_usb_ref_sel_dbg_mux_sel_setf(uint8_t dbgmuxsel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)dbgmuxsel << 5));
}

__INLINE static uint8_t pcrm_usb_ref_sel_usb_ref_clk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void pcrm_usb_ref_sel_usb_ref_clk_sel_setf(uint8_t usbrefclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_USB_REF_SEL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)usbrefclksel << 0));
}

 /**
 * @brief CNT_FINAL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:00            cnt_final   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CNT_FINAL_OFFSET 0x00000064


__INLINE static uint32_t pcrm_cnt_final_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CNT_FINAL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CNT_FINAL_CNT_FINAL_MASK                        ((uint32_t)0x00000FFF)
#define PCRM_CNT_FINAL_CNT_FINAL_LSB                         0
#define PCRM_CNT_FINAL_CNT_FINAL_WIDTH                       ((uint32_t)0x0000000C)

#define PCRM_CNT_FINAL_CNT_FINAL_RST                         0x0

__INLINE static void pcrm_cnt_final_unpack(uint8_t* cntfinal)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CNT_FINAL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *cntfinal = (localVal & ((uint32_t)0x00000FFF)) >> 0;
}

__INLINE static uint16_t pcrm_cnt_final_cnt_final_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CNT_FINAL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FFF)) >> 0);
}

 /**
 * @brief O_BBPLL_CTBIT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  05:00        o_bbpll_ctbit   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET 0x000000A0


__INLINE static uint32_t pcrm_o_bbpll_ctbit_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_o_bbpll_ctbit_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_O_BBPLL_CTBIT_O_BBPLL_CTBIT_MASK                    ((uint32_t)0x0000003F)
#define PCRM_O_BBPLL_CTBIT_O_BBPLL_CTBIT_LSB                     0
#define PCRM_O_BBPLL_CTBIT_O_BBPLL_CTBIT_WIDTH                   ((uint32_t)0x00000006)

#define PCRM_O_BBPLL_CTBIT_O_BBPLL_CTBIT_RST                     0x0

__INLINE static void pcrm_o_bbpll_ctbit_pack(uint8_t obbpllctbit)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)obbpllctbit << 0));
}

__INLINE static void pcrm_o_bbpll_ctbit_unpack(uint8_t* obbpllctbit)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *obbpllctbit = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t pcrm_o_bbpll_ctbit_o_bbpll_ctbit_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void pcrm_o_bbpll_ctbit_o_bbpll_ctbit_setf(uint8_t obbpllctbit)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_O_BBPLL_CTBIT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)obbpllctbit << 0);
}

 /**
 * @brief BBPLL_OSC_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00        bbpll_osc_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET 0x000000A4


__INLINE static uint32_t pcrm_bbpll_osc_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_bbpll_osc_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_BBPLL_OSC_CNT_BBPLL_OSC_CNT_MASK                    ((uint32_t)0x000003FF)
#define PCRM_BBPLL_OSC_CNT_BBPLL_OSC_CNT_LSB                     0
#define PCRM_BBPLL_OSC_CNT_BBPLL_OSC_CNT_WIDTH                   ((uint32_t)0x0000000A)

#define PCRM_BBPLL_OSC_CNT_BBPLL_OSC_CNT_RST                     0x0

__INLINE static void pcrm_bbpll_osc_cnt_pack(uint16_t bbpllosccnt)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)bbpllosccnt << 0));
}

__INLINE static void pcrm_bbpll_osc_cnt_unpack(uint8_t* bbpllosccnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *bbpllosccnt = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t pcrm_bbpll_osc_cnt_bbpll_osc_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void pcrm_bbpll_osc_cnt_bbpll_osc_cnt_setf(uint16_t bbpllosccnt)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_BBPLL_OSC_CNT_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)bbpllosccnt << 0);
}

 /**
 * @brief I_CLKHF_CTRL2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28     en_xtal_track_fs   0
 *  23:12   xtal_track_cnt_target   0b250
 *  11:04   xtal_track_settle_th   0b10
 *     01   en_xtal_track_fs_1p2v   0
 *     00        en_xtal_track   0
 * </pre>
 */
#define FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET 0x000000A8


__INLINE static uint32_t pcrm_i_clkhf_ctrl2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_i_clkhf_ctrl2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_BIT                  ((uint32_t)0x10000000)
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_POS                  28
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_CNT_TARGET_MASK            ((uint32_t)0x00FFF000)
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_CNT_TARGET_LSB             12
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_CNT_TARGET_WIDTH           ((uint32_t)0x0000000C)
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_SETTLE_TH_MASK             ((uint32_t)0x00000FF0)
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_SETTLE_TH_LSB              4
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_SETTLE_TH_WIDTH            ((uint32_t)0x00000008)
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_1P2V_BIT             ((uint32_t)0x00000002)
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_1P2V_POS             1
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_BIT                     ((uint32_t)0x00000001)
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_POS                     0

#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_RST                  0x0
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_CNT_TARGET_RST             0x250
#define PCRM_I_CLKHF_CTRL2_XTAL_TRACK_SETTLE_TH_RST              0x10
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_FS_1P2V_RST             0x0
#define PCRM_I_CLKHF_CTRL2_EN_XTAL_TRACK_RST                     0x0

__INLINE static void pcrm_i_clkhf_ctrl2_pack(uint8_t enxtaltrackfs, uint16_t xtaltrackcnttarget, uint8_t xtaltracksettleth, uint8_t enxtaltrackfs1p2v, uint8_t enxtaltrack)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)enxtaltrackfs << 28) | ((uint32_t)xtaltrackcnttarget << 12) | ((uint32_t)xtaltracksettleth << 4) | ((uint32_t)enxtaltrackfs1p2v << 1) | ((uint32_t)enxtaltrack << 0));
}

__INLINE static void pcrm_i_clkhf_ctrl2_unpack(uint8_t* enxtaltrackfs, uint8_t* xtaltrackcnttarget, uint8_t* xtaltracksettleth, uint8_t* enxtaltrackfs1p2v, uint8_t* enxtaltrack)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *enxtaltrackfs = (localVal & ((uint32_t)0x10000000)) >> 28;
    *xtaltrackcnttarget = (localVal & ((uint32_t)0x00FFF000)) >> 12;
    *xtaltracksettleth = (localVal & ((uint32_t)0x00000FF0)) >> 4;
    *enxtaltrackfs1p2v = (localVal & ((uint32_t)0x00000002)) >> 1;
    *enxtaltrack = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl2_en_xtal_track_fs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void pcrm_i_clkhf_ctrl2_en_xtal_track_fs_setf(uint8_t enxtaltrackfs)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)enxtaltrackfs << 28));
}

__INLINE static uint16_t pcrm_i_clkhf_ctrl2_xtal_track_cnt_target_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FFF000)) >> 12);
}

__INLINE static void pcrm_i_clkhf_ctrl2_xtal_track_cnt_target_setf(uint16_t xtaltrackcnttarget)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00FFF000)) | ((uint32_t)xtaltrackcnttarget << 12));
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl2_xtal_track_settle_th_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FF0)) >> 4);
}

__INLINE static void pcrm_i_clkhf_ctrl2_xtal_track_settle_th_setf(uint8_t xtaltracksettleth)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000FF0)) | ((uint32_t)xtaltracksettleth << 4));
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl2_en_xtal_track_fs_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcrm_i_clkhf_ctrl2_en_xtal_track_fs_1p2v_setf(uint8_t enxtaltrackfs1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)enxtaltrackfs1p2v << 1));
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl2_en_xtal_track_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcrm_i_clkhf_ctrl2_en_xtal_track_setf(uint8_t enxtaltrack)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL2_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)enxtaltrack << 0));
}

 /**
 * @brief I_CLKHF_CTRL3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:12   dll_track_cnt_target   0b500
 *  11:04   dll_track_settle_th   0b20
 *     00         en_dll_track   0
 * </pre>
 */
#define FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET 0x000000AC


__INLINE static uint32_t pcrm_i_clkhf_ctrl3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_i_clkhf_ctrl3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_CNT_TARGET_MASK             ((uint32_t)0x00FFF000)
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_CNT_TARGET_LSB              12
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_CNT_TARGET_WIDTH            ((uint32_t)0x0000000C)
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_SETTLE_TH_MASK              ((uint32_t)0x00000FF0)
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_SETTLE_TH_LSB               4
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_SETTLE_TH_WIDTH             ((uint32_t)0x00000008)
#define PCRM_I_CLKHF_CTRL3_EN_DLL_TRACK_BIT                      ((uint32_t)0x00000001)
#define PCRM_I_CLKHF_CTRL3_EN_DLL_TRACK_POS                      0

#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_CNT_TARGET_RST              0x500
#define PCRM_I_CLKHF_CTRL3_DLL_TRACK_SETTLE_TH_RST               0x20
#define PCRM_I_CLKHF_CTRL3_EN_DLL_TRACK_RST                      0x0

__INLINE static void pcrm_i_clkhf_ctrl3_pack(uint16_t dlltrackcnttarget, uint8_t dlltracksettleth, uint8_t endlltrack)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)dlltrackcnttarget << 12) | ((uint32_t)dlltracksettleth << 4) | ((uint32_t)endlltrack << 0));
}

__INLINE static void pcrm_i_clkhf_ctrl3_unpack(uint8_t* dlltrackcnttarget, uint8_t* dlltracksettleth, uint8_t* endlltrack)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *dlltrackcnttarget = (localVal & ((uint32_t)0x00FFF000)) >> 12;
    *dlltracksettleth = (localVal & ((uint32_t)0x00000FF0)) >> 4;
    *endlltrack = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint16_t pcrm_i_clkhf_ctrl3_dll_track_cnt_target_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FFF000)) >> 12);
}

__INLINE static void pcrm_i_clkhf_ctrl3_dll_track_cnt_target_setf(uint16_t dlltrackcnttarget)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00FFF000)) | ((uint32_t)dlltrackcnttarget << 12));
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl3_dll_track_settle_th_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FF0)) >> 4);
}

__INLINE static void pcrm_i_clkhf_ctrl3_dll_track_settle_th_setf(uint8_t dlltracksettleth)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000FF0)) | ((uint32_t)dlltracksettleth << 4));
}

__INLINE static uint8_t pcrm_i_clkhf_ctrl3_en_dll_track_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcrm_i_clkhf_ctrl3_en_dll_track_setf(uint8_t endlltrack)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_CLKHF_CTRL3_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)endlltrack << 0));
}

 /**
 * @brief CLKHF_CTRL4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         bbpll_div_fb   0b8
 *  23:20      bbpll_div_out_0   0b4
 *  19:16      bbpll_div_out_1   0b4
 *  15:12      bbpll_div_out_2   0b4
 *  11:08      bbpll_div_out_3   0b4
 *  07:04        bbpll_div_ref   0b1
 *  03:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET 0x000000B8


__INLINE static uint32_t pcrm_clkhf_ctrl4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clkhf_ctrl4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_FB_MASK                     ((uint32_t)0xFF000000)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_FB_LSB                      24
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_FB_WIDTH                    ((uint32_t)0x00000008)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_0_MASK                  ((uint32_t)0x00F00000)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_0_LSB                   20
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_0_WIDTH                 ((uint32_t)0x00000004)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_1_MASK                  ((uint32_t)0x000F0000)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_1_LSB                   16
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_1_WIDTH                 ((uint32_t)0x00000004)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_2_MASK                  ((uint32_t)0x0000F000)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_2_LSB                   12
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_2_WIDTH                 ((uint32_t)0x00000004)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_3_MASK                  ((uint32_t)0x00000F00)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_3_LSB                   8
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_3_WIDTH                 ((uint32_t)0x00000004)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_REF_MASK                    ((uint32_t)0x000000F0)
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_REF_LSB                     4
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_REF_WIDTH                   ((uint32_t)0x00000004)
#define PCRM_CLKHF_CTRL4_RESERVED_MASK                         ((uint32_t)0x0000000F)
#define PCRM_CLKHF_CTRL4_RESERVED_LSB                          0
#define PCRM_CLKHF_CTRL4_RESERVED_WIDTH                        ((uint32_t)0x00000004)

#define PCRM_CLKHF_CTRL4_BBPLL_DIV_FB_RST                      0x8
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_0_RST                   0x4
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_1_RST                   0x4
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_2_RST                   0x4
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_OUT_3_RST                   0x4
#define PCRM_CLKHF_CTRL4_BBPLL_DIV_REF_RST                     0x1
#define PCRM_CLKHF_CTRL4_RESERVED_RST                          0x0

__INLINE static void pcrm_clkhf_ctrl4_pack(uint8_t bbplldivfb, uint8_t bbplldivout0, uint8_t bbplldivout1, uint8_t bbplldivout2, uint8_t bbplldivout3, uint8_t bbplldivref)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)bbplldivfb << 24) | ((uint32_t)bbplldivout0 << 20) | ((uint32_t)bbplldivout1 << 16) | ((uint32_t)bbplldivout2 << 12) | ((uint32_t)bbplldivout3 << 8) | ((uint32_t)bbplldivref << 4));
}

__INLINE static void pcrm_clkhf_ctrl4_unpack(uint8_t* bbplldivfb, uint8_t* bbplldivout0, uint8_t* bbplldivout1, uint8_t* bbplldivout2, uint8_t* bbplldivout3, uint8_t* bbplldivref, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *bbplldivfb = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *bbplldivout0 = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *bbplldivout1 = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *bbplldivout2 = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *bbplldivout3 = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *bbplldivref = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *reserved = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_fb_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_fb_setf(uint8_t bbplldivfb)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)bbplldivfb << 24));
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_out_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_out_0_setf(uint8_t bbplldivout0)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)bbplldivout0 << 20));
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_out_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_out_1_setf(uint8_t bbplldivout1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)bbplldivout1 << 16));
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_out_2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_out_2_setf(uint8_t bbplldivout2)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)bbplldivout2 << 12));
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_out_3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_out_3_setf(uint8_t bbplldivout3)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)bbplldivout3 << 8));
}

__INLINE static uint8_t pcrm_clkhf_ctrl4_bbpll_div_ref_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void pcrm_clkhf_ctrl4_bbpll_div_ref_setf(uint8_t bbplldivref)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL4_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)bbplldivref << 4));
}

 /**
 * @brief CLKHF_CTRL5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31        bbpll_pfd_pol   0
 *  30:28             bbpll_cp   0b4
 *     26   bbpll_enb_osc_fixi   1
 *  25:24    bbpll_en_v2i_fixi   0b0
 *  23:22         bbpll_lpf_r1   0b1
 *  21:20         bbpll_lpf_r2   0b1
 *  18:16         bbpll_lpf_rz   0b0
 *  15:14     bbpll_pfd_dly_dn   0b0
 *  13:12     bbpll_pfd_dly_up   0b0
 *  10:08   bbpll_vco_res_trim   0b1
 *     07    bbpll_override_ct   0
 *  05:00   bbpll_cal_word_manual   0b40
 * </pre>
 */
#define FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET 0x000000BC


__INLINE static uint32_t pcrm_clkhf_ctrl5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clkhf_ctrl5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_POL_BIT                     ((uint32_t)0x80000000)
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_POL_POS                     31
#define PCRM_CLKHF_CTRL5_BBPLL_CP_MASK                         ((uint32_t)0x70000000)
#define PCRM_CLKHF_CTRL5_BBPLL_CP_LSB                          28
#define PCRM_CLKHF_CTRL5_BBPLL_CP_WIDTH                        ((uint32_t)0x00000003)
#define PCRM_CLKHF_CTRL5_BBPLL_ENB_OSC_FIXI_BIT                ((uint32_t)0x04000000)
#define PCRM_CLKHF_CTRL5_BBPLL_ENB_OSC_FIXI_POS                26
#define PCRM_CLKHF_CTRL5_BBPLL_EN_V2I_FIXI_MASK                ((uint32_t)0x03000000)
#define PCRM_CLKHF_CTRL5_BBPLL_EN_V2I_FIXI_LSB                 24
#define PCRM_CLKHF_CTRL5_BBPLL_EN_V2I_FIXI_WIDTH               ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R1_MASK                     ((uint32_t)0x00C00000)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R1_LSB                      22
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R1_WIDTH                    ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R2_MASK                     ((uint32_t)0x00300000)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R2_LSB                      20
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R2_WIDTH                    ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_RZ_MASK                     ((uint32_t)0x00070000)
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_RZ_LSB                      16
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_RZ_WIDTH                    ((uint32_t)0x00000003)
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_DN_MASK                 ((uint32_t)0x0000C000)
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_DN_LSB                  14
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_DN_WIDTH                ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_UP_MASK                 ((uint32_t)0x00003000)
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_UP_LSB                  12
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_UP_WIDTH                ((uint32_t)0x00000002)
#define PCRM_CLKHF_CTRL5_BBPLL_VCO_RES_TRIM_MASK               ((uint32_t)0x00000700)
#define PCRM_CLKHF_CTRL5_BBPLL_VCO_RES_TRIM_LSB                8
#define PCRM_CLKHF_CTRL5_BBPLL_VCO_RES_TRIM_WIDTH              ((uint32_t)0x00000003)
#define PCRM_CLKHF_CTRL5_BBPLL_OVERRIDE_CT_BIT                 ((uint32_t)0x00000080)
#define PCRM_CLKHF_CTRL5_BBPLL_OVERRIDE_CT_POS                 7
#define PCRM_CLKHF_CTRL5_BBPLL_CAL_WORD_MANUAL_MASK            ((uint32_t)0x0000003F)
#define PCRM_CLKHF_CTRL5_BBPLL_CAL_WORD_MANUAL_LSB             0
#define PCRM_CLKHF_CTRL5_BBPLL_CAL_WORD_MANUAL_WIDTH           ((uint32_t)0x00000006)

#define PCRM_CLKHF_CTRL5_BBPLL_PFD_POL_RST                     0x0
#define PCRM_CLKHF_CTRL5_BBPLL_CP_RST                          0x4
#define PCRM_CLKHF_CTRL5_BBPLL_ENB_OSC_FIXI_RST                0x1
#define PCRM_CLKHF_CTRL5_BBPLL_EN_V2I_FIXI_RST                 0x0
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R1_RST                      0x1
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_R2_RST                      0x1
#define PCRM_CLKHF_CTRL5_BBPLL_LPF_RZ_RST                      0x0
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_DN_RST                  0x0
#define PCRM_CLKHF_CTRL5_BBPLL_PFD_DLY_UP_RST                  0x0
#define PCRM_CLKHF_CTRL5_BBPLL_VCO_RES_TRIM_RST                0x1
#define PCRM_CLKHF_CTRL5_BBPLL_OVERRIDE_CT_RST                 0x0
#define PCRM_CLKHF_CTRL5_BBPLL_CAL_WORD_MANUAL_RST             0x40

__INLINE static void pcrm_clkhf_ctrl5_pack(uint8_t bbpllpfdpol, uint8_t bbpllcp, uint8_t bbpllenboscfixi, uint8_t bbpllenv2ifixi, uint8_t bbplllpfr1, uint8_t bbplllpfr2, uint8_t bbplllpfrz, uint8_t bbpllpfddlydn, uint8_t bbpllpfddlyup, uint8_t bbpllvcorestrim, uint8_t bbplloverridect, uint8_t bbpllcalwordmanual)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)bbpllpfdpol << 31) | ((uint32_t)bbpllcp << 28) | ((uint32_t)bbpllenboscfixi << 26) | ((uint32_t)bbpllenv2ifixi << 24) | ((uint32_t)bbplllpfr1 << 22) | ((uint32_t)bbplllpfr2 << 20) | ((uint32_t)bbplllpfrz << 16) | ((uint32_t)bbpllpfddlydn << 14) | ((uint32_t)bbpllpfddlyup << 12) | ((uint32_t)bbpllvcorestrim << 8) | ((uint32_t)bbplloverridect << 7) | ((uint32_t)bbpllcalwordmanual << 0));
}

__INLINE static void pcrm_clkhf_ctrl5_unpack(uint8_t* bbpllpfdpol, uint8_t* bbpllcp, uint8_t* bbpllenboscfixi, uint8_t* bbpllenv2ifixi, uint8_t* bbplllpfr1, uint8_t* bbplllpfr2, uint8_t* bbplllpfrz, uint8_t* bbpllpfddlydn, uint8_t* bbpllpfddlyup, uint8_t* bbpllvcorestrim, uint8_t* bbplloverridect, uint8_t* bbpllcalwordmanual)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *bbpllpfdpol = (localVal & ((uint32_t)0x80000000)) >> 31;
    *bbpllcp = (localVal & ((uint32_t)0x70000000)) >> 28;
    *bbpllenboscfixi = (localVal & ((uint32_t)0x04000000)) >> 26;
    *bbpllenv2ifixi = (localVal & ((uint32_t)0x03000000)) >> 24;
    *bbplllpfr1 = (localVal & ((uint32_t)0x00C00000)) >> 22;
    *bbplllpfr2 = (localVal & ((uint32_t)0x00300000)) >> 20;
    *bbplllpfrz = (localVal & ((uint32_t)0x00070000)) >> 16;
    *bbpllpfddlydn = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *bbpllpfddlyup = (localVal & ((uint32_t)0x00003000)) >> 12;
    *bbpllvcorestrim = (localVal & ((uint32_t)0x00000700)) >> 8;
    *bbplloverridect = (localVal & ((uint32_t)0x00000080)) >> 7;
    *bbpllcalwordmanual = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_pfd_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_pfd_pol_setf(uint8_t bbpllpfdpol)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)bbpllpfdpol << 31));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_cp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x70000000)) >> 28);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_cp_setf(uint8_t bbpllcp)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x70000000)) | ((uint32_t)bbpllcp << 28));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_enb_osc_fixi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x04000000)) >> 26);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_enb_osc_fixi_setf(uint8_t bbpllenboscfixi)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x04000000)) | ((uint32_t)bbpllenboscfixi << 26));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_en_v2i_fixi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03000000)) >> 24);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_en_v2i_fixi_setf(uint8_t bbpllenv2ifixi)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x03000000)) | ((uint32_t)bbpllenv2ifixi << 24));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_lpf_r1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00C00000)) >> 22);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_lpf_r1_setf(uint8_t bbplllpfr1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00C00000)) | ((uint32_t)bbplllpfr1 << 22));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_lpf_r2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00300000)) >> 20);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_lpf_r2_setf(uint8_t bbplllpfr2)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00300000)) | ((uint32_t)bbplllpfr2 << 20));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_lpf_rz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_lpf_rz_setf(uint8_t bbplllpfrz)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00070000)) | ((uint32_t)bbplllpfrz << 16));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_pfd_dly_dn_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_pfd_dly_dn_setf(uint8_t bbpllpfddlydn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)bbpllpfddlydn << 14));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_pfd_dly_up_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_pfd_dly_up_setf(uint8_t bbpllpfddlyup)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)bbpllpfddlyup << 12));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_vco_res_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000700)) >> 8);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_vco_res_trim_setf(uint8_t bbpllvcorestrim)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000700)) | ((uint32_t)bbpllvcorestrim << 8));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_override_ct_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_override_ct_setf(uint8_t bbplloverridect)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)bbplloverridect << 7));
}

__INLINE static uint8_t pcrm_clkhf_ctrl5_bbpll_cal_word_manual_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void pcrm_clkhf_ctrl5_bbpll_cal_word_manual_setf(uint8_t bbpllcalwordmanual)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_CLKHF_CTRL5_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)bbpllcalwordmanual << 0));
}

 /**
 * @brief ADC_CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31             adc12_pu   0
 *     28   sar12b_auto_sweep_en   0
 *  19:08     sar12b_ch_config   0b0
 *     05    sar12b_ext_ref_en   0
 *     04   sar12b_ref_res_tune   0
 *  03:00       sar12b_ref_sel   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_ADC_CTRL_OFFSET 0x000000C0


__INLINE static uint32_t pcrm_adc_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_adc_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_ADC_CTRL_ADC12_PU_BIT                          ((uint32_t)0x80000000)
#define PCRM_ADC_CTRL_ADC12_PU_POS                          31
#define PCRM_ADC_CTRL_SAR12B_AUTO_SWEEP_EN_BIT              ((uint32_t)0x10000000)
#define PCRM_ADC_CTRL_SAR12B_AUTO_SWEEP_EN_POS              28
#define PCRM_ADC_CTRL_SAR12B_CH_CONFIG_MASK                 ((uint32_t)0x000FFF00)
#define PCRM_ADC_CTRL_SAR12B_CH_CONFIG_LSB                  8
#define PCRM_ADC_CTRL_SAR12B_CH_CONFIG_WIDTH                ((uint32_t)0x0000000C)
#define PCRM_ADC_CTRL_SAR12B_EXT_REF_EN_BIT                 ((uint32_t)0x00000020)
#define PCRM_ADC_CTRL_SAR12B_EXT_REF_EN_POS                 5
#define PCRM_ADC_CTRL_SAR12B_REF_RES_TUNE_BIT               ((uint32_t)0x00000010)
#define PCRM_ADC_CTRL_SAR12B_REF_RES_TUNE_POS               4
#define PCRM_ADC_CTRL_SAR12B_REF_SEL_MASK                   ((uint32_t)0x0000000F)
#define PCRM_ADC_CTRL_SAR12B_REF_SEL_LSB                    0
#define PCRM_ADC_CTRL_SAR12B_REF_SEL_WIDTH                  ((uint32_t)0x00000004)

#define PCRM_ADC_CTRL_ADC12_PU_RST                          0x0
#define PCRM_ADC_CTRL_SAR12B_AUTO_SWEEP_EN_RST              0x0
#define PCRM_ADC_CTRL_SAR12B_CH_CONFIG_RST                  0x0
#define PCRM_ADC_CTRL_SAR12B_EXT_REF_EN_RST                 0x0
#define PCRM_ADC_CTRL_SAR12B_REF_RES_TUNE_RST               0x0
#define PCRM_ADC_CTRL_SAR12B_REF_SEL_RST                    0x0

__INLINE static void pcrm_adc_ctrl_pack(uint8_t adc12pu, uint8_t sar12bautosweepen, uint16_t sar12bchconfig, uint8_t sar12bextrefen, uint8_t sar12brefrestune, uint8_t sar12brefsel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)adc12pu << 31) | ((uint32_t)sar12bautosweepen << 28) | ((uint32_t)sar12bchconfig << 8) | ((uint32_t)sar12bextrefen << 5) | ((uint32_t)sar12brefrestune << 4) | ((uint32_t)sar12brefsel << 0));
}

__INLINE static void pcrm_adc_ctrl_unpack(uint8_t* adc12pu, uint8_t* sar12bautosweepen, uint8_t* sar12bchconfig, uint8_t* sar12bextrefen, uint8_t* sar12brefrestune, uint8_t* sar12brefsel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *adc12pu = (localVal & ((uint32_t)0x80000000)) >> 31;
    *sar12bautosweepen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *sar12bchconfig = (localVal & ((uint32_t)0x000FFF00)) >> 8;
    *sar12bextrefen = (localVal & ((uint32_t)0x00000020)) >> 5;
    *sar12brefrestune = (localVal & ((uint32_t)0x00000010)) >> 4;
    *sar12brefsel = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_adc_ctrl_adc12_pu_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void pcrm_adc_ctrl_adc12_pu_setf(uint8_t adc12pu)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)adc12pu << 31));
}

__INLINE static uint8_t pcrm_adc_ctrl_sar12b_auto_sweep_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void pcrm_adc_ctrl_sar12b_auto_sweep_en_setf(uint8_t sar12bautosweepen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)sar12bautosweepen << 28));
}

__INLINE static uint16_t pcrm_adc_ctrl_sar12b_ch_config_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFF00)) >> 8);
}

__INLINE static void pcrm_adc_ctrl_sar12b_ch_config_setf(uint16_t sar12bchconfig)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x000FFF00)) | ((uint32_t)sar12bchconfig << 8));
}

__INLINE static uint8_t pcrm_adc_ctrl_sar12b_ext_ref_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void pcrm_adc_ctrl_sar12b_ext_ref_en_setf(uint8_t sar12bextrefen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)sar12bextrefen << 5));
}

__INLINE static uint8_t pcrm_adc_ctrl_sar12b_ref_res_tune_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_adc_ctrl_sar12b_ref_res_tune_setf(uint8_t sar12brefrestune)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)sar12brefrestune << 4));
}

__INLINE static uint8_t pcrm_adc_ctrl_sar12b_ref_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void pcrm_adc_ctrl_sar12b_ref_sel_setf(uint8_t sar12brefsel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_ADC_CTRL_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_ADC_CTRL_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)sar12brefsel << 0));
}

 /**
 * @brief I_ANALOG_CTRL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     19        vbat_det_ctrl   0
 *     18        vdd3_det_ctrl   0
 *     17       aio_det_ctrl_9   0
 *     16       aio_det_ctrl_8   0
 *     15       aio_det_ctrl_7   0
 *     14       aio_det_ctrl_6   0
 *     13       aio_det_ctrl_5   0
 *     12       aio_det_ctrl_4   0
 *     11       aio_det_ctrl_3   0
 *     10       aio_det_ctrl_2   0
 *     09       aio_det_ctrl_1   0
 *     08       aio_det_ctrl_0   0
 *  03:01            reserved1   0b0
 *     00            reserved2   0
 * </pre>
 */
#define FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET 0x000000C4


__INLINE static uint32_t pcrm_i_analog_ctrl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_i_analog_ctrl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_I_ANALOG_CTRL1_VBAT_DET_CTRL_BIT                     ((uint32_t)0x00080000)
#define PCRM_I_ANALOG_CTRL1_VBAT_DET_CTRL_POS                     19
#define PCRM_I_ANALOG_CTRL1_VDD3_DET_CTRL_BIT                     ((uint32_t)0x00040000)
#define PCRM_I_ANALOG_CTRL1_VDD3_DET_CTRL_POS                     18
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_9_BIT                    ((uint32_t)0x00020000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_9_POS                    17
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_8_BIT                    ((uint32_t)0x00010000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_8_POS                    16
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_7_BIT                    ((uint32_t)0x00008000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_7_POS                    15
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_6_BIT                    ((uint32_t)0x00004000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_6_POS                    14
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_5_BIT                    ((uint32_t)0x00002000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_5_POS                    13
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_4_BIT                    ((uint32_t)0x00001000)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_4_POS                    12
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_3_BIT                    ((uint32_t)0x00000800)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_3_POS                    11
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_2_BIT                    ((uint32_t)0x00000400)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_2_POS                    10
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_1_BIT                    ((uint32_t)0x00000200)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_1_POS                    9
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_0_BIT                    ((uint32_t)0x00000100)
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_0_POS                    8
#define PCRM_I_ANALOG_CTRL1_RESERVED1_MASK                        ((uint32_t)0x0000000E)
#define PCRM_I_ANALOG_CTRL1_RESERVED1_LSB                         1
#define PCRM_I_ANALOG_CTRL1_RESERVED1_WIDTH                       ((uint32_t)0x00000003)
#define PCRM_I_ANALOG_CTRL1_RESERVED2_BIT                         ((uint32_t)0x00000001)
#define PCRM_I_ANALOG_CTRL1_RESERVED2_POS                         0

#define PCRM_I_ANALOG_CTRL1_VBAT_DET_CTRL_RST                     0x0
#define PCRM_I_ANALOG_CTRL1_VDD3_DET_CTRL_RST                     0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_9_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_8_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_7_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_6_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_5_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_4_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_3_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_2_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_1_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_AIO_DET_CTRL_0_RST                    0x0
#define PCRM_I_ANALOG_CTRL1_RESERVED1_RST                         0x0
#define PCRM_I_ANALOG_CTRL1_RESERVED2_RST                         0x0

__INLINE static void pcrm_i_analog_ctrl1_pack(uint8_t vbatdetctrl, uint8_t vdd3detctrl, uint8_t aiodetctrl9, uint8_t aiodetctrl8, uint8_t aiodetctrl7, uint8_t aiodetctrl6, uint8_t aiodetctrl5, uint8_t aiodetctrl4, uint8_t aiodetctrl3, uint8_t aiodetctrl2, uint8_t aiodetctrl1, uint8_t aiodetctrl0)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)vbatdetctrl << 19) | ((uint32_t)vdd3detctrl << 18) | ((uint32_t)aiodetctrl9 << 17) | ((uint32_t)aiodetctrl8 << 16) | ((uint32_t)aiodetctrl7 << 15) | ((uint32_t)aiodetctrl6 << 14) | ((uint32_t)aiodetctrl5 << 13) | ((uint32_t)aiodetctrl4 << 12) | ((uint32_t)aiodetctrl3 << 11) | ((uint32_t)aiodetctrl2 << 10) | ((uint32_t)aiodetctrl1 << 9) | ((uint32_t)aiodetctrl0 << 8));
}

__INLINE static void pcrm_i_analog_ctrl1_unpack(uint8_t* vbatdetctrl, uint8_t* vdd3detctrl, uint8_t* aiodetctrl9, uint8_t* aiodetctrl8, uint8_t* aiodetctrl7, uint8_t* aiodetctrl6, uint8_t* aiodetctrl5, uint8_t* aiodetctrl4, uint8_t* aiodetctrl3, uint8_t* aiodetctrl2, uint8_t* aiodetctrl1, uint8_t* aiodetctrl0, uint8_t* reserved1, uint8_t* reserved2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *vbatdetctrl = (localVal & ((uint32_t)0x00080000)) >> 19;
    *vdd3detctrl = (localVal & ((uint32_t)0x00040000)) >> 18;
    *aiodetctrl9 = (localVal & ((uint32_t)0x00020000)) >> 17;
    *aiodetctrl8 = (localVal & ((uint32_t)0x00010000)) >> 16;
    *aiodetctrl7 = (localVal & ((uint32_t)0x00008000)) >> 15;
    *aiodetctrl6 = (localVal & ((uint32_t)0x00004000)) >> 14;
    *aiodetctrl5 = (localVal & ((uint32_t)0x00002000)) >> 13;
    *aiodetctrl4 = (localVal & ((uint32_t)0x00001000)) >> 12;
    *aiodetctrl3 = (localVal & ((uint32_t)0x00000800)) >> 11;
    *aiodetctrl2 = (localVal & ((uint32_t)0x00000400)) >> 10;
    *aiodetctrl1 = (localVal & ((uint32_t)0x00000200)) >> 9;
    *aiodetctrl0 = (localVal & ((uint32_t)0x00000100)) >> 8;
    *reserved1 = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *reserved2 = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_vbat_det_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void pcrm_i_analog_ctrl1_vbat_det_ctrl_setf(uint8_t vbatdetctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)vbatdetctrl << 19));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_vdd3_det_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void pcrm_i_analog_ctrl1_vdd3_det_ctrl_setf(uint8_t vdd3detctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)vdd3detctrl << 18));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_9_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_9_setf(uint8_t aiodetctrl9)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)aiodetctrl9 << 17));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_8_setf(uint8_t aiodetctrl8)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)aiodetctrl8 << 16));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_7_setf(uint8_t aiodetctrl7)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)aiodetctrl7 << 15));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_6_setf(uint8_t aiodetctrl6)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)aiodetctrl6 << 14));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_5_setf(uint8_t aiodetctrl5)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)aiodetctrl5 << 13));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_4_setf(uint8_t aiodetctrl4)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)aiodetctrl4 << 12));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_3_setf(uint8_t aiodetctrl3)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)aiodetctrl3 << 11));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_2_setf(uint8_t aiodetctrl2)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)aiodetctrl2 << 10));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_1_setf(uint8_t aiodetctrl1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)aiodetctrl1 << 9));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_aio_det_ctrl_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcrm_i_analog_ctrl1_aio_det_ctrl_0_setf(uint8_t aiodetctrl0)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)aiodetctrl0 << 8));
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_reserved1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static uint8_t pcrm_i_analog_ctrl1_reserved2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_I_ANALOG_CTRL1_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief EFUSE_SATE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     20        pgm_bit_state   0
 *  15:12       pgm_word_state   0b0
 *  07:04   read_word_state_msk   0b0
 *     00            pgm_error   0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_SATE_OFFSET 0x00000100


__INLINE static uint32_t pcrm_efuse_sate_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_EFUSE_SATE_PGM_BIT_STATE_BIT                     ((uint32_t)0x00100000)
#define PCRM_EFUSE_SATE_PGM_BIT_STATE_POS                     20
#define PCRM_EFUSE_SATE_PGM_WORD_STATE_MASK                   ((uint32_t)0x0000F000)
#define PCRM_EFUSE_SATE_PGM_WORD_STATE_LSB                    12
#define PCRM_EFUSE_SATE_PGM_WORD_STATE_WIDTH                  ((uint32_t)0x00000004)
#define PCRM_EFUSE_SATE_READ_WORD_STATE_MSK_MASK              ((uint32_t)0x000000F0)
#define PCRM_EFUSE_SATE_READ_WORD_STATE_MSK_LSB               4
#define PCRM_EFUSE_SATE_READ_WORD_STATE_MSK_WIDTH             ((uint32_t)0x00000004)
#define PCRM_EFUSE_SATE_PGM_ERROR_BIT                         ((uint32_t)0x00000001)
#define PCRM_EFUSE_SATE_PGM_ERROR_POS                         0

#define PCRM_EFUSE_SATE_PGM_BIT_STATE_RST                     0x0
#define PCRM_EFUSE_SATE_PGM_WORD_STATE_RST                    0x0
#define PCRM_EFUSE_SATE_READ_WORD_STATE_MSK_RST               0x0
#define PCRM_EFUSE_SATE_PGM_ERROR_RST                         0x0

__INLINE static void pcrm_efuse_sate_unpack(uint8_t* pgmbitstate, uint8_t* pgmwordstate, uint8_t* readwordstatemsk, uint8_t* pgmerror)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *pgmbitstate = (localVal & ((uint32_t)0x00100000)) >> 20;
    *pgmwordstate = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *readwordstatemsk = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *pgmerror = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_efuse_sate_pgm_bit_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static uint8_t pcrm_efuse_sate_pgm_word_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static uint8_t pcrm_efuse_sate_read_word_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t pcrm_efuse_sate_pgm_error_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SATE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief EFUSE_MASK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     16            int_clear   0
 *     12    pgm_bit_state_msk   0
 *     08   pgm_word_state_msk   0
 *     04   read_word_state_msk   0
 *     00        pgm_error_msk   0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_MASK_OFFSET 0x00000104


__INLINE static uint32_t pcrm_efuse_mask_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_efuse_mask_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_EFUSE_MASK_INT_CLEAR_BIT                         ((uint32_t)0x00010000)
#define PCRM_EFUSE_MASK_INT_CLEAR_POS                         16
#define PCRM_EFUSE_MASK_PGM_BIT_STATE_MSK_BIT                 ((uint32_t)0x00001000)
#define PCRM_EFUSE_MASK_PGM_BIT_STATE_MSK_POS                 12
#define PCRM_EFUSE_MASK_PGM_WORD_STATE_MSK_BIT                ((uint32_t)0x00000100)
#define PCRM_EFUSE_MASK_PGM_WORD_STATE_MSK_POS                8
#define PCRM_EFUSE_MASK_READ_WORD_STATE_MSK_BIT               ((uint32_t)0x00000010)
#define PCRM_EFUSE_MASK_READ_WORD_STATE_MSK_POS               4
#define PCRM_EFUSE_MASK_PGM_ERROR_MSK_BIT                     ((uint32_t)0x00000001)
#define PCRM_EFUSE_MASK_PGM_ERROR_MSK_POS                     0

#define PCRM_EFUSE_MASK_INT_CLEAR_RST                         0x0
#define PCRM_EFUSE_MASK_PGM_BIT_STATE_MSK_RST                 0x0
#define PCRM_EFUSE_MASK_PGM_WORD_STATE_MSK_RST                0x0
#define PCRM_EFUSE_MASK_READ_WORD_STATE_MSK_RST               0x0
#define PCRM_EFUSE_MASK_PGM_ERROR_MSK_RST                     0x0

__INLINE static void pcrm_efuse_mask_pack(uint8_t intclear, uint8_t pgmbitstatemsk, uint8_t pgmwordstatemsk, uint8_t readwordstatemsk, uint8_t pgmerrormsk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)intclear << 16) | ((uint32_t)pgmbitstatemsk << 12) | ((uint32_t)pgmwordstatemsk << 8) | ((uint32_t)readwordstatemsk << 4) | ((uint32_t)pgmerrormsk << 0));
}

__INLINE static void pcrm_efuse_mask_unpack(uint8_t* intclear, uint8_t* pgmbitstatemsk, uint8_t* pgmwordstatemsk, uint8_t* readwordstatemsk, uint8_t* pgmerrormsk)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *intclear = (localVal & ((uint32_t)0x00010000)) >> 16;
    *pgmbitstatemsk = (localVal & ((uint32_t)0x00001000)) >> 12;
    *pgmwordstatemsk = (localVal & ((uint32_t)0x00000100)) >> 8;
    *readwordstatemsk = (localVal & ((uint32_t)0x00000010)) >> 4;
    *pgmerrormsk = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_efuse_mask_int_clear_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcrm_efuse_mask_int_clear_setf(uint8_t intclear)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)intclear << 16));
}

__INLINE static uint8_t pcrm_efuse_mask_pgm_bit_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void pcrm_efuse_mask_pgm_bit_state_msk_setf(uint8_t pgmbitstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)pgmbitstatemsk << 12));
}

__INLINE static uint8_t pcrm_efuse_mask_pgm_word_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcrm_efuse_mask_pgm_word_state_msk_setf(uint8_t pgmwordstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)pgmwordstatemsk << 8));
}

__INLINE static uint8_t pcrm_efuse_mask_read_word_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcrm_efuse_mask_read_word_state_msk_setf(uint8_t readwordstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)readwordstatemsk << 4));
}

__INLINE static uint8_t pcrm_efuse_mask_pgm_error_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcrm_efuse_mask_pgm_error_msk_setf(uint8_t pgmerrormsk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_MASK_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)pgmerrormsk << 0));
}

 /**
 * @brief EFUSE_PGM_DATA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       efuse_pgm_data   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET 0x00000108


__INLINE static uint32_t pcrm_efuse_pgm_data_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_efuse_pgm_data_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_EFUSE_PGM_DATA_EFUSE_PGM_DATA_MASK                   ((uint32_t)0xFFFFFFFF)
#define PCRM_EFUSE_PGM_DATA_EFUSE_PGM_DATA_LSB                    0
#define PCRM_EFUSE_PGM_DATA_EFUSE_PGM_DATA_WIDTH                  ((uint32_t)0x00000020)

#define PCRM_EFUSE_PGM_DATA_EFUSE_PGM_DATA_RST                    0x0

__INLINE static void pcrm_efuse_pgm_data_pack(uint32_t efusepgmdata)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)efusepgmdata << 0));
}

__INLINE static void pcrm_efuse_pgm_data_unpack(uint8_t* efusepgmdata)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *efusepgmdata = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t pcrm_efuse_pgm_data_efuse_pgm_data_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void pcrm_efuse_pgm_data_efuse_pgm_data_setf(uint32_t efusepgmdata)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)efusepgmdata << 0);
}

 /**
 * @brief EFUSE_ADDR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08            word_mode   0
 *  06:00           efuse_addr   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET 0x0000010C


__INLINE static uint32_t pcrm_efuse_addr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_efuse_addr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_EFUSE_ADDR_WORD_MODE_BIT                         ((uint32_t)0x00000100)
#define PCRM_EFUSE_ADDR_WORD_MODE_POS                         8
#define PCRM_EFUSE_ADDR_EFUSE_ADDR_MASK                       ((uint32_t)0x0000007F)
#define PCRM_EFUSE_ADDR_EFUSE_ADDR_LSB                        0
#define PCRM_EFUSE_ADDR_EFUSE_ADDR_WIDTH                      ((uint32_t)0x00000007)

#define PCRM_EFUSE_ADDR_WORD_MODE_RST                         0x0
#define PCRM_EFUSE_ADDR_EFUSE_ADDR_RST                        0x0

__INLINE static void pcrm_efuse_addr_pack(uint8_t wordmode, uint8_t efuseaddr)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)wordmode << 8) | ((uint32_t)efuseaddr << 0));
}

__INLINE static void pcrm_efuse_addr_unpack(uint8_t* wordmode, uint8_t* efuseaddr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *wordmode = (localVal & ((uint32_t)0x00000100)) >> 8;
    *efuseaddr = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t pcrm_efuse_addr_word_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcrm_efuse_addr_word_mode_setf(uint8_t wordmode)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)wordmode << 8));
}

__INLINE static uint8_t pcrm_efuse_addr_efuse_addr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void pcrm_efuse_addr_efuse_addr_setf(uint8_t efuseaddr)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_ADDR_OFFSET + FEMTO_REG_PCRM_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)efuseaddr << 0));
}

 /**
 * @brief EFUSE_DATA_NUMBER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00    efuse_data_number   0b0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET 0x00000110


__INLINE static uint32_t pcrm_efuse_data_number_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_efuse_data_number_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_MASK                ((uint32_t)0x00000003)
#define PCRM_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_LSB                 0
#define PCRM_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_WIDTH               ((uint32_t)0x00000002)

#define PCRM_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_RST                 0x0

__INLINE static void pcrm_efuse_data_number_pack(uint8_t efusedatanumber)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)efusedatanumber << 0));
}

__INLINE static void pcrm_efuse_data_number_unpack(uint8_t* efusedatanumber)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *efusedatanumber = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t pcrm_efuse_data_number_efuse_data_number_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void pcrm_efuse_data_number_efuse_data_number_setf(uint8_t efusedatanumber)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)efusedatanumber << 0);
}

 /**
 * @brief EFUSE_SOFT_MODE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00            soft_mode   0
 * </pre>
 */
#define FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET 0x00000120


__INLINE static uint32_t pcrm_efuse_soft_mode_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_efuse_soft_mode_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_EFUSE_SOFT_MODE_SOFT_MODE_BIT                         ((uint32_t)0x00000001)
#define PCRM_EFUSE_SOFT_MODE_SOFT_MODE_POS                         0

#define PCRM_EFUSE_SOFT_MODE_SOFT_MODE_RST                         0x0

__INLINE static void pcrm_efuse_soft_mode_pack(uint8_t softmode)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)softmode << 0));
}

__INLINE static void pcrm_efuse_soft_mode_unpack(uint8_t* softmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *softmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_efuse_soft_mode_soft_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcrm_efuse_soft_mode_soft_mode_setf(uint8_t softmode)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_EFUSE_SOFT_MODE_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)softmode << 0);
}

 /**
 * @brief CHARGE_DLY register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     01      charge_done_dly   0
 *     00        charge_on_dly   0
 * </pre>
 */
#define FEMTO_REG_PCRM_CHARGE_DLY_OFFSET 0x00000184


__INLINE static uint32_t pcrm_charge_dly_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CHARGE_DLY_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

// field definitions
#define PCRM_CHARGE_DLY_CHARGE_DONE_DLY_BIT                   ((uint32_t)0x00000002)
#define PCRM_CHARGE_DLY_CHARGE_DONE_DLY_POS                   1
#define PCRM_CHARGE_DLY_CHARGE_ON_DLY_BIT                     ((uint32_t)0x00000001)
#define PCRM_CHARGE_DLY_CHARGE_ON_DLY_POS                     0

#define PCRM_CHARGE_DLY_CHARGE_DONE_DLY_RST                   0x0
#define PCRM_CHARGE_DLY_CHARGE_ON_DLY_RST                     0x0

__INLINE static void pcrm_charge_dly_unpack(uint8_t* chargedonedly, uint8_t* chargeondly)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHARGE_DLY_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *chargedonedly = (localVal & ((uint32_t)0x00000002)) >> 1;
    *chargeondly = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcrm_charge_dly_charge_done_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHARGE_DLY_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t pcrm_charge_dly_charge_on_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CHARGE_DLY_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief CLK32_DIV_PARA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00       clk32_div_para   0b4
 * </pre>
 */
#define FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET 0x00000188


__INLINE static uint32_t pcrm_clk32_div_para_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
}

__INLINE static void pcrm_clk32_div_para_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, value);
}

// field definitions
#define PCRM_CLK32_DIV_PARA_CLK32_DIV_PARA_MASK                   ((uint32_t)0x0000000F)
#define PCRM_CLK32_DIV_PARA_CLK32_DIV_PARA_LSB                    0
#define PCRM_CLK32_DIV_PARA_CLK32_DIV_PARA_WIDTH                  ((uint32_t)0x00000004)

#define PCRM_CLK32_DIV_PARA_CLK32_DIV_PARA_RST                    0x4

__INLINE static void pcrm_clk32_div_para_pack(uint8_t clk32divpara)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR,  ((uint32_t)clk32divpara << 0));
}

__INLINE static void pcrm_clk32_div_para_unpack(uint8_t* clk32divpara)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);

    *clk32divpara = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcrm_clk32_div_para_clk32_div_para_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET + FEMTO_REG_PCRM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void pcrm_clk32_div_para_clk32_div_para_setf(uint8_t clk32divpara)
{
    _FEMTO_REG_WR(FEMTO_REG_PCRM_CLK32_DIV_PARA_OFFSET+ FEMTO_REG_PCRM_BASE_ADDR, (uint32_t)clk32divpara << 0);
}


#endif // _FEMTO_REG_PCRM_H_

