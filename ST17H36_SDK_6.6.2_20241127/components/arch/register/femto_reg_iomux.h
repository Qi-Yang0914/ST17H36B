#ifndef _FEMTO_REG_IOMUX_H_
#define _FEMTO_REG_IOMUX_H_

#define FEMTO_REG_IOMUX_COUNT 15

#define FEMTO_REG_IOMUX_BASE_ADDR 0x40003800

#define FEMTO_REG_IOMUX_SIZE 0x00000044


 /**
 * @brief R_ANALOG_IO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  20:00       r_analog_io_en   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET 0x00000000


__INLINE static uint32_t iomux_r_analog_io_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_r_analog_io_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_R_ANALOG_IO_R_ANALOG_IO_EN_MASK                   ((uint32_t)0x001FFFFF)
#define IOMUX_R_ANALOG_IO_R_ANALOG_IO_EN_LSB                    0
#define IOMUX_R_ANALOG_IO_R_ANALOG_IO_EN_WIDTH                  ((uint32_t)0x00000015)

#define IOMUX_R_ANALOG_IO_R_ANALOG_IO_EN_RST                    0x0

__INLINE static void iomux_r_analog_io_pack(uint32_t ranalogioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)ranalogioen << 0));
}

__INLINE static void iomux_r_analog_io_unpack(uint8_t* ranalogioen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *ranalogioen = (localVal & ((uint32_t)0x001FFFFF)) >> 0;
}

__INLINE static uint32_t iomux_r_analog_io_r_analog_io_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001FFFFF)) >> 0);
}

__INLINE static void iomux_r_analog_io_r_analog_io_en_setf(uint32_t ranalogioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_R_ANALOG_IO_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)ranalogioen << 0);
}

 /**
 * @brief SPI_DEBUG register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     18   r_demod_out_vld_en   0
 *     17       r_demod_out_en   0
 *     16     r_bb_adc_clko_en   0
 *  15:08         r_bb_adc_qen   0b0
 *  07:00         r_bb_adc_ien   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET 0x00000004


__INLINE static uint32_t iomux_spi_debug_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_spi_debug_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_VLD_EN_BIT                ((uint32_t)0x00040000)
#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_VLD_EN_POS                18
#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_EN_BIT                    ((uint32_t)0x00020000)
#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_EN_POS                    17
#define IOMUX_SPI_DEBUG_R_BB_ADC_CLKO_EN_BIT                  ((uint32_t)0x00010000)
#define IOMUX_SPI_DEBUG_R_BB_ADC_CLKO_EN_POS                  16
#define IOMUX_SPI_DEBUG_R_BB_ADC_QEN_MASK                     ((uint32_t)0x0000FF00)
#define IOMUX_SPI_DEBUG_R_BB_ADC_QEN_LSB                      8
#define IOMUX_SPI_DEBUG_R_BB_ADC_QEN_WIDTH                    ((uint32_t)0x00000008)
#define IOMUX_SPI_DEBUG_R_BB_ADC_IEN_MASK                     ((uint32_t)0x000000FF)
#define IOMUX_SPI_DEBUG_R_BB_ADC_IEN_LSB                      0
#define IOMUX_SPI_DEBUG_R_BB_ADC_IEN_WIDTH                    ((uint32_t)0x00000008)

#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_VLD_EN_RST                0x0
#define IOMUX_SPI_DEBUG_R_DEMOD_OUT_EN_RST                    0x0
#define IOMUX_SPI_DEBUG_R_BB_ADC_CLKO_EN_RST                  0x0
#define IOMUX_SPI_DEBUG_R_BB_ADC_QEN_RST                      0x0
#define IOMUX_SPI_DEBUG_R_BB_ADC_IEN_RST                      0x0

__INLINE static void iomux_spi_debug_pack(uint8_t rdemodoutvlden, uint8_t rdemodouten, uint8_t rbbadcclkoen, uint8_t rbbadcqen, uint8_t rbbadcien)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rdemodoutvlden << 18) | ((uint32_t)rdemodouten << 17) | ((uint32_t)rbbadcclkoen << 16) | ((uint32_t)rbbadcqen << 8) | ((uint32_t)rbbadcien << 0));
}

__INLINE static void iomux_spi_debug_unpack(uint8_t* rdemodoutvlden, uint8_t* rdemodouten, uint8_t* rbbadcclkoen, uint8_t* rbbadcqen, uint8_t* rbbadcien)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rdemodoutvlden = (localVal & ((uint32_t)0x00040000)) >> 18;
    *rdemodouten = (localVal & ((uint32_t)0x00020000)) >> 17;
    *rbbadcclkoen = (localVal & ((uint32_t)0x00010000)) >> 16;
    *rbbadcqen = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *rbbadcien = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t iomux_spi_debug_r_demod_out_vld_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void iomux_spi_debug_r_demod_out_vld_en_setf(uint8_t rdemodoutvlden)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)rdemodoutvlden << 18));
}

__INLINE static uint8_t iomux_spi_debug_r_demod_out_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void iomux_spi_debug_r_demod_out_en_setf(uint8_t rdemodouten)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)rdemodouten << 17));
}

__INLINE static uint8_t iomux_spi_debug_r_bb_adc_clko_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void iomux_spi_debug_r_bb_adc_clko_en_setf(uint8_t rbbadcclkoen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)rbbadcclkoen << 16));
}

__INLINE static uint8_t iomux_spi_debug_r_bb_adc_qen_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void iomux_spi_debug_r_bb_adc_qen_setf(uint8_t rbbadcqen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)rbbadcqen << 8));
}

__INLINE static uint8_t iomux_spi_debug_r_bb_adc_ien_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void iomux_spi_debug_r_bb_adc_ien_setf(uint8_t rbbadcien)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_SPI_DEBUG_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)rbbadcien << 0));
}

 /**
 * @brief DEBUG_MUX_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00       r_debug_mux_en   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET 0x00000008


__INLINE static uint32_t iomux_debug_mux_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_debug_mux_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_DEBUG_MUX_EN_R_DEBUG_MUX_EN_MASK                   ((uint32_t)0x000000FF)
#define IOMUX_DEBUG_MUX_EN_R_DEBUG_MUX_EN_LSB                    0
#define IOMUX_DEBUG_MUX_EN_R_DEBUG_MUX_EN_WIDTH                  ((uint32_t)0x00000008)

#define IOMUX_DEBUG_MUX_EN_R_DEBUG_MUX_EN_RST                    0x0

__INLINE static void iomux_debug_mux_en_pack(uint8_t rdebugmuxen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rdebugmuxen << 0));
}

__INLINE static void iomux_debug_mux_en_unpack(uint8_t* rdebugmuxen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rdebugmuxen = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t iomux_debug_mux_en_r_debug_mux_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void iomux_debug_mux_en_r_debug_mux_en_setf(uint8_t rdebugmuxen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_DEBUG_MUX_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)rdebugmuxen << 0);
}

 /**
 * @brief FULL_MUX0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  20:00         r_func_io_en   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FULL_MUX0_OFFSET 0x0000000C


__INLINE static uint32_t iomux_full_mux0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_full_mux0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FULL_MUX0_R_FUNC_IO_EN_MASK                     ((uint32_t)0x001FFFFF)
#define IOMUX_FULL_MUX0_R_FUNC_IO_EN_LSB                      0
#define IOMUX_FULL_MUX0_R_FUNC_IO_EN_WIDTH                    ((uint32_t)0x00000015)

#define IOMUX_FULL_MUX0_R_FUNC_IO_EN_RST                      0x0

__INLINE static void iomux_full_mux0_pack(uint32_t rfuncioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncioen << 0));
}

__INLINE static void iomux_full_mux0_unpack(uint8_t* rfuncioen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncioen = (localVal & ((uint32_t)0x001FFFFF)) >> 0;
}

__INLINE static uint32_t iomux_full_mux0_r_func_io_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001FFFFF)) >> 0);
}

__INLINE static void iomux_full_mux0_r_func_io_en_setf(uint32_t rfuncioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FULL_MUX0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)rfuncioen << 0);
}

 /**
 * @brief SW_GPIO_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00         r_sw_gpio_en   0
 * </pre>
 */
