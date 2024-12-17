#ifndef _FEMTO_REG_SPIF_H_
#define _FEMTO_REG_SPIF_H_

#define FEMTO_REG_SPIF_COUNT 10

#define FEMTO_REG_SPIF_BASE_ADDR 0x11080000

#define FEMTO_REG_SPIF_SIZE 0x000000A0


 /**
 * @brief WFIFO_DATA_RFIFO_DATA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00   WFIFO_DATA_RFIFO_DATA   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET 0x00000000


__INLINE static uint32_t spif_wfifo_data_rfifo_data_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_wfifo_data_rfifo_data_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_WFIFO_DATA_RFIFO_DATA_WFIFO_DATA_RFIFO_DATA_MASK            ((uint32_t)0xFFFFFFFF)
#define SPIF_WFIFO_DATA_RFIFO_DATA_WFIFO_DATA_RFIFO_DATA_LSB             0
#define SPIF_WFIFO_DATA_RFIFO_DATA_WFIFO_DATA_RFIFO_DATA_WIDTH           ((uint32_t)0x00000020)

#define SPIF_WFIFO_DATA_RFIFO_DATA_WFIFO_DATA_RFIFO_DATA_RST             0x0

__INLINE static void spif_wfifo_data_rfifo_data_pack(uint32_t wfifodatarfifodata)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)wfifodatarfifodata << 0));
}

__INLINE static void spif_wfifo_data_rfifo_data_unpack(uint8_t* wfifodatarfifodata)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *wfifodatarfifodata = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t spif_wfifo_data_rfifo_data_wfifo_data_rfifo_data_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void spif_wfifo_data_rfifo_data_wfifo_data_rfifo_data_setf(uint32_t wfifodatarfifodata)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_WFIFO_DATA_RFIFO_DATA_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (uint32_t)wfifodatarfifodata << 0);
}

 /**
 * @brief AHB_WFIFO_DEPTH register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00            wf_wdepth   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_WFIFO_DEPTH_OFFSET 0x00000080


__INLINE static uint32_t spif_ahb_wfifo_depth_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_WFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

// field definitions
#define SPIF_AHB_WFIFO_DEPTH_WF_WDEPTH_MASK                        ((uint32_t)0x000000FF)
#define SPIF_AHB_WFIFO_DEPTH_WF_WDEPTH_LSB                         0
#define SPIF_AHB_WFIFO_DEPTH_WF_WDEPTH_WIDTH                       ((uint32_t)0x00000008)

#define SPIF_AHB_WFIFO_DEPTH_WF_WDEPTH_RST                         0x0

__INLINE static void spif_ahb_wfifo_depth_unpack(uint8_t* wfwdepth)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_WFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *wfwdepth = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t spif_ahb_wfifo_depth_wf_wdepth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_WFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

 /**
 * @brief AHB_RFIFO_DEPTH register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00            rf_rdepth   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_RFIFO_DEPTH_OFFSET 0x00000084


__INLINE static uint32_t spif_ahb_rfifo_depth_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

// field definitions
#define SPIF_AHB_RFIFO_DEPTH_RF_RDEPTH_MASK                        ((uint32_t)0x000000FF)
#define SPIF_AHB_RFIFO_DEPTH_RF_RDEPTH_LSB                         0
#define SPIF_AHB_RFIFO_DEPTH_RF_RDEPTH_WIDTH                       ((uint32_t)0x00000008)

#define SPIF_AHB_RFIFO_DEPTH_RF_RDEPTH_RST                         0x0

__INLINE static void spif_ahb_rfifo_depth_unpack(uint8_t* rfrdepth)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *rfrdepth = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t spif_ahb_rfifo_depth_rf_rdepth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RFIFO_DEPTH_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

 /**
 * @brief AHB_RLEN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:00             rlen_reg   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_RLEN_OFFSET 0x00000088


__INLINE static uint32_t spif_ahb_rlen_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RLEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_ahb_rlen_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_RLEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_AHB_RLEN_RLEN_REG_MASK                         ((uint32_t)0x0000FFFF)
#define SPIF_AHB_RLEN_RLEN_REG_LSB                          0
#define SPIF_AHB_RLEN_RLEN_REG_WIDTH                        ((uint32_t)0x00000010)

#define SPIF_AHB_RLEN_RLEN_REG_RST                          0x0

__INLINE static void spif_ahb_rlen_pack(uint16_t rlenreg)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_RLEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)rlenreg << 0));
}

__INLINE static void spif_ahb_rlen_unpack(uint8_t* rlenreg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RLEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *rlenreg = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t spif_ahb_rlen_rlen_reg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_RLEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void spif_ahb_rlen_rlen_reg_setf(uint16_t rlenreg)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_RLEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (uint32_t)rlenreg << 0);
}

 /**
 * @brief AHB_CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:02              io_mode   0b1
 *     01        dir_addr24_en   1
 *     00              spif_en   1
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_CTRL_OFFSET 0x0000008C


__INLINE static uint32_t spif_ahb_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_ahb_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_CTRL_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_AHB_CTRL_IO_MODE_MASK                          ((uint32_t)0x0000000C)
#define SPIF_AHB_CTRL_IO_MODE_LSB                           2
#define SPIF_AHB_CTRL_IO_MODE_WIDTH                         ((uint32_t)0x00000002)
#define SPIF_AHB_CTRL_DIR_ADDR24_EN_BIT                     ((uint32_t)0x00000002)
#define SPIF_AHB_CTRL_DIR_ADDR24_EN_POS                     1
#define SPIF_AHB_CTRL_SPIF_EN_BIT                           ((uint32_t)0x00000001)
#define SPIF_AHB_CTRL_SPIF_EN_POS                           0

#define SPIF_AHB_CTRL_IO_MODE_RST                           0x1
#define SPIF_AHB_CTRL_DIR_ADDR24_EN_RST                     0x1
#define SPIF_AHB_CTRL_SPIF_EN_RST                           0x1

__INLINE static void spif_ahb_ctrl_pack(uint8_t iomode, uint8_t diraddr24en, uint8_t spifen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_CTRL_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)iomode << 2) | ((uint32_t)diraddr24en << 1) | ((uint32_t)spifen << 0));
}

__INLINE static void spif_ahb_ctrl_unpack(uint8_t* iomode, uint8_t* diraddr24en, uint8_t* spifen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *iomode = (localVal & ((uint32_t)0x0000000C)) >> 2;
    *diraddr24en = (localVal & ((uint32_t)0x00000002)) >> 1;
    *spifen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t spif_ahb_ctrl_io_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000C)) >> 2);
}

__INLINE static void spif_ahb_ctrl_io_mode_setf(uint8_t iomode)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_CTRL_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x0000000C)) | ((uint32_t)iomode << 2));
}

__INLINE static uint8_t spif_ahb_ctrl_dir_addr24_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void spif_ahb_ctrl_dir_addr24_en_setf(uint8_t diraddr24en)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_CTRL_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)diraddr24en << 1));
}

__INLINE static uint8_t spif_ahb_ctrl_spif_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void spif_ahb_ctrl_spif_en_setf(uint8_t spifen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_CTRL_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_CTRL_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)spifen << 0));
}

 /**
 * @brief AHB_STATUS register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     02                 idle   1
 *  01:00           status_reg   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_STATUS_OFFSET 0x00000090


__INLINE static uint32_t spif_ahb_status_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_STATUS_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_ahb_status_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_STATUS_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_AHB_STATUS_IDLE_BIT                              ((uint32_t)0x00000004)
#define SPIF_AHB_STATUS_IDLE_POS                              2
#define SPIF_AHB_STATUS_STATUS_REG_MASK                       ((uint32_t)0x00000003)
#define SPIF_AHB_STATUS_STATUS_REG_LSB                        0
#define SPIF_AHB_STATUS_STATUS_REG_WIDTH                      ((uint32_t)0x00000002)

#define SPIF_AHB_STATUS_IDLE_RST                              0x1
#define SPIF_AHB_STATUS_STATUS_REG_RST                        0x0

__INLINE static void spif_ahb_status_pack(uint8_t statusreg)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_STATUS_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)statusreg << 0));
}

__INLINE static void spif_ahb_status_unpack(uint8_t* idle, uint8_t* statusreg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_STATUS_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *idle = (localVal & ((uint32_t)0x00000004)) >> 2;
    *statusreg = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t spif_ahb_status_idle_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_STATUS_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t spif_ahb_status_status_reg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_STATUS_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void spif_ahb_status_status_reg_setf(uint8_t statusreg)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_STATUS_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (uint32_t)statusreg << 0);
}

 /**
 * @brief AHB_INTEN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  02:00                inten   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_INTEN_OFFSET 0x00000094


__INLINE static uint32_t spif_ahb_inten_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_INTEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_ahb_inten_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_INTEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_AHB_INTEN_INTEN_MASK                            ((uint32_t)0x00000007)
#define SPIF_AHB_INTEN_INTEN_LSB                             0
#define SPIF_AHB_INTEN_INTEN_WIDTH                           ((uint32_t)0x00000003)

#define SPIF_AHB_INTEN_INTEN_RST                             0x0

__INLINE static void spif_ahb_inten_pack(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_INTEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)inten << 0));
}

__INLINE static void spif_ahb_inten_unpack(uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_INTEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *inten = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t spif_ahb_inten_inten_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_INTEN_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void spif_ahb_inten_inten_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_AHB_INTEN_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (uint32_t)inten << 0);
}

 /**
 * @brief AHB_DEBUG register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  02:00                  cst   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_AHB_DEBUG_OFFSET 0x00000098


__INLINE static uint32_t spif_ahb_debug_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_DEBUG_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

// field definitions
#define SPIF_AHB_DEBUG_CST_MASK                              ((uint32_t)0x00000007)
#define SPIF_AHB_DEBUG_CST_LSB                               0
#define SPIF_AHB_DEBUG_CST_WIDTH                             ((uint32_t)0x00000003)

#define SPIF_AHB_DEBUG_CST_RST                               0x0

__INLINE static void spif_ahb_debug_unpack(uint8_t* cst)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_DEBUG_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *cst = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t spif_ahb_debug_cst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_AHB_DEBUG_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

 /**
 * @brief SPIF_DLY register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15             clk_mux3   0
 *  14:12             dly_len3   0b0
 *     11             clk_mux2   0
 *  10:08             dly_len2   0b0
 *     07             clk_mux1   0
 *  06:04             dly_len1   0b0
 *     03             dly_mux0   0
 *  02:00             dly_len0   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_SPIF_DLY_OFFSET 0x0000009C


__INLINE static uint32_t spif_spif_dly_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_spif_dly_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_SPIF_DLY_CLK_MUX3_BIT                          ((uint32_t)0x00008000)
#define SPIF_SPIF_DLY_CLK_MUX3_POS                          15
#define SPIF_SPIF_DLY_DLY_LEN3_MASK                         ((uint32_t)0x00007000)
#define SPIF_SPIF_DLY_DLY_LEN3_LSB                          12
#define SPIF_SPIF_DLY_DLY_LEN3_WIDTH                        ((uint32_t)0x00000003)
#define SPIF_SPIF_DLY_CLK_MUX2_BIT                          ((uint32_t)0x00000800)
#define SPIF_SPIF_DLY_CLK_MUX2_POS                          11
#define SPIF_SPIF_DLY_DLY_LEN2_MASK                         ((uint32_t)0x00000700)
#define SPIF_SPIF_DLY_DLY_LEN2_LSB                          8
#define SPIF_SPIF_DLY_DLY_LEN2_WIDTH                        ((uint32_t)0x00000003)
#define SPIF_SPIF_DLY_CLK_MUX1_BIT                          ((uint32_t)0x00000080)
#define SPIF_SPIF_DLY_CLK_MUX1_POS                          7
#define SPIF_SPIF_DLY_DLY_LEN1_MASK                         ((uint32_t)0x00000070)
#define SPIF_SPIF_DLY_DLY_LEN1_LSB                          4
#define SPIF_SPIF_DLY_DLY_LEN1_WIDTH                        ((uint32_t)0x00000003)
#define SPIF_SPIF_DLY_DLY_MUX0_BIT                          ((uint32_t)0x00000008)
#define SPIF_SPIF_DLY_DLY_MUX0_POS                          3
#define SPIF_SPIF_DLY_DLY_LEN0_MASK                         ((uint32_t)0x00000007)
#define SPIF_SPIF_DLY_DLY_LEN0_LSB                          0
#define SPIF_SPIF_DLY_DLY_LEN0_WIDTH                        ((uint32_t)0x00000003)

#define SPIF_SPIF_DLY_CLK_MUX3_RST                          0x0
#define SPIF_SPIF_DLY_DLY_LEN3_RST                          0x0
#define SPIF_SPIF_DLY_CLK_MUX2_RST                          0x0
#define SPIF_SPIF_DLY_DLY_LEN2_RST                          0x0
#define SPIF_SPIF_DLY_CLK_MUX1_RST                          0x0
#define SPIF_SPIF_DLY_DLY_LEN1_RST                          0x0
#define SPIF_SPIF_DLY_DLY_MUX0_RST                          0x0
#define SPIF_SPIF_DLY_DLY_LEN0_RST                          0x0

__INLINE static void spif_spif_dly_pack(uint8_t clkmux3, uint8_t dlylen3, uint8_t clkmux2, uint8_t dlylen2, uint8_t clkmux1, uint8_t dlylen1, uint8_t dlymux0, uint8_t dlylen0)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)clkmux3 << 15) | ((uint32_t)dlylen3 << 12) | ((uint32_t)clkmux2 << 11) | ((uint32_t)dlylen2 << 8) | ((uint32_t)clkmux1 << 7) | ((uint32_t)dlylen1 << 4) | ((uint32_t)dlymux0 << 3) | ((uint32_t)dlylen0 << 0));
}

__INLINE static void spif_spif_dly_unpack(uint8_t* clkmux3, uint8_t* dlylen3, uint8_t* clkmux2, uint8_t* dlylen2, uint8_t* clkmux1, uint8_t* dlylen1, uint8_t* dlymux0, uint8_t* dlylen0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *clkmux3 = (localVal & ((uint32_t)0x00008000)) >> 15;
    *dlylen3 = (localVal & ((uint32_t)0x00007000)) >> 12;
    *clkmux2 = (localVal & ((uint32_t)0x00000800)) >> 11;
    *dlylen2 = (localVal & ((uint32_t)0x00000700)) >> 8;
    *clkmux1 = (localVal & ((uint32_t)0x00000080)) >> 7;
    *dlylen1 = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dlymux0 = (localVal & ((uint32_t)0x00000008)) >> 3;
    *dlylen0 = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t spif_spif_dly_clk_mux3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void spif_spif_dly_clk_mux3_setf(uint8_t clkmux3)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)clkmux3 << 15));
}

__INLINE static uint8_t spif_spif_dly_dly_len3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007000)) >> 12);
}

__INLINE static void spif_spif_dly_dly_len3_setf(uint8_t dlylen3)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00007000)) | ((uint32_t)dlylen3 << 12));
}

__INLINE static uint8_t spif_spif_dly_clk_mux2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void spif_spif_dly_clk_mux2_setf(uint8_t clkmux2)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)clkmux2 << 11));
}

__INLINE static uint8_t spif_spif_dly_dly_len2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000700)) >> 8);
}

__INLINE static void spif_spif_dly_dly_len2_setf(uint8_t dlylen2)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000700)) | ((uint32_t)dlylen2 << 8));
}

__INLINE static uint8_t spif_spif_dly_clk_mux1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void spif_spif_dly_clk_mux1_setf(uint8_t clkmux1)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)clkmux1 << 7));
}

__INLINE static uint8_t spif_spif_dly_dly_len1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void spif_spif_dly_dly_len1_setf(uint8_t dlylen1)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)dlylen1 << 4));
}

__INLINE static uint8_t spif_spif_dly_dly_mux0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void spif_spif_dly_dly_mux0_setf(uint8_t dlymux0)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)dlymux0 << 3));
}

__INLINE static uint8_t spif_spif_dly_dly_len0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void spif_spif_dly_dly_len0_setf(uint8_t dlylen0)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DLY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DLY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)dlylen0 << 0));
}

 /**
 * @brief SPIF_DUMMY register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08             dma_mask   0
 *     05             dummy_en   0
 *     04        udummy_len_en   0
 *  03:00           udummy_len   0b0
 * </pre>
 */
