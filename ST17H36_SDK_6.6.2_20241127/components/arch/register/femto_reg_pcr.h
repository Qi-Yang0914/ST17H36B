#ifndef _FEMTO_REG_PCR_H_
#define _FEMTO_REG_PCR_H_

#define FEMTO_REG_PCR_COUNT 9

#define FEMTO_REG_PCR_BASE_ADDR 0x40000000

#define FEMTO_REG_PCR_SIZE 0x00000028


 /**
 * @brief SW_RESET0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     24         srst_uart0_n   1
 *     20         hsrst_spif_n   1
 *     19   hsrst_spif_refclk_n   1
 *     17          srst_adcc_n   1
 *     15          srst_gpio_n   1
 *     13           srst_otp_n   0
 *     11          srst_spi0_n   1
 *     09          srst_nrz1_n   1
 *     07         srst_iomux_n   1
 *     04           srst_aes_n   1
 *     03           srst_dma_n   1
 *     01          srst_sync_n   1
 *     00             reserved   0
 * </pre>
 */
#define FEMTO_REG_PCR_SW_RESET0_OFFSET 0x00000000


__INLINE static uint32_t pcr_sw_reset0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_sw_reset0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_SW_RESET0_SRST_UART0_N_BIT                      ((uint32_t)0x01000000)
#define PCR_SW_RESET0_SRST_UART0_N_POS                      24
#define PCR_SW_RESET0_HSRST_SPIF_N_BIT                      ((uint32_t)0x00100000)
#define PCR_SW_RESET0_HSRST_SPIF_N_POS                      20
#define PCR_SW_RESET0_HSRST_SPIF_REFCLK_N_BIT               ((uint32_t)0x00080000)
#define PCR_SW_RESET0_HSRST_SPIF_REFCLK_N_POS               19
#define PCR_SW_RESET0_SRST_ADCC_N_BIT                       ((uint32_t)0x00020000)
#define PCR_SW_RESET0_SRST_ADCC_N_POS                       17
#define PCR_SW_RESET0_SRST_GPIO_N_BIT                       ((uint32_t)0x00008000)
#define PCR_SW_RESET0_SRST_GPIO_N_POS                       15
#define PCR_SW_RESET0_SRST_OTP_N_BIT                        ((uint32_t)0x00002000)
#define PCR_SW_RESET0_SRST_OTP_N_POS                        13
#define PCR_SW_RESET0_SRST_SPI0_N_BIT                       ((uint32_t)0x00000800)
#define PCR_SW_RESET0_SRST_SPI0_N_POS                       11
#define PCR_SW_RESET0_SRST_NRZ1_N_BIT                       ((uint32_t)0x00000200)
#define PCR_SW_RESET0_SRST_NRZ1_N_POS                       9
#define PCR_SW_RESET0_SRST_IOMUX_N_BIT                      ((uint32_t)0x00000080)
#define PCR_SW_RESET0_SRST_IOMUX_N_POS                      7
#define PCR_SW_RESET0_SRST_AES_N_BIT                        ((uint32_t)0x00000010)
#define PCR_SW_RESET0_SRST_AES_N_POS                        4
#define PCR_SW_RESET0_SRST_DMA_N_BIT                        ((uint32_t)0x00000008)
#define PCR_SW_RESET0_SRST_DMA_N_POS                        3
#define PCR_SW_RESET0_SRST_SYNC_N_BIT                       ((uint32_t)0x00000002)
#define PCR_SW_RESET0_SRST_SYNC_N_POS                       1
#define PCR_SW_RESET0_RESERVED_BIT                          ((uint32_t)0x00000001)
#define PCR_SW_RESET0_RESERVED_POS                          0

#define PCR_SW_RESET0_SRST_UART0_N_RST                      0x1
#define PCR_SW_RESET0_HSRST_SPIF_N_RST                      0x1
#define PCR_SW_RESET0_HSRST_SPIF_REFCLK_N_RST               0x1
#define PCR_SW_RESET0_SRST_ADCC_N_RST                       0x1
#define PCR_SW_RESET0_SRST_GPIO_N_RST                       0x1
#define PCR_SW_RESET0_SRST_OTP_N_RST                        0x0
#define PCR_SW_RESET0_SRST_SPI0_N_RST                       0x1
#define PCR_SW_RESET0_SRST_NRZ1_N_RST                       0x1
#define PCR_SW_RESET0_SRST_IOMUX_N_RST                      0x1
#define PCR_SW_RESET0_SRST_AES_N_RST                        0x1
#define PCR_SW_RESET0_SRST_DMA_N_RST                        0x1
#define PCR_SW_RESET0_SRST_SYNC_N_RST                       0x1
#define PCR_SW_RESET0_RESERVED_RST                          0x0

__INLINE static void pcr_sw_reset0_pack(uint8_t srstuart0n, uint8_t hsrstspifn, uint8_t hsrstspifrefclkn, uint8_t srstadccn, uint8_t srstgpion, uint8_t srstspi0n, uint8_t srstnrz1n, uint8_t srstiomuxn, uint8_t srstaesn, uint8_t srstdman, uint8_t srstsyncn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)srstuart0n << 24) | ((uint32_t)hsrstspifn << 20) | ((uint32_t)hsrstspifrefclkn << 19) | ((uint32_t)srstadccn << 17) | ((uint32_t)srstgpion << 15) | ((uint32_t)srstspi0n << 11) | ((uint32_t)srstnrz1n << 9) | ((uint32_t)srstiomuxn << 7) | ((uint32_t)srstaesn << 4) | ((uint32_t)srstdman << 3) | ((uint32_t)srstsyncn << 1));
}