#define FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET 0x00000010


__INLINE static uint32_t iomux_sw_gpio_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_sw_gpio_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_SW_GPIO_EN_R_SW_GPIO_EN_BIT                      ((uint32_t)0x00000001)
#define IOMUX_SW_GPIO_EN_R_SW_GPIO_EN_POS                      0

#define IOMUX_SW_GPIO_EN_R_SW_GPIO_EN_RST                      0x0

__INLINE static void iomux_sw_gpio_en_pack(uint8_t rswgpioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rswgpioen << 0));
}

__INLINE static void iomux_sw_gpio_en_unpack(uint8_t* rswgpioen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rswgpioen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t iomux_sw_gpio_en_r_sw_gpio_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void iomux_sw_gpio_en_r_sw_gpio_en_setf(uint8_t rswgpioen)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_SW_GPIO_EN_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)rswgpioen << 0);
}

 /**
 * @brief FUNC_IO0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24      r_func_io03_sel   0b0
 *  21:16      r_func_io02_sel   0b0
 *  13:08      r_func_io01_sel   0b0
 *  05:00      r_func_io00_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO0_OFFSET 0x00000018


__INLINE static uint32_t iomux_func_io0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO0_R_FUNC_IO03_SEL_MASK                  ((uint32_t)0x3F000000)
#define IOMUX_FUNC_IO0_R_FUNC_IO03_SEL_LSB                   24
#define IOMUX_FUNC_IO0_R_FUNC_IO03_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO0_R_FUNC_IO02_SEL_MASK                  ((uint32_t)0x003F0000)
#define IOMUX_FUNC_IO0_R_FUNC_IO02_SEL_LSB                   16
#define IOMUX_FUNC_IO0_R_FUNC_IO02_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO0_R_FUNC_IO01_SEL_MASK                  ((uint32_t)0x00003F00)
#define IOMUX_FUNC_IO0_R_FUNC_IO01_SEL_LSB                   8
#define IOMUX_FUNC_IO0_R_FUNC_IO01_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO0_R_FUNC_IO00_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO0_R_FUNC_IO00_SEL_LSB                   0
#define IOMUX_FUNC_IO0_R_FUNC_IO00_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO0_R_FUNC_IO03_SEL_RST                   0x0
#define IOMUX_FUNC_IO0_R_FUNC_IO02_SEL_RST                   0x0
#define IOMUX_FUNC_IO0_R_FUNC_IO01_SEL_RST                   0x0
#define IOMUX_FUNC_IO0_R_FUNC_IO00_SEL_RST                   0x0

__INLINE static void iomux_func_io0_pack(uint8_t rfuncio03sel, uint8_t rfuncio02sel, uint8_t rfuncio01sel, uint8_t rfuncio00sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio03sel << 24) | ((uint32_t)rfuncio02sel << 16) | ((uint32_t)rfuncio01sel << 8) | ((uint32_t)rfuncio00sel << 0));
}

__INLINE static void iomux_func_io0_unpack(uint8_t* rfuncio03sel, uint8_t* rfuncio02sel, uint8_t* rfuncio01sel, uint8_t* rfuncio00sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio03sel = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *rfuncio02sel = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *rfuncio01sel = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *rfuncio00sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io0_r_func_io03_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void iomux_func_io0_r_func_io03_sel_setf(uint8_t rfuncio03sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)rfuncio03sel << 24));
}

__INLINE static uint8_t iomux_func_io0_r_func_io02_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void iomux_func_io0_r_func_io02_sel_setf(uint8_t rfuncio02sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)rfuncio02sel << 16));
}

__INLINE static uint8_t iomux_func_io0_r_func_io01_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void iomux_func_io0_r_func_io01_sel_setf(uint8_t rfuncio01sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)rfuncio01sel << 8));
}

__INLINE static uint8_t iomux_func_io0_r_func_io00_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io0_r_func_io00_sel_setf(uint8_t rfuncio00sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO0_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)rfuncio00sel << 0));
}

 /**
 * @brief FUNC_IO1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24      r_func_io07_sel   0b0
 *  21:16      r_func_io06_sel   0b0
 *  13:08      r_func_io05_sel   0b0
 *  05:00      r_func_io04_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO1_OFFSET 0x0000001C


__INLINE static uint32_t iomux_func_io1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO1_R_FUNC_IO07_SEL_MASK                  ((uint32_t)0x3F000000)
#define IOMUX_FUNC_IO1_R_FUNC_IO07_SEL_LSB                   24
#define IOMUX_FUNC_IO1_R_FUNC_IO07_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO1_R_FUNC_IO06_SEL_MASK                  ((uint32_t)0x003F0000)
#define IOMUX_FUNC_IO1_R_FUNC_IO06_SEL_LSB                   16
#define IOMUX_FUNC_IO1_R_FUNC_IO06_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO1_R_FUNC_IO05_SEL_MASK                  ((uint32_t)0x00003F00)
#define IOMUX_FUNC_IO1_R_FUNC_IO05_SEL_LSB                   8
#define IOMUX_FUNC_IO1_R_FUNC_IO05_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO1_R_FUNC_IO04_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO1_R_FUNC_IO04_SEL_LSB                   0
#define IOMUX_FUNC_IO1_R_FUNC_IO04_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO1_R_FUNC_IO07_SEL_RST                   0x0
#define IOMUX_FUNC_IO1_R_FUNC_IO06_SEL_RST                   0x0
#define IOMUX_FUNC_IO1_R_FUNC_IO05_SEL_RST                   0x0
#define IOMUX_FUNC_IO1_R_FUNC_IO04_SEL_RST                   0x0

__INLINE static void iomux_func_io1_pack(uint8_t rfuncio07sel, uint8_t rfuncio06sel, uint8_t rfuncio05sel, uint8_t rfuncio04sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio07sel << 24) | ((uint32_t)rfuncio06sel << 16) | ((uint32_t)rfuncio05sel << 8) | ((uint32_t)rfuncio04sel << 0));
}

__INLINE static void iomux_func_io1_unpack(uint8_t* rfuncio07sel, uint8_t* rfuncio06sel, uint8_t* rfuncio05sel, uint8_t* rfuncio04sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio07sel = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *rfuncio06sel = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *rfuncio05sel = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *rfuncio04sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io1_r_func_io07_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void iomux_func_io1_r_func_io07_sel_setf(uint8_t rfuncio07sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)rfuncio07sel << 24));
}

__INLINE static uint8_t iomux_func_io1_r_func_io06_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void iomux_func_io1_r_func_io06_sel_setf(uint8_t rfuncio06sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)rfuncio06sel << 16));
}

__INLINE static uint8_t iomux_func_io1_r_func_io05_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void iomux_func_io1_r_func_io05_sel_setf(uint8_t rfuncio05sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)rfuncio05sel << 8));
}

__INLINE static uint8_t iomux_func_io1_r_func_io04_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io1_r_func_io04_sel_setf(uint8_t rfuncio04sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO1_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)rfuncio04sel << 0));
}

 /**
 * @brief FUNC_IO2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24      r_func_io11_sel   0b0
 *  21:16      r_func_io10_sel   0b0
 *  13:08      r_func_io09_sel   0b0
 *  05:00      r_func_io08_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO2_OFFSET 0x00000020


__INLINE static uint32_t iomux_func_io2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO2_R_FUNC_IO11_SEL_MASK                  ((uint32_t)0x3F000000)
#define IOMUX_FUNC_IO2_R_FUNC_IO11_SEL_LSB                   24
#define IOMUX_FUNC_IO2_R_FUNC_IO11_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO2_R_FUNC_IO10_SEL_MASK                  ((uint32_t)0x003F0000)
#define IOMUX_FUNC_IO2_R_FUNC_IO10_SEL_LSB                   16
#define IOMUX_FUNC_IO2_R_FUNC_IO10_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO2_R_FUNC_IO09_SEL_MASK                  ((uint32_t)0x00003F00)
#define IOMUX_FUNC_IO2_R_FUNC_IO09_SEL_LSB                   8
#define IOMUX_FUNC_IO2_R_FUNC_IO09_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO2_R_FUNC_IO08_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO2_R_FUNC_IO08_SEL_LSB                   0
#define IOMUX_FUNC_IO2_R_FUNC_IO08_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO2_R_FUNC_IO11_SEL_RST                   0x0
#define IOMUX_FUNC_IO2_R_FUNC_IO10_SEL_RST                   0x0
#define IOMUX_FUNC_IO2_R_FUNC_IO09_SEL_RST                   0x0
#define IOMUX_FUNC_IO2_R_FUNC_IO08_SEL_RST                   0x0

__INLINE static void iomux_func_io2_pack(uint8_t rfuncio11sel, uint8_t rfuncio10sel, uint8_t rfuncio09sel, uint8_t rfuncio08sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio11sel << 24) | ((uint32_t)rfuncio10sel << 16) | ((uint32_t)rfuncio09sel << 8) | ((uint32_t)rfuncio08sel << 0));
}

__INLINE static void iomux_func_io2_unpack(uint8_t* rfuncio11sel, uint8_t* rfuncio10sel, uint8_t* rfuncio09sel, uint8_t* rfuncio08sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio11sel = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *rfuncio10sel = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *rfuncio09sel = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *rfuncio08sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io2_r_func_io11_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void iomux_func_io2_r_func_io11_sel_setf(uint8_t rfuncio11sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)rfuncio11sel << 24));
}

__INLINE static uint8_t iomux_func_io2_r_func_io10_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void iomux_func_io2_r_func_io10_sel_setf(uint8_t rfuncio10sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)rfuncio10sel << 16));
}

__INLINE static uint8_t iomux_func_io2_r_func_io09_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void iomux_func_io2_r_func_io09_sel_setf(uint8_t rfuncio09sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)rfuncio09sel << 8));
}

__INLINE static uint8_t iomux_func_io2_r_func_io08_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io2_r_func_io08_sel_setf(uint8_t rfuncio08sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO2_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)rfuncio08sel << 0));
}

 /**
 * @brief FUNC_IO3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24      r_func_io15_sel   0b0
 *  21:16      r_func_io14_sel   0b0
 *  13:08      r_func_io13_sel   0b0
 *  05:00      r_func_io12_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO3_OFFSET 0x00000024


__INLINE static uint32_t iomux_func_io3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO3_R_FUNC_IO15_SEL_MASK                  ((uint32_t)0x3F000000)
#define IOMUX_FUNC_IO3_R_FUNC_IO15_SEL_LSB                   24
#define IOMUX_FUNC_IO3_R_FUNC_IO15_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO3_R_FUNC_IO14_SEL_MASK                  ((uint32_t)0x003F0000)
#define IOMUX_FUNC_IO3_R_FUNC_IO14_SEL_LSB                   16
#define IOMUX_FUNC_IO3_R_FUNC_IO14_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO3_R_FUNC_IO13_SEL_MASK                  ((uint32_t)0x00003F00)
#define IOMUX_FUNC_IO3_R_FUNC_IO13_SEL_LSB                   8
#define IOMUX_FUNC_IO3_R_FUNC_IO13_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO3_R_FUNC_IO12_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO3_R_FUNC_IO12_SEL_LSB                   0
#define IOMUX_FUNC_IO3_R_FUNC_IO12_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO3_R_FUNC_IO15_SEL_RST                   0x0
#define IOMUX_FUNC_IO3_R_FUNC_IO14_SEL_RST                   0x0
#define IOMUX_FUNC_IO3_R_FUNC_IO13_SEL_RST                   0x0
#define IOMUX_FUNC_IO3_R_FUNC_IO12_SEL_RST                   0x0

__INLINE static void iomux_func_io3_pack(uint8_t rfuncio15sel, uint8_t rfuncio14sel, uint8_t rfuncio13sel, uint8_t rfuncio12sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio15sel << 24) | ((uint32_t)rfuncio14sel << 16) | ((uint32_t)rfuncio13sel << 8) | ((uint32_t)rfuncio12sel << 0));
}

__INLINE static void iomux_func_io3_unpack(uint8_t* rfuncio15sel, uint8_t* rfuncio14sel, uint8_t* rfuncio13sel, uint8_t* rfuncio12sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio15sel = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *rfuncio14sel = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *rfuncio13sel = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *rfuncio12sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io3_r_func_io15_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void iomux_func_io3_r_func_io15_sel_setf(uint8_t rfuncio15sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)rfuncio15sel << 24));
}

__INLINE static uint8_t iomux_func_io3_r_func_io14_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void iomux_func_io3_r_func_io14_sel_setf(uint8_t rfuncio14sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)rfuncio14sel << 16));
}

__INLINE static uint8_t iomux_func_io3_r_func_io13_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void iomux_func_io3_r_func_io13_sel_setf(uint8_t rfuncio13sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)rfuncio13sel << 8));
}

__INLINE static uint8_t iomux_func_io3_r_func_io12_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io3_r_func_io12_sel_setf(uint8_t rfuncio12sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO3_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)rfuncio12sel << 0));
}

 /**
 * @brief FUNC_IO4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24      r_func_io19_sel   0b0
 *  21:16      r_func_io18_sel   0b0
 *  13:08      r_func_io17_sel   0b0
 *  05:00      r_func_io16_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO4_OFFSET 0x00000028


__INLINE static uint32_t iomux_func_io4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO4_R_FUNC_IO19_SEL_MASK                  ((uint32_t)0x3F000000)
#define IOMUX_FUNC_IO4_R_FUNC_IO19_SEL_LSB                   24
#define IOMUX_FUNC_IO4_R_FUNC_IO19_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO4_R_FUNC_IO18_SEL_MASK                  ((uint32_t)0x003F0000)
#define IOMUX_FUNC_IO4_R_FUNC_IO18_SEL_LSB                   16
#define IOMUX_FUNC_IO4_R_FUNC_IO18_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO4_R_FUNC_IO17_SEL_MASK                  ((uint32_t)0x00003F00)
#define IOMUX_FUNC_IO4_R_FUNC_IO17_SEL_LSB                   8
#define IOMUX_FUNC_IO4_R_FUNC_IO17_SEL_WIDTH                 ((uint32_t)0x00000006)
#define IOMUX_FUNC_IO4_R_FUNC_IO16_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO4_R_FUNC_IO16_SEL_LSB                   0
#define IOMUX_FUNC_IO4_R_FUNC_IO16_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO4_R_FUNC_IO19_SEL_RST                   0x0
#define IOMUX_FUNC_IO4_R_FUNC_IO18_SEL_RST                   0x0
#define IOMUX_FUNC_IO4_R_FUNC_IO17_SEL_RST                   0x0
#define IOMUX_FUNC_IO4_R_FUNC_IO16_SEL_RST                   0x0

__INLINE static void iomux_func_io4_pack(uint8_t rfuncio19sel, uint8_t rfuncio18sel, uint8_t rfuncio17sel, uint8_t rfuncio16sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio19sel << 24) | ((uint32_t)rfuncio18sel << 16) | ((uint32_t)rfuncio17sel << 8) | ((uint32_t)rfuncio16sel << 0));
}

__INLINE static void iomux_func_io4_unpack(uint8_t* rfuncio19sel, uint8_t* rfuncio18sel, uint8_t* rfuncio17sel, uint8_t* rfuncio16sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio19sel = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *rfuncio18sel = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *rfuncio17sel = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *rfuncio16sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io4_r_func_io19_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void iomux_func_io4_r_func_io19_sel_setf(uint8_t rfuncio19sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)rfuncio19sel << 24));
}

__INLINE static uint8_t iomux_func_io4_r_func_io18_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void iomux_func_io4_r_func_io18_sel_setf(uint8_t rfuncio18sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)rfuncio18sel << 16));
}

__INLINE static uint8_t iomux_func_io4_r_func_io17_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void iomux_func_io4_r_func_io17_sel_setf(uint8_t rfuncio17sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)rfuncio17sel << 8));
}

__INLINE static uint8_t iomux_func_io4_r_func_io16_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io4_r_func_io16_sel_setf(uint8_t rfuncio16sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO4_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)rfuncio16sel << 0));
}

 /**
 * @brief FUNC_IO5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  05:00      r_func_io20_sel   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_FUNC_IO5_OFFSET 0x0000002C


__INLINE static uint32_t iomux_func_io5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO5_R_FUNC_IO20_SEL_MASK                  ((uint32_t)0x0000003F)
#define IOMUX_FUNC_IO5_R_FUNC_IO20_SEL_LSB                   0
#define IOMUX_FUNC_IO5_R_FUNC_IO20_SEL_WIDTH                 ((uint32_t)0x00000006)

#define IOMUX_FUNC_IO5_R_FUNC_IO20_SEL_RST                   0x0

__INLINE static void iomux_func_io5_pack(uint8_t rfuncio20sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)rfuncio20sel << 0));
}

__INLINE static void iomux_func_io5_unpack(uint8_t* rfuncio20sel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *rfuncio20sel = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t iomux_func_io5_r_func_io20_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void iomux_func_io5_r_func_io20_sel_setf(uint8_t rfuncio20sel)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO5_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)rfuncio20sel << 0);
}

 /**
 * @brief FUNC_IO6 register definition
 */
