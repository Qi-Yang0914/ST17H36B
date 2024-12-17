#ifndef _FEMTO_REG_BB_TOP_H_
#define _FEMTO_REG_BB_TOP_H_

#define FEMTO_REG_BB_TOP_COUNT 132

#define FEMTO_REG_BB_TOP_BASE_ADDR 0x40030000

#define FEMTO_REG_BB_TOP_SIZE 0x00000280


 /**
 * @brief I_DIG_BB_CTRL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24          rx_sync_thd   0b55
 *  23:21          blr_acc_err   0b0
 *     20           zb_sfd_err   0
 *  19:18         sync_sch_dly   0b1
 *  17:16             sync_len   0b2
 *  15:08           rx_iq_fsel   0b80
 *     05      rx_32m_clk_gate   0
 *     04      tx_32m_clk_gate   0
 *     03          clk32m_rise   0
 *  02:00              pkt_fmt   0b1
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET 0x00000000


__INLINE static uint32_t bb_top_i_dig_bb_ctrl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL0_RX_SYNC_THD_MASK                      ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL0_RX_SYNC_THD_LSB                       24
#define BB_TOP_I_DIG_BB_CTRL0_RX_SYNC_THD_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL0_BLR_ACC_ERR_MASK                      ((uint32_t)0x00E00000)
#define BB_TOP_I_DIG_BB_CTRL0_BLR_ACC_ERR_LSB                       21
#define BB_TOP_I_DIG_BB_CTRL0_BLR_ACC_ERR_WIDTH                     ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL0_ZB_SFD_ERR_BIT                        ((uint32_t)0x00100000)
#define BB_TOP_I_DIG_BB_CTRL0_ZB_SFD_ERR_POS                        20
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_SCH_DLY_MASK                     ((uint32_t)0x000C0000)
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_SCH_DLY_LSB                      18
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_SCH_DLY_WIDTH                    ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_LEN_MASK                         ((uint32_t)0x00030000)
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_LEN_LSB                          16
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_LEN_WIDTH                        ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL0_RX_IQ_FSEL_MASK                       ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL0_RX_IQ_FSEL_LSB                        8
#define BB_TOP_I_DIG_BB_CTRL0_RX_IQ_FSEL_WIDTH                      ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL0_RX_32M_CLK_GATE_BIT                   ((uint32_t)0x00000020)
#define BB_TOP_I_DIG_BB_CTRL0_RX_32M_CLK_GATE_POS                   5
#define BB_TOP_I_DIG_BB_CTRL0_TX_32M_CLK_GATE_BIT                   ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL0_TX_32M_CLK_GATE_POS                   4
#define BB_TOP_I_DIG_BB_CTRL0_CLK32M_RISE_BIT                       ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL0_CLK32M_RISE_POS                       3
#define BB_TOP_I_DIG_BB_CTRL0_PKT_FMT_MASK                          ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL0_PKT_FMT_LSB                           0
#define BB_TOP_I_DIG_BB_CTRL0_PKT_FMT_WIDTH                         ((uint32_t)0x00000003)

#define BB_TOP_I_DIG_BB_CTRL0_RX_SYNC_THD_RST                       0x55
#define BB_TOP_I_DIG_BB_CTRL0_BLR_ACC_ERR_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL0_ZB_SFD_ERR_RST                        0x0
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_SCH_DLY_RST                      0x1
#define BB_TOP_I_DIG_BB_CTRL0_SYNC_LEN_RST                          0x2
#define BB_TOP_I_DIG_BB_CTRL0_RX_IQ_FSEL_RST                        0x80
#define BB_TOP_I_DIG_BB_CTRL0_RX_32M_CLK_GATE_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL0_TX_32M_CLK_GATE_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL0_CLK32M_RISE_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL0_PKT_FMT_RST                           0x1

__INLINE static void bb_top_i_dig_bb_ctrl0_pack(uint8_t rxsyncthd, uint8_t blraccerr, uint8_t zbsfderr, uint8_t syncschdly, uint8_t synclen, uint8_t rxiqfsel, uint8_t rx32mclkgate, uint8_t tx32mclkgate, uint8_t clk32mrise, uint8_t pktfmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rxsyncthd << 24) | ((uint32_t)blraccerr << 21) | ((uint32_t)zbsfderr << 20) | ((uint32_t)syncschdly << 18) | ((uint32_t)synclen << 16) | ((uint32_t)rxiqfsel << 8) | ((uint32_t)rx32mclkgate << 5) | ((uint32_t)tx32mclkgate << 4) | ((uint32_t)clk32mrise << 3) | ((uint32_t)pktfmt << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl0_unpack(uint8_t* rxsyncthd, uint8_t* blraccerr, uint8_t* zbsfderr, uint8_t* syncschdly, uint8_t* synclen, uint8_t* rxiqfsel, uint8_t* rx32mclkgate, uint8_t* tx32mclkgate, uint8_t* clk32mrise, uint8_t* pktfmt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rxsyncthd = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *blraccerr = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *zbsfderr = (localVal & ((uint32_t)0x00100000)) >> 20;
    *syncschdly = (localVal & ((uint32_t)0x000C0000)) >> 18;
    *synclen = (localVal & ((uint32_t)0x00030000)) >> 16;
    *rxiqfsel = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *rx32mclkgate = (localVal & ((uint32_t)0x00000020)) >> 5;
    *tx32mclkgate = (localVal & ((uint32_t)0x00000010)) >> 4;
    *clk32mrise = (localVal & ((uint32_t)0x00000008)) >> 3;
    *pktfmt = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_rx_sync_thd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_rx_sync_thd_setf(uint8_t rxsyncthd)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)rxsyncthd << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_blr_acc_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_blr_acc_err_setf(uint8_t blraccerr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)blraccerr << 21));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_zb_sfd_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_zb_sfd_err_setf(uint8_t zbsfderr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)zbsfderr << 20));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_sync_sch_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000C0000)) >> 18);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_sync_sch_dly_setf(uint8_t syncschdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000C0000)) | ((uint32_t)syncschdly << 18));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_sync_len_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_sync_len_setf(uint8_t synclen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)synclen << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_rx_iq_fsel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_rx_iq_fsel_setf(uint8_t rxiqfsel)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)rxiqfsel << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_rx_32m_clk_gate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_rx_32m_clk_gate_setf(uint8_t rx32mclkgate)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)rx32mclkgate << 5));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_tx_32m_clk_gate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_tx_32m_clk_gate_setf(uint8_t tx32mclkgate)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)tx32mclkgate << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_clk32m_rise_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_clk32m_rise_setf(uint8_t clk32mrise)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)clk32mrise << 3));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl0_pkt_fmt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl0_pkt_fmt_setf(uint8_t pktfmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)pktfmt << 0));
}

 /**
 * @brief I_DIG_BB_CTRL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        sync_rssi_thd   0b90
 *  23:16       rx_sync_thd_hi   0b150
 *  14:08       diff_demod_thd   0b90
 *  07:04            tr_dc_sft   0b5
 *  03:00          tr_tedm_sft   0b4
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET 0x00000004


__INLINE static uint32_t bb_top_i_dig_bb_ctrl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL1_SYNC_RSSI_THD_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL1_SYNC_RSSI_THD_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL1_SYNC_RSSI_THD_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL1_RX_SYNC_THD_HI_MASK                   ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL1_RX_SYNC_THD_HI_LSB                    16
#define BB_TOP_I_DIG_BB_CTRL1_RX_SYNC_THD_HI_WIDTH                  ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL1_DIFF_DEMOD_THD_MASK                   ((uint32_t)0x00007F00)
#define BB_TOP_I_DIG_BB_CTRL1_DIFF_DEMOD_THD_LSB                    8
#define BB_TOP_I_DIG_BB_CTRL1_DIFF_DEMOD_THD_WIDTH                  ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL1_TR_DC_SFT_MASK                        ((uint32_t)0x000000F0)
#define BB_TOP_I_DIG_BB_CTRL1_TR_DC_SFT_LSB                         4
#define BB_TOP_I_DIG_BB_CTRL1_TR_DC_SFT_WIDTH                       ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL1_TR_TEDM_SFT_MASK                      ((uint32_t)0x0000000F)
#define BB_TOP_I_DIG_BB_CTRL1_TR_TEDM_SFT_LSB                       0
#define BB_TOP_I_DIG_BB_CTRL1_TR_TEDM_SFT_WIDTH                     ((uint32_t)0x00000004)

#define BB_TOP_I_DIG_BB_CTRL1_SYNC_RSSI_THD_RST                     0x90
#define BB_TOP_I_DIG_BB_CTRL1_RX_SYNC_THD_HI_RST                    0x150
#define BB_TOP_I_DIG_BB_CTRL1_DIFF_DEMOD_THD_RST                    0x90
#define BB_TOP_I_DIG_BB_CTRL1_TR_DC_SFT_RST                         0x5
#define BB_TOP_I_DIG_BB_CTRL1_TR_TEDM_SFT_RST                       0x4

__INLINE static void bb_top_i_dig_bb_ctrl1_pack(uint8_t syncrssithd, uint8_t rxsyncthdhi, uint8_t diffdemodthd, uint8_t trdcsft, uint8_t trtedmsft)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)syncrssithd << 24) | ((uint32_t)rxsyncthdhi << 16) | ((uint32_t)diffdemodthd << 8) | ((uint32_t)trdcsft << 4) | ((uint32_t)trtedmsft << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl1_unpack(uint8_t* syncrssithd, uint8_t* rxsyncthdhi, uint8_t* diffdemodthd, uint8_t* trdcsft, uint8_t* trtedmsft)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *syncrssithd = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *rxsyncthdhi = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *diffdemodthd = (localVal & ((uint32_t)0x00007F00)) >> 8;
    *trdcsft = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *trtedmsft = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl1_sync_rssi_thd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_sync_rssi_thd_setf(uint8_t syncrssithd)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)syncrssithd << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl1_rx_sync_thd_hi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_rx_sync_thd_hi_setf(uint8_t rxsyncthdhi)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)rxsyncthdhi << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl1_diff_demod_thd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_diff_demod_thd_setf(uint8_t diffdemodthd)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00007F00)) | ((uint32_t)diffdemodthd << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl1_tr_dc_sft_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_tr_dc_sft_setf(uint8_t trdcsft)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)trdcsft << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl1_tr_tedm_sft_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl1_tr_tedm_sft_setf(uint8_t trtedmsft)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)trtedmsft << 0));
}

 /**
 * @brief I_DIG_BB_CTRL2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24          ahdfe_ki_cr   0b32
 *  23:16          ahdfe_kp_cr   0b96
 *     08             ahdfe_en   1
 *  07:04          ahdfe_hidx1   0b9
 *  03:00          ahdfe_hidx0   0b2
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET 0x00000008


__INLINE static uint32_t bb_top_i_dig_bb_ctrl2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KI_CR_MASK                      ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KI_CR_LSB                       24
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KI_CR_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KP_CR_MASK                      ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KP_CR_LSB                       16
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KP_CR_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_EN_BIT                          ((uint32_t)0x00000100)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_EN_POS                          8
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX1_MASK                      ((uint32_t)0x000000F0)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX1_LSB                       4
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX1_WIDTH                     ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX0_MASK                      ((uint32_t)0x0000000F)
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX0_LSB                       0
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX0_WIDTH                     ((uint32_t)0x00000004)

#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KI_CR_RST                       0x32
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_KP_CR_RST                       0x96
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_EN_RST                          0x1
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX1_RST                       0x9
#define BB_TOP_I_DIG_BB_CTRL2_AHDFE_HIDX0_RST                       0x2

__INLINE static void bb_top_i_dig_bb_ctrl2_pack(uint8_t ahdfekicr, uint8_t ahdfekpcr, uint8_t ahdfeen, uint8_t ahdfehidx1, uint8_t ahdfehidx0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)ahdfekicr << 24) | ((uint32_t)ahdfekpcr << 16) | ((uint32_t)ahdfeen << 8) | ((uint32_t)ahdfehidx1 << 4) | ((uint32_t)ahdfehidx0 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl2_unpack(uint8_t* ahdfekicr, uint8_t* ahdfekpcr, uint8_t* ahdfeen, uint8_t* ahdfehidx1, uint8_t* ahdfehidx0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *ahdfekicr = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *ahdfekpcr = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *ahdfeen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ahdfehidx1 = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ahdfehidx0 = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl2_ahdfe_ki_cr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_ahdfe_ki_cr_setf(uint8_t ahdfekicr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)ahdfekicr << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl2_ahdfe_kp_cr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_ahdfe_kp_cr_setf(uint8_t ahdfekpcr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)ahdfekpcr << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl2_ahdfe_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_ahdfe_en_setf(uint8_t ahdfeen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)ahdfeen << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl2_ahdfe_hidx1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_ahdfe_hidx1_setf(uint8_t ahdfehidx1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)ahdfehidx1 << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl2_ahdfe_hidx0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl2_ahdfe_hidx0_setf(uint8_t ahdfehidx0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)ahdfehidx0 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16          rx_time_out   0b280
 *  15:08         rx_supp_samp   0b0
 *  07:00    rx_max_packet_len   0b128
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET 0x0000000C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL3_RX_TIME_OUT_MASK                      ((uint32_t)0xFFFF0000)
#define BB_TOP_I_DIG_BB_CTRL3_RX_TIME_OUT_LSB                       16
#define BB_TOP_I_DIG_BB_CTRL3_RX_TIME_OUT_WIDTH                     ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL3_RX_SUPP_SAMP_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL3_RX_SUPP_SAMP_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL3_RX_SUPP_SAMP_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL3_RX_MAX_PACKET_LEN_MASK                ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL3_RX_MAX_PACKET_LEN_LSB                 0
#define BB_TOP_I_DIG_BB_CTRL3_RX_MAX_PACKET_LEN_WIDTH               ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL3_RX_TIME_OUT_RST                       0x280
#define BB_TOP_I_DIG_BB_CTRL3_RX_SUPP_SAMP_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL3_RX_MAX_PACKET_LEN_RST                 0x128

__INLINE static void bb_top_i_dig_bb_ctrl3_pack(uint16_t rxtimeout, uint8_t rxsuppsamp, uint8_t rxmaxpacketlen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rxtimeout << 16) | ((uint32_t)rxsuppsamp << 8) | ((uint32_t)rxmaxpacketlen << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl3_unpack(uint8_t* rxtimeout, uint8_t* rxsuppsamp, uint8_t* rxmaxpacketlen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rxtimeout = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *rxsuppsamp = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *rxmaxpacketlen = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl3_rx_time_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl3_rx_time_out_setf(uint16_t rxtimeout)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)rxtimeout << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl3_rx_supp_samp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl3_rx_supp_samp_setf(uint8_t rxsuppsamp)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)rxsuppsamp << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl3_rx_max_packet_len_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl3_rx_max_packet_len_setf(uint8_t rxmaxpacketlen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)rxmaxpacketlen << 0));
}

 /**
 * @brief I_DIG_BB_CTRL4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24        dc_compq_flt3   0b32
 *  21:16        dc_compi_flt3   0b32
 *  13:08        dc_compq_flt4   0b32
 *  05:00        dc_compi_flt4   0b32
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET 0x00000010


__INLINE static uint32_t bb_top_i_dig_bb_ctrl4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT3_MASK                    ((uint32_t)0x3F000000)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT3_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT3_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT3_MASK                    ((uint32_t)0x003F0000)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT3_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT3_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT4_MASK                    ((uint32_t)0x00003F00)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT4_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT4_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT4_MASK                    ((uint32_t)0x0000003F)
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT4_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT4_WIDTH                   ((uint32_t)0x00000006)

#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT3_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT3_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPQ_FLT4_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL4_DC_COMPI_FLT4_RST                     0x32

__INLINE static void bb_top_i_dig_bb_ctrl4_pack(uint8_t dccompqflt3, uint8_t dccompiflt3, uint8_t dccompqflt4, uint8_t dccompiflt4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dccompqflt3 << 24) | ((uint32_t)dccompiflt3 << 16) | ((uint32_t)dccompqflt4 << 8) | ((uint32_t)dccompiflt4 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl4_unpack(uint8_t* dccompqflt3, uint8_t* dccompiflt3, uint8_t* dccompqflt4, uint8_t* dccompiflt4)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dccompqflt3 = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *dccompiflt3 = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *dccompqflt4 = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *dccompiflt4 = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl4_dc_compq_flt3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl4_dc_compq_flt3_setf(uint8_t dccompqflt3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)dccompqflt3 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl4_dc_compi_flt3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl4_dc_compi_flt3_setf(uint8_t dccompiflt3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)dccompiflt3 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl4_dc_compq_flt4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl4_dc_compq_flt4_setf(uint8_t dccompqflt4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)dccompqflt4 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl4_dc_compi_flt4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl4_dc_compi_flt4_setf(uint8_t dccompiflt4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)dccompiflt4 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL16 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         tx_supp_tail   0b0
 *  19:16           tx_iq_fsel   0b3
 *  15:08         tx_pld_nbyte   0b40
 *  07:05       tx_pre_len_ext   0b0
 *     04          tx_mode_sel   0
 *  03:00              tx_pldt   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET 0x00000040


__INLINE static uint32_t bb_top_i_dig_bb_ctrl16_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL16_TX_SUPP_TAIL_MASK                     ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL16_TX_SUPP_TAIL_LSB                      24
#define BB_TOP_I_DIG_BB_CTRL16_TX_SUPP_TAIL_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL16_TX_IQ_FSEL_MASK                       ((uint32_t)0x000F0000)
#define BB_TOP_I_DIG_BB_CTRL16_TX_IQ_FSEL_LSB                        16
#define BB_TOP_I_DIG_BB_CTRL16_TX_IQ_FSEL_WIDTH                      ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLD_NBYTE_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLD_NBYTE_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLD_NBYTE_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL16_TX_PRE_LEN_EXT_MASK                   ((uint32_t)0x000000E0)
#define BB_TOP_I_DIG_BB_CTRL16_TX_PRE_LEN_EXT_LSB                    5
#define BB_TOP_I_DIG_BB_CTRL16_TX_PRE_LEN_EXT_WIDTH                  ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL16_TX_MODE_SEL_BIT                       ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL16_TX_MODE_SEL_POS                       4
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLDT_MASK                          ((uint32_t)0x0000000F)
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLDT_LSB                           0
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLDT_WIDTH                         ((uint32_t)0x00000004)

#define BB_TOP_I_DIG_BB_CTRL16_TX_SUPP_TAIL_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL16_TX_IQ_FSEL_RST                        0x3
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLD_NBYTE_RST                      0x40
#define BB_TOP_I_DIG_BB_CTRL16_TX_PRE_LEN_EXT_RST                    0x0
#define BB_TOP_I_DIG_BB_CTRL16_TX_MODE_SEL_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL16_TX_PLDT_RST                           0x0

__INLINE static void bb_top_i_dig_bb_ctrl16_pack(uint8_t txsupptail, uint8_t txiqfsel, uint8_t txpldnbyte, uint8_t txprelenext, uint8_t txmodesel, uint8_t txpldt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)txsupptail << 24) | ((uint32_t)txiqfsel << 16) | ((uint32_t)txpldnbyte << 8) | ((uint32_t)txprelenext << 5) | ((uint32_t)txmodesel << 4) | ((uint32_t)txpldt << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl16_unpack(uint8_t* txsupptail, uint8_t* txiqfsel, uint8_t* txpldnbyte, uint8_t* txprelenext, uint8_t* txmodesel, uint8_t* txpldt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *txsupptail = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *txiqfsel = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *txpldnbyte = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *txprelenext = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *txmodesel = (localVal & ((uint32_t)0x00000010)) >> 4;
    *txpldt = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_supp_tail_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_supp_tail_setf(uint8_t txsupptail)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)txsupptail << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_iq_fsel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_iq_fsel_setf(uint8_t txiqfsel)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)txiqfsel << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_pld_nbyte_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_pld_nbyte_setf(uint8_t txpldnbyte)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)txpldnbyte << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_pre_len_ext_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_pre_len_ext_setf(uint8_t txprelenext)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)txprelenext << 5));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_mode_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_mode_sel_setf(uint8_t txmodesel)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)txmodesel << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl16_tx_pldt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl16_tx_pldt_setf(uint8_t txpldt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL16_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)txpldt << 0));
}

 /**
 * @brief I_DIG_BB_CTRL17 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00         tx_prbs_seed   0b1F
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET 0x00000044


__INLINE static uint32_t bb_top_i_dig_bb_ctrl17_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl17_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL17_TX_PRBS_SEED_MASK                     ((uint32_t)0xFFFFFFFF)
#define BB_TOP_I_DIG_BB_CTRL17_TX_PRBS_SEED_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL17_TX_PRBS_SEED_WIDTH                    ((uint32_t)0x00000020)

#define BB_TOP_I_DIG_BB_CTRL17_TX_PRBS_SEED_RST                      0x1F

__INLINE static void bb_top_i_dig_bb_ctrl17_pack(uint32_t txprbsseed)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)txprbsseed << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl17_unpack(uint8_t* txprbsseed)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *txprbsseed = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl17_tx_prbs_seed_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl17_tx_prbs_seed_setf(uint32_t txprbsseed)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL17_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)txprbsseed << 0);
}

 /**
 * @brief I_DIG_BB_CTRL18 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  30:24           tx_wt_seed   0b37
 *  23:00            tx_crc_24   0b555555
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET 0x00000048


__INLINE static uint32_t bb_top_i_dig_bb_ctrl18_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl18_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL18_TX_WT_SEED_MASK                       ((uint32_t)0x7F000000)
#define BB_TOP_I_DIG_BB_CTRL18_TX_WT_SEED_LSB                        24
#define BB_TOP_I_DIG_BB_CTRL18_TX_WT_SEED_WIDTH                      ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL18_TX_CRC_24_MASK                        ((uint32_t)0x00FFFFFF)
#define BB_TOP_I_DIG_BB_CTRL18_TX_CRC_24_LSB                         0
#define BB_TOP_I_DIG_BB_CTRL18_TX_CRC_24_WIDTH                       ((uint32_t)0x00000018)

#define BB_TOP_I_DIG_BB_CTRL18_TX_WT_SEED_RST                        0x37
#define BB_TOP_I_DIG_BB_CTRL18_TX_CRC_24_RST                         0x555555

__INLINE static void bb_top_i_dig_bb_ctrl18_pack(uint8_t txwtseed, uint32_t txcrc24)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)txwtseed << 24) | ((uint32_t)txcrc24 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl18_unpack(uint8_t* txwtseed, uint8_t* txcrc24)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *txwtseed = (localVal & ((uint32_t)0x7F000000)) >> 24;
    *txcrc24 = (localVal & ((uint32_t)0x00FFFFFF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl18_tx_wt_seed_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x7F000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl18_tx_wt_seed_setf(uint8_t txwtseed)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x7F000000)) | ((uint32_t)txwtseed << 24));
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl18_tx_crc_24_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FFFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl18_tx_crc_24_setf(uint32_t txcrc24)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL18_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FFFFFF)) | ((uint32_t)txcrc24 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL19 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       tx_ble_acc_adr   0b8E89BED6
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET 0x0000004C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl19_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl19_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL19_TX_BLE_ACC_ADR_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_I_DIG_BB_CTRL19_TX_BLE_ACC_ADR_LSB                    0
#define BB_TOP_I_DIG_BB_CTRL19_TX_BLE_ACC_ADR_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_I_DIG_BB_CTRL19_TX_BLE_ACC_ADR_RST                    0x8E89BED6

__INLINE static void bb_top_i_dig_bb_ctrl19_pack(uint32_t txbleaccadr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)txbleaccadr << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl19_unpack(uint8_t* txbleaccadr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *txbleaccadr = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl19_tx_ble_acc_adr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl19_tx_ble_acc_adr_setf(uint32_t txbleaccadr)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL19_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)txbleaccadr << 0);
}

 /**
 * @brief I_DIG_BB_CTRL20 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24          rssi_offset   0b32
 *  23:20         agc_time_out   0b0
 *  19:16           agc_settle   0b8
 *  15:12             rx_pwr_t   0b5
 *  11:08             rx_abs_t   0b5
 *     07               agc_en   1
 *     04         agc_fix_gain   0
 *  03:00             agc_gain   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET 0x00000050


__INLINE static uint32_t bb_top_i_dig_bb_ctrl20_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL20_RSSI_OFFSET_MASK                      ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL20_RSSI_OFFSET_LSB                       24
#define BB_TOP_I_DIG_BB_CTRL20_RSSI_OFFSET_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_TIME_OUT_MASK                     ((uint32_t)0x00F00000)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_TIME_OUT_LSB                      20
#define BB_TOP_I_DIG_BB_CTRL20_AGC_TIME_OUT_WIDTH                    ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_SETTLE_MASK                       ((uint32_t)0x000F0000)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_SETTLE_LSB                        16
#define BB_TOP_I_DIG_BB_CTRL20_AGC_SETTLE_WIDTH                      ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL20_RX_PWR_T_MASK                         ((uint32_t)0x0000F000)
#define BB_TOP_I_DIG_BB_CTRL20_RX_PWR_T_LSB                          12
#define BB_TOP_I_DIG_BB_CTRL20_RX_PWR_T_WIDTH                        ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL20_RX_ABS_T_MASK                         ((uint32_t)0x00000F00)
#define BB_TOP_I_DIG_BB_CTRL20_RX_ABS_T_LSB                          8
#define BB_TOP_I_DIG_BB_CTRL20_RX_ABS_T_WIDTH                        ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_EN_BIT                            ((uint32_t)0x00000080)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_EN_POS                            7
#define BB_TOP_I_DIG_BB_CTRL20_AGC_FIX_GAIN_BIT                      ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_FIX_GAIN_POS                      4
#define BB_TOP_I_DIG_BB_CTRL20_AGC_GAIN_MASK                         ((uint32_t)0x0000000F)
#define BB_TOP_I_DIG_BB_CTRL20_AGC_GAIN_LSB                          0
#define BB_TOP_I_DIG_BB_CTRL20_AGC_GAIN_WIDTH                        ((uint32_t)0x00000004)

#define BB_TOP_I_DIG_BB_CTRL20_RSSI_OFFSET_RST                       0x32
#define BB_TOP_I_DIG_BB_CTRL20_AGC_TIME_OUT_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL20_AGC_SETTLE_RST                        0x8
#define BB_TOP_I_DIG_BB_CTRL20_RX_PWR_T_RST                          0x5
#define BB_TOP_I_DIG_BB_CTRL20_RX_ABS_T_RST                          0x5
#define BB_TOP_I_DIG_BB_CTRL20_AGC_EN_RST                            0x1
#define BB_TOP_I_DIG_BB_CTRL20_AGC_FIX_GAIN_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL20_AGC_GAIN_RST                          0x0

__INLINE static void bb_top_i_dig_bb_ctrl20_pack(uint8_t rssioffset, uint8_t agctimeout, uint8_t agcsettle, uint8_t rxpwrt, uint8_t rxabst, uint8_t agcen, uint8_t agcfixgain, uint8_t agcgain)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rssioffset << 24) | ((uint32_t)agctimeout << 20) | ((uint32_t)agcsettle << 16) | ((uint32_t)rxpwrt << 12) | ((uint32_t)rxabst << 8) | ((uint32_t)agcen << 7) | ((uint32_t)agcfixgain << 4) | ((uint32_t)agcgain << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl20_unpack(uint8_t* rssioffset, uint8_t* agctimeout, uint8_t* agcsettle, uint8_t* rxpwrt, uint8_t* rxabst, uint8_t* agcen, uint8_t* agcfixgain, uint8_t* agcgain)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rssioffset = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctimeout = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *agcsettle = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *rxpwrt = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *rxabst = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *agcen = (localVal & ((uint32_t)0x00000080)) >> 7;
    *agcfixgain = (localVal & ((uint32_t)0x00000010)) >> 4;
    *agcgain = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_rssi_offset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_rssi_offset_setf(uint8_t rssioffset)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)rssioffset << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_agc_time_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_agc_time_out_setf(uint8_t agctimeout)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)agctimeout << 20));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_agc_settle_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_agc_settle_setf(uint8_t agcsettle)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)agcsettle << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_rx_pwr_t_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_rx_pwr_t_setf(uint8_t rxpwrt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)rxpwrt << 12));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_rx_abs_t_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_rx_abs_t_setf(uint8_t rxabst)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)rxabst << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_agc_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_agc_en_setf(uint8_t agcen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)agcen << 7));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_agc_fix_gain_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_agc_fix_gain_setf(uint8_t agcfixgain)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)agcfixgain << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl20_agc_gain_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl20_agc_gain_setf(uint8_t agcgain)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL20_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)agcgain << 0));
}

 /**
 * @brief I_DIG_BB_CTRL21 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        agc_tab_gset3   0b11100
 *  23:16        agc_tab_gset2   0b1011100
 *  15:08        agc_tab_gset1   0b10011100
 *  07:00        agc_tab_gset0   0b10100100
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET 0x00000054


__INLINE static uint32_t bb_top_i_dig_bb_ctrl21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl21_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET3_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET3_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET3_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET2_MASK                    ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET2_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET2_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET1_MASK                    ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET1_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET1_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET0_MASK                    ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET0_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET0_WIDTH                   ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET3_RST                     0x11100
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET2_RST                     0x1011100
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET1_RST                     0x10011100
#define BB_TOP_I_DIG_BB_CTRL21_AGC_TAB_GSET0_RST                     0x10100100

__INLINE static void bb_top_i_dig_bb_ctrl21_pack(uint8_t agctabgset3, uint8_t agctabgset2, uint8_t agctabgset1, uint8_t agctabgset0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabgset3 << 24) | ((uint32_t)agctabgset2 << 16) | ((uint32_t)agctabgset1 << 8) | ((uint32_t)agctabgset0 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl21_unpack(uint8_t* agctabgset3, uint8_t* agctabgset2, uint8_t* agctabgset1, uint8_t* agctabgset0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabgset3 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabgset2 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabgset1 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabgset0 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl21_agc_tab_gset3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl21_agc_tab_gset3_setf(uint8_t agctabgset3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabgset3 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl21_agc_tab_gset2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl21_agc_tab_gset2_setf(uint8_t agctabgset2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabgset2 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl21_agc_tab_gset1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl21_agc_tab_gset1_setf(uint8_t agctabgset1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabgset1 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl21_agc_tab_gset0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl21_agc_tab_gset0_setf(uint8_t agctabgset0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL21_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabgset0 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL22 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        agc_tab_gset7   0b10
 *  23:16        agc_tab_gset6   0b100
 *  15:08        agc_tab_gset5   0b1100
 *  07:00        agc_tab_gset4   0b10100
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET 0x00000058


__INLINE static uint32_t bb_top_i_dig_bb_ctrl22_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl22_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET7_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET7_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET7_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET6_MASK                    ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET6_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET6_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET5_MASK                    ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET5_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET5_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET4_MASK                    ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET4_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET4_WIDTH                   ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET7_RST                     0x10
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET6_RST                     0x100
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET5_RST                     0x1100
#define BB_TOP_I_DIG_BB_CTRL22_AGC_TAB_GSET4_RST                     0x10100

__INLINE static void bb_top_i_dig_bb_ctrl22_pack(uint8_t agctabgset7, uint8_t agctabgset6, uint8_t agctabgset5, uint8_t agctabgset4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabgset7 << 24) | ((uint32_t)agctabgset6 << 16) | ((uint32_t)agctabgset5 << 8) | ((uint32_t)agctabgset4 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl22_unpack(uint8_t* agctabgset7, uint8_t* agctabgset6, uint8_t* agctabgset5, uint8_t* agctabgset4)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabgset7 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabgset6 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabgset5 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabgset4 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl22_agc_tab_gset7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl22_agc_tab_gset7_setf(uint8_t agctabgset7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabgset7 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl22_agc_tab_gset6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl22_agc_tab_gset6_setf(uint8_t agctabgset6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabgset6 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl22_agc_tab_gset5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl22_agc_tab_gset5_setf(uint8_t agctabgset5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabgset5 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl22_agc_tab_gset4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl22_agc_tab_gset4_setf(uint8_t agctabgset4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL22_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabgset4 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL23 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         agc_tab_dto2   0b78
 *  23:16         agc_tab_dto1   0b84
 *  15:08         agc_tab_dto0   0b90
 *  07:00        agc_tab_gset8   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET 0x0000005C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl23_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl23_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO2_MASK                     ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO2_LSB                      24
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO2_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO1_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO1_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO1_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO0_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO0_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO0_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_GSET8_MASK                    ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_GSET8_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_GSET8_WIDTH                   ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO2_RST                      0x78
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO1_RST                      0x84
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_DTO0_RST                      0x90
#define BB_TOP_I_DIG_BB_CTRL23_AGC_TAB_GSET8_RST                     0x0

__INLINE static void bb_top_i_dig_bb_ctrl23_pack(uint8_t agctabdto2, uint8_t agctabdto1, uint8_t agctabdto0, uint8_t agctabgset8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabdto2 << 24) | ((uint32_t)agctabdto1 << 16) | ((uint32_t)agctabdto0 << 8) | ((uint32_t)agctabgset8 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl23_unpack(uint8_t* agctabdto2, uint8_t* agctabdto1, uint8_t* agctabdto0, uint8_t* agctabgset8)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabdto2 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabdto1 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabdto0 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabgset8 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl23_agc_tab_dto2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl23_agc_tab_dto2_setf(uint8_t agctabdto2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabdto2 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl23_agc_tab_dto1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl23_agc_tab_dto1_setf(uint8_t agctabdto1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabdto1 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl23_agc_tab_dto0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl23_agc_tab_dto0_setf(uint8_t agctabdto0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabdto0 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl23_agc_tab_gset8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl23_agc_tab_gset8_setf(uint8_t agctabgset8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL23_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabgset8 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL24 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         agc_tab_dto6   0b54
 *  23:16         agc_tab_dto5   0b60
 *  15:08         agc_tab_dto4   0b66
 *  07:00         agc_tab_dto3   0b72
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET 0x00000060


__INLINE static uint32_t bb_top_i_dig_bb_ctrl24_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl24_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO6_MASK                     ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO6_LSB                      24
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO6_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO5_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO5_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO5_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO4_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO4_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO4_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO3_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO3_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO3_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO6_RST                      0x54
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO5_RST                      0x60
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO4_RST                      0x66
#define BB_TOP_I_DIG_BB_CTRL24_AGC_TAB_DTO3_RST                      0x72

__INLINE static void bb_top_i_dig_bb_ctrl24_pack(uint8_t agctabdto6, uint8_t agctabdto5, uint8_t agctabdto4, uint8_t agctabdto3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabdto6 << 24) | ((uint32_t)agctabdto5 << 16) | ((uint32_t)agctabdto4 << 8) | ((uint32_t)agctabdto3 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl24_unpack(uint8_t* agctabdto6, uint8_t* agctabdto5, uint8_t* agctabdto4, uint8_t* agctabdto3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabdto6 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabdto5 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabdto4 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabdto3 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl24_agc_tab_dto6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl24_agc_tab_dto6_setf(uint8_t agctabdto6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabdto6 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl24_agc_tab_dto5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl24_agc_tab_dto5_setf(uint8_t agctabdto5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabdto5 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl24_agc_tab_dto4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl24_agc_tab_dto4_setf(uint8_t agctabdto4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabdto4 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl24_agc_tab_dto3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl24_agc_tab_dto3_setf(uint8_t agctabdto3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL24_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabdto3 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL25 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         agc_tab_ato1   0b93
 *  23:16         agc_tab_ato0   0b127
 *  15:08         agc_tab_dto8   0b0
 *  07:00         agc_tab_dto7   0b48
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET 0x00000064


__INLINE static uint32_t bb_top_i_dig_bb_ctrl25_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl25_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO1_MASK                     ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO1_LSB                      24
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO1_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO0_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO0_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO0_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO8_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO8_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO8_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO7_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO7_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO7_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO1_RST                      0x93
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_ATO0_RST                      0x127
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO8_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL25_AGC_TAB_DTO7_RST                      0x48

__INLINE static void bb_top_i_dig_bb_ctrl25_pack(uint8_t agctabato1, uint8_t agctabato0, uint8_t agctabdto8, uint8_t agctabdto7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabato1 << 24) | ((uint32_t)agctabato0 << 16) | ((uint32_t)agctabdto8 << 8) | ((uint32_t)agctabdto7 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl25_unpack(uint8_t* agctabato1, uint8_t* agctabato0, uint8_t* agctabdto8, uint8_t* agctabdto7)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabato1 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabato0 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabdto8 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabdto7 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl25_agc_tab_ato1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl25_agc_tab_ato1_setf(uint8_t agctabato1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabato1 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl25_agc_tab_ato0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl25_agc_tab_ato0_setf(uint8_t agctabato0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabato0 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl25_agc_tab_dto8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl25_agc_tab_dto8_setf(uint8_t agctabdto8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabdto8 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl25_agc_tab_dto7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl25_agc_tab_dto7_setf(uint8_t agctabdto7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL25_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabdto7 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL26 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24         agc_tab_ato5   0b69
 *  23:16         agc_tab_ato4   0b75
 *  15:08         agc_tab_ato3   0b81
 *  07:00         agc_tab_ato2   0b87
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET 0x00000068


__INLINE static uint32_t bb_top_i_dig_bb_ctrl26_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl26_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO5_MASK                     ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO5_LSB                      24
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO5_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO4_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO4_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO4_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO3_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO3_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO3_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO2_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO2_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO2_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO5_RST                      0x69
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO4_RST                      0x75
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO3_RST                      0x81
#define BB_TOP_I_DIG_BB_CTRL26_AGC_TAB_ATO2_RST                      0x87

__INLINE static void bb_top_i_dig_bb_ctrl26_pack(uint8_t agctabato5, uint8_t agctabato4, uint8_t agctabato3, uint8_t agctabato2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabato5 << 24) | ((uint32_t)agctabato4 << 16) | ((uint32_t)agctabato3 << 8) | ((uint32_t)agctabato2 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl26_unpack(uint8_t* agctabato5, uint8_t* agctabato4, uint8_t* agctabato3, uint8_t* agctabato2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabato5 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabato4 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabato3 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabato2 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl26_agc_tab_ato5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl26_agc_tab_ato5_setf(uint8_t agctabato5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabato5 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl26_agc_tab_ato4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl26_agc_tab_ato4_setf(uint8_t agctabato4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabato4 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl26_agc_tab_ato3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl26_agc_tab_ato3_setf(uint8_t agctabato3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabato3 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl26_agc_tab_ato2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl26_agc_tab_ato2_setf(uint8_t agctabato2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL26_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabato2 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL27 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        agc_tab_gain0   0b86
 *  23:16         agc_tab_ato8   0b51
 *  15:08         agc_tab_ato7   0b57
 *  07:00         agc_tab_ato6   0b63
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET 0x0000006C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl27_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl27_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_GAIN0_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_GAIN0_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_GAIN0_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO8_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO8_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO8_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO7_MASK                     ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO7_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO7_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO6_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO6_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO6_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_GAIN0_RST                     0x86
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO8_RST                      0x51
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO7_RST                      0x57
#define BB_TOP_I_DIG_BB_CTRL27_AGC_TAB_ATO6_RST                      0x63

__INLINE static void bb_top_i_dig_bb_ctrl27_pack(uint8_t agctabgain0, uint8_t agctabato8, uint8_t agctabato7, uint8_t agctabato6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabgain0 << 24) | ((uint32_t)agctabato8 << 16) | ((uint32_t)agctabato7 << 8) | ((uint32_t)agctabato6 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl27_unpack(uint8_t* agctabgain0, uint8_t* agctabato8, uint8_t* agctabato7, uint8_t* agctabato6)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabgain0 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabato8 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabato7 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabato6 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl27_agc_tab_gain0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl27_agc_tab_gain0_setf(uint8_t agctabgain0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabgain0 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl27_agc_tab_ato8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl27_agc_tab_ato8_setf(uint8_t agctabato8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabato8 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl27_agc_tab_ato7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl27_agc_tab_ato7_setf(uint8_t agctabato7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabato7 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl27_agc_tab_ato6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl27_agc_tab_ato6_setf(uint8_t agctabato6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL27_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabato6 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL28 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        agc_tab_gain4   0b62
 *  23:16        agc_tab_gain3   0b68
 *  15:08        agc_tab_gain2   0b74
 *  07:00        agc_tab_gain1   0b80
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET 0x00000070


__INLINE static uint32_t bb_top_i_dig_bb_ctrl28_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl28_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN4_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN4_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN4_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN3_MASK                    ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN3_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN3_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN2_MASK                    ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN2_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN2_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN1_MASK                    ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN1_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN1_WIDTH                   ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN4_RST                     0x62
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN3_RST                     0x68
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN2_RST                     0x74
#define BB_TOP_I_DIG_BB_CTRL28_AGC_TAB_GAIN1_RST                     0x80

__INLINE static void bb_top_i_dig_bb_ctrl28_pack(uint8_t agctabgain4, uint8_t agctabgain3, uint8_t agctabgain2, uint8_t agctabgain1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabgain4 << 24) | ((uint32_t)agctabgain3 << 16) | ((uint32_t)agctabgain2 << 8) | ((uint32_t)agctabgain1 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl28_unpack(uint8_t* agctabgain4, uint8_t* agctabgain3, uint8_t* agctabgain2, uint8_t* agctabgain1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabgain4 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabgain3 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabgain2 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabgain1 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl28_agc_tab_gain4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl28_agc_tab_gain4_setf(uint8_t agctabgain4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabgain4 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl28_agc_tab_gain3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl28_agc_tab_gain3_setf(uint8_t agctabgain3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabgain3 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl28_agc_tab_gain2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl28_agc_tab_gain2_setf(uint8_t agctabgain2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabgain2 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl28_agc_tab_gain1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl28_agc_tab_gain1_setf(uint8_t agctabgain1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL28_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabgain1 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL29 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24        agc_tab_gain8   0b38
 *  23:16        agc_tab_gain7   0b44
 *  15:08        agc_tab_gain6   0b50
 *  07:00        agc_tab_gain5   0b56
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET 0x00000074


__INLINE static uint32_t bb_top_i_dig_bb_ctrl29_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl29_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN8_MASK                    ((uint32_t)0xFF000000)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN8_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN8_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN7_MASK                    ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN7_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN7_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN6_MASK                    ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN6_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN6_WIDTH                   ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN5_MASK                    ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN5_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN5_WIDTH                   ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN8_RST                     0x38
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN7_RST                     0x44
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN6_RST                     0x50
#define BB_TOP_I_DIG_BB_CTRL29_AGC_TAB_GAIN5_RST                     0x56

__INLINE static void bb_top_i_dig_bb_ctrl29_pack(uint8_t agctabgain8, uint8_t agctabgain7, uint8_t agctabgain6, uint8_t agctabgain5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agctabgain8 << 24) | ((uint32_t)agctabgain7 << 16) | ((uint32_t)agctabgain6 << 8) | ((uint32_t)agctabgain5 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl29_unpack(uint8_t* agctabgain8, uint8_t* agctabgain7, uint8_t* agctabgain6, uint8_t* agctabgain5)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agctabgain8 = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *agctabgain7 = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *agctabgain6 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *agctabgain5 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl29_agc_tab_gain8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl29_agc_tab_gain8_setf(uint8_t agctabgain8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFF000000)) | ((uint32_t)agctabgain8 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl29_agc_tab_gain7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl29_agc_tab_gain7_setf(uint8_t agctabgain7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)agctabgain7 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl29_agc_tab_gain6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl29_agc_tab_gain6_setf(uint8_t agctabgain6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)agctabgain6 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl29_agc_tab_gain5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl29_agc_tab_gain5_setf(uint8_t agctabgain5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL29_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agctabgain5 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL30 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:22         dcoc_flt_phy   0b845
 *  21:18        dcoc_amp_step   0b8
 *  17:12         dcoc_amp_ini   0b16
 *  11:08       dcoc_resdc_thd   0b5
 *  07:02         dcoc_phy_thd   0b25
 *     01         dcoc_cal_mod   0
 *     00              dcoc_en   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET 0x00000078


__INLINE static uint32_t bb_top_i_dig_bb_ctrl30_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_FLT_PHY_MASK                     ((uint32_t)0xFFC00000)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_FLT_PHY_LSB                      22
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_FLT_PHY_WIDTH                    ((uint32_t)0x0000000A)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_STEP_MASK                    ((uint32_t)0x003C0000)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_STEP_LSB                     18
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_STEP_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_INI_MASK                     ((uint32_t)0x0003F000)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_INI_LSB                      12
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_INI_WIDTH                    ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_RESDC_THD_MASK                   ((uint32_t)0x00000F00)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_RESDC_THD_LSB                    8
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_RESDC_THD_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_PHY_THD_MASK                     ((uint32_t)0x000000FC)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_PHY_THD_LSB                      2
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_PHY_THD_WIDTH                    ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_CAL_MOD_BIT                      ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_CAL_MOD_POS                      1
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_EN_BIT                           ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_EN_POS                           0

#define BB_TOP_I_DIG_BB_CTRL30_DCOC_FLT_PHY_RST                      0x845
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_STEP_RST                     0x8
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_AMP_INI_RST                      0x16
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_RESDC_THD_RST                    0x5
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_PHY_THD_RST                      0x25
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_CAL_MOD_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL30_DCOC_EN_RST                           0x0

__INLINE static void bb_top_i_dig_bb_ctrl30_pack(uint16_t dcocfltphy, uint8_t dcocampstep, uint8_t dcocampini, uint8_t dcocresdcthd, uint8_t dcocphythd, uint8_t dcoccalmod, uint8_t dcocen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dcocfltphy << 22) | ((uint32_t)dcocampstep << 18) | ((uint32_t)dcocampini << 12) | ((uint32_t)dcocresdcthd << 8) | ((uint32_t)dcocphythd << 2) | ((uint32_t)dcoccalmod << 1) | ((uint32_t)dcocen << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl30_unpack(uint8_t* dcocfltphy, uint8_t* dcocampstep, uint8_t* dcocampini, uint8_t* dcocresdcthd, uint8_t* dcocphythd, uint8_t* dcoccalmod, uint8_t* dcocen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dcocfltphy = (localVal & ((uint32_t)0xFFC00000)) >> 22;
    *dcocampstep = (localVal & ((uint32_t)0x003C0000)) >> 18;
    *dcocampini = (localVal & ((uint32_t)0x0003F000)) >> 12;
    *dcocresdcthd = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *dcocphythd = (localVal & ((uint32_t)0x000000FC)) >> 2;
    *dcoccalmod = (localVal & ((uint32_t)0x00000002)) >> 1;
    *dcocen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl30_dcoc_flt_phy_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFC00000)) >> 22);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_flt_phy_setf(uint16_t dcocfltphy)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xFFC00000)) | ((uint32_t)dcocfltphy << 22));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_amp_step_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003C0000)) >> 18);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_amp_step_setf(uint8_t dcocampstep)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x003C0000)) | ((uint32_t)dcocampstep << 18));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_amp_ini_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0003F000)) >> 12);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_amp_ini_setf(uint8_t dcocampini)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0003F000)) | ((uint32_t)dcocampini << 12));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_resdc_thd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_resdc_thd_setf(uint8_t dcocresdcthd)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)dcocresdcthd << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_phy_thd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FC)) >> 2);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_phy_thd_setf(uint8_t dcocphythd)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FC)) | ((uint32_t)dcocphythd << 2));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_cal_mod_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_cal_mod_setf(uint8_t dcoccalmod)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)dcoccalmod << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl30_dcoc_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl30_dcoc_en_setf(uint8_t dcocen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL30_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)dcocen << 0));
}

 /**
 * @brief I_DIG_BB_CTRL31 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:20            dcoc_phy2   0b683
 *  19:10            dcoc_phy1   0b341
 *  09:00            dcoc_phy0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET 0x0000007C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl31_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY2_MASK                        ((uint32_t)0x3FF00000)
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY2_LSB                         20
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY2_WIDTH                       ((uint32_t)0x0000000A)
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY1_MASK                        ((uint32_t)0x000FFC00)
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY1_LSB                         10
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY1_WIDTH                       ((uint32_t)0x0000000A)
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY0_MASK                        ((uint32_t)0x000003FF)
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY0_LSB                         0
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY0_WIDTH                       ((uint32_t)0x0000000A)

#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY2_RST                         0x683
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY1_RST                         0x341
#define BB_TOP_I_DIG_BB_CTRL31_DCOC_PHY0_RST                         0x0

__INLINE static void bb_top_i_dig_bb_ctrl31_pack(uint16_t dcocphy2, uint16_t dcocphy1, uint16_t dcocphy0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dcocphy2 << 20) | ((uint32_t)dcocphy1 << 10) | ((uint32_t)dcocphy0 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl31_unpack(uint8_t* dcocphy2, uint8_t* dcocphy1, uint8_t* dcocphy0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dcocphy2 = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *dcocphy1 = (localVal & ((uint32_t)0x000FFC00)) >> 10;
    *dcocphy0 = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl31_dcoc_phy2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void bb_top_i_dig_bb_ctrl31_dcoc_phy2_setf(uint16_t dcocphy2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)dcocphy2 << 20));
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl31_dcoc_phy1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFC00)) >> 10);
}

__INLINE static void bb_top_i_dig_bb_ctrl31_dcoc_phy1_setf(uint16_t dcocphy1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000FFC00)) | ((uint32_t)dcocphy1 << 10));
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl31_dcoc_phy0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl31_dcoc_phy0_setf(uint16_t dcocphy0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL31_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000003FF)) | ((uint32_t)dcocphy0 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL32 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     14                ld_en   0
 *  13:12              ld_time   0b10
 *  11:10     len_slot_fr_spir   0b10
 *  09:07       len_ct_fr_spir   0b0
 *  06:04       len_fc_fr_spir   0b10
 *  03:01      len_rst_fr_spir   0b10
 *     00     clk_flag_fr_spir   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET 0x00000080


__INLINE static uint32_t bb_top_i_dig_bb_ctrl32_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL32_LD_EN_BIT                             ((uint32_t)0x00004000)
#define BB_TOP_I_DIG_BB_CTRL32_LD_EN_POS                             14
#define BB_TOP_I_DIG_BB_CTRL32_LD_TIME_MASK                          ((uint32_t)0x00003000)
#define BB_TOP_I_DIG_BB_CTRL32_LD_TIME_LSB                           12
#define BB_TOP_I_DIG_BB_CTRL32_LD_TIME_WIDTH                         ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_SLOT_FR_SPIR_MASK                 ((uint32_t)0x00000C00)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_SLOT_FR_SPIR_LSB                  10
#define BB_TOP_I_DIG_BB_CTRL32_LEN_SLOT_FR_SPIR_WIDTH                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_CT_FR_SPIR_MASK                   ((uint32_t)0x00000380)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_CT_FR_SPIR_LSB                    7
#define BB_TOP_I_DIG_BB_CTRL32_LEN_CT_FR_SPIR_WIDTH                  ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_FC_FR_SPIR_MASK                   ((uint32_t)0x00000070)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_FC_FR_SPIR_LSB                    4
#define BB_TOP_I_DIG_BB_CTRL32_LEN_FC_FR_SPIR_WIDTH                  ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_RST_FR_SPIR_MASK                  ((uint32_t)0x0000000E)
#define BB_TOP_I_DIG_BB_CTRL32_LEN_RST_FR_SPIR_LSB                   1
#define BB_TOP_I_DIG_BB_CTRL32_LEN_RST_FR_SPIR_WIDTH                 ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL32_CLK_FLAG_FR_SPIR_BIT                  ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL32_CLK_FLAG_FR_SPIR_POS                  0

#define BB_TOP_I_DIG_BB_CTRL32_LD_EN_RST                             0x0
#define BB_TOP_I_DIG_BB_CTRL32_LD_TIME_RST                           0x10
#define BB_TOP_I_DIG_BB_CTRL32_LEN_SLOT_FR_SPIR_RST                  0x10
#define BB_TOP_I_DIG_BB_CTRL32_LEN_CT_FR_SPIR_RST                    0x0
#define BB_TOP_I_DIG_BB_CTRL32_LEN_FC_FR_SPIR_RST                    0x10
#define BB_TOP_I_DIG_BB_CTRL32_LEN_RST_FR_SPIR_RST                   0x10
#define BB_TOP_I_DIG_BB_CTRL32_CLK_FLAG_FR_SPIR_RST                  0x0

__INLINE static void bb_top_i_dig_bb_ctrl32_pack(uint8_t lden, uint8_t ldtime, uint8_t lenslotfrspir, uint8_t lenctfrspir, uint8_t lenfcfrspir, uint8_t lenrstfrspir, uint8_t clkflagfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)lden << 14) | ((uint32_t)ldtime << 12) | ((uint32_t)lenslotfrspir << 10) | ((uint32_t)lenctfrspir << 7) | ((uint32_t)lenfcfrspir << 4) | ((uint32_t)lenrstfrspir << 1) | ((uint32_t)clkflagfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl32_unpack(uint8_t* lden, uint8_t* ldtime, uint8_t* lenslotfrspir, uint8_t* lenctfrspir, uint8_t* lenfcfrspir, uint8_t* lenrstfrspir, uint8_t* clkflagfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *lden = (localVal & ((uint32_t)0x00004000)) >> 14;
    *ldtime = (localVal & ((uint32_t)0x00003000)) >> 12;
    *lenslotfrspir = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *lenctfrspir = (localVal & ((uint32_t)0x00000380)) >> 7;
    *lenfcfrspir = (localVal & ((uint32_t)0x00000070)) >> 4;
    *lenrstfrspir = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *clkflagfrspir = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_ld_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_ld_en_setf(uint8_t lden)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)lden << 14));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_ld_time_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_ld_time_setf(uint8_t ldtime)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)ldtime << 12));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_len_slot_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_len_slot_fr_spir_setf(uint8_t lenslotfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)lenslotfrspir << 10));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_len_ct_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000380)) >> 7);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_len_ct_fr_spir_setf(uint8_t lenctfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000380)) | ((uint32_t)lenctfrspir << 7));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_len_fc_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_len_fc_fr_spir_setf(uint8_t lenfcfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)lenfcfrspir << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_len_rst_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_len_rst_fr_spir_setf(uint8_t lenrstfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)lenrstfrspir << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl32_clk_flag_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl32_clk_flag_fr_spir_setf(uint8_t clkflagfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL32_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)clkflagfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL33 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31   ct_override_fr_spir   0
 *  08:00      ct_word_fr_spir   0b100
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET 0x00000084


__INLINE static uint32_t bb_top_i_dig_bb_ctrl33_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl33_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL33_CT_OVERRIDE_FR_SPIR_BIT               ((uint32_t)0x80000000)
#define BB_TOP_I_DIG_BB_CTRL33_CT_OVERRIDE_FR_SPIR_POS               31
#define BB_TOP_I_DIG_BB_CTRL33_CT_WORD_FR_SPIR_MASK                  ((uint32_t)0x000001FF)
#define BB_TOP_I_DIG_BB_CTRL33_CT_WORD_FR_SPIR_LSB                   0
#define BB_TOP_I_DIG_BB_CTRL33_CT_WORD_FR_SPIR_WIDTH                 ((uint32_t)0x00000009)

#define BB_TOP_I_DIG_BB_CTRL33_CT_OVERRIDE_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL33_CT_WORD_FR_SPIR_RST                   0x100

__INLINE static void bb_top_i_dig_bb_ctrl33_pack(uint8_t ctoverridefrspir, uint16_t ctwordfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)ctoverridefrspir << 31) | ((uint32_t)ctwordfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl33_unpack(uint8_t* ctoverridefrspir, uint8_t* ctwordfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *ctoverridefrspir = (localVal & ((uint32_t)0x80000000)) >> 31;
    *ctwordfrspir = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl33_ct_override_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_i_dig_bb_ctrl33_ct_override_fr_spir_setf(uint8_t ctoverridefrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)ctoverridefrspir << 31));
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl33_ct_word_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl33_ct_word_fr_spir_setf(uint16_t ctwordfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL33_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000001FF)) | ((uint32_t)ctwordfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL34 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31    targ_cnt_override   0
 *  19:00     targ_cnt_fr_spir   0b2440
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET 0x00000088


__INLINE static uint32_t bb_top_i_dig_bb_ctrl34_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl34_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_OVERRIDE_BIT                 ((uint32_t)0x80000000)
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_OVERRIDE_POS                 31
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_FR_SPIR_MASK                 ((uint32_t)0x000FFFFF)
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_FR_SPIR_LSB                  0
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_FR_SPIR_WIDTH                ((uint32_t)0x00000014)

#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL34_TARG_CNT_FR_SPIR_RST                  0x2440

__INLINE static void bb_top_i_dig_bb_ctrl34_pack(uint8_t targcntoverride, uint32_t targcntfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)targcntoverride << 31) | ((uint32_t)targcntfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl34_unpack(uint8_t* targcntoverride, uint8_t* targcntfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *targcntoverride = (localVal & ((uint32_t)0x80000000)) >> 31;
    *targcntfrspir = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl34_targ_cnt_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_i_dig_bb_ctrl34_targ_cnt_override_setf(uint8_t targcntoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)targcntoverride << 31));
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl34_targ_cnt_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl34_targ_cnt_fr_spir_setf(uint32_t targcntfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL34_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)targcntfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL35 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     24        cnt_manual_en   0
 *     23    clk_edge_polarity   0
 *     22    tp_cal_en_fr_spir   0
 *     21    delta_ftx_fr_spir   0
 *     20      mod_sel_fr_spir   1
 *  19:18     leng_tm1_fr_spir   0b0
 *  17:16     leng_tm0_fr_spir   0b0
 *  14:08      kdac_fi_fr_spir   0b40
 *  06:00      kdac_co_fr_spir   0b40
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET 0x0000008C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl35_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL35_CNT_MANUAL_EN_BIT                     ((uint32_t)0x01000000)
#define BB_TOP_I_DIG_BB_CTRL35_CNT_MANUAL_EN_POS                     24
#define BB_TOP_I_DIG_BB_CTRL35_CLK_EDGE_POLARITY_BIT                 ((uint32_t)0x00800000)
#define BB_TOP_I_DIG_BB_CTRL35_CLK_EDGE_POLARITY_POS                 23
#define BB_TOP_I_DIG_BB_CTRL35_TP_CAL_EN_FR_SPIR_BIT                 ((uint32_t)0x00400000)
#define BB_TOP_I_DIG_BB_CTRL35_TP_CAL_EN_FR_SPIR_POS                 22
#define BB_TOP_I_DIG_BB_CTRL35_DELTA_FTX_FR_SPIR_BIT                 ((uint32_t)0x00200000)
#define BB_TOP_I_DIG_BB_CTRL35_DELTA_FTX_FR_SPIR_POS                 21
#define BB_TOP_I_DIG_BB_CTRL35_MOD_SEL_FR_SPIR_BIT                   ((uint32_t)0x00100000)
#define BB_TOP_I_DIG_BB_CTRL35_MOD_SEL_FR_SPIR_POS                   20
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM1_FR_SPIR_MASK                 ((uint32_t)0x000C0000)
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM1_FR_SPIR_LSB                  18
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM1_FR_SPIR_WIDTH                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM0_FR_SPIR_MASK                 ((uint32_t)0x00030000)
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM0_FR_SPIR_LSB                  16
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM0_FR_SPIR_WIDTH                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_FI_FR_SPIR_MASK                  ((uint32_t)0x00007F00)
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_FI_FR_SPIR_LSB                   8
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_FI_FR_SPIR_WIDTH                 ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_CO_FR_SPIR_MASK                  ((uint32_t)0x0000007F)
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_CO_FR_SPIR_LSB                   0
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_CO_FR_SPIR_WIDTH                 ((uint32_t)0x00000007)

#define BB_TOP_I_DIG_BB_CTRL35_CNT_MANUAL_EN_RST                     0x0
#define BB_TOP_I_DIG_BB_CTRL35_CLK_EDGE_POLARITY_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL35_TP_CAL_EN_FR_SPIR_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL35_DELTA_FTX_FR_SPIR_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL35_MOD_SEL_FR_SPIR_RST                   0x1
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM1_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL35_LENG_TM0_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_FI_FR_SPIR_RST                   0x40
#define BB_TOP_I_DIG_BB_CTRL35_KDAC_CO_FR_SPIR_RST                   0x40

__INLINE static void bb_top_i_dig_bb_ctrl35_pack(uint8_t cntmanualen, uint8_t clkedgepolarity, uint8_t tpcalenfrspir, uint8_t deltaftxfrspir, uint8_t modselfrspir, uint8_t lengtm1frspir, uint8_t lengtm0frspir, uint8_t kdacfifrspir, uint8_t kdaccofrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)cntmanualen << 24) | ((uint32_t)clkedgepolarity << 23) | ((uint32_t)tpcalenfrspir << 22) | ((uint32_t)deltaftxfrspir << 21) | ((uint32_t)modselfrspir << 20) | ((uint32_t)lengtm1frspir << 18) | ((uint32_t)lengtm0frspir << 16) | ((uint32_t)kdacfifrspir << 8) | ((uint32_t)kdaccofrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl35_unpack(uint8_t* cntmanualen, uint8_t* clkedgepolarity, uint8_t* tpcalenfrspir, uint8_t* deltaftxfrspir, uint8_t* modselfrspir, uint8_t* lengtm1frspir, uint8_t* lengtm0frspir, uint8_t* kdacfifrspir, uint8_t* kdaccofrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *cntmanualen = (localVal & ((uint32_t)0x01000000)) >> 24;
    *clkedgepolarity = (localVal & ((uint32_t)0x00800000)) >> 23;
    *tpcalenfrspir = (localVal & ((uint32_t)0x00400000)) >> 22;
    *deltaftxfrspir = (localVal & ((uint32_t)0x00200000)) >> 21;
    *modselfrspir = (localVal & ((uint32_t)0x00100000)) >> 20;
    *lengtm1frspir = (localVal & ((uint32_t)0x000C0000)) >> 18;
    *lengtm0frspir = (localVal & ((uint32_t)0x00030000)) >> 16;
    *kdacfifrspir = (localVal & ((uint32_t)0x00007F00)) >> 8;
    *kdaccofrspir = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_cnt_manual_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_cnt_manual_en_setf(uint8_t cntmanualen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)cntmanualen << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_clk_edge_polarity_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_clk_edge_polarity_setf(uint8_t clkedgepolarity)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)clkedgepolarity << 23));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_tp_cal_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00400000)) >> 22);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_tp_cal_en_fr_spir_setf(uint8_t tpcalenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00400000)) | ((uint32_t)tpcalenfrspir << 22));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_delta_ftx_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00200000)) >> 21);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_delta_ftx_fr_spir_setf(uint8_t deltaftxfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00200000)) | ((uint32_t)deltaftxfrspir << 21));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_mod_sel_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_mod_sel_fr_spir_setf(uint8_t modselfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)modselfrspir << 20));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_leng_tm1_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000C0000)) >> 18);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_leng_tm1_fr_spir_setf(uint8_t lengtm1frspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000C0000)) | ((uint32_t)lengtm1frspir << 18));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_leng_tm0_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_leng_tm0_fr_spir_setf(uint8_t lengtm0frspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)lengtm0frspir << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_kdac_fi_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_kdac_fi_fr_spir_setf(uint8_t kdacfifrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00007F00)) | ((uint32_t)kdacfifrspir << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl35_kdac_co_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl35_kdac_co_fr_spir_setf(uint8_t kdaccofrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL35_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)kdaccofrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL36 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:00       reg_dc_fr_spir   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET 0x00000090


__INLINE static uint32_t bb_top_i_dig_bb_ctrl36_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl36_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL36_REG_DC_FR_SPIR_MASK                   ((uint32_t)0x000FFFFF)
#define BB_TOP_I_DIG_BB_CTRL36_REG_DC_FR_SPIR_LSB                    0
#define BB_TOP_I_DIG_BB_CTRL36_REG_DC_FR_SPIR_WIDTH                  ((uint32_t)0x00000014)

#define BB_TOP_I_DIG_BB_CTRL36_REG_DC_FR_SPIR_RST                    0x0

__INLINE static void bb_top_i_dig_bb_ctrl36_pack(uint32_t regdcfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)regdcfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl36_unpack(uint8_t* regdcfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *regdcfrspir = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl36_reg_dc_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl36_reg_dc_fr_spir_setf(uint32_t regdcfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL36_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)regdcfrspir << 0);
}

 /**
 * @brief I_DIG_BB_CTRL37 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     16      tp_cal_override   0
 *  12:08         rcal_fr_spir   0b10
 *  06:00         kcal_fr_spir   0b40
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET 0x00000094


__INLINE static uint32_t bb_top_i_dig_bb_ctrl37_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl37_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL37_TP_CAL_OVERRIDE_BIT                   ((uint32_t)0x00010000)
#define BB_TOP_I_DIG_BB_CTRL37_TP_CAL_OVERRIDE_POS                   16
#define BB_TOP_I_DIG_BB_CTRL37_RCAL_FR_SPIR_MASK                     ((uint32_t)0x00001F00)
#define BB_TOP_I_DIG_BB_CTRL37_RCAL_FR_SPIR_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL37_RCAL_FR_SPIR_WIDTH                    ((uint32_t)0x00000005)
#define BB_TOP_I_DIG_BB_CTRL37_KCAL_FR_SPIR_MASK                     ((uint32_t)0x0000007F)
#define BB_TOP_I_DIG_BB_CTRL37_KCAL_FR_SPIR_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL37_KCAL_FR_SPIR_WIDTH                    ((uint32_t)0x00000007)

#define BB_TOP_I_DIG_BB_CTRL37_TP_CAL_OVERRIDE_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL37_RCAL_FR_SPIR_RST                      0x10
#define BB_TOP_I_DIG_BB_CTRL37_KCAL_FR_SPIR_RST                      0x40

__INLINE static void bb_top_i_dig_bb_ctrl37_pack(uint8_t tpcaloverride, uint8_t rcalfrspir, uint8_t kcalfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)tpcaloverride << 16) | ((uint32_t)rcalfrspir << 8) | ((uint32_t)kcalfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl37_unpack(uint8_t* tpcaloverride, uint8_t* rcalfrspir, uint8_t* kcalfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *tpcaloverride = (localVal & ((uint32_t)0x00010000)) >> 16;
    *rcalfrspir = (localVal & ((uint32_t)0x00001F00)) >> 8;
    *kcalfrspir = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl37_tp_cal_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl37_tp_cal_override_setf(uint8_t tpcaloverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)tpcaloverride << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl37_rcal_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl37_rcal_fr_spir_setf(uint8_t rcalfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001F00)) | ((uint32_t)rcalfrspir << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl37_kcal_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl37_kcal_fr_spir_setf(uint8_t kcalfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL37_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)kcalfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL38 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     16   intg_frac_override   0
 *  08:00         intg_fr_spir   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET 0x00000098


__INLINE static uint32_t bb_top_i_dig_bb_ctrl38_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl38_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FRAC_OVERRIDE_BIT                ((uint32_t)0x00010000)
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FRAC_OVERRIDE_POS                16
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FR_SPIR_MASK                     ((uint32_t)0x000001FF)
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FR_SPIR_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FR_SPIR_WIDTH                    ((uint32_t)0x00000009)

#define BB_TOP_I_DIG_BB_CTRL38_INTG_FRAC_OVERRIDE_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL38_INTG_FR_SPIR_RST                      0x0

__INLINE static void bb_top_i_dig_bb_ctrl38_pack(uint8_t intgfracoverride, uint16_t intgfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)intgfracoverride << 16) | ((uint32_t)intgfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl38_unpack(uint8_t* intgfracoverride, uint8_t* intgfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *intgfracoverride = (localVal & ((uint32_t)0x00010000)) >> 16;
    *intgfrspir = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl38_intg_frac_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl38_intg_frac_override_setf(uint8_t intgfracoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)intgfracoverride << 16));
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl38_intg_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl38_intg_fr_spir_setf(uint16_t intgfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL38_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000001FF)) | ((uint32_t)intgfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL39 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     24         dsm_override   0
 *  23:00         frac_fr_spir   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET 0x0000009C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl39_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl39_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL39_DSM_OVERRIDE_BIT                      ((uint32_t)0x01000000)
#define BB_TOP_I_DIG_BB_CTRL39_DSM_OVERRIDE_POS                      24
#define BB_TOP_I_DIG_BB_CTRL39_FRAC_FR_SPIR_MASK                     ((uint32_t)0x00FFFFFF)
#define BB_TOP_I_DIG_BB_CTRL39_FRAC_FR_SPIR_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL39_FRAC_FR_SPIR_WIDTH                    ((uint32_t)0x00000018)

#define BB_TOP_I_DIG_BB_CTRL39_DSM_OVERRIDE_RST                      0x0
#define BB_TOP_I_DIG_BB_CTRL39_FRAC_FR_SPIR_RST                      0x0

__INLINE static void bb_top_i_dig_bb_ctrl39_pack(uint8_t dsmoverride, uint32_t fracfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dsmoverride << 24) | ((uint32_t)fracfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl39_unpack(uint8_t* dsmoverride, uint8_t* fracfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dsmoverride = (localVal & ((uint32_t)0x01000000)) >> 24;
    *fracfrspir = (localVal & ((uint32_t)0x00FFFFFF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl39_dsm_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl39_dsm_override_setf(uint8_t dsmoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)dsmoverride << 24));
}

__INLINE static uint32_t bb_top_i_dig_bb_ctrl39_frac_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FFFFFF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl39_frac_fr_spir_setf(uint32_t fracfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL39_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FFFFFF)) | ((uint32_t)fracfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL40 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04    pll_test_override   0
 *     03    rx_bb_en_override   0
 *     02    tx_bb_en_override   0
 *     01       rx_en_override   0
 *     00    tx_pa_en_override   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET 0x000000A0


__INLINE static uint32_t bb_top_i_dig_bb_ctrl40_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL40_PLL_TEST_OVERRIDE_BIT                 ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL40_PLL_TEST_OVERRIDE_POS                 4
#define BB_TOP_I_DIG_BB_CTRL40_RX_BB_EN_OVERRIDE_BIT                 ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL40_RX_BB_EN_OVERRIDE_POS                 3
#define BB_TOP_I_DIG_BB_CTRL40_TX_BB_EN_OVERRIDE_BIT                 ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL40_TX_BB_EN_OVERRIDE_POS                 2
#define BB_TOP_I_DIG_BB_CTRL40_RX_EN_OVERRIDE_BIT                    ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL40_RX_EN_OVERRIDE_POS                    1
#define BB_TOP_I_DIG_BB_CTRL40_TX_PA_EN_OVERRIDE_BIT                 ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL40_TX_PA_EN_OVERRIDE_POS                 0

#define BB_TOP_I_DIG_BB_CTRL40_PLL_TEST_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL40_RX_BB_EN_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL40_TX_BB_EN_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL40_RX_EN_OVERRIDE_RST                    0x0
#define BB_TOP_I_DIG_BB_CTRL40_TX_PA_EN_OVERRIDE_RST                 0x0

__INLINE static void bb_top_i_dig_bb_ctrl40_pack(uint8_t plltestoverride, uint8_t rxbbenoverride, uint8_t txbbenoverride, uint8_t rxenoverride, uint8_t txpaenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)plltestoverride << 4) | ((uint32_t)rxbbenoverride << 3) | ((uint32_t)txbbenoverride << 2) | ((uint32_t)rxenoverride << 1) | ((uint32_t)txpaenoverride << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl40_unpack(uint8_t* plltestoverride, uint8_t* rxbbenoverride, uint8_t* txbbenoverride, uint8_t* rxenoverride, uint8_t* txpaenoverride)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *plltestoverride = (localVal & ((uint32_t)0x00000010)) >> 4;
    *rxbbenoverride = (localVal & ((uint32_t)0x00000008)) >> 3;
    *txbbenoverride = (localVal & ((uint32_t)0x00000004)) >> 2;
    *rxenoverride = (localVal & ((uint32_t)0x00000002)) >> 1;
    *txpaenoverride = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl40_pll_test_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_pll_test_override_setf(uint8_t plltestoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)plltestoverride << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl40_rx_bb_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_rx_bb_en_override_setf(uint8_t rxbbenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)rxbbenoverride << 3));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl40_tx_bb_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_tx_bb_en_override_setf(uint8_t txbbenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)txbbenoverride << 2));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl40_rx_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_rx_en_override_setf(uint8_t rxenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rxenoverride << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl40_tx_pa_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl40_tx_pa_en_override_setf(uint8_t txpaenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL40_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)txpaenoverride << 0));
}

 /**
 * @brief I_DIG_BB_CTRL41 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08      pa_setb_fr_spir   1
 *     07          rst_fr_spir   0
 *     06   tpm_mod_en_fr_spir   0
 *     05   rx_at_ctrl0_fr_spir   0
 *     04   tx_at_ctrl0_fr_spir   0
 *     03     rx_bb_en_fr_spir   0
 *     02     tx_bb_en_fr_spir   0
 *     01        rx_en_fr_spir   0
 *     00     tx_pa_en_fr_spir   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET 0x000000A4


__INLINE static uint32_t bb_top_i_dig_bb_ctrl41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL41_PA_SETB_FR_SPIR_BIT                   ((uint32_t)0x00000100)
#define BB_TOP_I_DIG_BB_CTRL41_PA_SETB_FR_SPIR_POS                   8
#define BB_TOP_I_DIG_BB_CTRL41_RST_FR_SPIR_BIT                       ((uint32_t)0x00000080)
#define BB_TOP_I_DIG_BB_CTRL41_RST_FR_SPIR_POS                       7
#define BB_TOP_I_DIG_BB_CTRL41_TPM_MOD_EN_FR_SPIR_BIT                ((uint32_t)0x00000040)
#define BB_TOP_I_DIG_BB_CTRL41_TPM_MOD_EN_FR_SPIR_POS                6
#define BB_TOP_I_DIG_BB_CTRL41_RX_AT_CTRL0_FR_SPIR_BIT               ((uint32_t)0x00000020)
#define BB_TOP_I_DIG_BB_CTRL41_RX_AT_CTRL0_FR_SPIR_POS               5
#define BB_TOP_I_DIG_BB_CTRL41_TX_AT_CTRL0_FR_SPIR_BIT               ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL41_TX_AT_CTRL0_FR_SPIR_POS               4
#define BB_TOP_I_DIG_BB_CTRL41_RX_BB_EN_FR_SPIR_BIT                  ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL41_RX_BB_EN_FR_SPIR_POS                  3
#define BB_TOP_I_DIG_BB_CTRL41_TX_BB_EN_FR_SPIR_BIT                  ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL41_TX_BB_EN_FR_SPIR_POS                  2
#define BB_TOP_I_DIG_BB_CTRL41_RX_EN_FR_SPIR_BIT                     ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL41_RX_EN_FR_SPIR_POS                     1
#define BB_TOP_I_DIG_BB_CTRL41_TX_PA_EN_FR_SPIR_BIT                  ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL41_TX_PA_EN_FR_SPIR_POS                  0

#define BB_TOP_I_DIG_BB_CTRL41_PA_SETB_FR_SPIR_RST                   0x1
#define BB_TOP_I_DIG_BB_CTRL41_RST_FR_SPIR_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL41_TPM_MOD_EN_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL41_RX_AT_CTRL0_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL41_TX_AT_CTRL0_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL41_RX_BB_EN_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL41_TX_BB_EN_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL41_RX_EN_FR_SPIR_RST                     0x0
#define BB_TOP_I_DIG_BB_CTRL41_TX_PA_EN_FR_SPIR_RST                  0x0

__INLINE static void bb_top_i_dig_bb_ctrl41_pack(uint8_t pasetbfrspir, uint8_t rstfrspir, uint8_t tpmmodenfrspir, uint8_t rxatctrl0frspir, uint8_t txatctrl0frspir, uint8_t rxbbenfrspir, uint8_t txbbenfrspir, uint8_t rxenfrspir, uint8_t txpaenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)pasetbfrspir << 8) | ((uint32_t)rstfrspir << 7) | ((uint32_t)tpmmodenfrspir << 6) | ((uint32_t)rxatctrl0frspir << 5) | ((uint32_t)txatctrl0frspir << 4) | ((uint32_t)rxbbenfrspir << 3) | ((uint32_t)txbbenfrspir << 2) | ((uint32_t)rxenfrspir << 1) | ((uint32_t)txpaenfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl41_unpack(uint8_t* pasetbfrspir, uint8_t* rstfrspir, uint8_t* tpmmodenfrspir, uint8_t* rxatctrl0frspir, uint8_t* txatctrl0frspir, uint8_t* rxbbenfrspir, uint8_t* txbbenfrspir, uint8_t* rxenfrspir, uint8_t* txpaenfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *pasetbfrspir = (localVal & ((uint32_t)0x00000100)) >> 8;
    *rstfrspir = (localVal & ((uint32_t)0x00000080)) >> 7;
    *tpmmodenfrspir = (localVal & ((uint32_t)0x00000040)) >> 6;
    *rxatctrl0frspir = (localVal & ((uint32_t)0x00000020)) >> 5;
    *txatctrl0frspir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *rxbbenfrspir = (localVal & ((uint32_t)0x00000008)) >> 3;
    *txbbenfrspir = (localVal & ((uint32_t)0x00000004)) >> 2;
    *rxenfrspir = (localVal & ((uint32_t)0x00000002)) >> 1;
    *txpaenfrspir = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_pa_setb_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_pa_setb_fr_spir_setf(uint8_t pasetbfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)pasetbfrspir << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_rst_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_rst_fr_spir_setf(uint8_t rstfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)rstfrspir << 7));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_tpm_mod_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_tpm_mod_en_fr_spir_setf(uint8_t tpmmodenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)tpmmodenfrspir << 6));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_rx_at_ctrl0_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_rx_at_ctrl0_fr_spir_setf(uint8_t rxatctrl0frspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)rxatctrl0frspir << 5));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_tx_at_ctrl0_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_tx_at_ctrl0_fr_spir_setf(uint8_t txatctrl0frspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)txatctrl0frspir << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_rx_bb_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_rx_bb_en_fr_spir_setf(uint8_t rxbbenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)rxbbenfrspir << 3));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_tx_bb_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_tx_bb_en_fr_spir_setf(uint8_t txbbenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)txbbenfrspir << 2));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_rx_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_rx_en_fr_spir_setf(uint8_t rxenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rxenfrspir << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl41_tx_pa_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl41_tx_pa_en_fr_spir_setf(uint8_t txpaenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL41_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)txpaenfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL42 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06    synth_lo_override   0
 *     05   synth_tpm_en_override   0
 *     04   synth_vmid_override   0
 *     03   synth_bias_en_override   0
 *     02   synth_pfd_override   0
 *     01   synth_fch_override   0
 *     00   synth_ldo_override   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET 0x000000A8


__INLINE static uint32_t bb_top_i_dig_bb_ctrl42_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LO_OVERRIDE_BIT                 ((uint32_t)0x00000040)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LO_OVERRIDE_POS                 6
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_TPM_EN_OVERRIDE_BIT             ((uint32_t)0x00000020)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_TPM_EN_OVERRIDE_POS             5
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_VMID_OVERRIDE_BIT               ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_VMID_OVERRIDE_POS               4
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_BIAS_EN_OVERRIDE_BIT            ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_BIAS_EN_OVERRIDE_POS            3
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_PFD_OVERRIDE_BIT                ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_PFD_OVERRIDE_POS                2
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_FCH_OVERRIDE_BIT                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_FCH_OVERRIDE_POS                1
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LDO_OVERRIDE_BIT                ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LDO_OVERRIDE_POS                0

#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LO_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_TPM_EN_OVERRIDE_RST             0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_VMID_OVERRIDE_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_BIAS_EN_OVERRIDE_RST            0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_PFD_OVERRIDE_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_FCH_OVERRIDE_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL42_SYNTH_LDO_OVERRIDE_RST                0x0

__INLINE static void bb_top_i_dig_bb_ctrl42_pack(uint8_t synthlooverride, uint8_t synthtpmenoverride, uint8_t synthvmidoverride, uint8_t synthbiasenoverride, uint8_t synthpfdoverride, uint8_t synthfchoverride, uint8_t synthldooverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)synthlooverride << 6) | ((uint32_t)synthtpmenoverride << 5) | ((uint32_t)synthvmidoverride << 4) | ((uint32_t)synthbiasenoverride << 3) | ((uint32_t)synthpfdoverride << 2) | ((uint32_t)synthfchoverride << 1) | ((uint32_t)synthldooverride << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl42_unpack(uint8_t* synthlooverride, uint8_t* synthtpmenoverride, uint8_t* synthvmidoverride, uint8_t* synthbiasenoverride, uint8_t* synthpfdoverride, uint8_t* synthfchoverride, uint8_t* synthldooverride)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *synthlooverride = (localVal & ((uint32_t)0x00000040)) >> 6;
    *synthtpmenoverride = (localVal & ((uint32_t)0x00000020)) >> 5;
    *synthvmidoverride = (localVal & ((uint32_t)0x00000010)) >> 4;
    *synthbiasenoverride = (localVal & ((uint32_t)0x00000008)) >> 3;
    *synthpfdoverride = (localVal & ((uint32_t)0x00000004)) >> 2;
    *synthfchoverride = (localVal & ((uint32_t)0x00000002)) >> 1;
    *synthldooverride = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_lo_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_lo_override_setf(uint8_t synthlooverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)synthlooverride << 6));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_tpm_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_tpm_en_override_setf(uint8_t synthtpmenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)synthtpmenoverride << 5));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_vmid_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_vmid_override_setf(uint8_t synthvmidoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)synthvmidoverride << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_bias_en_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_bias_en_override_setf(uint8_t synthbiasenoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)synthbiasenoverride << 3));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_pfd_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_pfd_override_setf(uint8_t synthpfdoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)synthpfdoverride << 2));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_fch_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_fch_override_setf(uint8_t synthfchoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)synthfchoverride << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl42_synth_ldo_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl42_synth_ldo_override_setf(uint8_t synthldooverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL42_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)synthldooverride << 0));
}

 /**
 * @brief I_DIG_BB_CTRL43 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     19   tpm_dac_reset_fr_spir   0
 *     18        ct_en_fr_spir   0
 *     17      vmid_en_fr_spir   0
 *     16       tpm_en_fr_spir   0
 *     15   en_tpm_var_fr_spir   0
 *     14   reset_ndiv_fr_spir   0
 *     13       pfd_en_fr_spir   0
 *     12   fastcharge_vref_vco_fr_spir   0
 *     11   fch_vco_vos_fr_spir   0
 *     10   fch_vco_pbgen_fr_spir   0
 *     09   cp_bias_en_fr_spir   0
 *     08   en_vco_bias_fr_spir   0
 *     07   en_pll_imir_fr_spir   0
 *     06    en_pllbuf_fr_spir   0
 *     05      en_lotx_fr_spir   0
 *     04      en_lorx_fr_spir   0
 *     03    pu_ldo_lo_fr_spir   0
 *     02   pu_ldo_pll_fr_spir   0
 *     01   pu_ldo_vco_fr_spir   0
 *     00   pu_ldo_top_fr_spir   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET 0x000000AC


__INLINE static uint32_t bb_top_i_dig_bb_ctrl43_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL43_TPM_DAC_RESET_FR_SPIR_BIT             ((uint32_t)0x00080000)
#define BB_TOP_I_DIG_BB_CTRL43_TPM_DAC_RESET_FR_SPIR_POS             19
#define BB_TOP_I_DIG_BB_CTRL43_CT_EN_FR_SPIR_BIT                     ((uint32_t)0x00040000)
#define BB_TOP_I_DIG_BB_CTRL43_CT_EN_FR_SPIR_POS                     18
#define BB_TOP_I_DIG_BB_CTRL43_VMID_EN_FR_SPIR_BIT                   ((uint32_t)0x00020000)
#define BB_TOP_I_DIG_BB_CTRL43_VMID_EN_FR_SPIR_POS                   17
#define BB_TOP_I_DIG_BB_CTRL43_TPM_EN_FR_SPIR_BIT                    ((uint32_t)0x00010000)
#define BB_TOP_I_DIG_BB_CTRL43_TPM_EN_FR_SPIR_POS                    16
#define BB_TOP_I_DIG_BB_CTRL43_EN_TPM_VAR_FR_SPIR_BIT                ((uint32_t)0x00008000)
#define BB_TOP_I_DIG_BB_CTRL43_EN_TPM_VAR_FR_SPIR_POS                15
#define BB_TOP_I_DIG_BB_CTRL43_RESET_NDIV_FR_SPIR_BIT                ((uint32_t)0x00004000)
#define BB_TOP_I_DIG_BB_CTRL43_RESET_NDIV_FR_SPIR_POS                14
#define BB_TOP_I_DIG_BB_CTRL43_PFD_EN_FR_SPIR_BIT                    ((uint32_t)0x00002000)
#define BB_TOP_I_DIG_BB_CTRL43_PFD_EN_FR_SPIR_POS                    13
#define BB_TOP_I_DIG_BB_CTRL43_FASTCHARGE_VREF_VCO_FR_SPIR_BIT       ((uint32_t)0x00001000)
#define BB_TOP_I_DIG_BB_CTRL43_FASTCHARGE_VREF_VCO_FR_SPIR_POS       12
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_VOS_FR_SPIR_BIT               ((uint32_t)0x00000800)
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_VOS_FR_SPIR_POS               11
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_PBGEN_FR_SPIR_BIT             ((uint32_t)0x00000400)
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_PBGEN_FR_SPIR_POS             10
#define BB_TOP_I_DIG_BB_CTRL43_CP_BIAS_EN_FR_SPIR_BIT                ((uint32_t)0x00000200)
#define BB_TOP_I_DIG_BB_CTRL43_CP_BIAS_EN_FR_SPIR_POS                9
#define BB_TOP_I_DIG_BB_CTRL43_EN_VCO_BIAS_FR_SPIR_BIT               ((uint32_t)0x00000100)
#define BB_TOP_I_DIG_BB_CTRL43_EN_VCO_BIAS_FR_SPIR_POS               8
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLL_IMIR_FR_SPIR_BIT               ((uint32_t)0x00000080)
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLL_IMIR_FR_SPIR_POS               7
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLLBUF_FR_SPIR_BIT                 ((uint32_t)0x00000040)
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLLBUF_FR_SPIR_POS                 6
#define BB_TOP_I_DIG_BB_CTRL43_EN_LOTX_FR_SPIR_BIT                   ((uint32_t)0x00000020)
#define BB_TOP_I_DIG_BB_CTRL43_EN_LOTX_FR_SPIR_POS                   5
#define BB_TOP_I_DIG_BB_CTRL43_EN_LORX_FR_SPIR_BIT                   ((uint32_t)0x00000010)
#define BB_TOP_I_DIG_BB_CTRL43_EN_LORX_FR_SPIR_POS                   4
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_LO_FR_SPIR_BIT                 ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_LO_FR_SPIR_POS                 3
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_PLL_FR_SPIR_BIT                ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_PLL_FR_SPIR_POS                2
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_VCO_FR_SPIR_BIT                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_VCO_FR_SPIR_POS                1
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_TOP_FR_SPIR_BIT                ((uint32_t)0x00000001)
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_TOP_FR_SPIR_POS                0

#define BB_TOP_I_DIG_BB_CTRL43_TPM_DAC_RESET_FR_SPIR_RST             0x0
#define BB_TOP_I_DIG_BB_CTRL43_CT_EN_FR_SPIR_RST                     0x0
#define BB_TOP_I_DIG_BB_CTRL43_VMID_EN_FR_SPIR_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL43_TPM_EN_FR_SPIR_RST                    0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_TPM_VAR_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL43_RESET_NDIV_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL43_PFD_EN_FR_SPIR_RST                    0x0
#define BB_TOP_I_DIG_BB_CTRL43_FASTCHARGE_VREF_VCO_FR_SPIR_RST       0x0
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_VOS_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL43_FCH_VCO_PBGEN_FR_SPIR_RST             0x0
#define BB_TOP_I_DIG_BB_CTRL43_CP_BIAS_EN_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_VCO_BIAS_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLL_IMIR_FR_SPIR_RST               0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_PLLBUF_FR_SPIR_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_LOTX_FR_SPIR_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL43_EN_LORX_FR_SPIR_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_LO_FR_SPIR_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_PLL_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_VCO_FR_SPIR_RST                0x0
#define BB_TOP_I_DIG_BB_CTRL43_PU_LDO_TOP_FR_SPIR_RST                0x0

__INLINE static void bb_top_i_dig_bb_ctrl43_pack(uint8_t tpmdacresetfrspir, uint8_t ctenfrspir, uint8_t vmidenfrspir, uint8_t tpmenfrspir, uint8_t entpmvarfrspir, uint8_t resetndivfrspir, uint8_t pfdenfrspir, uint8_t fastchargevrefvcofrspir, uint8_t fchvcovosfrspir, uint8_t fchvcopbgenfrspir, uint8_t cpbiasenfrspir, uint8_t envcobiasfrspir, uint8_t enpllimirfrspir, uint8_t enpllbuffrspir, uint8_t enlotxfrspir, uint8_t enlorxfrspir, uint8_t puldolofrspir, uint8_t puldopllfrspir, uint8_t puldovcofrspir, uint8_t puldotopfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)tpmdacresetfrspir << 19) | ((uint32_t)ctenfrspir << 18) | ((uint32_t)vmidenfrspir << 17) | ((uint32_t)tpmenfrspir << 16) | ((uint32_t)entpmvarfrspir << 15) | ((uint32_t)resetndivfrspir << 14) | ((uint32_t)pfdenfrspir << 13) | ((uint32_t)fastchargevrefvcofrspir << 12) | ((uint32_t)fchvcovosfrspir << 11) | ((uint32_t)fchvcopbgenfrspir << 10) | ((uint32_t)cpbiasenfrspir << 9) | ((uint32_t)envcobiasfrspir << 8) | ((uint32_t)enpllimirfrspir << 7) | ((uint32_t)enpllbuffrspir << 6) | ((uint32_t)enlotxfrspir << 5) | ((uint32_t)enlorxfrspir << 4) | ((uint32_t)puldolofrspir << 3) | ((uint32_t)puldopllfrspir << 2) | ((uint32_t)puldovcofrspir << 1) | ((uint32_t)puldotopfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl43_unpack(uint8_t* tpmdacresetfrspir, uint8_t* ctenfrspir, uint8_t* vmidenfrspir, uint8_t* tpmenfrspir, uint8_t* entpmvarfrspir, uint8_t* resetndivfrspir, uint8_t* pfdenfrspir, uint8_t* fastchargevrefvcofrspir, uint8_t* fchvcovosfrspir, uint8_t* fchvcopbgenfrspir, uint8_t* cpbiasenfrspir, uint8_t* envcobiasfrspir, uint8_t* enpllimirfrspir, uint8_t* enpllbuffrspir, uint8_t* enlotxfrspir, uint8_t* enlorxfrspir, uint8_t* puldolofrspir, uint8_t* puldopllfrspir, uint8_t* puldovcofrspir, uint8_t* puldotopfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *tpmdacresetfrspir = (localVal & ((uint32_t)0x00080000)) >> 19;
    *ctenfrspir = (localVal & ((uint32_t)0x00040000)) >> 18;
    *vmidenfrspir = (localVal & ((uint32_t)0x00020000)) >> 17;
    *tpmenfrspir = (localVal & ((uint32_t)0x00010000)) >> 16;
    *entpmvarfrspir = (localVal & ((uint32_t)0x00008000)) >> 15;
    *resetndivfrspir = (localVal & ((uint32_t)0x00004000)) >> 14;
    *pfdenfrspir = (localVal & ((uint32_t)0x00002000)) >> 13;
    *fastchargevrefvcofrspir = (localVal & ((uint32_t)0x00001000)) >> 12;
    *fchvcovosfrspir = (localVal & ((uint32_t)0x00000800)) >> 11;
    *fchvcopbgenfrspir = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cpbiasenfrspir = (localVal & ((uint32_t)0x00000200)) >> 9;
    *envcobiasfrspir = (localVal & ((uint32_t)0x00000100)) >> 8;
    *enpllimirfrspir = (localVal & ((uint32_t)0x00000080)) >> 7;
    *enpllbuffrspir = (localVal & ((uint32_t)0x00000040)) >> 6;
    *enlotxfrspir = (localVal & ((uint32_t)0x00000020)) >> 5;
    *enlorxfrspir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *puldolofrspir = (localVal & ((uint32_t)0x00000008)) >> 3;
    *puldopllfrspir = (localVal & ((uint32_t)0x00000004)) >> 2;
    *puldovcofrspir = (localVal & ((uint32_t)0x00000002)) >> 1;
    *puldotopfrspir = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_tpm_dac_reset_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_tpm_dac_reset_fr_spir_setf(uint8_t tpmdacresetfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)tpmdacresetfrspir << 19));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_ct_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_ct_en_fr_spir_setf(uint8_t ctenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)ctenfrspir << 18));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_vmid_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_vmid_en_fr_spir_setf(uint8_t vmidenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)vmidenfrspir << 17));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_tpm_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_tpm_en_fr_spir_setf(uint8_t tpmenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)tpmenfrspir << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_tpm_var_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_tpm_var_fr_spir_setf(uint8_t entpmvarfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)entpmvarfrspir << 15));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_reset_ndiv_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_reset_ndiv_fr_spir_setf(uint8_t resetndivfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)resetndivfrspir << 14));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_pfd_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_pfd_en_fr_spir_setf(uint8_t pfdenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)pfdenfrspir << 13));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_fastcharge_vref_vco_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_fastcharge_vref_vco_fr_spir_setf(uint8_t fastchargevrefvcofrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)fastchargevrefvcofrspir << 12));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_fch_vco_vos_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_fch_vco_vos_fr_spir_setf(uint8_t fchvcovosfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)fchvcovosfrspir << 11));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_fch_vco_pbgen_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_fch_vco_pbgen_fr_spir_setf(uint8_t fchvcopbgenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)fchvcopbgenfrspir << 10));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_cp_bias_en_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_cp_bias_en_fr_spir_setf(uint8_t cpbiasenfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)cpbiasenfrspir << 9));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_vco_bias_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_vco_bias_fr_spir_setf(uint8_t envcobiasfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)envcobiasfrspir << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_pll_imir_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_pll_imir_fr_spir_setf(uint8_t enpllimirfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)enpllimirfrspir << 7));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_pllbuf_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_pllbuf_fr_spir_setf(uint8_t enpllbuffrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)enpllbuffrspir << 6));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_lotx_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_lotx_fr_spir_setf(uint8_t enlotxfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)enlotxfrspir << 5));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_en_lorx_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_en_lorx_fr_spir_setf(uint8_t enlorxfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)enlorxfrspir << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_pu_ldo_lo_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_pu_ldo_lo_fr_spir_setf(uint8_t puldolofrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)puldolofrspir << 3));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_pu_ldo_pll_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_pu_ldo_pll_fr_spir_setf(uint8_t puldopllfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)puldopllfrspir << 2));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_pu_ldo_vco_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_pu_ldo_vco_fr_spir_setf(uint8_t puldovcofrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)puldovcofrspir << 1));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl43_pu_ldo_top_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl43_pu_ldo_top_fr_spir_setf(uint8_t puldotopfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL43_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)puldotopfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL44 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31     tpd_plry_fr_spir   0
 *  26:24      pi_dsft_fr_spir   0b1
 *  17:16     intg_dly_fr_spir   0b0
 *  12:08           tx_sdm_dly   0b0
 *  04:00           tx_dac_dly   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET 0x000000B0


__INLINE static uint32_t bb_top_i_dig_bb_ctrl44_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL44_TPD_PLRY_FR_SPIR_BIT                  ((uint32_t)0x80000000)
#define BB_TOP_I_DIG_BB_CTRL44_TPD_PLRY_FR_SPIR_POS                  31
#define BB_TOP_I_DIG_BB_CTRL44_PI_DSFT_FR_SPIR_MASK                  ((uint32_t)0x07000000)
#define BB_TOP_I_DIG_BB_CTRL44_PI_DSFT_FR_SPIR_LSB                   24
#define BB_TOP_I_DIG_BB_CTRL44_PI_DSFT_FR_SPIR_WIDTH                 ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL44_INTG_DLY_FR_SPIR_MASK                 ((uint32_t)0x00030000)
#define BB_TOP_I_DIG_BB_CTRL44_INTG_DLY_FR_SPIR_LSB                  16
#define BB_TOP_I_DIG_BB_CTRL44_INTG_DLY_FR_SPIR_WIDTH                ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL44_TX_SDM_DLY_MASK                       ((uint32_t)0x00001F00)
#define BB_TOP_I_DIG_BB_CTRL44_TX_SDM_DLY_LSB                        8
#define BB_TOP_I_DIG_BB_CTRL44_TX_SDM_DLY_WIDTH                      ((uint32_t)0x00000005)
#define BB_TOP_I_DIG_BB_CTRL44_TX_DAC_DLY_MASK                       ((uint32_t)0x0000001F)
#define BB_TOP_I_DIG_BB_CTRL44_TX_DAC_DLY_LSB                        0
#define BB_TOP_I_DIG_BB_CTRL44_TX_DAC_DLY_WIDTH                      ((uint32_t)0x00000005)

#define BB_TOP_I_DIG_BB_CTRL44_TPD_PLRY_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL44_PI_DSFT_FR_SPIR_RST                   0x1
#define BB_TOP_I_DIG_BB_CTRL44_INTG_DLY_FR_SPIR_RST                  0x0
#define BB_TOP_I_DIG_BB_CTRL44_TX_SDM_DLY_RST                        0x0
#define BB_TOP_I_DIG_BB_CTRL44_TX_DAC_DLY_RST                        0x0

__INLINE static void bb_top_i_dig_bb_ctrl44_pack(uint8_t tpdplryfrspir, uint8_t pidsftfrspir, uint8_t intgdlyfrspir, uint8_t txsdmdly, uint8_t txdacdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)tpdplryfrspir << 31) | ((uint32_t)pidsftfrspir << 24) | ((uint32_t)intgdlyfrspir << 16) | ((uint32_t)txsdmdly << 8) | ((uint32_t)txdacdly << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl44_unpack(uint8_t* tpdplryfrspir, uint8_t* pidsftfrspir, uint8_t* intgdlyfrspir, uint8_t* txsdmdly, uint8_t* txdacdly)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *tpdplryfrspir = (localVal & ((uint32_t)0x80000000)) >> 31;
    *pidsftfrspir = (localVal & ((uint32_t)0x07000000)) >> 24;
    *intgdlyfrspir = (localVal & ((uint32_t)0x00030000)) >> 16;
    *txsdmdly = (localVal & ((uint32_t)0x00001F00)) >> 8;
    *txdacdly = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl44_tpd_plry_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_tpd_plry_fr_spir_setf(uint8_t tpdplryfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)tpdplryfrspir << 31));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl44_pi_dsft_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_pi_dsft_fr_spir_setf(uint8_t pidsftfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)pidsftfrspir << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl44_intg_dly_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_intg_dly_fr_spir_setf(uint8_t intgdlyfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)intgdlyfrspir << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl44_tx_sdm_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_tx_sdm_dly_setf(uint8_t txsdmdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001F00)) | ((uint32_t)txsdmdly << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl44_tx_dac_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl44_tx_dac_dly_setf(uint8_t txdacdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL44_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000001F)) | ((uint32_t)txdacdly << 0));
}

 /**
 * @brief I_DIG_BB_CTRL45 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     24              if_freq   0
 *  23:16          rx_freq_off   0b0
 *  15:08          tx_freq_off   0b0
 *  07:00               rf_chn   0b37
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET 0x000000B4


__INLINE static uint32_t bb_top_i_dig_bb_ctrl45_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl45_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL45_IF_FREQ_BIT                           ((uint32_t)0x01000000)
#define BB_TOP_I_DIG_BB_CTRL45_IF_FREQ_POS                           24
#define BB_TOP_I_DIG_BB_CTRL45_RX_FREQ_OFF_MASK                      ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL45_RX_FREQ_OFF_LSB                       16
#define BB_TOP_I_DIG_BB_CTRL45_RX_FREQ_OFF_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL45_TX_FREQ_OFF_MASK                      ((uint32_t)0x0000FF00)
#define BB_TOP_I_DIG_BB_CTRL45_TX_FREQ_OFF_LSB                       8
#define BB_TOP_I_DIG_BB_CTRL45_TX_FREQ_OFF_WIDTH                     ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL45_RF_CHN_MASK                           ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL45_RF_CHN_LSB                            0
#define BB_TOP_I_DIG_BB_CTRL45_RF_CHN_WIDTH                          ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL45_IF_FREQ_RST                           0x0
#define BB_TOP_I_DIG_BB_CTRL45_RX_FREQ_OFF_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL45_TX_FREQ_OFF_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL45_RF_CHN_RST                            0x37

__INLINE static void bb_top_i_dig_bb_ctrl45_pack(uint8_t iffreq, uint8_t rxfreqoff, uint8_t txfreqoff, uint8_t rfchn)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)iffreq << 24) | ((uint32_t)rxfreqoff << 16) | ((uint32_t)txfreqoff << 8) | ((uint32_t)rfchn << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl45_unpack(uint8_t* iffreq, uint8_t* rxfreqoff, uint8_t* txfreqoff, uint8_t* rfchn)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *iffreq = (localVal & ((uint32_t)0x01000000)) >> 24;
    *rxfreqoff = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *txfreqoff = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *rfchn = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl45_if_freq_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl45_if_freq_setf(uint8_t iffreq)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)iffreq << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl45_rx_freq_off_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl45_rx_freq_off_setf(uint8_t rxfreqoff)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)rxfreqoff << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl45_tx_freq_off_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl45_tx_freq_off_setf(uint8_t txfreqoff)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)txfreqoff << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl45_rf_chn_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl45_rf_chn_setf(uint8_t rfchn)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL45_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)rfchn << 0));
}

 /**
 * @brief I_DIG_BB_CTRL46 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  16:12        trx_pa_target   0b0
 *  11:08         tm_pa_settle   0b8
 *  06:04     trx_paramp_speed   0b1
 *  02:00   len_dly_ramp_fr_spir   0b1
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET 0x000000B8


__INLINE static uint32_t bb_top_i_dig_bb_ctrl46_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl46_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PA_TARGET_MASK                    ((uint32_t)0x0001F000)
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PA_TARGET_LSB                     12
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PA_TARGET_WIDTH                   ((uint32_t)0x00000005)
#define BB_TOP_I_DIG_BB_CTRL46_TM_PA_SETTLE_MASK                     ((uint32_t)0x00000F00)
#define BB_TOP_I_DIG_BB_CTRL46_TM_PA_SETTLE_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL46_TM_PA_SETTLE_WIDTH                    ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PARAMP_SPEED_MASK                 ((uint32_t)0x00000070)
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PARAMP_SPEED_LSB                  4
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PARAMP_SPEED_WIDTH                ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL46_LEN_DLY_RAMP_FR_SPIR_MASK             ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL46_LEN_DLY_RAMP_FR_SPIR_LSB              0
#define BB_TOP_I_DIG_BB_CTRL46_LEN_DLY_RAMP_FR_SPIR_WIDTH            ((uint32_t)0x00000003)

#define BB_TOP_I_DIG_BB_CTRL46_TRX_PA_TARGET_RST                     0x0
#define BB_TOP_I_DIG_BB_CTRL46_TM_PA_SETTLE_RST                      0x8
#define BB_TOP_I_DIG_BB_CTRL46_TRX_PARAMP_SPEED_RST                  0x1
#define BB_TOP_I_DIG_BB_CTRL46_LEN_DLY_RAMP_FR_SPIR_RST              0x1

__INLINE static void bb_top_i_dig_bb_ctrl46_pack(uint8_t trxpatarget, uint8_t tmpasettle, uint8_t trxparampspeed, uint8_t lendlyrampfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)trxpatarget << 12) | ((uint32_t)tmpasettle << 8) | ((uint32_t)trxparampspeed << 4) | ((uint32_t)lendlyrampfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl46_unpack(uint8_t* trxpatarget, uint8_t* tmpasettle, uint8_t* trxparampspeed, uint8_t* lendlyrampfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *trxpatarget = (localVal & ((uint32_t)0x0001F000)) >> 12;
    *tmpasettle = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *trxparampspeed = (localVal & ((uint32_t)0x00000070)) >> 4;
    *lendlyrampfrspir = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl46_trx_pa_target_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001F000)) >> 12);
}

__INLINE static void bb_top_i_dig_bb_ctrl46_trx_pa_target_setf(uint8_t trxpatarget)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0001F000)) | ((uint32_t)trxpatarget << 12));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl46_tm_pa_settle_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl46_tm_pa_settle_setf(uint8_t tmpasettle)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)tmpasettle << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl46_trx_paramp_speed_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void bb_top_i_dig_bb_ctrl46_trx_paramp_speed_setf(uint8_t trxparampspeed)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)trxparampspeed << 4));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl46_len_dly_ramp_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl46_len_dly_ramp_fr_spir_setf(uint8_t lendlyrampfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL46_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)lendlyrampfrspir << 0));
}

 /**
 * @brief I_DIG_BB_CTRL47 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:16         tx_bb_en_dly   0b108
 *  11:08      tm_rxafe_settle   0b8
 *  07:00         tm_pll_ftune   0b100
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET 0x000000BC


__INLINE static uint32_t bb_top_i_dig_bb_ctrl47_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl47_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL47_TX_BB_EN_DLY_MASK                     ((uint32_t)0x00FF0000)
#define BB_TOP_I_DIG_BB_CTRL47_TX_BB_EN_DLY_LSB                      16
#define BB_TOP_I_DIG_BB_CTRL47_TX_BB_EN_DLY_WIDTH                    ((uint32_t)0x00000008)
#define BB_TOP_I_DIG_BB_CTRL47_TM_RXAFE_SETTLE_MASK                  ((uint32_t)0x00000F00)
#define BB_TOP_I_DIG_BB_CTRL47_TM_RXAFE_SETTLE_LSB                   8
#define BB_TOP_I_DIG_BB_CTRL47_TM_RXAFE_SETTLE_WIDTH                 ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL47_TM_PLL_FTUNE_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL47_TM_PLL_FTUNE_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL47_TM_PLL_FTUNE_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL47_TX_BB_EN_DLY_RST                      0x108
#define BB_TOP_I_DIG_BB_CTRL47_TM_RXAFE_SETTLE_RST                   0x8
#define BB_TOP_I_DIG_BB_CTRL47_TM_PLL_FTUNE_RST                      0x100

__INLINE static void bb_top_i_dig_bb_ctrl47_pack(uint8_t txbbendly, uint8_t tmrxafesettle, uint8_t tmpllftune)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)txbbendly << 16) | ((uint32_t)tmrxafesettle << 8) | ((uint32_t)tmpllftune << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl47_unpack(uint8_t* txbbendly, uint8_t* tmrxafesettle, uint8_t* tmpllftune)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *txbbendly = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *tmrxafesettle = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *tmpllftune = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl47_tx_bb_en_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl47_tx_bb_en_dly_setf(uint8_t txbbendly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)txbbendly << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl47_tm_rxafe_settle_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl47_tm_rxafe_settle_setf(uint8_t tmrxafesettle)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)tmrxafesettle << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl47_tm_pll_ftune_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl47_tm_pll_ftune_setf(uint8_t tmpllftune)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL47_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)tmpllftune << 0));
}

 /**
 * @brief I_DIG_BB_CTRL48 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  29:24        dc_compq_flt1   0b32
 *  21:16        dc_compi_flt1   0b32
 *  13:08        dc_compq_flt2   0b32
 *  05:00        dc_compi_flt2   0b32
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET 0x000000C0


__INLINE static uint32_t bb_top_i_dig_bb_ctrl48_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl48_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT1_MASK                    ((uint32_t)0x3F000000)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT1_LSB                     24
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT1_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT1_MASK                    ((uint32_t)0x003F0000)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT1_LSB                     16
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT1_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT2_MASK                    ((uint32_t)0x00003F00)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT2_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT2_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT2_MASK                    ((uint32_t)0x0000003F)
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT2_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT2_WIDTH                   ((uint32_t)0x00000006)

#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT1_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT1_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPQ_FLT2_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL48_DC_COMPI_FLT2_RST                     0x32

__INLINE static void bb_top_i_dig_bb_ctrl48_pack(uint8_t dccompqflt1, uint8_t dccompiflt1, uint8_t dccompqflt2, uint8_t dccompiflt2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dccompqflt1 << 24) | ((uint32_t)dccompiflt1 << 16) | ((uint32_t)dccompqflt2 << 8) | ((uint32_t)dccompiflt2 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl48_unpack(uint8_t* dccompqflt1, uint8_t* dccompiflt1, uint8_t* dccompqflt2, uint8_t* dccompiflt2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dccompqflt1 = (localVal & ((uint32_t)0x3F000000)) >> 24;
    *dccompiflt1 = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *dccompqflt2 = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *dccompiflt2 = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl48_dc_compq_flt1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3F000000)) >> 24);
}

__INLINE static void bb_top_i_dig_bb_ctrl48_dc_compq_flt1_setf(uint8_t dccompqflt1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x3F000000)) | ((uint32_t)dccompqflt1 << 24));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl48_dc_compi_flt1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl48_dc_compi_flt1_setf(uint8_t dccompiflt1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)dccompiflt1 << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl48_dc_compq_flt2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl48_dc_compq_flt2_setf(uint8_t dccompqflt2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)dccompqflt2 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl48_dc_compi_flt2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl48_dc_compi_flt2_setf(uint8_t dccompiflt2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL48_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)dccompiflt2 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL49 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  17:16          dc_comp_sel   0b0
 *  13:08        dc_compq_flt0   0b32
 *  05:00        dc_compi_flt0   0b32
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET 0x000000C4


__INLINE static uint32_t bb_top_i_dig_bb_ctrl49_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl49_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMP_SEL_MASK                      ((uint32_t)0x00030000)
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMP_SEL_LSB                       16
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMP_SEL_WIDTH                     ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPQ_FLT0_MASK                    ((uint32_t)0x00003F00)
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPQ_FLT0_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPQ_FLT0_WIDTH                   ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPI_FLT0_MASK                    ((uint32_t)0x0000003F)
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPI_FLT0_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPI_FLT0_WIDTH                   ((uint32_t)0x00000006)

#define BB_TOP_I_DIG_BB_CTRL49_DC_COMP_SEL_RST                       0x0
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPQ_FLT0_RST                     0x32
#define BB_TOP_I_DIG_BB_CTRL49_DC_COMPI_FLT0_RST                     0x32

__INLINE static void bb_top_i_dig_bb_ctrl49_pack(uint8_t dccompsel, uint8_t dccompqflt0, uint8_t dccompiflt0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)dccompsel << 16) | ((uint32_t)dccompqflt0 << 8) | ((uint32_t)dccompiflt0 << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl49_unpack(uint8_t* dccompsel, uint8_t* dccompqflt0, uint8_t* dccompiflt0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *dccompsel = (localVal & ((uint32_t)0x00030000)) >> 16;
    *dccompqflt0 = (localVal & ((uint32_t)0x00003F00)) >> 8;
    *dccompiflt0 = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl49_dc_comp_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl49_dc_comp_sel_setf(uint8_t dccompsel)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)dccompsel << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl49_dc_compq_flt0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl49_dc_compq_flt0_setf(uint8_t dccompqflt0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003F00)) | ((uint32_t)dccompqflt0 << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl49_dc_compi_flt0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl49_dc_compi_flt0_setf(uint8_t dccompiflt0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL49_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)dccompiflt0 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL50 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08    agc_gain_override   0
 *  07:00     agc_gain_fr_spir   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET 0x000000C8


__INLINE static uint32_t bb_top_i_dig_bb_ctrl50_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl50_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_OVERRIDE_BIT                 ((uint32_t)0x00000100)
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_OVERRIDE_POS                 8
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_FR_SPIR_MASK                 ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_FR_SPIR_LSB                  0
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_FR_SPIR_WIDTH                ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_OVERRIDE_RST                 0x0
#define BB_TOP_I_DIG_BB_CTRL50_AGC_GAIN_FR_SPIR_RST                  0x0

__INLINE static void bb_top_i_dig_bb_ctrl50_pack(uint8_t agcgainoverride, uint8_t agcgainfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)agcgainoverride << 8) | ((uint32_t)agcgainfrspir << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl50_unpack(uint8_t* agcgainoverride, uint8_t* agcgainfrspir)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *agcgainoverride = (localVal & ((uint32_t)0x00000100)) >> 8;
    *agcgainfrspir = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl50_agc_gain_override_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl50_agc_gain_override_setf(uint8_t agcgainoverride)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)agcgainoverride << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl50_agc_gain_fr_spir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl50_agc_gain_fr_spir_setf(uint8_t agcgainfrspir)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL50_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)agcgainfrspir << 0));
}

 /**
 * @brief I_PLL_CTRL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:10     vout_ctrl_ldo_lo   0b1
 *  09:08    vout_ctrl_ldo_pll   0b1
 *  07:06    vout_ctrl_ldo_vco   0b1
 *  05:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET 0x000000CC


__INLINE static uint32_t bb_top_i_pll_ctrl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_LO_MASK                 ((uint32_t)0x00000C00)
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_LO_LSB                  10
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_LO_WIDTH                ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_PLL_MASK                ((uint32_t)0x00000300)
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_PLL_LSB                 8
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_PLL_WIDTH               ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_VCO_MASK                ((uint32_t)0x000000C0)
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_VCO_LSB                 6
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_VCO_WIDTH               ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL0_RESERVED_MASK                         ((uint32_t)0x0000003F)
#define BB_TOP_I_PLL_CTRL0_RESERVED_LSB                          0
#define BB_TOP_I_PLL_CTRL0_RESERVED_WIDTH                        ((uint32_t)0x00000006)

#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_LO_RST                  0x1
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_PLL_RST                 0x1
#define BB_TOP_I_PLL_CTRL0_VOUT_CTRL_LDO_VCO_RST                 0x1
#define BB_TOP_I_PLL_CTRL0_RESERVED_RST                          0x0

__INLINE static void bb_top_i_pll_ctrl0_pack(uint8_t voutctrlldolo, uint8_t voutctrlldopll, uint8_t voutctrlldovco, uint8_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)voutctrlldolo << 10) | ((uint32_t)voutctrlldopll << 8) | ((uint32_t)voutctrlldovco << 6) | ((uint32_t)reserved << 0));
}

__INLINE static void bb_top_i_pll_ctrl0_unpack(uint8_t* voutctrlldolo, uint8_t* voutctrlldopll, uint8_t* voutctrlldovco, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *voutctrlldolo = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *voutctrlldopll = (localVal & ((uint32_t)0x00000300)) >> 8;
    *voutctrlldovco = (localVal & ((uint32_t)0x000000C0)) >> 6;
    *reserved = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl0_vout_ctrl_ldo_lo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void bb_top_i_pll_ctrl0_vout_ctrl_ldo_lo_setf(uint8_t voutctrlldolo)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)voutctrlldolo << 10));
}

__INLINE static uint8_t bb_top_i_pll_ctrl0_vout_ctrl_ldo_pll_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void bb_top_i_pll_ctrl0_vout_ctrl_ldo_pll_setf(uint8_t voutctrlldopll)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)voutctrlldopll << 8));
}

__INLINE static uint8_t bb_top_i_pll_ctrl0_vout_ctrl_ldo_vco_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000C0)) >> 6);
}

__INLINE static void bb_top_i_pll_ctrl0_vout_ctrl_ldo_vco_setf(uint8_t voutctrlldovco)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000C0)) | ((uint32_t)voutctrlldovco << 6));
}

 /**
 * @brief I_PLL_CTRL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24             delay_up   0b0
 *  23:21             delay_dn   0b0
 *  08:05              cp_prog   0b1000
 *     00      en_pllbuf_ctcnt   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET 0x000000D0


__INLINE static uint32_t bb_top_i_pll_ctrl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL1_DELAY_UP_MASK                         ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL1_DELAY_UP_LSB                          24
#define BB_TOP_I_PLL_CTRL1_DELAY_UP_WIDTH                        ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL1_DELAY_DN_MASK                         ((uint32_t)0x00E00000)
#define BB_TOP_I_PLL_CTRL1_DELAY_DN_LSB                          21
#define BB_TOP_I_PLL_CTRL1_DELAY_DN_WIDTH                        ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL1_CP_PROG_MASK                          ((uint32_t)0x000001E0)
#define BB_TOP_I_PLL_CTRL1_CP_PROG_LSB                           5
#define BB_TOP_I_PLL_CTRL1_CP_PROG_WIDTH                         ((uint32_t)0x00000004)
#define BB_TOP_I_PLL_CTRL1_EN_PLLBUF_CTCNT_BIT                   ((uint32_t)0x00000001)
#define BB_TOP_I_PLL_CTRL1_EN_PLLBUF_CTCNT_POS                   0

#define BB_TOP_I_PLL_CTRL1_DELAY_UP_RST                          0x0
#define BB_TOP_I_PLL_CTRL1_DELAY_DN_RST                          0x0
#define BB_TOP_I_PLL_CTRL1_CP_PROG_RST                           0x1000
#define BB_TOP_I_PLL_CTRL1_EN_PLLBUF_CTCNT_RST                   0x0

__INLINE static void bb_top_i_pll_ctrl1_pack(uint8_t delayup, uint8_t delaydn, uint8_t cpprog, uint8_t enpllbufctcnt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)delayup << 24) | ((uint32_t)delaydn << 21) | ((uint32_t)cpprog << 5) | ((uint32_t)enpllbufctcnt << 0));
}

__INLINE static void bb_top_i_pll_ctrl1_unpack(uint8_t* delayup, uint8_t* delaydn, uint8_t* cpprog, uint8_t* enpllbufctcnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *delayup = (localVal & ((uint32_t)0x07000000)) >> 24;
    *delaydn = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *cpprog = (localVal & ((uint32_t)0x000001E0)) >> 5;
    *enpllbufctcnt = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl1_delay_up_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl1_delay_up_setf(uint8_t delayup)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)delayup << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl1_delay_dn_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void bb_top_i_pll_ctrl1_delay_dn_setf(uint8_t delaydn)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)delaydn << 21));
}

__INLINE static uint8_t bb_top_i_pll_ctrl1_cp_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001E0)) >> 5);
}

__INLINE static void bb_top_i_pll_ctrl1_cp_prog_setf(uint8_t cpprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000001E0)) | ((uint32_t)cpprog << 5));
}

__INLINE static uint8_t bb_top_i_pll_ctrl1_en_pllbuf_ctcnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_pll_ctrl1_en_pllbuf_ctcnt_setf(uint8_t enpllbufctcnt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)enpllbufctcnt << 0));
}

 /**
 * @brief I_PLL_CTRL2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24         ib_div2_prog   0b10
 *  23:21               lpf_rz   0b10
 *  20:18          ib_tpm_prog   0b10
 *  17:16               lpf_r2   0b0
 *  15:14               lpf_r1   0b0
 *  13:12               lpf_c3   0b0
 *  11:10               lpf_c2   0b0
 *  09:08               lpf_c1   0b0
 *  07:04          ib_vco_prog   0b1000
 *  03:00             reserved   0b1010
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET 0x000000D4


__INLINE static uint32_t bb_top_i_pll_ctrl2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL2_IB_DIV2_PROG_MASK                     ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL2_IB_DIV2_PROG_LSB                      24
#define BB_TOP_I_PLL_CTRL2_IB_DIV2_PROG_WIDTH                    ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL2_LPF_RZ_MASK                           ((uint32_t)0x00E00000)
#define BB_TOP_I_PLL_CTRL2_LPF_RZ_LSB                            21
#define BB_TOP_I_PLL_CTRL2_LPF_RZ_WIDTH                          ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL2_IB_TPM_PROG_MASK                      ((uint32_t)0x001C0000)
#define BB_TOP_I_PLL_CTRL2_IB_TPM_PROG_LSB                       18
#define BB_TOP_I_PLL_CTRL2_IB_TPM_PROG_WIDTH                     ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL2_LPF_R2_MASK                           ((uint32_t)0x00030000)
#define BB_TOP_I_PLL_CTRL2_LPF_R2_LSB                            16
#define BB_TOP_I_PLL_CTRL2_LPF_R2_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL2_LPF_R1_MASK                           ((uint32_t)0x0000C000)
#define BB_TOP_I_PLL_CTRL2_LPF_R1_LSB                            14
#define BB_TOP_I_PLL_CTRL2_LPF_R1_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL2_LPF_C3_MASK                           ((uint32_t)0x00003000)
#define BB_TOP_I_PLL_CTRL2_LPF_C3_LSB                            12
#define BB_TOP_I_PLL_CTRL2_LPF_C3_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL2_LPF_C2_MASK                           ((uint32_t)0x00000C00)
#define BB_TOP_I_PLL_CTRL2_LPF_C2_LSB                            10
#define BB_TOP_I_PLL_CTRL2_LPF_C2_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL2_LPF_C1_MASK                           ((uint32_t)0x00000300)
#define BB_TOP_I_PLL_CTRL2_LPF_C1_LSB                            8
#define BB_TOP_I_PLL_CTRL2_LPF_C1_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL2_IB_VCO_PROG_MASK                      ((uint32_t)0x000000F0)
#define BB_TOP_I_PLL_CTRL2_IB_VCO_PROG_LSB                       4
#define BB_TOP_I_PLL_CTRL2_IB_VCO_PROG_WIDTH                     ((uint32_t)0x00000004)
#define BB_TOP_I_PLL_CTRL2_RESERVED_MASK                         ((uint32_t)0x0000000F)
#define BB_TOP_I_PLL_CTRL2_RESERVED_LSB                          0
#define BB_TOP_I_PLL_CTRL2_RESERVED_WIDTH                        ((uint32_t)0x00000004)

#define BB_TOP_I_PLL_CTRL2_IB_DIV2_PROG_RST                      0x10
#define BB_TOP_I_PLL_CTRL2_LPF_RZ_RST                            0x10
#define BB_TOP_I_PLL_CTRL2_IB_TPM_PROG_RST                       0x10
#define BB_TOP_I_PLL_CTRL2_LPF_R2_RST                            0x0
#define BB_TOP_I_PLL_CTRL2_LPF_R1_RST                            0x0
#define BB_TOP_I_PLL_CTRL2_LPF_C3_RST                            0x0
#define BB_TOP_I_PLL_CTRL2_LPF_C2_RST                            0x0
#define BB_TOP_I_PLL_CTRL2_LPF_C1_RST                            0x0
#define BB_TOP_I_PLL_CTRL2_IB_VCO_PROG_RST                       0x1000
#define BB_TOP_I_PLL_CTRL2_RESERVED_RST                          0x1010

__INLINE static void bb_top_i_pll_ctrl2_pack(uint8_t ibdiv2prog, uint8_t lpfrz, uint8_t ibtpmprog, uint8_t lpfr2, uint8_t lpfr1, uint8_t lpfc3, uint8_t lpfc2, uint8_t lpfc1, uint8_t ibvcoprog, uint8_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)ibdiv2prog << 24) | ((uint32_t)lpfrz << 21) | ((uint32_t)ibtpmprog << 18) | ((uint32_t)lpfr2 << 16) | ((uint32_t)lpfr1 << 14) | ((uint32_t)lpfc3 << 12) | ((uint32_t)lpfc2 << 10) | ((uint32_t)lpfc1 << 8) | ((uint32_t)ibvcoprog << 4) | ((uint32_t)reserved << 0));
}

__INLINE static void bb_top_i_pll_ctrl2_unpack(uint8_t* ibdiv2prog, uint8_t* lpfrz, uint8_t* ibtpmprog, uint8_t* lpfr2, uint8_t* lpfr1, uint8_t* lpfc3, uint8_t* lpfc2, uint8_t* lpfc1, uint8_t* ibvcoprog, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *ibdiv2prog = (localVal & ((uint32_t)0x07000000)) >> 24;
    *lpfrz = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *ibtpmprog = (localVal & ((uint32_t)0x001C0000)) >> 18;
    *lpfr2 = (localVal & ((uint32_t)0x00030000)) >> 16;
    *lpfr1 = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lpfc3 = (localVal & ((uint32_t)0x00003000)) >> 12;
    *lpfc2 = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *lpfc1 = (localVal & ((uint32_t)0x00000300)) >> 8;
    *ibvcoprog = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *reserved = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_ib_div2_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl2_ib_div2_prog_setf(uint8_t ibdiv2prog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)ibdiv2prog << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_rz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_rz_setf(uint8_t lpfrz)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)lpfrz << 21));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_ib_tpm_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001C0000)) >> 18);
}

__INLINE static void bb_top_i_pll_ctrl2_ib_tpm_prog_setf(uint8_t ibtpmprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x001C0000)) | ((uint32_t)ibtpmprog << 18));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_r2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_r2_setf(uint8_t lpfr2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)lpfr2 << 16));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_r1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_r1_setf(uint8_t lpfr1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lpfr1 << 14));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_c3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_c3_setf(uint8_t lpfc3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lpfc3 << 12));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_c2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_c2_setf(uint8_t lpfc2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)lpfc2 << 10));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_lpf_c1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void bb_top_i_pll_ctrl2_lpf_c1_setf(uint8_t lpfc1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)lpfc1 << 8));
}

__INLINE static uint8_t bb_top_i_pll_ctrl2_ib_vco_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_pll_ctrl2_ib_vco_prog_setf(uint8_t ibvcoprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)ibvcoprog << 4));
}

 /**
 * @brief I_PLL_CTRL3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24            vmid_prog   0b100
 *  20:18     vco_var_tpm_prog   0b100
 *  17:15         vco_var_prog   0b100
 *     10              pfd_pol   0
 *  09:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET 0x000000D8


__INLINE static uint32_t bb_top_i_pll_ctrl3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL3_VMID_PROG_MASK                        ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL3_VMID_PROG_LSB                         24
#define BB_TOP_I_PLL_CTRL3_VMID_PROG_WIDTH                       ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_TPM_PROG_MASK                 ((uint32_t)0x001C0000)
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_TPM_PROG_LSB                  18
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_TPM_PROG_WIDTH                ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_PROG_MASK                     ((uint32_t)0x00038000)
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_PROG_LSB                      15
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_PROG_WIDTH                    ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL3_PFD_POL_BIT                           ((uint32_t)0x00000400)
#define BB_TOP_I_PLL_CTRL3_PFD_POL_POS                           10
#define BB_TOP_I_PLL_CTRL3_RESERVED_MASK                         ((uint32_t)0x000003FF)
#define BB_TOP_I_PLL_CTRL3_RESERVED_LSB                          0
#define BB_TOP_I_PLL_CTRL3_RESERVED_WIDTH                        ((uint32_t)0x0000000A)

#define BB_TOP_I_PLL_CTRL3_VMID_PROG_RST                         0x100
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_TPM_PROG_RST                  0x100
#define BB_TOP_I_PLL_CTRL3_VCO_VAR_PROG_RST                      0x100
#define BB_TOP_I_PLL_CTRL3_PFD_POL_RST                           0x0
#define BB_TOP_I_PLL_CTRL3_RESERVED_RST                          0x0

__INLINE static void bb_top_i_pll_ctrl3_pack(uint8_t vmidprog, uint8_t vcovartpmprog, uint8_t vcovarprog, uint8_t pfdpol, uint16_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)vmidprog << 24) | ((uint32_t)vcovartpmprog << 18) | ((uint32_t)vcovarprog << 15) | ((uint32_t)pfdpol << 10) | ((uint32_t)reserved << 0));
}

__INLINE static void bb_top_i_pll_ctrl3_unpack(uint8_t* vmidprog, uint8_t* vcovartpmprog, uint8_t* vcovarprog, uint8_t* pfdpol, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *vmidprog = (localVal & ((uint32_t)0x07000000)) >> 24;
    *vcovartpmprog = (localVal & ((uint32_t)0x001C0000)) >> 18;
    *vcovarprog = (localVal & ((uint32_t)0x00038000)) >> 15;
    *pfdpol = (localVal & ((uint32_t)0x00000400)) >> 10;
    *reserved = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl3_vmid_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl3_vmid_prog_setf(uint8_t vmidprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)vmidprog << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl3_vco_var_tpm_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001C0000)) >> 18);
}

__INLINE static void bb_top_i_pll_ctrl3_vco_var_tpm_prog_setf(uint8_t vcovartpmprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x001C0000)) | ((uint32_t)vcovartpmprog << 18));
}

__INLINE static uint8_t bb_top_i_pll_ctrl3_vco_var_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00038000)) >> 15);
}

__INLINE static void bb_top_i_pll_ctrl3_vco_var_prog_setf(uint8_t vcovarprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00038000)) | ((uint32_t)vcovarprog << 15));
}

__INLINE static uint8_t bb_top_i_pll_ctrl3_pfd_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void bb_top_i_pll_ctrl3_pfd_pol_setf(uint8_t pfdpol)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)pfdpol << 10));
}

 /**
 * @brief I_RX_CTRL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     25        rx_tia_i_ctrl   0
 *  24:23    tx_buffer_ib_trim   0b1
 *     22   en_rx_test_buffer_1p2v   0
 *  21:19      rx_lna_cap_trim   0b100
 *     18               TIA_en   1
 *     17      rx_en_dcoc_1p2v   1
 *     16   en_rx_test_buffer_1p2v_1   0
 *     15      rx_tia_i_ctrl_1   0
 *     14           en_pa_1p2v   1
 *     13        en_mixer_1p2v   1
 *     12          en_lna_1p2v   1
 *     11       en_filter_1p2v   1
 *     10       en_rx_adc_1p2v   0
 *  09:07       tx_pa_vcm_ctrl   0b1
 *  06:05   ldo_lna_out_tune_1p2v   0b1
 *  04:03   ldo_ana_bb_out_tune_1p2v   0b1
 *     02       rx_bb_vcm_ctrl   1
 *     01   en_ldo_lna_pa_1p2v   1
 *     00   en_ldo_ana_bb_1p2v   1
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET 0x000000DC


__INLINE static uint32_t bb_top_i_rx_ctrl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_rx_ctrl0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_BIT                     ((uint32_t)0x02000000)
#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_POS                     25
#define BB_TOP_I_RX_CTRL0_TX_BUFFER_IB_TRIM_MASK                ((uint32_t)0x01800000)
#define BB_TOP_I_RX_CTRL0_TX_BUFFER_IB_TRIM_LSB                 23
#define BB_TOP_I_RX_CTRL0_TX_BUFFER_IB_TRIM_WIDTH               ((uint32_t)0x00000002)
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_BIT            ((uint32_t)0x00400000)
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_POS            22
#define BB_TOP_I_RX_CTRL0_RX_LNA_CAP_TRIM_MASK                  ((uint32_t)0x00380000)
#define BB_TOP_I_RX_CTRL0_RX_LNA_CAP_TRIM_LSB                   19
#define BB_TOP_I_RX_CTRL0_RX_LNA_CAP_TRIM_WIDTH                 ((uint32_t)0x00000003)
#define BB_TOP_I_RX_CTRL0_TIA_EN_BIT                            ((uint32_t)0x00040000)
#define BB_TOP_I_RX_CTRL0_TIA_EN_POS                            18
#define BB_TOP_I_RX_CTRL0_RX_EN_DCOC_1P2V_BIT                   ((uint32_t)0x00020000)
#define BB_TOP_I_RX_CTRL0_RX_EN_DCOC_1P2V_POS                   17
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_1_BIT          ((uint32_t)0x00010000)
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_1_POS          16
#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_1_BIT                   ((uint32_t)0x00008000)
#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_1_POS                   15
#define BB_TOP_I_RX_CTRL0_EN_PA_1P2V_BIT                        ((uint32_t)0x00004000)
#define BB_TOP_I_RX_CTRL0_EN_PA_1P2V_POS                        14
#define BB_TOP_I_RX_CTRL0_EN_MIXER_1P2V_BIT                     ((uint32_t)0x00002000)
#define BB_TOP_I_RX_CTRL0_EN_MIXER_1P2V_POS                     13
#define BB_TOP_I_RX_CTRL0_EN_LNA_1P2V_BIT                       ((uint32_t)0x00001000)
#define BB_TOP_I_RX_CTRL0_EN_LNA_1P2V_POS                       12
#define BB_TOP_I_RX_CTRL0_EN_FILTER_1P2V_BIT                    ((uint32_t)0x00000800)
#define BB_TOP_I_RX_CTRL0_EN_FILTER_1P2V_POS                    11
#define BB_TOP_I_RX_CTRL0_EN_RX_ADC_1P2V_BIT                    ((uint32_t)0x00000400)
#define BB_TOP_I_RX_CTRL0_EN_RX_ADC_1P2V_POS                    10
#define BB_TOP_I_RX_CTRL0_TX_PA_VCM_CTRL_MASK                   ((uint32_t)0x00000380)
#define BB_TOP_I_RX_CTRL0_TX_PA_VCM_CTRL_LSB                    7
#define BB_TOP_I_RX_CTRL0_TX_PA_VCM_CTRL_WIDTH                  ((uint32_t)0x00000003)
#define BB_TOP_I_RX_CTRL0_LDO_LNA_OUT_TUNE_1P2V_MASK            ((uint32_t)0x00000060)
#define BB_TOP_I_RX_CTRL0_LDO_LNA_OUT_TUNE_1P2V_LSB             5
#define BB_TOP_I_RX_CTRL0_LDO_LNA_OUT_TUNE_1P2V_WIDTH           ((uint32_t)0x00000002)
#define BB_TOP_I_RX_CTRL0_LDO_ANA_BB_OUT_TUNE_1P2V_MASK         ((uint32_t)0x00000018)
#define BB_TOP_I_RX_CTRL0_LDO_ANA_BB_OUT_TUNE_1P2V_LSB          3
#define BB_TOP_I_RX_CTRL0_LDO_ANA_BB_OUT_TUNE_1P2V_WIDTH        ((uint32_t)0x00000002)
#define BB_TOP_I_RX_CTRL0_RX_BB_VCM_CTRL_BIT                    ((uint32_t)0x00000004)
#define BB_TOP_I_RX_CTRL0_RX_BB_VCM_CTRL_POS                    2
#define BB_TOP_I_RX_CTRL0_EN_LDO_LNA_PA_1P2V_BIT                ((uint32_t)0x00000002)
#define BB_TOP_I_RX_CTRL0_EN_LDO_LNA_PA_1P2V_POS                1
#define BB_TOP_I_RX_CTRL0_EN_LDO_ANA_BB_1P2V_BIT                ((uint32_t)0x00000001)
#define BB_TOP_I_RX_CTRL0_EN_LDO_ANA_BB_1P2V_POS                0

#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_RST                     0x0
#define BB_TOP_I_RX_CTRL0_TX_BUFFER_IB_TRIM_RST                 0x1
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_RST            0x0
#define BB_TOP_I_RX_CTRL0_RX_LNA_CAP_TRIM_RST                   0x100
#define BB_TOP_I_RX_CTRL0_TIA_EN_RST                            0x1
#define BB_TOP_I_RX_CTRL0_RX_EN_DCOC_1P2V_RST                   0x1
#define BB_TOP_I_RX_CTRL0_EN_RX_TEST_BUFFER_1P2V_1_RST          0x0
#define BB_TOP_I_RX_CTRL0_RX_TIA_I_CTRL_1_RST                   0x0
#define BB_TOP_I_RX_CTRL0_EN_PA_1P2V_RST                        0x1
#define BB_TOP_I_RX_CTRL0_EN_MIXER_1P2V_RST                     0x1
#define BB_TOP_I_RX_CTRL0_EN_LNA_1P2V_RST                       0x1
#define BB_TOP_I_RX_CTRL0_EN_FILTER_1P2V_RST                    0x1
#define BB_TOP_I_RX_CTRL0_EN_RX_ADC_1P2V_RST                    0x0
#define BB_TOP_I_RX_CTRL0_TX_PA_VCM_CTRL_RST                    0x1
#define BB_TOP_I_RX_CTRL0_LDO_LNA_OUT_TUNE_1P2V_RST             0x1
#define BB_TOP_I_RX_CTRL0_LDO_ANA_BB_OUT_TUNE_1P2V_RST          0x1
#define BB_TOP_I_RX_CTRL0_RX_BB_VCM_CTRL_RST                    0x1
#define BB_TOP_I_RX_CTRL0_EN_LDO_LNA_PA_1P2V_RST                0x1
#define BB_TOP_I_RX_CTRL0_EN_LDO_ANA_BB_1P2V_RST                0x1

__INLINE static void bb_top_i_rx_ctrl0_pack(uint8_t rxtiaictrl, uint8_t txbufferibtrim, uint8_t enrxtestbuffer1p2v, uint8_t rxlnacaptrim, uint8_t tiaen, uint8_t rxendcoc1p2v, uint8_t enrxtestbuffer1p2v1, uint8_t rxtiaictrl1, uint8_t enpa1p2v, uint8_t enmixer1p2v, uint8_t enlna1p2v, uint8_t enfilter1p2v, uint8_t enrxadc1p2v, uint8_t txpavcmctrl, uint8_t ldolnaouttune1p2v, uint8_t ldoanabbouttune1p2v, uint8_t rxbbvcmctrl, uint8_t enldolnapa1p2v, uint8_t enldoanabb1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rxtiaictrl << 25) | ((uint32_t)txbufferibtrim << 23) | ((uint32_t)enrxtestbuffer1p2v << 22) | ((uint32_t)rxlnacaptrim << 19) | ((uint32_t)tiaen << 18) | ((uint32_t)rxendcoc1p2v << 17) | ((uint32_t)enrxtestbuffer1p2v1 << 16) | ((uint32_t)rxtiaictrl1 << 15) | ((uint32_t)enpa1p2v << 14) | ((uint32_t)enmixer1p2v << 13) | ((uint32_t)enlna1p2v << 12) | ((uint32_t)enfilter1p2v << 11) | ((uint32_t)enrxadc1p2v << 10) | ((uint32_t)txpavcmctrl << 7) | ((uint32_t)ldolnaouttune1p2v << 5) | ((uint32_t)ldoanabbouttune1p2v << 3) | ((uint32_t)rxbbvcmctrl << 2) | ((uint32_t)enldolnapa1p2v << 1) | ((uint32_t)enldoanabb1p2v << 0));
}

__INLINE static void bb_top_i_rx_ctrl0_unpack(uint8_t* rxtiaictrl, uint8_t* txbufferibtrim, uint8_t* enrxtestbuffer1p2v, uint8_t* rxlnacaptrim, uint8_t* tiaen, uint8_t* rxendcoc1p2v, uint8_t* enrxtestbuffer1p2v1, uint8_t* rxtiaictrl1, uint8_t* enpa1p2v, uint8_t* enmixer1p2v, uint8_t* enlna1p2v, uint8_t* enfilter1p2v, uint8_t* enrxadc1p2v, uint8_t* txpavcmctrl, uint8_t* ldolnaouttune1p2v, uint8_t* ldoanabbouttune1p2v, uint8_t* rxbbvcmctrl, uint8_t* enldolnapa1p2v, uint8_t* enldoanabb1p2v)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rxtiaictrl = (localVal & ((uint32_t)0x02000000)) >> 25;
    *txbufferibtrim = (localVal & ((uint32_t)0x01800000)) >> 23;
    *enrxtestbuffer1p2v = (localVal & ((uint32_t)0x00400000)) >> 22;
    *rxlnacaptrim = (localVal & ((uint32_t)0x00380000)) >> 19;
    *tiaen = (localVal & ((uint32_t)0x00040000)) >> 18;
    *rxendcoc1p2v = (localVal & ((uint32_t)0x00020000)) >> 17;
    *enrxtestbuffer1p2v1 = (localVal & ((uint32_t)0x00010000)) >> 16;
    *rxtiaictrl1 = (localVal & ((uint32_t)0x00008000)) >> 15;
    *enpa1p2v = (localVal & ((uint32_t)0x00004000)) >> 14;
    *enmixer1p2v = (localVal & ((uint32_t)0x00002000)) >> 13;
    *enlna1p2v = (localVal & ((uint32_t)0x00001000)) >> 12;
    *enfilter1p2v = (localVal & ((uint32_t)0x00000800)) >> 11;
    *enrxadc1p2v = (localVal & ((uint32_t)0x00000400)) >> 10;
    *txpavcmctrl = (localVal & ((uint32_t)0x00000380)) >> 7;
    *ldolnaouttune1p2v = (localVal & ((uint32_t)0x00000060)) >> 5;
    *ldoanabbouttune1p2v = (localVal & ((uint32_t)0x00000018)) >> 3;
    *rxbbvcmctrl = (localVal & ((uint32_t)0x00000004)) >> 2;
    *enldolnapa1p2v = (localVal & ((uint32_t)0x00000002)) >> 1;
    *enldoanabb1p2v = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_rx_tia_i_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x02000000)) >> 25);
}

__INLINE static void bb_top_i_rx_ctrl0_rx_tia_i_ctrl_setf(uint8_t rxtiaictrl)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x02000000)) | ((uint32_t)rxtiaictrl << 25));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_tx_buffer_ib_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void bb_top_i_rx_ctrl0_tx_buffer_ib_trim_setf(uint8_t txbufferibtrim)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)txbufferibtrim << 23));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_rx_test_buffer_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00400000)) >> 22);
}

__INLINE static void bb_top_i_rx_ctrl0_en_rx_test_buffer_1p2v_setf(uint8_t enrxtestbuffer1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00400000)) | ((uint32_t)enrxtestbuffer1p2v << 22));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_rx_lna_cap_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00380000)) >> 19);
}

__INLINE static void bb_top_i_rx_ctrl0_rx_lna_cap_trim_setf(uint8_t rxlnacaptrim)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00380000)) | ((uint32_t)rxlnacaptrim << 19));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_tia_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void bb_top_i_rx_ctrl0_tia_en_setf(uint8_t tiaen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)tiaen << 18));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_rx_en_dcoc_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void bb_top_i_rx_ctrl0_rx_en_dcoc_1p2v_setf(uint8_t rxendcoc1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)rxendcoc1p2v << 17));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_rx_test_buffer_1p2v_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void bb_top_i_rx_ctrl0_en_rx_test_buffer_1p2v_1_setf(uint8_t enrxtestbuffer1p2v1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)enrxtestbuffer1p2v1 << 16));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_rx_tia_i_ctrl_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void bb_top_i_rx_ctrl0_rx_tia_i_ctrl_1_setf(uint8_t rxtiaictrl1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)rxtiaictrl1 << 15));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_pa_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void bb_top_i_rx_ctrl0_en_pa_1p2v_setf(uint8_t enpa1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)enpa1p2v << 14));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_mixer_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void bb_top_i_rx_ctrl0_en_mixer_1p2v_setf(uint8_t enmixer1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)enmixer1p2v << 13));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_lna_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void bb_top_i_rx_ctrl0_en_lna_1p2v_setf(uint8_t enlna1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)enlna1p2v << 12));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_filter_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void bb_top_i_rx_ctrl0_en_filter_1p2v_setf(uint8_t enfilter1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)enfilter1p2v << 11));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_rx_adc_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void bb_top_i_rx_ctrl0_en_rx_adc_1p2v_setf(uint8_t enrxadc1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)enrxadc1p2v << 10));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_tx_pa_vcm_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000380)) >> 7);
}

__INLINE static void bb_top_i_rx_ctrl0_tx_pa_vcm_ctrl_setf(uint8_t txpavcmctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000380)) | ((uint32_t)txpavcmctrl << 7));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_ldo_lna_out_tune_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void bb_top_i_rx_ctrl0_ldo_lna_out_tune_1p2v_setf(uint8_t ldolnaouttune1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)ldolnaouttune1p2v << 5));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_ldo_ana_bb_out_tune_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000018)) >> 3);
}

__INLINE static void bb_top_i_rx_ctrl0_ldo_ana_bb_out_tune_1p2v_setf(uint8_t ldoanabbouttune1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000018)) | ((uint32_t)ldoanabbouttune1p2v << 3));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_rx_bb_vcm_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void bb_top_i_rx_ctrl0_rx_bb_vcm_ctrl_setf(uint8_t rxbbvcmctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)rxbbvcmctrl << 2));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_ldo_lna_pa_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void bb_top_i_rx_ctrl0_en_ldo_lna_pa_1p2v_setf(uint8_t enldolnapa1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)enldolnapa1p2v << 1));
}

__INLINE static uint8_t bb_top_i_rx_ctrl0_en_ldo_ana_bb_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_rx_ctrl0_en_ldo_ana_bb_1p2v_setf(uint8_t enldoanabb1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)enldoanabb1p2v << 0));
}

 /**
 * @brief I_RX_CTRL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     25    rccal_discharge_c   0
 *     24        rccal_dcoc_en   0
 *     23   rccal_comparator_clk   0
 *     22       rccal_charge_c   0
 *  21:17         rccal_cap_sw   0b0
 *     16          rx_rccal_en   0
 *     13   rx_filter_swap_iq_1p2v   0
 *     12   rx_filter_bw_sel_1p2v   0
 *  09:06   filter_cap_sw_1p2v   0b1000
 *     00   rx_loop_timeout_en   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET 0x000000E0


__INLINE static uint32_t bb_top_i_rx_ctrl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_rx_ctrl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_RX_CTRL1_RCCAL_DISCHARGE_C_BIT                 ((uint32_t)0x02000000)
#define BB_TOP_I_RX_CTRL1_RCCAL_DISCHARGE_C_POS                 25
#define BB_TOP_I_RX_CTRL1_RCCAL_DCOC_EN_BIT                     ((uint32_t)0x01000000)
#define BB_TOP_I_RX_CTRL1_RCCAL_DCOC_EN_POS                     24
#define BB_TOP_I_RX_CTRL1_RCCAL_COMPARATOR_CLK_BIT              ((uint32_t)0x00800000)
#define BB_TOP_I_RX_CTRL1_RCCAL_COMPARATOR_CLK_POS              23
#define BB_TOP_I_RX_CTRL1_RCCAL_CHARGE_C_BIT                    ((uint32_t)0x00400000)
#define BB_TOP_I_RX_CTRL1_RCCAL_CHARGE_C_POS                    22
#define BB_TOP_I_RX_CTRL1_RCCAL_CAP_SW_MASK                     ((uint32_t)0x003E0000)
#define BB_TOP_I_RX_CTRL1_RCCAL_CAP_SW_LSB                      17
#define BB_TOP_I_RX_CTRL1_RCCAL_CAP_SW_WIDTH                    ((uint32_t)0x00000005)
#define BB_TOP_I_RX_CTRL1_RX_RCCAL_EN_BIT                       ((uint32_t)0x00010000)
#define BB_TOP_I_RX_CTRL1_RX_RCCAL_EN_POS                       16
#define BB_TOP_I_RX_CTRL1_RX_FILTER_SWAP_IQ_1P2V_BIT            ((uint32_t)0x00002000)
#define BB_TOP_I_RX_CTRL1_RX_FILTER_SWAP_IQ_1P2V_POS            13
#define BB_TOP_I_RX_CTRL1_RX_FILTER_BW_SEL_1P2V_BIT             ((uint32_t)0x00001000)
#define BB_TOP_I_RX_CTRL1_RX_FILTER_BW_SEL_1P2V_POS             12
#define BB_TOP_I_RX_CTRL1_FILTER_CAP_SW_1P2V_MASK               ((uint32_t)0x000003C0)
#define BB_TOP_I_RX_CTRL1_FILTER_CAP_SW_1P2V_LSB                6
#define BB_TOP_I_RX_CTRL1_FILTER_CAP_SW_1P2V_WIDTH              ((uint32_t)0x00000004)
#define BB_TOP_I_RX_CTRL1_RX_LOOP_TIMEOUT_EN_BIT                ((uint32_t)0x00000001)
#define BB_TOP_I_RX_CTRL1_RX_LOOP_TIMEOUT_EN_POS                0

#define BB_TOP_I_RX_CTRL1_RCCAL_DISCHARGE_C_RST                 0x0
#define BB_TOP_I_RX_CTRL1_RCCAL_DCOC_EN_RST                     0x0
#define BB_TOP_I_RX_CTRL1_RCCAL_COMPARATOR_CLK_RST              0x0
#define BB_TOP_I_RX_CTRL1_RCCAL_CHARGE_C_RST                    0x0
#define BB_TOP_I_RX_CTRL1_RCCAL_CAP_SW_RST                      0x0
#define BB_TOP_I_RX_CTRL1_RX_RCCAL_EN_RST                       0x0
#define BB_TOP_I_RX_CTRL1_RX_FILTER_SWAP_IQ_1P2V_RST            0x0
#define BB_TOP_I_RX_CTRL1_RX_FILTER_BW_SEL_1P2V_RST             0x0
#define BB_TOP_I_RX_CTRL1_FILTER_CAP_SW_1P2V_RST                0x1000
#define BB_TOP_I_RX_CTRL1_RX_LOOP_TIMEOUT_EN_RST                0x0

__INLINE static void bb_top_i_rx_ctrl1_pack(uint8_t rccaldischargec, uint8_t rccaldcocen, uint8_t rccalcomparatorclk, uint8_t rccalchargec, uint8_t rccalcapsw, uint8_t rxrccalen, uint8_t rxfilterswapiq1p2v, uint8_t rxfilterbwsel1p2v, uint8_t filtercapsw1p2v, uint8_t rxlooptimeouten)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rccaldischargec << 25) | ((uint32_t)rccaldcocen << 24) | ((uint32_t)rccalcomparatorclk << 23) | ((uint32_t)rccalchargec << 22) | ((uint32_t)rccalcapsw << 17) | ((uint32_t)rxrccalen << 16) | ((uint32_t)rxfilterswapiq1p2v << 13) | ((uint32_t)rxfilterbwsel1p2v << 12) | ((uint32_t)filtercapsw1p2v << 6) | ((uint32_t)rxlooptimeouten << 0));
}

__INLINE static void bb_top_i_rx_ctrl1_unpack(uint8_t* rccaldischargec, uint8_t* rccaldcocen, uint8_t* rccalcomparatorclk, uint8_t* rccalchargec, uint8_t* rccalcapsw, uint8_t* rxrccalen, uint8_t* rxfilterswapiq1p2v, uint8_t* rxfilterbwsel1p2v, uint8_t* filtercapsw1p2v, uint8_t* rxlooptimeouten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rccaldischargec = (localVal & ((uint32_t)0x02000000)) >> 25;
    *rccaldcocen = (localVal & ((uint32_t)0x01000000)) >> 24;
    *rccalcomparatorclk = (localVal & ((uint32_t)0x00800000)) >> 23;
    *rccalchargec = (localVal & ((uint32_t)0x00400000)) >> 22;
    *rccalcapsw = (localVal & ((uint32_t)0x003E0000)) >> 17;
    *rxrccalen = (localVal & ((uint32_t)0x00010000)) >> 16;
    *rxfilterswapiq1p2v = (localVal & ((uint32_t)0x00002000)) >> 13;
    *rxfilterbwsel1p2v = (localVal & ((uint32_t)0x00001000)) >> 12;
    *filtercapsw1p2v = (localVal & ((uint32_t)0x000003C0)) >> 6;
    *rxlooptimeouten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rccal_discharge_c_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x02000000)) >> 25);
}

__INLINE static void bb_top_i_rx_ctrl1_rccal_discharge_c_setf(uint8_t rccaldischargec)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x02000000)) | ((uint32_t)rccaldischargec << 25));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rccal_dcoc_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void bb_top_i_rx_ctrl1_rccal_dcoc_en_setf(uint8_t rccaldcocen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)rccaldcocen << 24));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rccal_comparator_clk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void bb_top_i_rx_ctrl1_rccal_comparator_clk_setf(uint8_t rccalcomparatorclk)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)rccalcomparatorclk << 23));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rccal_charge_c_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00400000)) >> 22);
}

__INLINE static void bb_top_i_rx_ctrl1_rccal_charge_c_setf(uint8_t rccalchargec)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00400000)) | ((uint32_t)rccalchargec << 22));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rccal_cap_sw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003E0000)) >> 17);
}

__INLINE static void bb_top_i_rx_ctrl1_rccal_cap_sw_setf(uint8_t rccalcapsw)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x003E0000)) | ((uint32_t)rccalcapsw << 17));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rx_rccal_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void bb_top_i_rx_ctrl1_rx_rccal_en_setf(uint8_t rxrccalen)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)rxrccalen << 16));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rx_filter_swap_iq_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void bb_top_i_rx_ctrl1_rx_filter_swap_iq_1p2v_setf(uint8_t rxfilterswapiq1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)rxfilterswapiq1p2v << 13));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rx_filter_bw_sel_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void bb_top_i_rx_ctrl1_rx_filter_bw_sel_1p2v_setf(uint8_t rxfilterbwsel1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)rxfilterbwsel1p2v << 12));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_filter_cap_sw_1p2v_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003C0)) >> 6);
}

__INLINE static void bb_top_i_rx_ctrl1_filter_cap_sw_1p2v_setf(uint8_t filtercapsw1p2v)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000003C0)) | ((uint32_t)filtercapsw1p2v << 6));
}

__INLINE static uint8_t bb_top_i_rx_ctrl1_rx_loop_timeout_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_rx_ctrl1_rx_loop_timeout_en_setf(uint8_t rxlooptimeouten)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_RX_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)rxlooptimeouten << 0));
}

 /**
 * @brief O_DIG_BB_CTRL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24      sync_astate_out   0b0
 *  23:22                   ri   0b0
 *  20:16       rx_demod_check   0b0
 *  09:00         freq_est_raw   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET 0x000000E4


__INLINE static uint32_t bb_top_o_dig_bb_ctrl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL0_SYNC_ASTATE_OUT_MASK                  ((uint32_t)0xFF000000)
#define BB_TOP_O_DIG_BB_CTRL0_SYNC_ASTATE_OUT_LSB                   24
#define BB_TOP_O_DIG_BB_CTRL0_SYNC_ASTATE_OUT_WIDTH                 ((uint32_t)0x00000008)
#define BB_TOP_O_DIG_BB_CTRL0_RI_MASK                               ((uint32_t)0x00C00000)
#define BB_TOP_O_DIG_BB_CTRL0_RI_LSB                                22
#define BB_TOP_O_DIG_BB_CTRL0_RI_WIDTH                              ((uint32_t)0x00000002)
#define BB_TOP_O_DIG_BB_CTRL0_RX_DEMOD_CHECK_MASK                   ((uint32_t)0x001F0000)
#define BB_TOP_O_DIG_BB_CTRL0_RX_DEMOD_CHECK_LSB                    16
#define BB_TOP_O_DIG_BB_CTRL0_RX_DEMOD_CHECK_WIDTH                  ((uint32_t)0x00000005)
#define BB_TOP_O_DIG_BB_CTRL0_FREQ_EST_RAW_MASK                     ((uint32_t)0x000003FF)
#define BB_TOP_O_DIG_BB_CTRL0_FREQ_EST_RAW_LSB                      0
#define BB_TOP_O_DIG_BB_CTRL0_FREQ_EST_RAW_WIDTH                    ((uint32_t)0x0000000A)

#define BB_TOP_O_DIG_BB_CTRL0_SYNC_ASTATE_OUT_RST                   0x0
#define BB_TOP_O_DIG_BB_CTRL0_RI_RST                                0x0
#define BB_TOP_O_DIG_BB_CTRL0_RX_DEMOD_CHECK_RST                    0x0
#define BB_TOP_O_DIG_BB_CTRL0_FREQ_EST_RAW_RST                      0x0

__INLINE static void bb_top_o_dig_bb_ctrl0_unpack(uint8_t* syncastateout, uint8_t* ri, uint8_t* rxdemodcheck, uint8_t* freqestraw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *syncastateout = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *ri = (localVal & ((uint32_t)0x00C00000)) >> 22;
    *rxdemodcheck = (localVal & ((uint32_t)0x001F0000)) >> 16;
    *freqestraw = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl0_sync_astate_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl0_ri_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00C00000)) >> 22);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl0_rx_demod_check_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001F0000)) >> 16);
}

__INLINE static uint16_t bb_top_o_dig_bb_ctrl0_freq_est_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

 /**
 * @brief O_DIG_BB_CTRL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:24                nrssi   0b0
 *  23:16                arssi   0b0
 *  15:08                rxabs   0b0
 *  07:04       rx_demod_check   0b0
 *  03:00             agc_gIdx   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET 0x000000E8


__INLINE static uint32_t bb_top_o_dig_bb_ctrl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL1_NRSSI_MASK                            ((uint32_t)0xFF000000)
#define BB_TOP_O_DIG_BB_CTRL1_NRSSI_LSB                             24
#define BB_TOP_O_DIG_BB_CTRL1_NRSSI_WIDTH                           ((uint32_t)0x00000008)
#define BB_TOP_O_DIG_BB_CTRL1_ARSSI_MASK                            ((uint32_t)0x00FF0000)
#define BB_TOP_O_DIG_BB_CTRL1_ARSSI_LSB                             16
#define BB_TOP_O_DIG_BB_CTRL1_ARSSI_WIDTH                           ((uint32_t)0x00000008)
#define BB_TOP_O_DIG_BB_CTRL1_RXABS_MASK                            ((uint32_t)0x0000FF00)
#define BB_TOP_O_DIG_BB_CTRL1_RXABS_LSB                             8
#define BB_TOP_O_DIG_BB_CTRL1_RXABS_WIDTH                           ((uint32_t)0x00000008)
#define BB_TOP_O_DIG_BB_CTRL1_RX_DEMOD_CHECK_MASK                   ((uint32_t)0x000000F0)
#define BB_TOP_O_DIG_BB_CTRL1_RX_DEMOD_CHECK_LSB                    4
#define BB_TOP_O_DIG_BB_CTRL1_RX_DEMOD_CHECK_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_O_DIG_BB_CTRL1_AGC_G_IDX_MASK                        ((uint32_t)0x0000000F)
#define BB_TOP_O_DIG_BB_CTRL1_AGC_G_IDX_LSB                         0
#define BB_TOP_O_DIG_BB_CTRL1_AGC_G_IDX_WIDTH                       ((uint32_t)0x00000004)

#define BB_TOP_O_DIG_BB_CTRL1_NRSSI_RST                             0x0
#define BB_TOP_O_DIG_BB_CTRL1_ARSSI_RST                             0x0
#define BB_TOP_O_DIG_BB_CTRL1_RXABS_RST                             0x0
#define BB_TOP_O_DIG_BB_CTRL1_RX_DEMOD_CHECK_RST                    0x0
#define BB_TOP_O_DIG_BB_CTRL1_AGC_G_IDX_RST                         0x0

__INLINE static void bb_top_o_dig_bb_ctrl1_unpack(uint8_t* nrssi, uint8_t* arssi, uint8_t* rxabs, uint8_t* rxdemodcheck, uint8_t* agcgidx)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *nrssi = (localVal & ((uint32_t)0xFF000000)) >> 24;
    *arssi = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *rxabs = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *rxdemodcheck = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *agcgidx = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl1_nrssi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFF000000)) >> 24);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl1_arssi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl1_rxabs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl1_rx_demod_check_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl1_agc_g_idx_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief O_DIG_BB_CTRL2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          sync_word_n   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL2_OFFSET 0x000000EC


__INLINE static uint32_t bb_top_o_dig_bb_ctrl2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL2_SYNC_WORD_N_MASK                      ((uint32_t)0xFFFFFFFF)
#define BB_TOP_O_DIG_BB_CTRL2_SYNC_WORD_N_LSB                       0
#define BB_TOP_O_DIG_BB_CTRL2_SYNC_WORD_N_WIDTH                     ((uint32_t)0x00000020)

#define BB_TOP_O_DIG_BB_CTRL2_SYNC_WORD_N_RST                       0x0

__INLINE static void bb_top_o_dig_bb_ctrl2_unpack(uint8_t* syncwordn)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *syncwordn = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_o_dig_bb_ctrl2_sync_word_n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief O_DIG_BB_CTRL3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:24            rcal_fina   0b0
 *  22:16            kcal_fina   0b0
 *  08:00         ct_word_fina   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET 0x000000F0


__INLINE static uint32_t bb_top_o_dig_bb_ctrl3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL3_RCAL_FINA_MASK                        ((uint32_t)0x1F000000)
#define BB_TOP_O_DIG_BB_CTRL3_RCAL_FINA_LSB                         24
#define BB_TOP_O_DIG_BB_CTRL3_RCAL_FINA_WIDTH                       ((uint32_t)0x00000005)
#define BB_TOP_O_DIG_BB_CTRL3_KCAL_FINA_MASK                        ((uint32_t)0x007F0000)
#define BB_TOP_O_DIG_BB_CTRL3_KCAL_FINA_LSB                         16
#define BB_TOP_O_DIG_BB_CTRL3_KCAL_FINA_WIDTH                       ((uint32_t)0x00000007)
#define BB_TOP_O_DIG_BB_CTRL3_CT_WORD_FINA_MASK                     ((uint32_t)0x000001FF)
#define BB_TOP_O_DIG_BB_CTRL3_CT_WORD_FINA_LSB                      0
#define BB_TOP_O_DIG_BB_CTRL3_CT_WORD_FINA_WIDTH                    ((uint32_t)0x00000009)

#define BB_TOP_O_DIG_BB_CTRL3_RCAL_FINA_RST                         0x0
#define BB_TOP_O_DIG_BB_CTRL3_KCAL_FINA_RST                         0x0
#define BB_TOP_O_DIG_BB_CTRL3_CT_WORD_FINA_RST                      0x0

__INLINE static void bb_top_o_dig_bb_ctrl3_unpack(uint8_t* rcalfina, uint8_t* kcalfina, uint8_t* ctwordfina)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rcalfina = (localVal & ((uint32_t)0x1F000000)) >> 24;
    *kcalfina = (localVal & ((uint32_t)0x007F0000)) >> 16;
    *ctwordfina = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl3_rcal_fina_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1F000000)) >> 24);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl3_kcal_fina_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x007F0000)) >> 16);
}

__INLINE static uint16_t bb_top_o_dig_bb_ctrl3_ct_word_fina_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

 /**
 * @brief O_DIG_BB_CTRL4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31   rx_rccal_comparator_out   0
 *     22           lock_ready   0
 *  19:00        actu_cnt_fina   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET 0x000000F4


__INLINE static uint32_t bb_top_o_dig_bb_ctrl4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL4_RX_RCCAL_COMPARATOR_OUT_BIT           ((uint32_t)0x80000000)
#define BB_TOP_O_DIG_BB_CTRL4_RX_RCCAL_COMPARATOR_OUT_POS           31
#define BB_TOP_O_DIG_BB_CTRL4_LOCK_READY_BIT                        ((uint32_t)0x00400000)
#define BB_TOP_O_DIG_BB_CTRL4_LOCK_READY_POS                        22
#define BB_TOP_O_DIG_BB_CTRL4_ACTU_CNT_FINA_MASK                    ((uint32_t)0x000FFFFF)
#define BB_TOP_O_DIG_BB_CTRL4_ACTU_CNT_FINA_LSB                     0
#define BB_TOP_O_DIG_BB_CTRL4_ACTU_CNT_FINA_WIDTH                   ((uint32_t)0x00000014)

#define BB_TOP_O_DIG_BB_CTRL4_RX_RCCAL_COMPARATOR_OUT_RST           0x0
#define BB_TOP_O_DIG_BB_CTRL4_LOCK_READY_RST                        0x0
#define BB_TOP_O_DIG_BB_CTRL4_ACTU_CNT_FINA_RST                     0x0

__INLINE static void bb_top_o_dig_bb_ctrl4_unpack(uint8_t* rxrccalcomparatorout, uint8_t* lockready, uint8_t* actucntfina)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rxrccalcomparatorout = (localVal & ((uint32_t)0x80000000)) >> 31;
    *lockready = (localVal & ((uint32_t)0x00400000)) >> 22;
    *actucntfina = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl4_rx_rccal_comparator_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static uint8_t bb_top_o_dig_bb_ctrl4_lock_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00400000)) >> 22);
}

__INLINE static uint32_t bb_top_o_dig_bb_ctrl4_actu_cnt_fina_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

 /**
 * @brief O_DIG_BB_CTRL6 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:20        supp_samp_cnt   0b0
 *  19:10          supp_samp_q   0b0
 *  09:00          supp_samp_i   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET 0x000000FC


__INLINE static uint32_t bb_top_o_dig_bb_ctrl6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_CNT_MASK                    ((uint32_t)0xFFF00000)
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_CNT_LSB                     20
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_CNT_WIDTH                   ((uint32_t)0x0000000C)
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_Q_MASK                      ((uint32_t)0x000FFC00)
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_Q_LSB                       10
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_Q_WIDTH                     ((uint32_t)0x0000000A)
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_I_MASK                      ((uint32_t)0x000003FF)
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_I_LSB                       0
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_I_WIDTH                     ((uint32_t)0x0000000A)

#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_CNT_RST                     0x0
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_Q_RST                       0x0
#define BB_TOP_O_DIG_BB_CTRL6_SUPP_SAMP_I_RST                       0x0

__INLINE static void bb_top_o_dig_bb_ctrl6_unpack(uint8_t* suppsampcnt, uint8_t* suppsampq, uint8_t* suppsampi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *suppsampcnt = (localVal & ((uint32_t)0xFFF00000)) >> 20;
    *suppsampq = (localVal & ((uint32_t)0x000FFC00)) >> 10;
    *suppsampi = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t bb_top_o_dig_bb_ctrl6_supp_samp_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFF00000)) >> 20);
}

__INLINE static uint16_t bb_top_o_dig_bb_ctrl6_supp_samp_q_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFC00)) >> 10);
}

__INLINE static uint16_t bb_top_o_dig_bb_ctrl6_supp_samp_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_O_DIG_BB_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

 /**
 * @brief I_PLL_CTRL5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24             delay_up   0b0
 *  23:21             delay_dn   0b0
 *  08:05              cp_prog   0b0
 *     00      en_pllbuf_ctcnt   0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET 0x00000104


__INLINE static uint32_t bb_top_i_pll_ctrl5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL5_DELAY_UP_MASK                         ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL5_DELAY_UP_LSB                          24
#define BB_TOP_I_PLL_CTRL5_DELAY_UP_WIDTH                        ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL5_DELAY_DN_MASK                         ((uint32_t)0x00E00000)
#define BB_TOP_I_PLL_CTRL5_DELAY_DN_LSB                          21
#define BB_TOP_I_PLL_CTRL5_DELAY_DN_WIDTH                        ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL5_CP_PROG_MASK                          ((uint32_t)0x000001E0)
#define BB_TOP_I_PLL_CTRL5_CP_PROG_LSB                           5
#define BB_TOP_I_PLL_CTRL5_CP_PROG_WIDTH                         ((uint32_t)0x00000004)
#define BB_TOP_I_PLL_CTRL5_EN_PLLBUF_CTCNT_BIT                   ((uint32_t)0x00000001)
#define BB_TOP_I_PLL_CTRL5_EN_PLLBUF_CTCNT_POS                   0

#define BB_TOP_I_PLL_CTRL5_DELAY_UP_RST                          0x0
#define BB_TOP_I_PLL_CTRL5_DELAY_DN_RST                          0x0
#define BB_TOP_I_PLL_CTRL5_CP_PROG_RST                           0x0
#define BB_TOP_I_PLL_CTRL5_EN_PLLBUF_CTCNT_RST                   0x0

__INLINE static void bb_top_i_pll_ctrl5_pack(uint8_t delayup, uint8_t delaydn, uint8_t cpprog, uint8_t enpllbufctcnt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)delayup << 24) | ((uint32_t)delaydn << 21) | ((uint32_t)cpprog << 5) | ((uint32_t)enpllbufctcnt << 0));
}

__INLINE static void bb_top_i_pll_ctrl5_unpack(uint8_t* delayup, uint8_t* delaydn, uint8_t* cpprog, uint8_t* enpllbufctcnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *delayup = (localVal & ((uint32_t)0x07000000)) >> 24;
    *delaydn = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *cpprog = (localVal & ((uint32_t)0x000001E0)) >> 5;
    *enpllbufctcnt = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl5_delay_up_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl5_delay_up_setf(uint8_t delayup)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)delayup << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl5_delay_dn_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void bb_top_i_pll_ctrl5_delay_dn_setf(uint8_t delaydn)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)delaydn << 21));
}

__INLINE static uint8_t bb_top_i_pll_ctrl5_cp_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001E0)) >> 5);
}

__INLINE static void bb_top_i_pll_ctrl5_cp_prog_setf(uint8_t cpprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000001E0)) | ((uint32_t)cpprog << 5));
}

__INLINE static uint8_t bb_top_i_pll_ctrl5_en_pllbuf_ctcnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void bb_top_i_pll_ctrl5_en_pllbuf_ctcnt_setf(uint8_t enpllbufctcnt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)enpllbufctcnt << 0));
}

 /**
 * @brief I_PLL_CTRL6 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24         ib_div2_prog   0b10
 *  23:21               lpf_rz   0b0
 *  20:18          ib_tpm_prog   0b10
 *  17:16               lpf_r2   0b0
 *  15:14               lpf_r1   0b0
 *  13:12               lpf_c3   0b0
 *  11:10               lpf_c2   0b0
 *  09:08               lpf_c1   0b0
 *  07:04          ib_vco_prog   0b1000
 *  03:00           ib_cp_prog   0b1010
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET 0x00000108


__INLINE static uint32_t bb_top_i_pll_ctrl6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl6_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL6_IB_DIV2_PROG_MASK                     ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL6_IB_DIV2_PROG_LSB                      24
#define BB_TOP_I_PLL_CTRL6_IB_DIV2_PROG_WIDTH                    ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL6_LPF_RZ_MASK                           ((uint32_t)0x00E00000)
#define BB_TOP_I_PLL_CTRL6_LPF_RZ_LSB                            21
#define BB_TOP_I_PLL_CTRL6_LPF_RZ_WIDTH                          ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL6_IB_TPM_PROG_MASK                      ((uint32_t)0x001C0000)
#define BB_TOP_I_PLL_CTRL6_IB_TPM_PROG_LSB                       18
#define BB_TOP_I_PLL_CTRL6_IB_TPM_PROG_WIDTH                     ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL6_LPF_R2_MASK                           ((uint32_t)0x00030000)
#define BB_TOP_I_PLL_CTRL6_LPF_R2_LSB                            16
#define BB_TOP_I_PLL_CTRL6_LPF_R2_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL6_LPF_R1_MASK                           ((uint32_t)0x0000C000)
#define BB_TOP_I_PLL_CTRL6_LPF_R1_LSB                            14
#define BB_TOP_I_PLL_CTRL6_LPF_R1_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL6_LPF_C3_MASK                           ((uint32_t)0x00003000)
#define BB_TOP_I_PLL_CTRL6_LPF_C3_LSB                            12
#define BB_TOP_I_PLL_CTRL6_LPF_C3_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL6_LPF_C2_MASK                           ((uint32_t)0x00000C00)
#define BB_TOP_I_PLL_CTRL6_LPF_C2_LSB                            10
#define BB_TOP_I_PLL_CTRL6_LPF_C2_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL6_LPF_C1_MASK                           ((uint32_t)0x00000300)
#define BB_TOP_I_PLL_CTRL6_LPF_C1_LSB                            8
#define BB_TOP_I_PLL_CTRL6_LPF_C1_WIDTH                          ((uint32_t)0x00000002)
#define BB_TOP_I_PLL_CTRL6_IB_VCO_PROG_MASK                      ((uint32_t)0x000000F0)
#define BB_TOP_I_PLL_CTRL6_IB_VCO_PROG_LSB                       4
#define BB_TOP_I_PLL_CTRL6_IB_VCO_PROG_WIDTH                     ((uint32_t)0x00000004)
#define BB_TOP_I_PLL_CTRL6_IB_CP_PROG_MASK                       ((uint32_t)0x0000000F)
#define BB_TOP_I_PLL_CTRL6_IB_CP_PROG_LSB                        0
#define BB_TOP_I_PLL_CTRL6_IB_CP_PROG_WIDTH                      ((uint32_t)0x00000004)

#define BB_TOP_I_PLL_CTRL6_IB_DIV2_PROG_RST                      0x10
#define BB_TOP_I_PLL_CTRL6_LPF_RZ_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_IB_TPM_PROG_RST                       0x10
#define BB_TOP_I_PLL_CTRL6_LPF_R2_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_LPF_R1_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_LPF_C3_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_LPF_C2_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_LPF_C1_RST                            0x0
#define BB_TOP_I_PLL_CTRL6_IB_VCO_PROG_RST                       0x1000
#define BB_TOP_I_PLL_CTRL6_IB_CP_PROG_RST                        0x1010

__INLINE static void bb_top_i_pll_ctrl6_pack(uint8_t ibdiv2prog, uint8_t lpfrz, uint8_t ibtpmprog, uint8_t lpfr2, uint8_t lpfr1, uint8_t lpfc3, uint8_t lpfc2, uint8_t lpfc1, uint8_t ibvcoprog, uint8_t ibcpprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)ibdiv2prog << 24) | ((uint32_t)lpfrz << 21) | ((uint32_t)ibtpmprog << 18) | ((uint32_t)lpfr2 << 16) | ((uint32_t)lpfr1 << 14) | ((uint32_t)lpfc3 << 12) | ((uint32_t)lpfc2 << 10) | ((uint32_t)lpfc1 << 8) | ((uint32_t)ibvcoprog << 4) | ((uint32_t)ibcpprog << 0));
}

__INLINE static void bb_top_i_pll_ctrl6_unpack(uint8_t* ibdiv2prog, uint8_t* lpfrz, uint8_t* ibtpmprog, uint8_t* lpfr2, uint8_t* lpfr1, uint8_t* lpfc3, uint8_t* lpfc2, uint8_t* lpfc1, uint8_t* ibvcoprog, uint8_t* ibcpprog)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *ibdiv2prog = (localVal & ((uint32_t)0x07000000)) >> 24;
    *lpfrz = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *ibtpmprog = (localVal & ((uint32_t)0x001C0000)) >> 18;
    *lpfr2 = (localVal & ((uint32_t)0x00030000)) >> 16;
    *lpfr1 = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lpfc3 = (localVal & ((uint32_t)0x00003000)) >> 12;
    *lpfc2 = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *lpfc1 = (localVal & ((uint32_t)0x00000300)) >> 8;
    *ibvcoprog = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ibcpprog = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_ib_div2_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl6_ib_div2_prog_setf(uint8_t ibdiv2prog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)ibdiv2prog << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_rz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_rz_setf(uint8_t lpfrz)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)lpfrz << 21));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_ib_tpm_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001C0000)) >> 18);
}

__INLINE static void bb_top_i_pll_ctrl6_ib_tpm_prog_setf(uint8_t ibtpmprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x001C0000)) | ((uint32_t)ibtpmprog << 18));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_r2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00030000)) >> 16);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_r2_setf(uint8_t lpfr2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00030000)) | ((uint32_t)lpfr2 << 16));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_r1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_r1_setf(uint8_t lpfr1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lpfr1 << 14));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_c3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_c3_setf(uint8_t lpfc3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lpfc3 << 12));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_c2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_c2_setf(uint8_t lpfc2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)lpfc2 << 10));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_lpf_c1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void bb_top_i_pll_ctrl6_lpf_c1_setf(uint8_t lpfc1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)lpfc1 << 8));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_ib_vco_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_pll_ctrl6_ib_vco_prog_setf(uint8_t ibvcoprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)ibvcoprog << 4));
}

__INLINE static uint8_t bb_top_i_pll_ctrl6_ib_cp_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_pll_ctrl6_ib_cp_prog_setf(uint8_t ibcpprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)ibcpprog << 0));
}

 /**
 * @brief I_PLL_CTRL7 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:24            vmid_prog   0b100
 *  20:18     vco_var_tpm_prog   0b100
 *  17:15         vco_var_prog   0b100
 *     10              pfd_pol   0
 *  09:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET 0x0000010C


__INLINE static uint32_t bb_top_i_pll_ctrl7_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_pll_ctrl7_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_PLL_CTRL7_VMID_PROG_MASK                        ((uint32_t)0x07000000)
#define BB_TOP_I_PLL_CTRL7_VMID_PROG_LSB                         24
#define BB_TOP_I_PLL_CTRL7_VMID_PROG_WIDTH                       ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_TPM_PROG_MASK                 ((uint32_t)0x001C0000)
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_TPM_PROG_LSB                  18
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_TPM_PROG_WIDTH                ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_PROG_MASK                     ((uint32_t)0x00038000)
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_PROG_LSB                      15
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_PROG_WIDTH                    ((uint32_t)0x00000003)
#define BB_TOP_I_PLL_CTRL7_PFD_POL_BIT                           ((uint32_t)0x00000400)
#define BB_TOP_I_PLL_CTRL7_PFD_POL_POS                           10
#define BB_TOP_I_PLL_CTRL7_RESERVED_MASK                         ((uint32_t)0x000003FF)
#define BB_TOP_I_PLL_CTRL7_RESERVED_LSB                          0
#define BB_TOP_I_PLL_CTRL7_RESERVED_WIDTH                        ((uint32_t)0x0000000A)

#define BB_TOP_I_PLL_CTRL7_VMID_PROG_RST                         0x100
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_TPM_PROG_RST                  0x100
#define BB_TOP_I_PLL_CTRL7_VCO_VAR_PROG_RST                      0x100
#define BB_TOP_I_PLL_CTRL7_PFD_POL_RST                           0x0
#define BB_TOP_I_PLL_CTRL7_RESERVED_RST                          0x0

__INLINE static void bb_top_i_pll_ctrl7_pack(uint8_t vmidprog, uint8_t vcovartpmprog, uint8_t vcovarprog, uint8_t pfdpol, uint16_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)vmidprog << 24) | ((uint32_t)vcovartpmprog << 18) | ((uint32_t)vcovarprog << 15) | ((uint32_t)pfdpol << 10) | ((uint32_t)reserved << 0));
}

__INLINE static void bb_top_i_pll_ctrl7_unpack(uint8_t* vmidprog, uint8_t* vcovartpmprog, uint8_t* vcovarprog, uint8_t* pfdpol, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *vmidprog = (localVal & ((uint32_t)0x07000000)) >> 24;
    *vcovartpmprog = (localVal & ((uint32_t)0x001C0000)) >> 18;
    *vcovarprog = (localVal & ((uint32_t)0x00038000)) >> 15;
    *pfdpol = (localVal & ((uint32_t)0x00000400)) >> 10;
    *reserved = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_pll_ctrl7_vmid_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07000000)) >> 24);
}

__INLINE static void bb_top_i_pll_ctrl7_vmid_prog_setf(uint8_t vmidprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x07000000)) | ((uint32_t)vmidprog << 24));
}

__INLINE static uint8_t bb_top_i_pll_ctrl7_vco_var_tpm_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001C0000)) >> 18);
}

__INLINE static void bb_top_i_pll_ctrl7_vco_var_tpm_prog_setf(uint8_t vcovartpmprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x001C0000)) | ((uint32_t)vcovartpmprog << 18));
}

__INLINE static uint8_t bb_top_i_pll_ctrl7_vco_var_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00038000)) >> 15);
}

__INLINE static void bb_top_i_pll_ctrl7_vco_var_prog_setf(uint8_t vcovarprog)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00038000)) | ((uint32_t)vcovarprog << 15));
}

__INLINE static uint8_t bb_top_i_pll_ctrl7_pfd_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void bb_top_i_pll_ctrl7_pfd_pol_setf(uint8_t pfdpol)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_PLL_CTRL7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)pfdpol << 10));
}

 /**
 * @brief I_ANT_SEL_01 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  18:16      Ant_Switch_Mode   0b0
 *  15:08              Ant_Win   0b0
 *  07:00              Ant_Dly   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET 0x00000110


__INLINE static uint32_t bb_top_i_ant_sel_01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_ant_sel_01_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_ANT_SEL_01_ANT_SWITCH_MODE_MASK                  ((uint32_t)0x00070000)
#define BB_TOP_I_ANT_SEL_01_ANT_SWITCH_MODE_LSB                   16
#define BB_TOP_I_ANT_SEL_01_ANT_SWITCH_MODE_WIDTH                 ((uint32_t)0x00000003)
#define BB_TOP_I_ANT_SEL_01_ANT_WIN_MASK                          ((uint32_t)0x0000FF00)
#define BB_TOP_I_ANT_SEL_01_ANT_WIN_LSB                           8
#define BB_TOP_I_ANT_SEL_01_ANT_WIN_WIDTH                         ((uint32_t)0x00000008)
#define BB_TOP_I_ANT_SEL_01_ANT_DLY_MASK                          ((uint32_t)0x000000FF)
#define BB_TOP_I_ANT_SEL_01_ANT_DLY_LSB                           0
#define BB_TOP_I_ANT_SEL_01_ANT_DLY_WIDTH                         ((uint32_t)0x00000008)

#define BB_TOP_I_ANT_SEL_01_ANT_SWITCH_MODE_RST                   0x0
#define BB_TOP_I_ANT_SEL_01_ANT_WIN_RST                           0x0
#define BB_TOP_I_ANT_SEL_01_ANT_DLY_RST                           0x0

__INLINE static void bb_top_i_ant_sel_01_pack(uint8_t antswitchmode, uint8_t antwin, uint8_t antdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)antswitchmode << 16) | ((uint32_t)antwin << 8) | ((uint32_t)antdly << 0));
}

__INLINE static void bb_top_i_ant_sel_01_unpack(uint8_t* antswitchmode, uint8_t* antwin, uint8_t* antdly)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *antswitchmode = (localVal & ((uint32_t)0x00070000)) >> 16;
    *antwin = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *antdly = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_ant_sel_01_ant_switch_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static void bb_top_i_ant_sel_01_ant_switch_mode_setf(uint8_t antswitchmode)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00070000)) | ((uint32_t)antswitchmode << 16));
}

__INLINE static uint8_t bb_top_i_ant_sel_01_ant_win_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_i_ant_sel_01_ant_win_setf(uint8_t antwin)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)antwin << 8));
}

__INLINE static uint8_t bb_top_i_ant_sel_01_ant_dly_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_ant_sel_01_ant_dly_setf(uint8_t antdly)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_01_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)antdly << 0));
}

 /**
 * @brief I_ANT_SEL_02 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:28        Ant_Sel_Arry7   0b0
 *  27:24        Ant_Sel_Arry6   0b0
 *  23:20        Ant_Sel_Arry5   0b0
 *  19:16        Ant_Sel_Arry4   0b0
 *  15:12        Ant_Sel_Arry3   0b0
 *  11:08        Ant_Sel_Arry2   0b0
 *  07:04        Ant_Sel_Arry1   0b0
 *  03:00        Ant_Sel_Arry0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET 0x00000114


__INLINE static uint32_t bb_top_i_ant_sel_02_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_ant_sel_02_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY7_MASK                    ((uint32_t)0xF0000000)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY7_LSB                     28
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY7_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY6_MASK                    ((uint32_t)0x0F000000)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY6_LSB                     24
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY6_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY5_MASK                    ((uint32_t)0x00F00000)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY5_LSB                     20
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY5_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY4_MASK                    ((uint32_t)0x000F0000)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY4_LSB                     16
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY4_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY3_MASK                    ((uint32_t)0x0000F000)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY3_LSB                     12
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY3_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY2_MASK                    ((uint32_t)0x00000F00)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY2_LSB                     8
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY2_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY1_MASK                    ((uint32_t)0x000000F0)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY1_LSB                     4
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY1_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY0_MASK                    ((uint32_t)0x0000000F)
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY0_LSB                     0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY0_WIDTH                   ((uint32_t)0x00000004)

#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY7_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY6_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY5_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY4_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY3_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY2_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY1_RST                     0x0
#define BB_TOP_I_ANT_SEL_02_ANT_SEL_ARRY0_RST                     0x0

__INLINE static void bb_top_i_ant_sel_02_pack(uint8_t antselarry7, uint8_t antselarry6, uint8_t antselarry5, uint8_t antselarry4, uint8_t antselarry3, uint8_t antselarry2, uint8_t antselarry1, uint8_t antselarry0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)antselarry7 << 28) | ((uint32_t)antselarry6 << 24) | ((uint32_t)antselarry5 << 20) | ((uint32_t)antselarry4 << 16) | ((uint32_t)antselarry3 << 12) | ((uint32_t)antselarry2 << 8) | ((uint32_t)antselarry1 << 4) | ((uint32_t)antselarry0 << 0));
}

__INLINE static void bb_top_i_ant_sel_02_unpack(uint8_t* antselarry7, uint8_t* antselarry6, uint8_t* antselarry5, uint8_t* antselarry4, uint8_t* antselarry3, uint8_t* antselarry2, uint8_t* antselarry1, uint8_t* antselarry0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *antselarry7 = (localVal & ((uint32_t)0xF0000000)) >> 28;
    *antselarry6 = (localVal & ((uint32_t)0x0F000000)) >> 24;
    *antselarry5 = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *antselarry4 = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *antselarry3 = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *antselarry2 = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *antselarry1 = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *antselarry0 = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry7_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xF0000000)) >> 28);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry7_setf(uint8_t antselarry7)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xF0000000)) | ((uint32_t)antselarry7 << 28));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry6_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0F000000)) >> 24);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry6_setf(uint8_t antselarry6)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0F000000)) | ((uint32_t)antselarry6 << 24));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry5_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry5_setf(uint8_t antselarry5)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)antselarry5 << 20));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry4_setf(uint8_t antselarry4)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)antselarry4 << 16));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry3_setf(uint8_t antselarry3)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)antselarry3 << 12));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry2_setf(uint8_t antselarry2)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)antselarry2 << 8));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry1_setf(uint8_t antselarry1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)antselarry1 << 4));
}

__INLINE static uint8_t bb_top_i_ant_sel_02_ant_sel_arry0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_ant_sel_02_ant_sel_arry0_setf(uint8_t antselarry0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_02_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)antselarry0 << 0));
}

 /**
 * @brief I_ANT_SEL_03 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:28       Ant_Sel_Arry15   0b0
 *  27:24       Ant_Sel_Arry14   0b0
 *  23:20       Ant_Sel_Arry13   0b0
 *  19:16       Ant_Sel_Arry12   0b0
 *  15:12       Ant_Sel_Arry11   0b0
 *  11:08       Ant_Sel_Arry10   0b0
 *  07:04        Ant_Sel_Arry9   0b0
 *  03:00        Ant_Sel_Arry8   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET 0x00000118


__INLINE static uint32_t bb_top_i_ant_sel_03_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_ant_sel_03_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY15_MASK                   ((uint32_t)0xF0000000)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY15_LSB                    28
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY15_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY14_MASK                   ((uint32_t)0x0F000000)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY14_LSB                    24
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY14_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY13_MASK                   ((uint32_t)0x00F00000)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY13_LSB                    20
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY13_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY12_MASK                   ((uint32_t)0x000F0000)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY12_LSB                    16
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY12_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY11_MASK                   ((uint32_t)0x0000F000)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY11_LSB                    12
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY11_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY10_MASK                   ((uint32_t)0x00000F00)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY10_LSB                    8
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY10_WIDTH                  ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY9_MASK                    ((uint32_t)0x000000F0)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY9_LSB                     4
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY9_WIDTH                   ((uint32_t)0x00000004)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY8_MASK                    ((uint32_t)0x0000000F)
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY8_LSB                     0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY8_WIDTH                   ((uint32_t)0x00000004)

#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY15_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY14_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY13_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY12_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY11_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY10_RST                    0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY9_RST                     0x0
#define BB_TOP_I_ANT_SEL_03_ANT_SEL_ARRY8_RST                     0x0

__INLINE static void bb_top_i_ant_sel_03_pack(uint8_t antselarry15, uint8_t antselarry14, uint8_t antselarry13, uint8_t antselarry12, uint8_t antselarry11, uint8_t antselarry10, uint8_t antselarry9, uint8_t antselarry8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)antselarry15 << 28) | ((uint32_t)antselarry14 << 24) | ((uint32_t)antselarry13 << 20) | ((uint32_t)antselarry12 << 16) | ((uint32_t)antselarry11 << 12) | ((uint32_t)antselarry10 << 8) | ((uint32_t)antselarry9 << 4) | ((uint32_t)antselarry8 << 0));
}

__INLINE static void bb_top_i_ant_sel_03_unpack(uint8_t* antselarry15, uint8_t* antselarry14, uint8_t* antselarry13, uint8_t* antselarry12, uint8_t* antselarry11, uint8_t* antselarry10, uint8_t* antselarry9, uint8_t* antselarry8)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *antselarry15 = (localVal & ((uint32_t)0xF0000000)) >> 28;
    *antselarry14 = (localVal & ((uint32_t)0x0F000000)) >> 24;
    *antselarry13 = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *antselarry12 = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *antselarry11 = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *antselarry10 = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *antselarry9 = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *antselarry8 = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry15_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xF0000000)) >> 28);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry15_setf(uint8_t antselarry15)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0xF0000000)) | ((uint32_t)antselarry15 << 28));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry14_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0F000000)) >> 24);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry14_setf(uint8_t antselarry14)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0F000000)) | ((uint32_t)antselarry14 << 24));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry13_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry13_setf(uint8_t antselarry13)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)antselarry13 << 20));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry12_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry12_setf(uint8_t antselarry12)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)antselarry12 << 16));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry11_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry11_setf(uint8_t antselarry11)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)antselarry11 << 12));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry10_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry10_setf(uint8_t antselarry10)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)antselarry10 << 8));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry9_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry9_setf(uint8_t antselarry9)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)antselarry9 << 4));
}

__INLINE static uint8_t bb_top_i_ant_sel_03_ant_sel_arry8_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void bb_top_i_ant_sel_03_ant_sel_arry8_setf(uint8_t antselarry8)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_ANT_SEL_03_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)antselarry8 << 0));
}

 /**
 * @brief I_DIG_BB_CTRL51 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  21:16             limt_num   0b24
 *  12:08        limt_thd_high   0b12
 *  04:00         limt_thd_low   0b8
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET 0x0000011C


__INLINE static uint32_t bb_top_i_dig_bb_ctrl51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl51_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_NUM_MASK                         ((uint32_t)0x003F0000)
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_NUM_LSB                          16
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_NUM_WIDTH                        ((uint32_t)0x00000006)
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_HIGH_MASK                    ((uint32_t)0x00001F00)
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_HIGH_LSB                     8
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_HIGH_WIDTH                   ((uint32_t)0x00000005)
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_LOW_MASK                     ((uint32_t)0x0000001F)
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_LOW_LSB                      0
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_LOW_WIDTH                    ((uint32_t)0x00000005)

#define BB_TOP_I_DIG_BB_CTRL51_LIMT_NUM_RST                          0x24
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_HIGH_RST                     0x12
#define BB_TOP_I_DIG_BB_CTRL51_LIMT_THD_LOW_RST                      0x8

__INLINE static void bb_top_i_dig_bb_ctrl51_pack(uint8_t limtnum, uint8_t limtthdhigh, uint8_t limtthdlow)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)limtnum << 16) | ((uint32_t)limtthdhigh << 8) | ((uint32_t)limtthdlow << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl51_unpack(uint8_t* limtnum, uint8_t* limtthdhigh, uint8_t* limtthdlow)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *limtnum = (localVal & ((uint32_t)0x003F0000)) >> 16;
    *limtthdhigh = (localVal & ((uint32_t)0x00001F00)) >> 8;
    *limtthdlow = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl51_limt_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl51_limt_num_setf(uint8_t limtnum)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x003F0000)) | ((uint32_t)limtnum << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl51_limt_thd_high_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001F00)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl51_limt_thd_high_setf(uint8_t limtthdhigh)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00001F00)) | ((uint32_t)limtthdhigh << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl51_limt_thd_low_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl51_limt_thd_low_setf(uint8_t limtthdlow)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL51_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000001F)) | ((uint32_t)limtthdlow << 0));
}

 /**
 * @brief I_DIG_BB_CTRL52 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     20           spreadflag   0
 *  19:16      low_rate_config   0b0
 *  09:08         iq2f_lmt_sft   0b1
 *  07:00             iq2f_lmt   0b96
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET 0x00000120


__INLINE static uint32_t bb_top_i_dig_bb_ctrl52_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl52_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL52_SPREADFLAG_BIT                        ((uint32_t)0x00100000)
#define BB_TOP_I_DIG_BB_CTRL52_SPREADFLAG_POS                        20
#define BB_TOP_I_DIG_BB_CTRL52_LOW_RATE_CONFIG_MASK                  ((uint32_t)0x000F0000)
#define BB_TOP_I_DIG_BB_CTRL52_LOW_RATE_CONFIG_LSB                   16
#define BB_TOP_I_DIG_BB_CTRL52_LOW_RATE_CONFIG_WIDTH                 ((uint32_t)0x00000004)
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_SFT_MASK                     ((uint32_t)0x00000300)
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_SFT_LSB                      8
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_SFT_WIDTH                    ((uint32_t)0x00000002)
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_MASK                         ((uint32_t)0x000000FF)
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_LSB                          0
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_WIDTH                        ((uint32_t)0x00000008)

#define BB_TOP_I_DIG_BB_CTRL52_SPREADFLAG_RST                        0x0
#define BB_TOP_I_DIG_BB_CTRL52_LOW_RATE_CONFIG_RST                   0x0
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_SFT_RST                      0x1
#define BB_TOP_I_DIG_BB_CTRL52_IQ2F_LMT_RST                          0x96

__INLINE static void bb_top_i_dig_bb_ctrl52_pack(uint8_t spreadflag, uint8_t lowrateconfig, uint8_t iq2flmtsft, uint8_t iq2flmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)spreadflag << 20) | ((uint32_t)lowrateconfig << 16) | ((uint32_t)iq2flmtsft << 8) | ((uint32_t)iq2flmt << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl52_unpack(uint8_t* spreadflag, uint8_t* lowrateconfig, uint8_t* iq2flmtsft, uint8_t* iq2flmt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *spreadflag = (localVal & ((uint32_t)0x00100000)) >> 20;
    *lowrateconfig = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *iq2flmtsft = (localVal & ((uint32_t)0x00000300)) >> 8;
    *iq2flmt = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl52_spreadflag_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void bb_top_i_dig_bb_ctrl52_spreadflag_setf(uint8_t spreadflag)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)spreadflag << 20));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl52_low_rate_config_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void bb_top_i_dig_bb_ctrl52_low_rate_config_setf(uint8_t lowrateconfig)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)lowrateconfig << 16));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl52_iq2f_lmt_sft_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl52_iq2f_lmt_sft_setf(uint8_t iq2flmtsft)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)iq2flmtsft << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl52_iq2f_lmt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl52_iq2f_lmt_setf(uint8_t iq2flmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL52_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)iq2flmt << 0));
}

 /**
 * @brief I_DIG_BB_CTRL53 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  10:08           rx_crc_fmt   0b0
 *  02:00           tx_crc_fmt   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET 0x00000124


__INLINE static uint32_t bb_top_i_dig_bb_ctrl53_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl53_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL53_RX_CRC_FMT_MASK                       ((uint32_t)0x00000700)
#define BB_TOP_I_DIG_BB_CTRL53_RX_CRC_FMT_LSB                        8
#define BB_TOP_I_DIG_BB_CTRL53_RX_CRC_FMT_WIDTH                      ((uint32_t)0x00000003)
#define BB_TOP_I_DIG_BB_CTRL53_TX_CRC_FMT_MASK                       ((uint32_t)0x00000007)
#define BB_TOP_I_DIG_BB_CTRL53_TX_CRC_FMT_LSB                        0
#define BB_TOP_I_DIG_BB_CTRL53_TX_CRC_FMT_WIDTH                      ((uint32_t)0x00000003)

#define BB_TOP_I_DIG_BB_CTRL53_RX_CRC_FMT_RST                        0x0
#define BB_TOP_I_DIG_BB_CTRL53_TX_CRC_FMT_RST                        0x0

__INLINE static void bb_top_i_dig_bb_ctrl53_pack(uint8_t rxcrcfmt, uint8_t txcrcfmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)rxcrcfmt << 8) | ((uint32_t)txcrcfmt << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl53_unpack(uint8_t* rxcrcfmt, uint8_t* txcrcfmt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *rxcrcfmt = (localVal & ((uint32_t)0x00000700)) >> 8;
    *txcrcfmt = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl53_rx_crc_fmt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000700)) >> 8);
}

__INLINE static void bb_top_i_dig_bb_ctrl53_rx_crc_fmt_setf(uint8_t rxcrcfmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000700)) | ((uint32_t)rxcrcfmt << 8));
}

__INLINE static uint8_t bb_top_i_dig_bb_ctrl53_tx_crc_fmt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl53_tx_crc_fmt_setf(uint8_t txcrcfmt)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL53_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)txcrcfmt << 0));
}

 /**
 * @brief I_DIG_BB_CTRL56 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  08:00        intg_32m_base   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET 0x00000130


__INLINE static uint32_t bb_top_i_dig_bb_ctrl56_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl56_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL56_INTG_32M_BASE_MASK                    ((uint32_t)0x000001FF)
#define BB_TOP_I_DIG_BB_CTRL56_INTG_32M_BASE_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL56_INTG_32M_BASE_WIDTH                   ((uint32_t)0x00000009)

#define BB_TOP_I_DIG_BB_CTRL56_INTG_32M_BASE_RST                     0x0

__INLINE static void bb_top_i_dig_bb_ctrl56_pack(uint16_t intg32mbase)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)intg32mbase << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl56_unpack(uint8_t* intg32mbase)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *intg32mbase = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl56_intg_32m_base_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl56_intg_32m_base_setf(uint16_t intg32mbase)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL56_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)intg32mbase << 0);
}

 /**
 * @brief I_DIG_BB_CTRL57 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  08:00        intg_16m_base   0b96
 * </pre>
 */