#define FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET 0x000000A0


__INLINE static uint32_t spif_spif_dummy_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
}

__INLINE static void spif_spif_dummy_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, value);
}

// field definitions
#define SPIF_SPIF_DUMMY_DMA_MASK_BIT                          ((uint32_t)0x00000100)
#define SPIF_SPIF_DUMMY_DMA_MASK_POS                          8
#define SPIF_SPIF_DUMMY_DUMMY_EN_BIT                          ((uint32_t)0x00000020)
#define SPIF_SPIF_DUMMY_DUMMY_EN_POS                          5
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_EN_BIT                     ((uint32_t)0x00000010)
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_EN_POS                     4
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_MASK                       ((uint32_t)0x0000000F)
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_LSB                        0
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_WIDTH                      ((uint32_t)0x00000004)

#define SPIF_SPIF_DUMMY_DMA_MASK_RST                          0x0
#define SPIF_SPIF_DUMMY_DUMMY_EN_RST                          0x0
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_EN_RST                     0x0
#define SPIF_SPIF_DUMMY_UDUMMY_LEN_RST                        0x0

__INLINE static void spif_spif_dummy_pack(uint8_t dmamask, uint8_t dummyen, uint8_t udummylenen, uint8_t udummylen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR,  ((uint32_t)dmamask << 8) | ((uint32_t)dummyen << 5) | ((uint32_t)udummylenen << 4) | ((uint32_t)udummylen << 0));
}