__INLINE static void pcr_sw_reset0_unpack(uint8_t* srstuart0n, uint8_t* hsrstspifn, uint8_t* hsrstspifrefclkn, uint8_t* srstadccn, uint8_t* srstgpion, uint8_t* srstotpn, uint8_t* srstspi0n, uint8_t* srstnrz1n, uint8_t* srstiomuxn, uint8_t* srstaesn, uint8_t* srstdman, uint8_t* srstsyncn, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *srstuart0n = (localVal & ((uint32_t)0x01000000)) >> 24;
    *hsrstspifn = (localVal & ((uint32_t)0x00100000)) >> 20;
    *hsrstspifrefclkn = (localVal & ((uint32_t)0x00080000)) >> 19;
    *srstadccn = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srstgpion = (localVal & ((uint32_t)0x00008000)) >> 15;
    *srstotpn = (localVal & ((uint32_t)0x00002000)) >> 13;
    *srstspi0n = (localVal & ((uint32_t)0x00000800)) >> 11;
    *srstnrz1n = (localVal & ((uint32_t)0x00000200)) >> 9;
    *srstiomuxn = (localVal & ((uint32_t)0x00000080)) >> 7;
    *srstaesn = (localVal & ((uint32_t)0x00000010)) >> 4;
    *srstdman = (localVal & ((uint32_t)0x00000008)) >> 3;
    *srstsyncn = (localVal & ((uint32_t)0x00000002)) >> 1;
    *reserved = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_sw_reset0_srst_uart0_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void pcr_sw_reset0_srst_uart0_n_setf(uint8_t srstuart0n)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)srstuart0n << 24));
}

__INLINE static uint8_t pcr_sw_reset0_hsrst_spif_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void pcr_sw_reset0_hsrst_spif_n_setf(uint8_t hsrstspifn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)hsrstspifn << 20));
}

__INLINE static uint8_t pcr_sw_reset0_hsrst_spif_refclk_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void pcr_sw_reset0_hsrst_spif_refclk_n_setf(uint8_t hsrstspifrefclkn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)hsrstspifrefclkn << 19));
}

__INLINE static uint8_t pcr_sw_reset0_srst_adcc_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcr_sw_reset0_srst_adcc_n_setf(uint8_t srstadccn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srstadccn << 17));
}

__INLINE static uint8_t pcr_sw_reset0_srst_gpio_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void pcr_sw_reset0_srst_gpio_n_setf(uint8_t srstgpion)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)srstgpion << 15));
}

__INLINE static uint8_t pcr_sw_reset0_srst_otp_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t pcr_sw_reset0_srst_spi0_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void pcr_sw_reset0_srst_spi0_n_setf(uint8_t srstspi0n)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)srstspi0n << 11));
}

__INLINE static uint8_t pcr_sw_reset0_srst_nrz1_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void pcr_sw_reset0_srst_nrz1_n_setf(uint8_t srstnrz1n)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)srstnrz1n << 9));
}

__INLINE static uint8_t pcr_sw_reset0_srst_iomux_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void pcr_sw_reset0_srst_iomux_n_setf(uint8_t srstiomuxn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)srstiomuxn << 7));
}

__INLINE static uint8_t pcr_sw_reset0_srst_aes_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcr_sw_reset0_srst_aes_n_setf(uint8_t srstaesn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)srstaesn << 4));
}

__INLINE static uint8_t pcr_sw_reset0_srst_dma_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcr_sw_reset0_srst_dma_n_setf(uint8_t srstdman)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)srstdman << 3));
}

__INLINE static uint8_t pcr_sw_reset0_srst_sync_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcr_sw_reset0_srst_sync_n_setf(uint8_t srstsyncn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)srstsyncn << 1));
}

 /**
 * @brief SW_RESET1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     01       cpu_srst_n_pls   1
 *     00       sys_srst_n_pls   1
 * </pre>
 */
#define FEMTO_REG_PCR_SW_RESET1_OFFSET 0x00000004


__INLINE static uint32_t pcr_sw_reset1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_sw_reset1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_SW_RESET1_CPU_SRST_N_PLS_BIT                    ((uint32_t)0x00000002)
#define PCR_SW_RESET1_CPU_SRST_N_PLS_POS                    1
#define PCR_SW_RESET1_SYS_SRST_N_PLS_BIT                    ((uint32_t)0x00000001)
#define PCR_SW_RESET1_SYS_SRST_N_PLS_POS                    0

#define PCR_SW_RESET1_CPU_SRST_N_PLS_RST                    0x1
#define PCR_SW_RESET1_SYS_SRST_N_PLS_RST                    0x1

__INLINE static void pcr_sw_reset1_pack(uint8_t cpusrstnpls, uint8_t syssrstnpls)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)cpusrstnpls << 1) | ((uint32_t)syssrstnpls << 0));
}

__INLINE static void pcr_sw_reset1_unpack(uint8_t* cpusrstnpls, uint8_t* syssrstnpls)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *cpusrstnpls = (localVal & ((uint32_t)0x00000002)) >> 1;
    *syssrstnpls = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_sw_reset1_cpu_srst_n_pls_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcr_sw_reset1_cpu_srst_n_pls_setf(uint8_t cpusrstnpls)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)cpusrstnpls << 1));
}

__INLINE static uint8_t pcr_sw_reset1_sys_srst_n_pls_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcr_sw_reset1_sys_srst_n_pls_setf(uint8_t syssrstnpls)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)syssrstnpls << 0));
}

 /**
 * @brief SW_CLK0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31      clkg_hclk_sl_en   1
 *     30         clkg_hclk_sl   1
 *     24           clkg_uart0   1
 *     20           hclkg_spif   1
 *     19    hclkg_spif_refclk   1
 *     17            clkg_adcc   1
 *     15            clkg_gpio   1
 *     13             clkg_otp   0
 *     11            clkg_spi0   1
 *     09            clkg_nrz1   0
 *     07           clkg_iomux   1
 *     04             clkg_aes   1
 *     03             clkg_dma   1
 *     01            clkg_sync   1
 *     00             reserved   1
 * </pre>
 */