#define FEMTO_REG_IOMUX_FUNC_IO6_OFFSET 0x00000030


__INLINE static uint32_t iomux_func_io6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO6_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_func_io6_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO6_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_FUNC_IO6_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define IOMUX_FUNC_IO6_RESERVED_LSB                          0
#define IOMUX_FUNC_IO6_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define IOMUX_FUNC_IO6_RESERVED_RST                          0x0

__INLINE static void iomux_func_io6_pack(uint32_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_FUNC_IO6_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)reserved << 0));
}

__INLINE static void iomux_func_io6_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_FUNC_IO6_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief PAD_PE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  20:00              r_io_pe   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_PAD_PE_OFFSET 0x00000034


__INLINE static uint32_t iomux_pad_pe_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PE_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_pad_pe_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PE_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_PAD_PE_R_IO_PE_MASK                          ((uint32_t)0x001FFFFF)
#define IOMUX_PAD_PE_R_IO_PE_LSB                           0
#define IOMUX_PAD_PE_R_IO_PE_WIDTH                         ((uint32_t)0x00000015)

#define IOMUX_PAD_PE_R_IO_PE_RST                           0x0

__INLINE static void iomux_pad_pe_pack(uint32_t riope)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PE_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)riope << 0));
}

__INLINE static void iomux_pad_pe_unpack(uint8_t* riope)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PE_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *riope = (localVal & ((uint32_t)0x001FFFFF)) >> 0;
}