__INLINE static void spif_spif_dummy_unpack(uint8_t* dmamask, uint8_t* dummyen, uint8_t* udummylenen, uint8_t* udummylen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);

    *dmamask = (localVal & ((uint32_t)0x00000100)) >> 8;
    *dummyen = (localVal & ((uint32_t)0x00000020)) >> 5;
    *udummylenen = (localVal & ((uint32_t)0x00000010)) >> 4;
    *udummylen = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t spif_spif_dummy_dma_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void spif_spif_dummy_dma_mask_setf(uint8_t dmamask)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)dmamask << 8));
}

__INLINE static uint8_t spif_spif_dummy_dummy_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void spif_spif_dummy_dummy_en_setf(uint8_t dummyen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dummyen << 5));
}

__INLINE static uint8_t spif_spif_dummy_udummy_len_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void spif_spif_dummy_udummy_len_en_setf(uint8_t udummylenen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)udummylenen << 4));
}

__INLINE static uint8_t spif_spif_dummy_udummy_len_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void spif_spif_dummy_udummy_len_setf(uint8_t udummylen)
{
    _FEMTO_REG_WR(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET+ FEMTO_REG_SPIF_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_SPIF_SPIF_DUMMY_OFFSET + FEMTO_REG_SPIF_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)udummylen << 0));
}


#endif // _FEMTO_REG_SPIF_H_