#define FEMTO_REG_PCR_SW_CLK0_OFFSET 0x00000008


__INLINE static uint32_t pcr_sw_clk0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_sw_clk0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_SW_CLK0_CLKG_HCLK_SL_EN_BIT                   ((uint32_t)0x80000000)
#define PCR_SW_CLK0_CLKG_HCLK_SL_EN_POS                   31
#define PCR_SW_CLK0_CLKG_HCLK_SL_BIT                      ((uint32_t)0x40000000)
#define PCR_SW_CLK0_CLKG_HCLK_SL_POS                      30
#define PCR_SW_CLK0_CLKG_UART0_BIT                        ((uint32_t)0x01000000)
#define PCR_SW_CLK0_CLKG_UART0_POS                        24
#define PCR_SW_CLK0_HCLKG_SPIF_BIT                        ((uint32_t)0x00100000)
#define PCR_SW_CLK0_HCLKG_SPIF_POS                        20
#define PCR_SW_CLK0_HCLKG_SPIF_REFCLK_BIT                 ((uint32_t)0x00080000)
#define PCR_SW_CLK0_HCLKG_SPIF_REFCLK_POS                 19
#define PCR_SW_CLK0_CLKG_ADCC_BIT                         ((uint32_t)0x00020000)
#define PCR_SW_CLK0_CLKG_ADCC_POS                         17
#define PCR_SW_CLK0_CLKG_GPIO_BIT                         ((uint32_t)0x00008000)
#define PCR_SW_CLK0_CLKG_GPIO_POS                         15
#define PCR_SW_CLK0_CLKG_OTP_BIT                          ((uint32_t)0x00002000)
#define PCR_SW_CLK0_CLKG_OTP_POS                          13
#define PCR_SW_CLK0_CLKG_SPI0_BIT                         ((uint32_t)0x00000800)
#define PCR_SW_CLK0_CLKG_SPI0_POS                         11
#define PCR_SW_CLK0_CLKG_NRZ1_BIT                         ((uint32_t)0x00000200)
#define PCR_SW_CLK0_CLKG_NRZ1_POS                         9
#define PCR_SW_CLK0_CLKG_IOMUX_BIT                        ((uint32_t)0x00000080)
#define PCR_SW_CLK0_CLKG_IOMUX_POS                        7
#define PCR_SW_CLK0_CLKG_AES_BIT                          ((uint32_t)0x00000010)
#define PCR_SW_CLK0_CLKG_AES_POS                          4
#define PCR_SW_CLK0_CLKG_DMA_BIT                          ((uint32_t)0x00000008)
#define PCR_SW_CLK0_CLKG_DMA_POS                          3
#define PCR_SW_CLK0_CLKG_SYNC_BIT                         ((uint32_t)0x00000002)
#define PCR_SW_CLK0_CLKG_SYNC_POS                         1
#define PCR_SW_CLK0_RESERVED_BIT                          ((uint32_t)0x00000001)
#define PCR_SW_CLK0_RESERVED_POS                          0

#define PCR_SW_CLK0_CLKG_HCLK_SL_EN_RST                   0x1
#define PCR_SW_CLK0_CLKG_HCLK_SL_RST                      0x1
#define PCR_SW_CLK0_CLKG_UART0_RST                        0x1
#define PCR_SW_CLK0_HCLKG_SPIF_RST                        0x1
#define PCR_SW_CLK0_HCLKG_SPIF_REFCLK_RST                 0x1
#define PCR_SW_CLK0_CLKG_ADCC_RST                         0x1
#define PCR_SW_CLK0_CLKG_GPIO_RST                         0x1
#define PCR_SW_CLK0_CLKG_OTP_RST                          0x0
#define PCR_SW_CLK0_CLKG_SPI0_RST                         0x1
#define PCR_SW_CLK0_CLKG_NRZ1_RST                         0x0
#define PCR_SW_CLK0_CLKG_IOMUX_RST                        0x1
#define PCR_SW_CLK0_CLKG_AES_RST                          0x1
#define PCR_SW_CLK0_CLKG_DMA_RST                          0x1
#define PCR_SW_CLK0_CLKG_SYNC_RST                         0x1
#define PCR_SW_CLK0_RESERVED_RST                          0x1

__INLINE static void pcr_sw_clk0_pack(uint8_t clkghclkslen, uint8_t clkghclksl, uint8_t clkguart0, uint8_t hclkgspif, uint8_t hclkgspifrefclk, uint8_t clkgadcc, uint8_t clkggpio, uint8_t clkgspi0, uint8_t clkgnrz1, uint8_t clkgiomux, uint8_t clkgaes, uint8_t clkgdma, uint8_t clkgsync)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)clkghclkslen << 31) | ((uint32_t)clkghclksl << 30) | ((uint32_t)clkguart0 << 24) | ((uint32_t)hclkgspif << 20) | ((uint32_t)hclkgspifrefclk << 19) | ((uint32_t)clkgadcc << 17) | ((uint32_t)clkggpio << 15) | ((uint32_t)clkgspi0 << 11) | ((uint32_t)clkgnrz1 << 9) | ((uint32_t)clkgiomux << 7) | ((uint32_t)clkgaes << 4) | ((uint32_t)clkgdma << 3) | ((uint32_t)clkgsync << 1));
}