#define FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET 0x00000134


__INLINE static uint32_t bb_top_i_dig_bb_ctrl57_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_i_dig_bb_ctrl57_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_I_DIG_BB_CTRL57_INTG_16M_BASE_MASK                    ((uint32_t)0x000001FF)
#define BB_TOP_I_DIG_BB_CTRL57_INTG_16M_BASE_LSB                     0
#define BB_TOP_I_DIG_BB_CTRL57_INTG_16M_BASE_WIDTH                   ((uint32_t)0x00000009)

#define BB_TOP_I_DIG_BB_CTRL57_INTG_16M_BASE_RST                     0x96

__INLINE static void bb_top_i_dig_bb_ctrl57_pack(uint16_t intg16mbase)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)intg16mbase << 0));
}

__INLINE static void bb_top_i_dig_bb_ctrl57_unpack(uint8_t* intg16mbase)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *intg16mbase = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint16_t bb_top_i_dig_bb_ctrl57_intg_16m_base_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

__INLINE static void bb_top_i_dig_bb_ctrl57_intg_16m_base_setf(uint16_t intg16mbase)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_I_DIG_BB_CTRL57_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)intg16mbase << 0);
}

 /**
 * @brief PDU_MATCH_CONFIG_0_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           match_en_0   0
 *  23:16   pdu_off_0_match_offset   0b0
 *  15:08           val_mask_0   0b0
 *  07:00         val_target_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET 0x00000160


__INLINE static uint32_t bb_top_pdu_match_config_0_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_pdu_match_config_0_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_PDU_MATCH_CONFIG_0_0_MATCH_EN_0_BIT                        ((uint32_t)0x80000000)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_MATCH_EN_0_POS                        31
#define BB_TOP_PDU_MATCH_CONFIG_0_0_PDU_OFF_0_MATCH_OFFSET_MASK           ((uint32_t)0x00FF0000)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_PDU_OFF_0_MATCH_OFFSET_LSB            16
#define BB_TOP_PDU_MATCH_CONFIG_0_0_PDU_OFF_0_MATCH_OFFSET_WIDTH          ((uint32_t)0x00000008)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_MASK_0_MASK                       ((uint32_t)0x0000FF00)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_MASK_0_LSB                        8
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_MASK_0_WIDTH                      ((uint32_t)0x00000008)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_TARGET_0_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_TARGET_0_LSB                      0
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_TARGET_0_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_PDU_MATCH_CONFIG_0_0_MATCH_EN_0_RST                        0x0
#define BB_TOP_PDU_MATCH_CONFIG_0_0_PDU_OFF_0_MATCH_OFFSET_RST            0x0
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_MASK_0_RST                        0x0
#define BB_TOP_PDU_MATCH_CONFIG_0_0_VAL_TARGET_0_RST                      0x0

__INLINE static void bb_top_pdu_match_config_0_0_pack(uint8_t matchen0, uint8_t pduoff0matchoffset, uint8_t valmask0, uint8_t valtarget0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)matchen0 << 31) | ((uint32_t)pduoff0matchoffset << 16) | ((uint32_t)valmask0 << 8) | ((uint32_t)valtarget0 << 0));
}

__INLINE static void bb_top_pdu_match_config_0_0_unpack(uint8_t* matchen0, uint8_t* pduoff0matchoffset, uint8_t* valmask0, uint8_t* valtarget0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *matchen0 = (localVal & ((uint32_t)0x80000000)) >> 31;
    *pduoff0matchoffset = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *valmask0 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *valtarget0 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_pdu_match_config_0_0_match_en_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_pdu_match_config_0_0_match_en_0_setf(uint8_t matchen0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)matchen0 << 31));
}

__INLINE static uint8_t bb_top_pdu_match_config_0_0_pdu_off_0_match_offset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_pdu_match_config_0_0_pdu_off_0_match_offset_setf(uint8_t pduoff0matchoffset)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)pduoff0matchoffset << 16));
}

__INLINE static uint8_t bb_top_pdu_match_config_0_0_val_mask_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_pdu_match_config_0_0_val_mask_0_setf(uint8_t valmask0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)valmask0 << 8));
}

__INLINE static uint8_t bb_top_pdu_match_config_0_0_val_target_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_pdu_match_config_0_0_val_target_0_setf(uint8_t valtarget0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)valtarget0 << 0));
}

 /**
 * @brief PDU_MATCH_CONFIG_1_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           match_en_1   0
 *  23:16   pdu_off_1_match_offset   0b0
 *  15:08           val_mask_1   0b0
 *  07:00         val_target_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET 0x00000164


__INLINE static uint32_t bb_top_pdu_match_config_1_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_pdu_match_config_1_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_PDU_MATCH_CONFIG_1_0_MATCH_EN_1_BIT                        ((uint32_t)0x80000000)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_MATCH_EN_1_POS                        31
#define BB_TOP_PDU_MATCH_CONFIG_1_0_PDU_OFF_1_MATCH_OFFSET_MASK           ((uint32_t)0x00FF0000)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_PDU_OFF_1_MATCH_OFFSET_LSB            16
#define BB_TOP_PDU_MATCH_CONFIG_1_0_PDU_OFF_1_MATCH_OFFSET_WIDTH          ((uint32_t)0x00000008)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_MASK_1_MASK                       ((uint32_t)0x0000FF00)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_MASK_1_LSB                        8
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_MASK_1_WIDTH                      ((uint32_t)0x00000008)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_TARGET_1_MASK                     ((uint32_t)0x000000FF)
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_TARGET_1_LSB                      0
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_TARGET_1_WIDTH                    ((uint32_t)0x00000008)

#define BB_TOP_PDU_MATCH_CONFIG_1_0_MATCH_EN_1_RST                        0x0
#define BB_TOP_PDU_MATCH_CONFIG_1_0_PDU_OFF_1_MATCH_OFFSET_RST            0x0
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_MASK_1_RST                        0x0
#define BB_TOP_PDU_MATCH_CONFIG_1_0_VAL_TARGET_1_RST                      0x0

__INLINE static void bb_top_pdu_match_config_1_0_pack(uint8_t matchen1, uint8_t pduoff1matchoffset, uint8_t valmask1, uint8_t valtarget1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)matchen1 << 31) | ((uint32_t)pduoff1matchoffset << 16) | ((uint32_t)valmask1 << 8) | ((uint32_t)valtarget1 << 0));
}

__INLINE static void bb_top_pdu_match_config_1_0_unpack(uint8_t* matchen1, uint8_t* pduoff1matchoffset, uint8_t* valmask1, uint8_t* valtarget1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *matchen1 = (localVal & ((uint32_t)0x80000000)) >> 31;
    *pduoff1matchoffset = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *valmask1 = (localVal & ((uint32_t)0x0000FF00)) >> 8;
    *valtarget1 = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t bb_top_pdu_match_config_1_0_match_en_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_pdu_match_config_1_0_match_en_1_setf(uint8_t matchen1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)matchen1 << 31));
}

__INLINE static uint8_t bb_top_pdu_match_config_1_0_pdu_off_1_match_offset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_pdu_match_config_1_0_pdu_off_1_match_offset_setf(uint8_t pduoff1matchoffset)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)pduoff1matchoffset << 16));
}

__INLINE static uint8_t bb_top_pdu_match_config_1_0_val_mask_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FF00)) >> 8);
}

__INLINE static void bb_top_pdu_match_config_1_0_val_mask_1_setf(uint8_t valmask1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FF00)) | ((uint32_t)valmask1 << 8));
}

__INLINE static uint8_t bb_top_pdu_match_config_1_0_val_target_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void bb_top_pdu_match_config_1_0_val_target_1_setf(uint8_t valtarget1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_PDU_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)valtarget1 << 0));
}

 /**
 * @brief ADDR_MATCH_CONFIG_0_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31            list_0_en   0
 *  25:24          addr_type_0   0b0
 *  23:16   addr_off_0_match_offset   0b0
 *  15:00   addr_list0_match_mask   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET 0x00000170


__INLINE static uint32_t bb_top_addr_match_config_0_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_match_config_0_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_LIST_0_EN_BIT                         ((uint32_t)0x80000000)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_LIST_0_EN_POS                         31
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_TYPE_0_MASK                      ((uint32_t)0x03000000)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_TYPE_0_LSB                       24
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_TYPE_0_WIDTH                     ((uint32_t)0x00000002)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_OFF_0_MATCH_OFFSET_MASK          ((uint32_t)0x00FF0000)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_OFF_0_MATCH_OFFSET_LSB           16
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_OFF_0_MATCH_OFFSET_WIDTH         ((uint32_t)0x00000008)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_LIST0_MATCH_MASK_MASK            ((uint32_t)0x0000FFFF)
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_LIST0_MATCH_MASK_LSB             0
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_LIST0_MATCH_MASK_WIDTH           ((uint32_t)0x00000010)

#define BB_TOP_ADDR_MATCH_CONFIG_0_0_LIST_0_EN_RST                         0x0
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_TYPE_0_RST                       0x0
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_OFF_0_MATCH_OFFSET_RST           0x0
#define BB_TOP_ADDR_MATCH_CONFIG_0_0_ADDR_LIST0_MATCH_MASK_RST             0x0

__INLINE static void bb_top_addr_match_config_0_0_pack(uint8_t list0en, uint8_t addrtype0, uint8_t addroff0matchoffset, uint16_t addrlist0matchmask)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)list0en << 31) | ((uint32_t)addrtype0 << 24) | ((uint32_t)addroff0matchoffset << 16) | ((uint32_t)addrlist0matchmask << 0));
}

__INLINE static void bb_top_addr_match_config_0_0_unpack(uint8_t* list0en, uint8_t* addrtype0, uint8_t* addroff0matchoffset, uint8_t* addrlist0matchmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *list0en = (localVal & ((uint32_t)0x80000000)) >> 31;
    *addrtype0 = (localVal & ((uint32_t)0x03000000)) >> 24;
    *addroff0matchoffset = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *addrlist0matchmask = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint8_t bb_top_addr_match_config_0_0_list_0_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_addr_match_config_0_0_list_0_en_setf(uint8_t list0en)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)list0en << 31));
}

__INLINE static uint8_t bb_top_addr_match_config_0_0_addr_type_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03000000)) >> 24);
}

__INLINE static void bb_top_addr_match_config_0_0_addr_type_0_setf(uint8_t addrtype0)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x03000000)) | ((uint32_t)addrtype0 << 24));
}

__INLINE static uint8_t bb_top_addr_match_config_0_0_addr_off_0_match_offset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_addr_match_config_0_0_addr_off_0_match_offset_setf(uint8_t addroff0matchoffset)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)addroff0matchoffset << 16));
}

__INLINE static uint16_t bb_top_addr_match_config_0_0_addr_list0_match_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void bb_top_addr_match_config_0_0_addr_list0_match_mask_setf(uint16_t addrlist0matchmask)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)addrlist0matchmask << 0));
}

 /**
 * @brief ADDR_MATCH_CONFIG_1_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31            list_1_en   0
 *  25:24          addr_type_1   0b0
 *  23:16   addr_off_1_match_offset   0b0
 *  15:00   addr_list1_match_mask   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET 0x00000174


__INLINE static uint32_t bb_top_addr_match_config_1_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_match_config_1_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_LIST_1_EN_BIT                         ((uint32_t)0x80000000)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_LIST_1_EN_POS                         31
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_TYPE_1_MASK                      ((uint32_t)0x03000000)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_TYPE_1_LSB                       24
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_TYPE_1_WIDTH                     ((uint32_t)0x00000002)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_OFF_1_MATCH_OFFSET_MASK          ((uint32_t)0x00FF0000)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_OFF_1_MATCH_OFFSET_LSB           16
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_OFF_1_MATCH_OFFSET_WIDTH         ((uint32_t)0x00000008)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_LIST1_MATCH_MASK_MASK            ((uint32_t)0x0000FFFF)
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_LIST1_MATCH_MASK_LSB             0
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_LIST1_MATCH_MASK_WIDTH           ((uint32_t)0x00000010)

#define BB_TOP_ADDR_MATCH_CONFIG_1_0_LIST_1_EN_RST                         0x0
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_TYPE_1_RST                       0x0
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_OFF_1_MATCH_OFFSET_RST           0x0
#define BB_TOP_ADDR_MATCH_CONFIG_1_0_ADDR_LIST1_MATCH_MASK_RST             0x0

__INLINE static void bb_top_addr_match_config_1_0_pack(uint8_t list1en, uint8_t addrtype1, uint8_t addroff1matchoffset, uint16_t addrlist1matchmask)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)list1en << 31) | ((uint32_t)addrtype1 << 24) | ((uint32_t)addroff1matchoffset << 16) | ((uint32_t)addrlist1matchmask << 0));
}

__INLINE static void bb_top_addr_match_config_1_0_unpack(uint8_t* list1en, uint8_t* addrtype1, uint8_t* addroff1matchoffset, uint8_t* addrlist1matchmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *list1en = (localVal & ((uint32_t)0x80000000)) >> 31;
    *addrtype1 = (localVal & ((uint32_t)0x03000000)) >> 24;
    *addroff1matchoffset = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *addrlist1matchmask = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint8_t bb_top_addr_match_config_1_0_list_1_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void bb_top_addr_match_config_1_0_list_1_en_setf(uint8_t list1en)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)list1en << 31));
}

__INLINE static uint8_t bb_top_addr_match_config_1_0_addr_type_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03000000)) >> 24);
}

__INLINE static void bb_top_addr_match_config_1_0_addr_type_1_setf(uint8_t addrtype1)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x03000000)) | ((uint32_t)addrtype1 << 24));
}

__INLINE static uint8_t bb_top_addr_match_config_1_0_addr_off_1_match_offset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static void bb_top_addr_match_config_1_0_addr_off_1_match_offset_setf(uint8_t addroff1matchoffset)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x00FF0000)) | ((uint32_t)addroff1matchoffset << 16));
}

__INLINE static uint16_t bb_top_addr_match_config_1_0_addr_list1_match_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void bb_top_addr_match_config_1_0_addr_list1_match_mask_setf(uint16_t addrlist1matchmask)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_CONFIG_1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)addrlist1matchmask << 0));
}

 /**
 * @brief ADDR_MATCH_RESULT_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16   addr_list1_match_result   0b0
 *  15:00   addr_list0_match_result   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_MATCH_RESULT_0_OFFSET 0x00000180


__INLINE static uint32_t bb_top_addr_match_result_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_RESULT_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

// field definitions
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST1_MATCH_RESULT_MASK          ((uint32_t)0xFFFF0000)
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST1_MATCH_RESULT_LSB           16
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST1_MATCH_RESULT_WIDTH         ((uint32_t)0x00000010)
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST0_MATCH_RESULT_MASK          ((uint32_t)0x0000FFFF)
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST0_MATCH_RESULT_LSB           0
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST0_MATCH_RESULT_WIDTH         ((uint32_t)0x00000010)

#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST1_MATCH_RESULT_RST           0x0
#define BB_TOP_ADDR_MATCH_RESULT_0_ADDR_LIST0_MATCH_RESULT_RST           0x0

__INLINE static void bb_top_addr_match_result_0_unpack(uint8_t* addrlist1matchresult, uint8_t* addrlist0matchresult)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_RESULT_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlist1matchresult = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *addrlist0matchresult = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t bb_top_addr_match_result_0_addr_list1_match_result_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_RESULT_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static uint16_t bb_top_addr_match_result_0_addr_list0_match_result_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_MATCH_RESULT_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

 /**
 * @brief ADDR_LIT0_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_0_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET 0x00000184


__INLINE static uint32_t bb_top_addr_lit0_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_0_ADDR_LIT0_0_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_0_ADDR_LIT0_0_0_LSB                     0
#define BB_TOP_ADDR_LIT0_0_ADDR_LIT0_0_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_0_ADDR_LIT0_0_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_0_pack(uint32_t addrlit000)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit000 << 0));
}

__INLINE static void bb_top_addr_lit0_0_unpack(uint8_t* addrlit000)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit000 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_0_addr_lit0_0_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_0_addr_lit0_0_0_setf(uint32_t addrlit000)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit000 << 0);
}

 /**
 * @brief ADDR_LIT0_0_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_0_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET 0x00000188


__INLINE static uint32_t bb_top_addr_lit0_0_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_0_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_0_1_ADDR_LIT0_0_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_0_1_ADDR_LIT0_0_1_LSB                     0
#define BB_TOP_ADDR_LIT0_0_1_ADDR_LIT0_0_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_0_1_ADDR_LIT0_0_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_0_1_pack(uint32_t addrlit001)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit001 << 0));
}

__INLINE static void bb_top_addr_lit0_0_1_unpack(uint8_t* addrlit001)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit001 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_0_1_addr_lit0_0_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_0_1_addr_lit0_0_1_setf(uint32_t addrlit001)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit001 << 0);
}

 /**
 * @brief ADDR_LIT0_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_1_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET 0x0000018C


__INLINE static uint32_t bb_top_addr_lit0_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_1_ADDR_LIT0_1_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_1_ADDR_LIT0_1_0_LSB                     0
#define BB_TOP_ADDR_LIT0_1_ADDR_LIT0_1_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_1_ADDR_LIT0_1_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_1_pack(uint32_t addrlit010)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit010 << 0));
}

__INLINE static void bb_top_addr_lit0_1_unpack(uint8_t* addrlit010)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit010 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_1_addr_lit0_1_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_1_addr_lit0_1_0_setf(uint32_t addrlit010)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit010 << 0);
}

 /**
 * @brief ADDR_LIT0_1_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_1_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET 0x00000190


__INLINE static uint32_t bb_top_addr_lit0_1_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_1_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_1_1_ADDR_LIT0_1_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_1_1_ADDR_LIT0_1_1_LSB                     0
#define BB_TOP_ADDR_LIT0_1_1_ADDR_LIT0_1_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_1_1_ADDR_LIT0_1_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_1_1_pack(uint32_t addrlit011)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit011 << 0));
}

__INLINE static void bb_top_addr_lit0_1_1_unpack(uint8_t* addrlit011)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit011 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_1_1_addr_lit0_1_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_1_1_addr_lit0_1_1_setf(uint32_t addrlit011)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit011 << 0);
}

 /**
 * @brief ADDR_LIT0_2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_2_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET 0x00000194


__INLINE static uint32_t bb_top_addr_lit0_2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_2_ADDR_LIT0_2_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_2_ADDR_LIT0_2_0_LSB                     0
#define BB_TOP_ADDR_LIT0_2_ADDR_LIT0_2_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_2_ADDR_LIT0_2_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_2_pack(uint32_t addrlit020)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit020 << 0));
}

__INLINE static void bb_top_addr_lit0_2_unpack(uint8_t* addrlit020)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit020 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_2_addr_lit0_2_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_2_addr_lit0_2_0_setf(uint32_t addrlit020)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit020 << 0);
}

 /**
 * @brief ADDR_LIT0_2_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_2_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET 0x00000198


__INLINE static uint32_t bb_top_addr_lit0_2_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_2_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_2_1_ADDR_LIT0_2_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_2_1_ADDR_LIT0_2_1_LSB                     0
#define BB_TOP_ADDR_LIT0_2_1_ADDR_LIT0_2_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_2_1_ADDR_LIT0_2_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_2_1_pack(uint32_t addrlit021)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit021 << 0));
}

__INLINE static void bb_top_addr_lit0_2_1_unpack(uint8_t* addrlit021)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit021 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_2_1_addr_lit0_2_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_2_1_addr_lit0_2_1_setf(uint32_t addrlit021)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit021 << 0);
}

 /**
 * @brief ADDR_LIT0_3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_3_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET 0x0000019C


__INLINE static uint32_t bb_top_addr_lit0_3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_3_ADDR_LIT0_3_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_3_ADDR_LIT0_3_0_LSB                     0
#define BB_TOP_ADDR_LIT0_3_ADDR_LIT0_3_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_3_ADDR_LIT0_3_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_3_pack(uint32_t addrlit030)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit030 << 0));
}

__INLINE static void bb_top_addr_lit0_3_unpack(uint8_t* addrlit030)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit030 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_3_addr_lit0_3_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_3_addr_lit0_3_0_setf(uint32_t addrlit030)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit030 << 0);
}

 /**
 * @brief ADDR_LIT0_3_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_3_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET 0x000001A0


__INLINE static uint32_t bb_top_addr_lit0_3_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_3_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_3_1_ADDR_LIT0_3_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_3_1_ADDR_LIT0_3_1_LSB                     0
#define BB_TOP_ADDR_LIT0_3_1_ADDR_LIT0_3_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_3_1_ADDR_LIT0_3_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_3_1_pack(uint32_t addrlit031)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit031 << 0));
}

__INLINE static void bb_top_addr_lit0_3_1_unpack(uint8_t* addrlit031)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit031 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_3_1_addr_lit0_3_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_3_1_addr_lit0_3_1_setf(uint32_t addrlit031)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit031 << 0);
}

 /**
 * @brief ADDR_LIT0_4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_4_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET 0x000001A4


__INLINE static uint32_t bb_top_addr_lit0_4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_4_ADDR_LIT0_4_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_4_ADDR_LIT0_4_0_LSB                     0
#define BB_TOP_ADDR_LIT0_4_ADDR_LIT0_4_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_4_ADDR_LIT0_4_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_4_pack(uint32_t addrlit040)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit040 << 0));
}

__INLINE static void bb_top_addr_lit0_4_unpack(uint8_t* addrlit040)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit040 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_4_addr_lit0_4_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_4_addr_lit0_4_0_setf(uint32_t addrlit040)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit040 << 0);
}

 /**
 * @brief ADDR_LIT0_4_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_4_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET 0x000001A8


__INLINE static uint32_t bb_top_addr_lit0_4_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_4_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_4_1_ADDR_LIT0_4_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_4_1_ADDR_LIT0_4_1_LSB                     0
#define BB_TOP_ADDR_LIT0_4_1_ADDR_LIT0_4_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_4_1_ADDR_LIT0_4_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_4_1_pack(uint32_t addrlit041)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit041 << 0));
}

__INLINE static void bb_top_addr_lit0_4_1_unpack(uint8_t* addrlit041)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit041 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_4_1_addr_lit0_4_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_4_1_addr_lit0_4_1_setf(uint32_t addrlit041)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit041 << 0);
}

 /**
 * @brief ADDR_LIT0_5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_5_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET 0x000001AC


__INLINE static uint32_t bb_top_addr_lit0_5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_5_ADDR_LIT0_5_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_5_ADDR_LIT0_5_0_LSB                     0
#define BB_TOP_ADDR_LIT0_5_ADDR_LIT0_5_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_5_ADDR_LIT0_5_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_5_pack(uint32_t addrlit050)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit050 << 0));
}

__INLINE static void bb_top_addr_lit0_5_unpack(uint8_t* addrlit050)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit050 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_5_addr_lit0_5_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_5_addr_lit0_5_0_setf(uint32_t addrlit050)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit050 << 0);
}

 /**
 * @brief ADDR_LIT0_5_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_5_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET 0x000001B0


__INLINE static uint32_t bb_top_addr_lit0_5_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_5_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_5_1_ADDR_LIT0_5_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_5_1_ADDR_LIT0_5_1_LSB                     0
#define BB_TOP_ADDR_LIT0_5_1_ADDR_LIT0_5_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_5_1_ADDR_LIT0_5_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_5_1_pack(uint32_t addrlit051)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit051 << 0));
}

__INLINE static void bb_top_addr_lit0_5_1_unpack(uint8_t* addrlit051)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit051 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_5_1_addr_lit0_5_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_5_1_addr_lit0_5_1_setf(uint32_t addrlit051)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit051 << 0);
}

 /**
 * @brief ADDR_LIT0_6 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_6_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET 0x000001B4


__INLINE static uint32_t bb_top_addr_lit0_6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_6_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_6_ADDR_LIT0_6_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_6_ADDR_LIT0_6_0_LSB                     0
#define BB_TOP_ADDR_LIT0_6_ADDR_LIT0_6_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_6_ADDR_LIT0_6_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_6_pack(uint32_t addrlit060)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit060 << 0));
}

__INLINE static void bb_top_addr_lit0_6_unpack(uint8_t* addrlit060)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit060 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_6_addr_lit0_6_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_6_addr_lit0_6_0_setf(uint32_t addrlit060)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit060 << 0);
}

 /**
 * @brief ADDR_LIT0_6_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_6_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET 0x000001B8


__INLINE static uint32_t bb_top_addr_lit0_6_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_6_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_6_1_ADDR_LIT0_6_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_6_1_ADDR_LIT0_6_1_LSB                     0
#define BB_TOP_ADDR_LIT0_6_1_ADDR_LIT0_6_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_6_1_ADDR_LIT0_6_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_6_1_pack(uint32_t addrlit061)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit061 << 0));
}

__INLINE static void bb_top_addr_lit0_6_1_unpack(uint8_t* addrlit061)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit061 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_6_1_addr_lit0_6_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_6_1_addr_lit0_6_1_setf(uint32_t addrlit061)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit061 << 0);
}

 /**
 * @brief ADDR_LIT0_7 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_7_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET 0x000001BC


__INLINE static uint32_t bb_top_addr_lit0_7_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_7_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_7_ADDR_LIT0_7_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_7_ADDR_LIT0_7_0_LSB                     0
#define BB_TOP_ADDR_LIT0_7_ADDR_LIT0_7_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_7_ADDR_LIT0_7_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_7_pack(uint32_t addrlit070)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit070 << 0));
}

__INLINE static void bb_top_addr_lit0_7_unpack(uint8_t* addrlit070)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit070 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_7_addr_lit0_7_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_7_addr_lit0_7_0_setf(uint32_t addrlit070)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit070 << 0);
}

 /**
 * @brief ADDR_LIT0_7_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_7_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET 0x000001C0


__INLINE static uint32_t bb_top_addr_lit0_7_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_7_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_7_1_ADDR_LIT0_7_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_7_1_ADDR_LIT0_7_1_LSB                     0
#define BB_TOP_ADDR_LIT0_7_1_ADDR_LIT0_7_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_7_1_ADDR_LIT0_7_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_7_1_pack(uint32_t addrlit071)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit071 << 0));
}

__INLINE static void bb_top_addr_lit0_7_1_unpack(uint8_t* addrlit071)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit071 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_7_1_addr_lit0_7_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_7_1_addr_lit0_7_1_setf(uint32_t addrlit071)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit071 << 0);
}

 /**
 * @brief ADDR_LIT0_8 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_8_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET 0x000001C4


__INLINE static uint32_t bb_top_addr_lit0_8_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_8_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_8_ADDR_LIT0_8_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_8_ADDR_LIT0_8_0_LSB                     0
#define BB_TOP_ADDR_LIT0_8_ADDR_LIT0_8_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_8_ADDR_LIT0_8_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_8_pack(uint32_t addrlit080)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit080 << 0));
}

__INLINE static void bb_top_addr_lit0_8_unpack(uint8_t* addrlit080)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit080 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_8_addr_lit0_8_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_8_addr_lit0_8_0_setf(uint32_t addrlit080)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit080 << 0);
}

 /**
 * @brief ADDR_LIT0_8_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_8_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET 0x000001C8


__INLINE static uint32_t bb_top_addr_lit0_8_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_8_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_8_1_ADDR_LIT0_8_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_8_1_ADDR_LIT0_8_1_LSB                     0
#define BB_TOP_ADDR_LIT0_8_1_ADDR_LIT0_8_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_8_1_ADDR_LIT0_8_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_8_1_pack(uint32_t addrlit081)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit081 << 0));
}

__INLINE static void bb_top_addr_lit0_8_1_unpack(uint8_t* addrlit081)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit081 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_8_1_addr_lit0_8_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_8_1_addr_lit0_8_1_setf(uint32_t addrlit081)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit081 << 0);
}

 /**
 * @brief ADDR_LIT0_9 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_9_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET 0x000001CC


__INLINE static uint32_t bb_top_addr_lit0_9_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_9_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_9_ADDR_LIT0_9_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_9_ADDR_LIT0_9_0_LSB                     0
#define BB_TOP_ADDR_LIT0_9_ADDR_LIT0_9_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_9_ADDR_LIT0_9_0_RST                     0x0

__INLINE static void bb_top_addr_lit0_9_pack(uint32_t addrlit090)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit090 << 0));
}

__INLINE static void bb_top_addr_lit0_9_unpack(uint8_t* addrlit090)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit090 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_9_addr_lit0_9_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_9_addr_lit0_9_0_setf(uint32_t addrlit090)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit090 << 0);
}

 /**
 * @brief ADDR_LIT0_9_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit0_9_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET 0x000001D0


__INLINE static uint32_t bb_top_addr_lit0_9_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_9_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_9_1_ADDR_LIT0_9_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_9_1_ADDR_LIT0_9_1_LSB                     0
#define BB_TOP_ADDR_LIT0_9_1_ADDR_LIT0_9_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_9_1_ADDR_LIT0_9_1_RST                     0x0

__INLINE static void bb_top_addr_lit0_9_1_pack(uint32_t addrlit091)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit091 << 0));
}

__INLINE static void bb_top_addr_lit0_9_1_unpack(uint8_t* addrlit091)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit091 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_9_1_addr_lit0_9_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_9_1_addr_lit0_9_1_setf(uint32_t addrlit091)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit091 << 0);
}

 /**
 * @brief ADDR_LIT0_10 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_10_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET 0x000001D4


__INLINE static uint32_t bb_top_addr_lit0_10_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_10_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_10_ADDR_LIT0_10_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_10_ADDR_LIT0_10_0_LSB                    0
#define BB_TOP_ADDR_LIT0_10_ADDR_LIT0_10_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_10_ADDR_LIT0_10_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_10_pack(uint32_t addrlit0100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0100 << 0));
}

__INLINE static void bb_top_addr_lit0_10_unpack(uint8_t* addrlit0100)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0100 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_10_addr_lit0_10_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_10_addr_lit0_10_0_setf(uint32_t addrlit0100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0100 << 0);
}

 /**
 * @brief ADDR_LIT0_10_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_10_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET 0x000001D8


__INLINE static uint32_t bb_top_addr_lit0_10_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_10_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_10_1_ADDR_LIT0_10_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_10_1_ADDR_LIT0_10_1_LSB                    0
#define BB_TOP_ADDR_LIT0_10_1_ADDR_LIT0_10_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_10_1_ADDR_LIT0_10_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_10_1_pack(uint32_t addrlit0101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0101 << 0));
}

__INLINE static void bb_top_addr_lit0_10_1_unpack(uint8_t* addrlit0101)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0101 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_10_1_addr_lit0_10_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_10_1_addr_lit0_10_1_setf(uint32_t addrlit0101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0101 << 0);
}

 /**
 * @brief ADDR_LIT0_11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_11_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET 0x000001DC


__INLINE static uint32_t bb_top_addr_lit0_11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_11_ADDR_LIT0_11_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_11_ADDR_LIT0_11_0_LSB                    0
#define BB_TOP_ADDR_LIT0_11_ADDR_LIT0_11_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_11_ADDR_LIT0_11_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_11_pack(uint32_t addrlit0110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0110 << 0));
}

__INLINE static void bb_top_addr_lit0_11_unpack(uint8_t* addrlit0110)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0110 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_11_addr_lit0_11_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_11_addr_lit0_11_0_setf(uint32_t addrlit0110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0110 << 0);
}

 /**
 * @brief ADDR_LIT0_11_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_11_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET 0x000001E0


__INLINE static uint32_t bb_top_addr_lit0_11_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_11_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_11_1_ADDR_LIT0_11_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_11_1_ADDR_LIT0_11_1_LSB                    0
#define BB_TOP_ADDR_LIT0_11_1_ADDR_LIT0_11_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_11_1_ADDR_LIT0_11_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_11_1_pack(uint32_t addrlit0111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0111 << 0));
}

__INLINE static void bb_top_addr_lit0_11_1_unpack(uint8_t* addrlit0111)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0111 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_11_1_addr_lit0_11_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_11_1_addr_lit0_11_1_setf(uint32_t addrlit0111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0111 << 0);
}

 /**
 * @brief ADDR_LIT0_12 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_12_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET 0x000001E4


__INLINE static uint32_t bb_top_addr_lit0_12_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_12_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_12_ADDR_LIT0_12_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_12_ADDR_LIT0_12_0_LSB                    0
#define BB_TOP_ADDR_LIT0_12_ADDR_LIT0_12_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_12_ADDR_LIT0_12_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_12_pack(uint32_t addrlit0120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0120 << 0));
}

__INLINE static void bb_top_addr_lit0_12_unpack(uint8_t* addrlit0120)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0120 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_12_addr_lit0_12_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_12_addr_lit0_12_0_setf(uint32_t addrlit0120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0120 << 0);
}

 /**
 * @brief ADDR_LIT0_12_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_12_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET 0x000001E8


__INLINE static uint32_t bb_top_addr_lit0_12_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_12_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_12_1_ADDR_LIT0_12_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_12_1_ADDR_LIT0_12_1_LSB                    0
#define BB_TOP_ADDR_LIT0_12_1_ADDR_LIT0_12_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_12_1_ADDR_LIT0_12_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_12_1_pack(uint32_t addrlit0121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0121 << 0));
}

__INLINE static void bb_top_addr_lit0_12_1_unpack(uint8_t* addrlit0121)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0121 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_12_1_addr_lit0_12_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_12_1_addr_lit0_12_1_setf(uint32_t addrlit0121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0121 << 0);
}

 /**
 * @brief ADDR_LIT0_13 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_13_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET 0x000001EC


__INLINE static uint32_t bb_top_addr_lit0_13_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_13_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_13_ADDR_LIT0_13_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_13_ADDR_LIT0_13_0_LSB                    0
#define BB_TOP_ADDR_LIT0_13_ADDR_LIT0_13_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_13_ADDR_LIT0_13_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_13_pack(uint32_t addrlit0130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0130 << 0));
}

__INLINE static void bb_top_addr_lit0_13_unpack(uint8_t* addrlit0130)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0130 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_13_addr_lit0_13_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_13_addr_lit0_13_0_setf(uint32_t addrlit0130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0130 << 0);
}

 /**
 * @brief ADDR_LIT0_13_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_13_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET 0x000001F0


__INLINE static uint32_t bb_top_addr_lit0_13_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_13_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_13_1_ADDR_LIT0_13_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_13_1_ADDR_LIT0_13_1_LSB                    0
#define BB_TOP_ADDR_LIT0_13_1_ADDR_LIT0_13_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_13_1_ADDR_LIT0_13_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_13_1_pack(uint32_t addrlit0131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0131 << 0));
}

__INLINE static void bb_top_addr_lit0_13_1_unpack(uint8_t* addrlit0131)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0131 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_13_1_addr_lit0_13_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_13_1_addr_lit0_13_1_setf(uint32_t addrlit0131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0131 << 0);
}

 /**
 * @brief ADDR_LIT0_14 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_14_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET 0x000001F4


__INLINE static uint32_t bb_top_addr_lit0_14_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_14_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_14_ADDR_LIT0_14_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_14_ADDR_LIT0_14_0_LSB                    0
#define BB_TOP_ADDR_LIT0_14_ADDR_LIT0_14_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_14_ADDR_LIT0_14_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_14_pack(uint32_t addrlit0140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0140 << 0));
}

__INLINE static void bb_top_addr_lit0_14_unpack(uint8_t* addrlit0140)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0140 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_14_addr_lit0_14_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_14_addr_lit0_14_0_setf(uint32_t addrlit0140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0140 << 0);
}

 /**
 * @brief ADDR_LIT0_14_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_14_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET 0x000001F8


__INLINE static uint32_t bb_top_addr_lit0_14_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_14_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_14_1_ADDR_LIT0_14_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_14_1_ADDR_LIT0_14_1_LSB                    0
#define BB_TOP_ADDR_LIT0_14_1_ADDR_LIT0_14_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_14_1_ADDR_LIT0_14_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_14_1_pack(uint32_t addrlit0141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0141 << 0));
}

__INLINE static void bb_top_addr_lit0_14_1_unpack(uint8_t* addrlit0141)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0141 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_14_1_addr_lit0_14_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_14_1_addr_lit0_14_1_setf(uint32_t addrlit0141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0141 << 0);
}

 /**
 * @brief ADDR_LIT0_15 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_15_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET 0x000001FC


__INLINE static uint32_t bb_top_addr_lit0_15_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_15_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_15_ADDR_LIT0_15_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_15_ADDR_LIT0_15_0_LSB                    0
#define BB_TOP_ADDR_LIT0_15_ADDR_LIT0_15_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_15_ADDR_LIT0_15_0_RST                    0x0

__INLINE static void bb_top_addr_lit0_15_pack(uint32_t addrlit0150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0150 << 0));
}

__INLINE static void bb_top_addr_lit0_15_unpack(uint8_t* addrlit0150)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0150 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_15_addr_lit0_15_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_15_addr_lit0_15_0_setf(uint32_t addrlit0150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0150 << 0);
}

 /**
 * @brief ADDR_LIT0_15_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit0_15_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET 0x00000200


__INLINE static uint32_t bb_top_addr_lit0_15_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit0_15_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT0_15_1_ADDR_LIT0_15_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT0_15_1_ADDR_LIT0_15_1_LSB                    0
#define BB_TOP_ADDR_LIT0_15_1_ADDR_LIT0_15_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT0_15_1_ADDR_LIT0_15_1_RST                    0x0

__INLINE static void bb_top_addr_lit0_15_1_pack(uint32_t addrlit0151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit0151 << 0));
}

__INLINE static void bb_top_addr_lit0_15_1_unpack(uint8_t* addrlit0151)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit0151 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit0_15_1_addr_lit0_15_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit0_15_1_addr_lit0_15_1_setf(uint32_t addrlit0151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT0_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit0151 << 0);
}

 /**
 * @brief ADDR_LIT1_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_0_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET 0x00000204


__INLINE static uint32_t bb_top_addr_lit1_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_0_ADDR_LIT1_0_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_0_ADDR_LIT1_0_0_LSB                     0
#define BB_TOP_ADDR_LIT1_0_ADDR_LIT1_0_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_0_ADDR_LIT1_0_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_0_pack(uint32_t addrlit100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit100 << 0));
}

__INLINE static void bb_top_addr_lit1_0_unpack(uint8_t* addrlit100)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit100 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_0_addr_lit1_0_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_0_addr_lit1_0_0_setf(uint32_t addrlit100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit100 << 0);
}

 /**
 * @brief ADDR_LIT1_0_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_0_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET 0x00000208


__INLINE static uint32_t bb_top_addr_lit1_0_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_0_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_0_1_ADDR_LIT1_0_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_0_1_ADDR_LIT1_0_1_LSB                     0
#define BB_TOP_ADDR_LIT1_0_1_ADDR_LIT1_0_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_0_1_ADDR_LIT1_0_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_0_1_pack(uint32_t addrlit101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit101 << 0));
}

__INLINE static void bb_top_addr_lit1_0_1_unpack(uint8_t* addrlit101)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit101 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_0_1_addr_lit1_0_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_0_1_addr_lit1_0_1_setf(uint32_t addrlit101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_0_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit101 << 0);
}

 /**
 * @brief ADDR_LIT1_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_1_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET 0x0000020C


__INLINE static uint32_t bb_top_addr_lit1_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_1_ADDR_LIT1_1_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_1_ADDR_LIT1_1_0_LSB                     0
#define BB_TOP_ADDR_LIT1_1_ADDR_LIT1_1_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_1_ADDR_LIT1_1_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_1_pack(uint32_t addrlit110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit110 << 0));
}

__INLINE static void bb_top_addr_lit1_1_unpack(uint8_t* addrlit110)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit110 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_1_addr_lit1_1_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_1_addr_lit1_1_0_setf(uint32_t addrlit110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit110 << 0);
}

 /**
 * @brief ADDR_LIT1_1_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_1_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET 0x00000210


__INLINE static uint32_t bb_top_addr_lit1_1_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_1_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_1_1_ADDR_LIT1_1_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_1_1_ADDR_LIT1_1_1_LSB                     0
#define BB_TOP_ADDR_LIT1_1_1_ADDR_LIT1_1_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_1_1_ADDR_LIT1_1_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_1_1_pack(uint32_t addrlit111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit111 << 0));
}

__INLINE static void bb_top_addr_lit1_1_1_unpack(uint8_t* addrlit111)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit111 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_1_1_addr_lit1_1_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_1_1_addr_lit1_1_1_setf(uint32_t addrlit111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_1_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit111 << 0);
}

 /**
 * @brief ADDR_LIT1_2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_2_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET 0x00000214


__INLINE static uint32_t bb_top_addr_lit1_2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_2_ADDR_LIT1_2_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_2_ADDR_LIT1_2_0_LSB                     0
#define BB_TOP_ADDR_LIT1_2_ADDR_LIT1_2_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_2_ADDR_LIT1_2_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_2_pack(uint32_t addrlit120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit120 << 0));
}

__INLINE static void bb_top_addr_lit1_2_unpack(uint8_t* addrlit120)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit120 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_2_addr_lit1_2_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_2_addr_lit1_2_0_setf(uint32_t addrlit120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit120 << 0);
}

 /**
 * @brief ADDR_LIT1_2_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_2_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET 0x00000218


__INLINE static uint32_t bb_top_addr_lit1_2_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_2_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_2_1_ADDR_LIT1_2_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_2_1_ADDR_LIT1_2_1_LSB                     0
#define BB_TOP_ADDR_LIT1_2_1_ADDR_LIT1_2_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_2_1_ADDR_LIT1_2_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_2_1_pack(uint32_t addrlit121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit121 << 0));
}

__INLINE static void bb_top_addr_lit1_2_1_unpack(uint8_t* addrlit121)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit121 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_2_1_addr_lit1_2_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_2_1_addr_lit1_2_1_setf(uint32_t addrlit121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_2_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit121 << 0);
}

 /**
 * @brief ADDR_LIT1_3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_3_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET 0x0000021C


__INLINE static uint32_t bb_top_addr_lit1_3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_3_ADDR_LIT1_3_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_3_ADDR_LIT1_3_0_LSB                     0
#define BB_TOP_ADDR_LIT1_3_ADDR_LIT1_3_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_3_ADDR_LIT1_3_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_3_pack(uint32_t addrlit130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit130 << 0));
}

__INLINE static void bb_top_addr_lit1_3_unpack(uint8_t* addrlit130)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit130 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_3_addr_lit1_3_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_3_addr_lit1_3_0_setf(uint32_t addrlit130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit130 << 0);
}

 /**
 * @brief ADDR_LIT1_3_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_3_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET 0x00000220


__INLINE static uint32_t bb_top_addr_lit1_3_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_3_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_3_1_ADDR_LIT1_3_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_3_1_ADDR_LIT1_3_1_LSB                     0
#define BB_TOP_ADDR_LIT1_3_1_ADDR_LIT1_3_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_3_1_ADDR_LIT1_3_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_3_1_pack(uint32_t addrlit131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit131 << 0));
}

__INLINE static void bb_top_addr_lit1_3_1_unpack(uint8_t* addrlit131)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit131 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_3_1_addr_lit1_3_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_3_1_addr_lit1_3_1_setf(uint32_t addrlit131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_3_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit131 << 0);
}

 /**
 * @brief ADDR_LIT1_4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_4_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET 0x00000224


__INLINE static uint32_t bb_top_addr_lit1_4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_4_ADDR_LIT1_4_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_4_ADDR_LIT1_4_0_LSB                     0
#define BB_TOP_ADDR_LIT1_4_ADDR_LIT1_4_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_4_ADDR_LIT1_4_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_4_pack(uint32_t addrlit140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit140 << 0));
}

__INLINE static void bb_top_addr_lit1_4_unpack(uint8_t* addrlit140)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit140 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_4_addr_lit1_4_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_4_addr_lit1_4_0_setf(uint32_t addrlit140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit140 << 0);
}

 /**
 * @brief ADDR_LIT1_4_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_4_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET 0x00000228


__INLINE static uint32_t bb_top_addr_lit1_4_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_4_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_4_1_ADDR_LIT1_4_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_4_1_ADDR_LIT1_4_1_LSB                     0
#define BB_TOP_ADDR_LIT1_4_1_ADDR_LIT1_4_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_4_1_ADDR_LIT1_4_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_4_1_pack(uint32_t addrlit141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit141 << 0));
}

__INLINE static void bb_top_addr_lit1_4_1_unpack(uint8_t* addrlit141)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit141 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_4_1_addr_lit1_4_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_4_1_addr_lit1_4_1_setf(uint32_t addrlit141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_4_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit141 << 0);
}

 /**
 * @brief ADDR_LIT1_5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_5_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET 0x0000022C


__INLINE static uint32_t bb_top_addr_lit1_5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_5_ADDR_LIT1_5_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_5_ADDR_LIT1_5_0_LSB                     0
#define BB_TOP_ADDR_LIT1_5_ADDR_LIT1_5_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_5_ADDR_LIT1_5_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_5_pack(uint32_t addrlit150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit150 << 0));
}

__INLINE static void bb_top_addr_lit1_5_unpack(uint8_t* addrlit150)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit150 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_5_addr_lit1_5_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_5_addr_lit1_5_0_setf(uint32_t addrlit150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit150 << 0);
}

 /**
 * @brief ADDR_LIT1_5_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_5_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET 0x00000230


__INLINE static uint32_t bb_top_addr_lit1_5_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_5_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_5_1_ADDR_LIT1_5_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_5_1_ADDR_LIT1_5_1_LSB                     0
#define BB_TOP_ADDR_LIT1_5_1_ADDR_LIT1_5_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_5_1_ADDR_LIT1_5_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_5_1_pack(uint32_t addrlit151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit151 << 0));
}

__INLINE static void bb_top_addr_lit1_5_1_unpack(uint8_t* addrlit151)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit151 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_5_1_addr_lit1_5_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_5_1_addr_lit1_5_1_setf(uint32_t addrlit151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_5_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit151 << 0);
}

 /**
 * @brief ADDR_LIT1_6 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_6_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET 0x00000234


__INLINE static uint32_t bb_top_addr_lit1_6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_6_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_6_ADDR_LIT1_6_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_6_ADDR_LIT1_6_0_LSB                     0
#define BB_TOP_ADDR_LIT1_6_ADDR_LIT1_6_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_6_ADDR_LIT1_6_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_6_pack(uint32_t addrlit160)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit160 << 0));
}

__INLINE static void bb_top_addr_lit1_6_unpack(uint8_t* addrlit160)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit160 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_6_addr_lit1_6_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_6_addr_lit1_6_0_setf(uint32_t addrlit160)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit160 << 0);
}

 /**
 * @brief ADDR_LIT1_6_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_6_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET 0x00000238


__INLINE static uint32_t bb_top_addr_lit1_6_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_6_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_6_1_ADDR_LIT1_6_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_6_1_ADDR_LIT1_6_1_LSB                     0
#define BB_TOP_ADDR_LIT1_6_1_ADDR_LIT1_6_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_6_1_ADDR_LIT1_6_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_6_1_pack(uint32_t addrlit161)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit161 << 0));
}

__INLINE static void bb_top_addr_lit1_6_1_unpack(uint8_t* addrlit161)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit161 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_6_1_addr_lit1_6_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_6_1_addr_lit1_6_1_setf(uint32_t addrlit161)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_6_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit161 << 0);
}

 /**
 * @brief ADDR_LIT1_7 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_7_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET 0x0000023C


__INLINE static uint32_t bb_top_addr_lit1_7_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_7_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_7_ADDR_LIT1_7_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_7_ADDR_LIT1_7_0_LSB                     0
#define BB_TOP_ADDR_LIT1_7_ADDR_LIT1_7_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_7_ADDR_LIT1_7_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_7_pack(uint32_t addrlit170)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit170 << 0));
}

__INLINE static void bb_top_addr_lit1_7_unpack(uint8_t* addrlit170)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit170 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_7_addr_lit1_7_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_7_addr_lit1_7_0_setf(uint32_t addrlit170)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit170 << 0);
}

 /**
 * @brief ADDR_LIT1_7_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_7_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET 0x00000240


__INLINE static uint32_t bb_top_addr_lit1_7_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_7_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_7_1_ADDR_LIT1_7_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_7_1_ADDR_LIT1_7_1_LSB                     0
#define BB_TOP_ADDR_LIT1_7_1_ADDR_LIT1_7_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_7_1_ADDR_LIT1_7_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_7_1_pack(uint32_t addrlit171)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit171 << 0));
}

__INLINE static void bb_top_addr_lit1_7_1_unpack(uint8_t* addrlit171)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit171 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_7_1_addr_lit1_7_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_7_1_addr_lit1_7_1_setf(uint32_t addrlit171)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_7_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit171 << 0);
}

 /**
 * @brief ADDR_LIT1_8 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_8_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET 0x00000244


__INLINE static uint32_t bb_top_addr_lit1_8_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_8_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_8_ADDR_LIT1_8_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_8_ADDR_LIT1_8_0_LSB                     0
#define BB_TOP_ADDR_LIT1_8_ADDR_LIT1_8_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_8_ADDR_LIT1_8_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_8_pack(uint32_t addrlit180)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit180 << 0));
}

__INLINE static void bb_top_addr_lit1_8_unpack(uint8_t* addrlit180)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit180 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_8_addr_lit1_8_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_8_addr_lit1_8_0_setf(uint32_t addrlit180)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit180 << 0);
}

 /**
 * @brief ADDR_LIT1_8_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_8_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET 0x00000248


__INLINE static uint32_t bb_top_addr_lit1_8_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_8_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_8_1_ADDR_LIT1_8_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_8_1_ADDR_LIT1_8_1_LSB                     0
#define BB_TOP_ADDR_LIT1_8_1_ADDR_LIT1_8_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_8_1_ADDR_LIT1_8_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_8_1_pack(uint32_t addrlit181)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit181 << 0));
}

__INLINE static void bb_top_addr_lit1_8_1_unpack(uint8_t* addrlit181)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit181 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_8_1_addr_lit1_8_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_8_1_addr_lit1_8_1_setf(uint32_t addrlit181)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_8_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit181 << 0);
}

 /**
 * @brief ADDR_LIT1_9 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_9_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET 0x0000024C


__INLINE static uint32_t bb_top_addr_lit1_9_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_9_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_9_ADDR_LIT1_9_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_9_ADDR_LIT1_9_0_LSB                     0
#define BB_TOP_ADDR_LIT1_9_ADDR_LIT1_9_0_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_9_ADDR_LIT1_9_0_RST                     0x0

__INLINE static void bb_top_addr_lit1_9_pack(uint32_t addrlit190)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit190 << 0));
}

__INLINE static void bb_top_addr_lit1_9_unpack(uint8_t* addrlit190)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit190 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_9_addr_lit1_9_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_9_addr_lit1_9_0_setf(uint32_t addrlit190)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit190 << 0);
}

 /**
 * @brief ADDR_LIT1_9_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        addr_lit1_9_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET 0x00000250


__INLINE static uint32_t bb_top_addr_lit1_9_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_9_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_9_1_ADDR_LIT1_9_1_MASK                    ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_9_1_ADDR_LIT1_9_1_LSB                     0
#define BB_TOP_ADDR_LIT1_9_1_ADDR_LIT1_9_1_WIDTH                   ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_9_1_ADDR_LIT1_9_1_RST                     0x0

__INLINE static void bb_top_addr_lit1_9_1_pack(uint32_t addrlit191)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit191 << 0));
}

__INLINE static void bb_top_addr_lit1_9_1_unpack(uint8_t* addrlit191)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit191 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_9_1_addr_lit1_9_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_9_1_addr_lit1_9_1_setf(uint32_t addrlit191)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_9_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit191 << 0);
}

 /**
 * @brief ADDR_LIT1_10 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_10_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET 0x00000254


__INLINE static uint32_t bb_top_addr_lit1_10_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_10_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_10_ADDR_LIT1_10_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_10_ADDR_LIT1_10_0_LSB                    0
#define BB_TOP_ADDR_LIT1_10_ADDR_LIT1_10_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_10_ADDR_LIT1_10_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_10_pack(uint32_t addrlit1100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1100 << 0));
}

__INLINE static void bb_top_addr_lit1_10_unpack(uint8_t* addrlit1100)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1100 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_10_addr_lit1_10_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_10_addr_lit1_10_0_setf(uint32_t addrlit1100)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1100 << 0);
}

 /**
 * @brief ADDR_LIT1_10_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_10_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET 0x00000258


__INLINE static uint32_t bb_top_addr_lit1_10_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_10_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_10_1_ADDR_LIT1_10_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_10_1_ADDR_LIT1_10_1_LSB                    0
#define BB_TOP_ADDR_LIT1_10_1_ADDR_LIT1_10_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_10_1_ADDR_LIT1_10_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_10_1_pack(uint32_t addrlit1101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1101 << 0));
}

__INLINE static void bb_top_addr_lit1_10_1_unpack(uint8_t* addrlit1101)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1101 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_10_1_addr_lit1_10_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_10_1_addr_lit1_10_1_setf(uint32_t addrlit1101)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_10_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1101 << 0);
}

 /**
 * @brief ADDR_LIT1_11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_11_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET 0x0000025C


__INLINE static uint32_t bb_top_addr_lit1_11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_11_ADDR_LIT1_11_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_11_ADDR_LIT1_11_0_LSB                    0
#define BB_TOP_ADDR_LIT1_11_ADDR_LIT1_11_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_11_ADDR_LIT1_11_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_11_pack(uint32_t addrlit1110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1110 << 0));
}

__INLINE static void bb_top_addr_lit1_11_unpack(uint8_t* addrlit1110)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1110 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_11_addr_lit1_11_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_11_addr_lit1_11_0_setf(uint32_t addrlit1110)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1110 << 0);
}

 /**
 * @brief ADDR_LIT1_11_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_11_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET 0x00000260


__INLINE static uint32_t bb_top_addr_lit1_11_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_11_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_11_1_ADDR_LIT1_11_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_11_1_ADDR_LIT1_11_1_LSB                    0
#define BB_TOP_ADDR_LIT1_11_1_ADDR_LIT1_11_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_11_1_ADDR_LIT1_11_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_11_1_pack(uint32_t addrlit1111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1111 << 0));
}

__INLINE static void bb_top_addr_lit1_11_1_unpack(uint8_t* addrlit1111)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1111 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_11_1_addr_lit1_11_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_11_1_addr_lit1_11_1_setf(uint32_t addrlit1111)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_11_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1111 << 0);
}

 /**
 * @brief ADDR_LIT1_12 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_12_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET 0x00000264


__INLINE static uint32_t bb_top_addr_lit1_12_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_12_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_12_ADDR_LIT1_12_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_12_ADDR_LIT1_12_0_LSB                    0
#define BB_TOP_ADDR_LIT1_12_ADDR_LIT1_12_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_12_ADDR_LIT1_12_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_12_pack(uint32_t addrlit1120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1120 << 0));
}

__INLINE static void bb_top_addr_lit1_12_unpack(uint8_t* addrlit1120)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1120 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_12_addr_lit1_12_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_12_addr_lit1_12_0_setf(uint32_t addrlit1120)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1120 << 0);
}

 /**
 * @brief ADDR_LIT1_12_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_12_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET 0x00000268


__INLINE static uint32_t bb_top_addr_lit1_12_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_12_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_12_1_ADDR_LIT1_12_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_12_1_ADDR_LIT1_12_1_LSB                    0
#define BB_TOP_ADDR_LIT1_12_1_ADDR_LIT1_12_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_12_1_ADDR_LIT1_12_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_12_1_pack(uint32_t addrlit1121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1121 << 0));
}

__INLINE static void bb_top_addr_lit1_12_1_unpack(uint8_t* addrlit1121)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1121 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_12_1_addr_lit1_12_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_12_1_addr_lit1_12_1_setf(uint32_t addrlit1121)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_12_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1121 << 0);
}

 /**
 * @brief ADDR_LIT1_13 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_13_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET 0x0000026C


__INLINE static uint32_t bb_top_addr_lit1_13_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_13_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_13_ADDR_LIT1_13_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_13_ADDR_LIT1_13_0_LSB                    0
#define BB_TOP_ADDR_LIT1_13_ADDR_LIT1_13_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_13_ADDR_LIT1_13_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_13_pack(uint32_t addrlit1130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1130 << 0));
}

__INLINE static void bb_top_addr_lit1_13_unpack(uint8_t* addrlit1130)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1130 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_13_addr_lit1_13_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_13_addr_lit1_13_0_setf(uint32_t addrlit1130)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1130 << 0);
}

 /**
 * @brief ADDR_LIT1_13_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_13_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET 0x00000270


__INLINE static uint32_t bb_top_addr_lit1_13_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_13_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_13_1_ADDR_LIT1_13_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_13_1_ADDR_LIT1_13_1_LSB                    0
#define BB_TOP_ADDR_LIT1_13_1_ADDR_LIT1_13_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_13_1_ADDR_LIT1_13_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_13_1_pack(uint32_t addrlit1131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1131 << 0));
}

__INLINE static void bb_top_addr_lit1_13_1_unpack(uint8_t* addrlit1131)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1131 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_13_1_addr_lit1_13_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_13_1_addr_lit1_13_1_setf(uint32_t addrlit1131)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_13_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1131 << 0);
}

 /**
 * @brief ADDR_LIT1_14 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_14_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET 0x00000274


__INLINE static uint32_t bb_top_addr_lit1_14_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_14_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_14_ADDR_LIT1_14_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_14_ADDR_LIT1_14_0_LSB                    0
#define BB_TOP_ADDR_LIT1_14_ADDR_LIT1_14_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_14_ADDR_LIT1_14_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_14_pack(uint32_t addrlit1140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1140 << 0));
}

__INLINE static void bb_top_addr_lit1_14_unpack(uint8_t* addrlit1140)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1140 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_14_addr_lit1_14_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_14_addr_lit1_14_0_setf(uint32_t addrlit1140)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1140 << 0);
}

 /**
 * @brief ADDR_LIT1_14_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_14_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET 0x00000278


__INLINE static uint32_t bb_top_addr_lit1_14_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_14_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_14_1_ADDR_LIT1_14_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_14_1_ADDR_LIT1_14_1_LSB                    0
#define BB_TOP_ADDR_LIT1_14_1_ADDR_LIT1_14_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_14_1_ADDR_LIT1_14_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_14_1_pack(uint32_t addrlit1141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1141 << 0));
}

__INLINE static void bb_top_addr_lit1_14_1_unpack(uint8_t* addrlit1141)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1141 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_14_1_addr_lit1_14_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_14_1_addr_lit1_14_1_setf(uint32_t addrlit1141)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_14_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1141 << 0);
}

 /**
 * @brief ADDR_LIT1_15 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_15_0   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET 0x0000027C


__INLINE static uint32_t bb_top_addr_lit1_15_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_15_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_15_ADDR_LIT1_15_0_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_15_ADDR_LIT1_15_0_LSB                    0
#define BB_TOP_ADDR_LIT1_15_ADDR_LIT1_15_0_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_15_ADDR_LIT1_15_0_RST                    0x0

__INLINE static void bb_top_addr_lit1_15_pack(uint32_t addrlit1150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1150 << 0));
}

__INLINE static void bb_top_addr_lit1_15_unpack(uint8_t* addrlit1150)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1150 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_15_addr_lit1_15_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_15_addr_lit1_15_0_setf(uint32_t addrlit1150)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1150 << 0);
}

 /**
 * @brief ADDR_LIT1_15_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       addr_lit1_15_1   0b0
 * </pre>
 */