__INLINE static uint32_t iomux_pad_pe_r_io_pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PE_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001FFFFF)) >> 0);
}

__INLINE static void iomux_pad_pe_r_io_pe_setf(uint32_t riope)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PE_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)riope << 0);
}

 /**
 * @brief PAD_PS register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  20:00              r_io_ds   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_PAD_PS_OFFSET 0x0000003C


__INLINE static uint32_t iomux_pad_ps_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PS_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_pad_ps_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PS_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_PAD_PS_R_IO_DS_MASK                          ((uint32_t)0x001FFFFF)
#define IOMUX_PAD_PS_R_IO_DS_LSB                           0
#define IOMUX_PAD_PS_R_IO_DS_WIDTH                         ((uint32_t)0x00000015)

#define IOMUX_PAD_PS_R_IO_DS_RST                           0x0

__INLINE static void iomux_pad_ps_pack(uint32_t riods)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PS_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)riods << 0));
}

__INLINE static void iomux_pad_ps_unpack(uint8_t* riods)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PS_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *riods = (localVal & ((uint32_t)0x001FFFFF)) >> 0;
}

__INLINE static uint32_t iomux_pad_ps_r_io_ds_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_PAD_PS_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001FFFFF)) >> 0);
}

__INLINE static void iomux_pad_ps_r_io_ds_setf(uint32_t riods)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_PAD_PS_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)riods << 0);
}

 /**
 * @brief CLKOUT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00            clkout_en   0b0
 * </pre>
 */