__INLINE static void pcr_sw_clk0_unpack(uint8_t* clkghclkslen, uint8_t* clkghclksl, uint8_t* clkguart0, uint8_t* hclkgspif, uint8_t* hclkgspifrefclk, uint8_t* clkgadcc, uint8_t* clkggpio, uint8_t* clkgotp, uint8_t* clkgspi0, uint8_t* clkgnrz1, uint8_t* clkgiomux, uint8_t* clkgaes, uint8_t* clkgdma, uint8_t* clkgsync, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *clkghclkslen = (localVal & ((uint32_t)0x80000000)) >> 31;
    *clkghclksl = (localVal & ((uint32_t)0x40000000)) >> 30;
    *clkguart0 = (localVal & ((uint32_t)0x01000000)) >> 24;
    *hclkgspif = (localVal & ((uint32_t)0x00100000)) >> 20;
    *hclkgspifrefclk = (localVal & ((uint32_t)0x00080000)) >> 19;
    *clkgadcc = (localVal & ((uint32_t)0x00020000)) >> 17;
    *clkggpio = (localVal & ((uint32_t)0x00008000)) >> 15;
    *clkgotp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *clkgspi0 = (localVal & ((uint32_t)0x00000800)) >> 11;
    *clkgnrz1 = (localVal & ((uint32_t)0x00000200)) >> 9;
    *clkgiomux = (localVal & ((uint32_t)0x00000080)) >> 7;
    *clkgaes = (localVal & ((uint32_t)0x00000010)) >> 4;
    *clkgdma = (localVal & ((uint32_t)0x00000008)) >> 3;
    *clkgsync = (localVal & ((uint32_t)0x00000002)) >> 1;
    *reserved = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_sw_clk0_clkg_hclk_sl_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void pcr_sw_clk0_clkg_hclk_sl_en_setf(uint8_t clkghclkslen)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)clkghclkslen << 31));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_hclk_sl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void pcr_sw_clk0_clkg_hclk_sl_setf(uint8_t clkghclksl)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)clkghclksl << 30));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_uart0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void pcr_sw_clk0_clkg_uart0_setf(uint8_t clkguart0)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)clkguart0 << 24));
}

__INLINE static uint8_t pcr_sw_clk0_hclkg_spif_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void pcr_sw_clk0_hclkg_spif_setf(uint8_t hclkgspif)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)hclkgspif << 20));
}

__INLINE static uint8_t pcr_sw_clk0_hclkg_spif_refclk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void pcr_sw_clk0_hclkg_spif_refclk_setf(uint8_t hclkgspifrefclk)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)hclkgspifrefclk << 19));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_adcc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcr_sw_clk0_clkg_adcc_setf(uint8_t clkgadcc)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)clkgadcc << 17));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_gpio_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void pcr_sw_clk0_clkg_gpio_setf(uint8_t clkggpio)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)clkggpio << 15));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_otp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t pcr_sw_clk0_clkg_spi0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void pcr_sw_clk0_clkg_spi0_setf(uint8_t clkgspi0)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)clkgspi0 << 11));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_nrz1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void pcr_sw_clk0_clkg_nrz1_setf(uint8_t clkgnrz1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)clkgnrz1 << 9));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_iomux_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void pcr_sw_clk0_clkg_iomux_setf(uint8_t clkgiomux)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)clkgiomux << 7));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_aes_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcr_sw_clk0_clkg_aes_setf(uint8_t clkgaes)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)clkgaes << 4));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_dma_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcr_sw_clk0_clkg_dma_setf(uint8_t clkgdma)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)clkgdma << 3));
}

__INLINE static uint8_t pcr_sw_clk0_clkg_sync_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcr_sw_clk0_clkg_sync_setf(uint8_t clkgsync)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK0_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK0_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)clkgsync << 1));
}

 /**
 * @brief SW_RESET2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     25       srst_timerx1_n   1
 *     24    srst_timer_n205_n   1
 *     17            rst_usb_n   1
 *     16          hsrst_usb_n   1
 *     13         srst_bbmix_n   1
 *     12          srst_bbrx_n   1
 *     11          srst_bbtx_n   1
 *     10          srst_bbll_n   1
 *     09         srst_bbreg_n   1
 *     06           srst_com_n   1
 *     05           srst_wdt_n   1
 *     03            srst_bb_n   1
 *     02         wdt_reset_en   0
 *     01   m0_lockup_reset_en   0
 *     00        m0_soft_reset   1
 * </pre>
 */
#define FEMTO_REG_PCR_SW_RESET2_OFFSET 0x0000000C


__INLINE static uint32_t pcr_sw_reset2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_sw_reset2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_SW_RESET2_SRST_TIMERX1_N_BIT                    ((uint32_t)0x02000000)
#define PCR_SW_RESET2_SRST_TIMERX1_N_POS                    25
#define PCR_SW_RESET2_SRST_TIMER_N205_N_BIT                 ((uint32_t)0x01000000)
#define PCR_SW_RESET2_SRST_TIMER_N205_N_POS                 24
#define PCR_SW_RESET2_RST_USB_N_BIT                         ((uint32_t)0x00020000)
#define PCR_SW_RESET2_RST_USB_N_POS                         17
#define PCR_SW_RESET2_HSRST_USB_N_BIT                       ((uint32_t)0x00010000)
#define PCR_SW_RESET2_HSRST_USB_N_POS                       16
#define PCR_SW_RESET2_SRST_BBMIX_N_BIT                      ((uint32_t)0x00002000)
#define PCR_SW_RESET2_SRST_BBMIX_N_POS                      13
#define PCR_SW_RESET2_SRST_BBRX_N_BIT                       ((uint32_t)0x00001000)
#define PCR_SW_RESET2_SRST_BBRX_N_POS                       12
#define PCR_SW_RESET2_SRST_BBTX_N_BIT                       ((uint32_t)0x00000800)
#define PCR_SW_RESET2_SRST_BBTX_N_POS                       11
#define PCR_SW_RESET2_SRST_BBLL_N_BIT                       ((uint32_t)0x00000400)
#define PCR_SW_RESET2_SRST_BBLL_N_POS                       10
#define PCR_SW_RESET2_SRST_BBREG_N_BIT                      ((uint32_t)0x00000200)
#define PCR_SW_RESET2_SRST_BBREG_N_POS                      9
#define PCR_SW_RESET2_SRST_COM_N_BIT                        ((uint32_t)0x00000040)
#define PCR_SW_RESET2_SRST_COM_N_POS                        6
#define PCR_SW_RESET2_SRST_WDT_N_BIT                        ((uint32_t)0x00000020)
#define PCR_SW_RESET2_SRST_WDT_N_POS                        5
#define PCR_SW_RESET2_SRST_BB_N_BIT                         ((uint32_t)0x00000008)
#define PCR_SW_RESET2_SRST_BB_N_POS                         3
#define PCR_SW_RESET2_WDT_RESET_EN_BIT                      ((uint32_t)0x00000004)
#define PCR_SW_RESET2_WDT_RESET_EN_POS                      2
#define PCR_SW_RESET2_M0_LOCKUP_RESET_EN_BIT                ((uint32_t)0x00000002)
#define PCR_SW_RESET2_M0_LOCKUP_RESET_EN_POS                1
#define PCR_SW_RESET2_M0_SOFT_RESET_BIT                     ((uint32_t)0x00000001)
#define PCR_SW_RESET2_M0_SOFT_RESET_POS                     0