#define FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET 0x00000280


__INLINE static uint32_t bb_top_addr_lit1_15_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
}

__INLINE static void bb_top_addr_lit1_15_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, value);
}

// field definitions
#define BB_TOP_ADDR_LIT1_15_1_ADDR_LIT1_15_1_MASK                   ((uint32_t)0xFFFFFFFF)
#define BB_TOP_ADDR_LIT1_15_1_ADDR_LIT1_15_1_LSB                    0
#define BB_TOP_ADDR_LIT1_15_1_ADDR_LIT1_15_1_WIDTH                  ((uint32_t)0x00000020)

#define BB_TOP_ADDR_LIT1_15_1_ADDR_LIT1_15_1_RST                    0x0

__INLINE static void bb_top_addr_lit1_15_1_pack(uint32_t addrlit1151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR,  ((uint32_t)addrlit1151 << 0));
}

__INLINE static void bb_top_addr_lit1_15_1_unpack(uint8_t* addrlit1151)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);

    *addrlit1151 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t bb_top_addr_lit1_15_1_addr_lit1_15_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET + FEMTO_REG_BB_TOP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void bb_top_addr_lit1_15_1_addr_lit1_15_1_setf(uint32_t addrlit1151)
{
    _FEMTO_REG_WR(FEMTO_REG_BB_TOP_ADDR_LIT1_15_1_OFFSET+ FEMTO_REG_BB_TOP_BASE_ADDR, (uint32_t)addrlit1151 << 0);
}


#endif // _FEMTO_REG_BB_TOP_H_