#define FEMTO_REG_IOMUX_CLKOUT_OFFSET 0x00000044


__INLINE static uint32_t iomux_clkout_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_IOMUX_CLKOUT_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
}

__INLINE static void iomux_clkout_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_CLKOUT_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, value);
}

// field definitions
#define IOMUX_CLKOUT_CLKOUT_EN_MASK                        ((uint32_t)0x0000000F)
#define IOMUX_CLKOUT_CLKOUT_EN_LSB                         0
#define IOMUX_CLKOUT_CLKOUT_EN_WIDTH                       ((uint32_t)0x00000004)

#define IOMUX_CLKOUT_CLKOUT_EN_RST                         0x0

__INLINE static void iomux_clkout_pack(uint8_t clkouten)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_CLKOUT_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR,  ((uint32_t)clkouten << 0));
}

__INLINE static void iomux_clkout_unpack(uint8_t* clkouten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_CLKOUT_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);

    *clkouten = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t iomux_clkout_clkout_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_IOMUX_CLKOUT_OFFSET + FEMTO_REG_IOMUX_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void iomux_clkout_clkout_en_setf(uint8_t clkouten)
{
    _FEMTO_REG_WR(FEMTO_REG_IOMUX_CLKOUT_OFFSET+ FEMTO_REG_IOMUX_BASE_ADDR, (uint32_t)clkouten << 0);
}


#endif // _FEMTO_REG_IOMUX_H_