#define PCR_SW_RESET2_SRST_TIMERX1_N_RST                    0x1
#define PCR_SW_RESET2_SRST_TIMER_N205_N_RST                 0x1
#define PCR_SW_RESET2_RST_USB_N_RST                         0x1
#define PCR_SW_RESET2_HSRST_USB_N_RST                       0x1
#define PCR_SW_RESET2_SRST_BBMIX_N_RST                      0x1
#define PCR_SW_RESET2_SRST_BBRX_N_RST                       0x1
#define PCR_SW_RESET2_SRST_BBTX_N_RST                       0x1
#define PCR_SW_RESET2_SRST_BBLL_N_RST                       0x1
#define PCR_SW_RESET2_SRST_BBREG_N_RST                      0x1
#define PCR_SW_RESET2_SRST_COM_N_RST                        0x1
#define PCR_SW_RESET2_SRST_WDT_N_RST                        0x1
#define PCR_SW_RESET2_SRST_BB_N_RST                         0x1
#define PCR_SW_RESET2_WDT_RESET_EN_RST                      0x0
#define PCR_SW_RESET2_M0_LOCKUP_RESET_EN_RST                0x0
#define PCR_SW_RESET2_M0_SOFT_RESET_RST                     0x1

__INLINE static void pcr_sw_reset2_pack(uint8_t srsttimerx1n, uint8_t srsttimern205n, uint8_t rstusbn, uint8_t hsrstusbn, uint8_t srstbbmixn, uint8_t srstbbrxn, uint8_t srstbbtxn, uint8_t srstbblln, uint8_t srstbbregn, uint8_t srstcomn, uint8_t srstwdtn, uint8_t srstbbn, uint8_t wdtreseten, uint8_t m0lockupreseten, uint8_t m0softreset)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)srsttimerx1n << 25) | ((uint32_t)srsttimern205n << 24) | ((uint32_t)rstusbn << 17) | ((uint32_t)hsrstusbn << 16) | ((uint32_t)srstbbmixn << 13) | ((uint32_t)srstbbrxn << 12) | ((uint32_t)srstbbtxn << 11) | ((uint32_t)srstbblln << 10) | ((uint32_t)srstbbregn << 9) | ((uint32_t)srstcomn << 6) | ((uint32_t)srstwdtn << 5) | ((uint32_t)srstbbn << 3) | ((uint32_t)wdtreseten << 2) | ((uint32_t)m0lockupreseten << 1) | ((uint32_t)m0softreset << 0));
}

__INLINE static void pcr_sw_reset2_unpack(uint8_t* srsttimerx1n, uint8_t* srsttimern205n, uint8_t* rstusbn, uint8_t* hsrstusbn, uint8_t* srstbbmixn, uint8_t* srstbbrxn, uint8_t* srstbbtxn, uint8_t* srstbblln, uint8_t* srstbbregn, uint8_t* srstcomn, uint8_t* srstwdtn, uint8_t* srstbbn, uint8_t* wdtreseten, uint8_t* m0lockupreseten, uint8_t* m0softreset)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *srsttimerx1n = (localVal & ((uint32_t)0x02000000)) >> 25;
    *srsttimern205n = (localVal & ((uint32_t)0x01000000)) >> 24;
    *rstusbn = (localVal & ((uint32_t)0x00020000)) >> 17;
    *hsrstusbn = (localVal & ((uint32_t)0x00010000)) >> 16;
    *srstbbmixn = (localVal & ((uint32_t)0x00002000)) >> 13;
    *srstbbrxn = (localVal & ((uint32_t)0x00001000)) >> 12;
    *srstbbtxn = (localVal & ((uint32_t)0x00000800)) >> 11;
    *srstbblln = (localVal & ((uint32_t)0x00000400)) >> 10;
    *srstbbregn = (localVal & ((uint32_t)0x00000200)) >> 9;
    *srstcomn = (localVal & ((uint32_t)0x00000040)) >> 6;
    *srstwdtn = (localVal & ((uint32_t)0x00000020)) >> 5;
    *srstbbn = (localVal & ((uint32_t)0x00000008)) >> 3;
    *wdtreseten = (localVal & ((uint32_t)0x00000004)) >> 2;
    *m0lockupreseten = (localVal & ((uint32_t)0x00000002)) >> 1;
    *m0softreset = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_sw_reset2_srst_timerx1_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x02000000)) >> 25);
}

__INLINE static void pcr_sw_reset2_srst_timerx1_n_setf(uint8_t srsttimerx1n)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x02000000)) | ((uint32_t)srsttimerx1n << 25));
}

__INLINE static uint8_t pcr_sw_reset2_srst_timer_n205_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void pcr_sw_reset2_srst_timer_n205_n_setf(uint8_t srsttimern205n)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)srsttimern205n << 24));
}

__INLINE static uint8_t pcr_sw_reset2_rst_usb_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcr_sw_reset2_rst_usb_n_setf(uint8_t rstusbn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)rstusbn << 17));
}

__INLINE static uint8_t pcr_sw_reset2_hsrst_usb_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcr_sw_reset2_hsrst_usb_n_setf(uint8_t hsrstusbn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)hsrstusbn << 16));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bbmix_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void pcr_sw_reset2_srst_bbmix_n_setf(uint8_t srstbbmixn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)srstbbmixn << 13));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bbrx_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void pcr_sw_reset2_srst_bbrx_n_setf(uint8_t srstbbrxn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)srstbbrxn << 12));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bbtx_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void pcr_sw_reset2_srst_bbtx_n_setf(uint8_t srstbbtxn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)srstbbtxn << 11));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bbll_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void pcr_sw_reset2_srst_bbll_n_setf(uint8_t srstbblln)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)srstbblln << 10));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bbreg_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void pcr_sw_reset2_srst_bbreg_n_setf(uint8_t srstbbregn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)srstbbregn << 9));
}

__INLINE static uint8_t pcr_sw_reset2_srst_com_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void pcr_sw_reset2_srst_com_n_setf(uint8_t srstcomn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)srstcomn << 6));
}

__INLINE static uint8_t pcr_sw_reset2_srst_wdt_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void pcr_sw_reset2_srst_wdt_n_setf(uint8_t srstwdtn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)srstwdtn << 5));
}

__INLINE static uint8_t pcr_sw_reset2_srst_bb_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcr_sw_reset2_srst_bb_n_setf(uint8_t srstbbn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)srstbbn << 3));
}

__INLINE static uint8_t pcr_sw_reset2_wdt_reset_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void pcr_sw_reset2_wdt_reset_en_setf(uint8_t wdtreseten)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)wdtreseten << 2));
}

__INLINE static uint8_t pcr_sw_reset2_m0_lockup_reset_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void pcr_sw_reset2_m0_lockup_reset_en_setf(uint8_t m0lockupreseten)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)m0lockupreseten << 1));
}

__INLINE static uint8_t pcr_sw_reset2_m0_soft_reset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcr_sw_reset2_m0_soft_reset_setf(uint8_t m0softreset)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_RESET2_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET2_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)m0softreset << 0));
}

 /**
 * @brief SW_RESET3 register definition
 */
#define FEMTO_REG_PCR_SW_RESET3_OFFSET 0x00000010


__INLINE static uint32_t pcr_sw_reset3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET3_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

// field definitions
#define PCR_SW_RESET3_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define PCR_SW_RESET3_RESERVED_LSB                          0
#define PCR_SW_RESET3_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define PCR_SW_RESET3_RESERVED_RST                          0x0

__INLINE static void pcr_sw_reset3_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_RESET3_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SW_CLK1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     25         clkg_timerx1   1
 *     24      clkg_timer_n205   1
 *     23        clkg_dbg_n205   0
 *     17         hclkg_usb_48   1
 *     16            hclkg_usb   1
 *     10           clkg_timx1   1
 *     09           clkg_bbreg   1
 *     06             clkg_com   1
 *     05             clkg_wdt   1
 *     03              clkg_bb   1
 *     00             clkg_cpu   1
 * </pre>
 */
#define FEMTO_REG_PCR_SW_CLK1_OFFSET 0x00000014


__INLINE static uint32_t pcr_sw_clk1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_sw_clk1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_SW_CLK1_CLKG_TIMERX1_BIT                      ((uint32_t)0x02000000)
#define PCR_SW_CLK1_CLKG_TIMERX1_POS                      25
#define PCR_SW_CLK1_CLKG_TIMER_N205_BIT                   ((uint32_t)0x01000000)
#define PCR_SW_CLK1_CLKG_TIMER_N205_POS                   24
#define PCR_SW_CLK1_CLKG_DBG_N205_BIT                     ((uint32_t)0x00800000)
#define PCR_SW_CLK1_CLKG_DBG_N205_POS                     23
#define PCR_SW_CLK1_HCLKG_USB_48_BIT                      ((uint32_t)0x00020000)
#define PCR_SW_CLK1_HCLKG_USB_48_POS                      17
#define PCR_SW_CLK1_HCLKG_USB_BIT                         ((uint32_t)0x00010000)
#define PCR_SW_CLK1_HCLKG_USB_POS                         16
#define PCR_SW_CLK1_CLKG_TIMX1_BIT                        ((uint32_t)0x00000400)
#define PCR_SW_CLK1_CLKG_TIMX1_POS                        10
#define PCR_SW_CLK1_CLKG_BBREG_BIT                        ((uint32_t)0x00000200)
#define PCR_SW_CLK1_CLKG_BBREG_POS                        9
#define PCR_SW_CLK1_CLKG_COM_BIT                          ((uint32_t)0x00000040)
#define PCR_SW_CLK1_CLKG_COM_POS                          6
#define PCR_SW_CLK1_CLKG_WDT_BIT                          ((uint32_t)0x00000020)
#define PCR_SW_CLK1_CLKG_WDT_POS                          5
#define PCR_SW_CLK1_CLKG_BB_BIT                           ((uint32_t)0x00000008)
#define PCR_SW_CLK1_CLKG_BB_POS                           3
#define PCR_SW_CLK1_CLKG_CPU_BIT                          ((uint32_t)0x00000001)
#define PCR_SW_CLK1_CLKG_CPU_POS                          0

#define PCR_SW_CLK1_CLKG_TIMERX1_RST                      0x1
#define PCR_SW_CLK1_CLKG_TIMER_N205_RST                   0x1
#define PCR_SW_CLK1_CLKG_DBG_N205_RST                     0x0
#define PCR_SW_CLK1_HCLKG_USB_48_RST                      0x1
#define PCR_SW_CLK1_HCLKG_USB_RST                         0x1
#define PCR_SW_CLK1_CLKG_TIMX1_RST                        0x1
#define PCR_SW_CLK1_CLKG_BBREG_RST                        0x1
#define PCR_SW_CLK1_CLKG_COM_RST                          0x1
#define PCR_SW_CLK1_CLKG_WDT_RST                          0x1
#define PCR_SW_CLK1_CLKG_BB_RST                           0x1
#define PCR_SW_CLK1_CLKG_CPU_RST                          0x1

__INLINE static void pcr_sw_clk1_pack(uint8_t clkgtimerx1, uint8_t clkgtimern205, uint8_t clkgdbgn205, uint8_t hclkgusb48, uint8_t hclkgusb, uint8_t clkgtimx1, uint8_t clkgbbreg, uint8_t clkgcom, uint8_t clkgwdt, uint8_t clkgbb)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)clkgtimerx1 << 25) | ((uint32_t)clkgtimern205 << 24) | ((uint32_t)clkgdbgn205 << 23) | ((uint32_t)hclkgusb48 << 17) | ((uint32_t)hclkgusb << 16) | ((uint32_t)clkgtimx1 << 10) | ((uint32_t)clkgbbreg << 9) | ((uint32_t)clkgcom << 6) | ((uint32_t)clkgwdt << 5) | ((uint32_t)clkgbb << 3));
}

__INLINE static void pcr_sw_clk1_unpack(uint8_t* clkgtimerx1, uint8_t* clkgtimern205, uint8_t* clkgdbgn205, uint8_t* hclkgusb48, uint8_t* hclkgusb, uint8_t* clkgtimx1, uint8_t* clkgbbreg, uint8_t* clkgcom, uint8_t* clkgwdt, uint8_t* clkgbb, uint8_t* clkgcpu)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *clkgtimerx1 = (localVal & ((uint32_t)0x02000000)) >> 25;
    *clkgtimern205 = (localVal & ((uint32_t)0x01000000)) >> 24;
    *clkgdbgn205 = (localVal & ((uint32_t)0x00800000)) >> 23;
    *hclkgusb48 = (localVal & ((uint32_t)0x00020000)) >> 17;
    *hclkgusb = (localVal & ((uint32_t)0x00010000)) >> 16;
    *clkgtimx1 = (localVal & ((uint32_t)0x00000400)) >> 10;
    *clkgbbreg = (localVal & ((uint32_t)0x00000200)) >> 9;
    *clkgcom = (localVal & ((uint32_t)0x00000040)) >> 6;
    *clkgwdt = (localVal & ((uint32_t)0x00000020)) >> 5;
    *clkgbb = (localVal & ((uint32_t)0x00000008)) >> 3;
    *clkgcpu = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_sw_clk1_clkg_timerx1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x02000000)) >> 25);
}

__INLINE static void pcr_sw_clk1_clkg_timerx1_setf(uint8_t clkgtimerx1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x02000000)) | ((uint32_t)clkgtimerx1 << 25));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_timer_n205_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void pcr_sw_clk1_clkg_timer_n205_setf(uint8_t clkgtimern205)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)clkgtimern205 << 24));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_dbg_n205_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void pcr_sw_clk1_clkg_dbg_n205_setf(uint8_t clkgdbgn205)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)clkgdbgn205 << 23));
}

__INLINE static uint8_t pcr_sw_clk1_hclkg_usb_48_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void pcr_sw_clk1_hclkg_usb_48_setf(uint8_t hclkgusb48)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)hclkgusb48 << 17));
}

__INLINE static uint8_t pcr_sw_clk1_hclkg_usb_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void pcr_sw_clk1_hclkg_usb_setf(uint8_t hclkgusb)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)hclkgusb << 16));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_timx1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void pcr_sw_clk1_clkg_timx1_setf(uint8_t clkgtimx1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)clkgtimx1 << 10));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_bbreg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void pcr_sw_clk1_clkg_bbreg_setf(uint8_t clkgbbreg)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)clkgbbreg << 9));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_com_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void pcr_sw_clk1_clkg_com_setf(uint8_t clkgcom)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)clkgcom << 6));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_wdt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void pcr_sw_clk1_clkg_wdt_setf(uint8_t clkgwdt)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)clkgwdt << 5));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_bb_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void pcr_sw_clk1_clkg_bb_setf(uint8_t clkgbb)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_SW_CLK1_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)clkgbb << 3));
}

__INLINE static uint8_t pcr_sw_clk1_clkg_cpu_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_SW_CLK1_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief APB_CLK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:04          pclk_div_m1   0b0
 *  03:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCR_APB_CLK_OFFSET 0x00000018


__INLINE static uint32_t pcr_apb_clk_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_apb_clk_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_APB_CLK_PCLK_DIV_M1_MASK                      ((uint32_t)0x000000F0)
#define PCR_APB_CLK_PCLK_DIV_M1_LSB                       4
#define PCR_APB_CLK_PCLK_DIV_M1_WIDTH                     ((uint32_t)0x00000004)
#define PCR_APB_CLK_RESERVED_MASK                         ((uint32_t)0x0000000F)
#define PCR_APB_CLK_RESERVED_LSB                          0
#define PCR_APB_CLK_RESERVED_WIDTH                        ((uint32_t)0x00000004)

#define PCR_APB_CLK_PCLK_DIV_M1_RST                       0x0
#define PCR_APB_CLK_RESERVED_RST                          0x0

__INLINE static void pcr_apb_clk_pack(uint8_t pclkdivm1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)pclkdivm1 << 4));
}

__INLINE static void pcr_apb_clk_unpack(uint8_t* pclkdivm1, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *pclkdivm1 = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *reserved = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcr_apb_clk_pclk_div_m1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void pcr_apb_clk_pclk_div_m1_setf(uint8_t pclkdivm1)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (uint32_t)pclkdivm1 << 4);
}

 /**
 * @brief APB_CLK_UPDATE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          pclk_update   0
 * </pre>
 */
#define FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET 0x0000001C


__INLINE static uint32_t pcr_apb_clk_update_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_apb_clk_update_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_APB_CLK_UPDATE_PCLK_UPDATE_BIT                       ((uint32_t)0x00000001)
#define PCR_APB_CLK_UPDATE_PCLK_UPDATE_POS                       0

#define PCR_APB_CLK_UPDATE_PCLK_UPDATE_RST                       0x0

__INLINE static void pcr_apb_clk_update_pack(uint8_t pclkupdate)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)pclkupdate << 0));
}

__INLINE static void pcr_apb_clk_update_unpack(uint8_t* pclkupdate)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *pclkupdate = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t pcr_apb_clk_update_pclk_update_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void pcr_apb_clk_update_pclk_update_setf(uint8_t pclkupdate)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_APB_CLK_UPDATE_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (uint32_t)pclkupdate << 0);
}

 /**
 * @brief S_WR_REG10 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15      spif_refclk_sel   0
 *     12     otp_core_pclk_en   0
 *     08          hsrst_otp_n   1
 *     04      bypass_ahb_down   1
 *  03:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_PCR_S_WR_REG10_OFFSET 0x00000028


__INLINE static uint32_t pcr_s_wr_reg10_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
}

__INLINE static void pcr_s_wr_reg10_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, value);
}

// field definitions
#define PCR_S_WR_REG10_SPIF_REFCLK_SEL_BIT                   ((uint32_t)0x00008000)
#define PCR_S_WR_REG10_SPIF_REFCLK_SEL_POS                   15
#define PCR_S_WR_REG10_OTP_CORE_PCLK_EN_BIT                  ((uint32_t)0x00001000)
#define PCR_S_WR_REG10_OTP_CORE_PCLK_EN_POS                  12
#define PCR_S_WR_REG10_HSRST_OTP_N_BIT                       ((uint32_t)0x00000100)
#define PCR_S_WR_REG10_HSRST_OTP_N_POS                       8
#define PCR_S_WR_REG10_BYPASS_AHB_DOWN_BIT                   ((uint32_t)0x00000010)
#define PCR_S_WR_REG10_BYPASS_AHB_DOWN_POS                   4
#define PCR_S_WR_REG10_RESERVED_MASK                         ((uint32_t)0x0000000F)
#define PCR_S_WR_REG10_RESERVED_LSB                          0
#define PCR_S_WR_REG10_RESERVED_WIDTH                        ((uint32_t)0x00000004)

#define PCR_S_WR_REG10_SPIF_REFCLK_SEL_RST                   0x0
#define PCR_S_WR_REG10_OTP_CORE_PCLK_EN_RST                  0x0
#define PCR_S_WR_REG10_HSRST_OTP_N_RST                       0x1
#define PCR_S_WR_REG10_BYPASS_AHB_DOWN_RST                   0x1
#define PCR_S_WR_REG10_RESERVED_RST                          0x0

__INLINE static void pcr_s_wr_reg10_pack(uint8_t spifrefclksel, uint8_t otpcorepclken, uint8_t hsrstotpn, uint8_t bypassahbdown)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR,  ((uint32_t)spifrefclksel << 15) | ((uint32_t)otpcorepclken << 12) | ((uint32_t)hsrstotpn << 8) | ((uint32_t)bypassahbdown << 4));
}

__INLINE static void pcr_s_wr_reg10_unpack(uint8_t* spifrefclksel, uint8_t* otpcorepclken, uint8_t* hsrstotpn, uint8_t* bypassahbdown, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);

    *spifrefclksel = (localVal & ((uint32_t)0x00008000)) >> 15;
    *otpcorepclken = (localVal & ((uint32_t)0x00001000)) >> 12;
    *hsrstotpn = (localVal & ((uint32_t)0x00000100)) >> 8;
    *bypassahbdown = (localVal & ((uint32_t)0x00000010)) >> 4;
    *reserved = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t pcr_s_wr_reg10_spif_refclk_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void pcr_s_wr_reg10_spif_refclk_sel_setf(uint8_t spifrefclksel)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)spifrefclksel << 15));
}

__INLINE static uint8_t pcr_s_wr_reg10_otp_core_pclk_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void pcr_s_wr_reg10_otp_core_pclk_en_setf(uint8_t otpcorepclken)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)otpcorepclken << 12));
}

__INLINE static uint8_t pcr_s_wr_reg10_hsrst_otp_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void pcr_s_wr_reg10_hsrst_otp_n_setf(uint8_t hsrstotpn)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)hsrstotpn << 8));
}

__INLINE static uint8_t pcr_s_wr_reg10_bypass_ahb_down_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void pcr_s_wr_reg10_bypass_ahb_down_setf(uint8_t bypassahbdown)
{
    _FEMTO_REG_WR(FEMTO_REG_PCR_S_WR_REG10_OFFSET+ FEMTO_REG_PCR_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_PCR_S_WR_REG10_OFFSET + FEMTO_REG_PCR_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)bypassahbdown << 4));
}


#endif // _FEMTO_REG_PCR_H_

