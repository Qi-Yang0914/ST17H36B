#ifndef _FEMTO_REG_USB_DEVICE_H_
#define _FEMTO_REG_USB_DEVICE_H_

#define FEMTO_REG_USB_DEVICE_COUNT 45

#define FEMTO_REG_USB_DEVICE_BASE_ADDR 0x14000000

#define FEMTO_REG_USB_DEVICE_SIZE 0x00000494


 /**
 * @brief IN_EP_T0_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     01             SEND_NAK   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET 0x00004400


__INLINE static uint32_t usb_device_in_ep_t0_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t0_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T0_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T0_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_IN_EP_T0_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T0_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_IN_EP_T0_CTL_SEND_NAK_BIT                          ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T0_CTL_SEND_NAK_POS                          1
#define USB_DEVICE_IN_EP_T0_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T0_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_IN_EP_T0_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_IN_EP_T0_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_IN_EP_T0_CTL_SEND_NAK_RST                          0x0
#define USB_DEVICE_IN_EP_T0_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_in_ep_t0_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_in_ep_t0_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendnak, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendnak = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t0_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t0_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_in_ep_t0_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t0_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_in_ep_t0_ctl_send_nak_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t usb_device_in_ep_t0_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t0_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief IN_EP_T0_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05          ISO_TX_DONE   0
 *     04    DATA_UNDERRUN_ERR   0
 *     03             NAK_SENT   0
 *     02      BELOW_THRESHOLD   0
 *     01            DATA_SENT   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET 0x00004404


__INLINE static uint32_t usb_device_in_ep_t0_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t0_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T0_STA_ISO_TX_DONE_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_IN_EP_T0_STA_ISO_TX_DONE_POS                       5
#define USB_DEVICE_IN_EP_T0_STA_DATA_UNDERRUN_ERR_BIT                 ((uint32_t)0x00000010)
#define USB_DEVICE_IN_EP_T0_STA_DATA_UNDERRUN_ERR_POS                 4
#define USB_DEVICE_IN_EP_T0_STA_NAK_SENT_BIT                          ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T0_STA_NAK_SENT_POS                          3
#define USB_DEVICE_IN_EP_T0_STA_BELOW_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T0_STA_BELOW_THRESHOLD_POS                   2
#define USB_DEVICE_IN_EP_T0_STA_DATA_SENT_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T0_STA_DATA_SENT_POS                         1
#define USB_DEVICE_IN_EP_T0_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T0_STA_STATUS_POS                            0

#define USB_DEVICE_IN_EP_T0_STA_ISO_TX_DONE_RST                       0x0
#define USB_DEVICE_IN_EP_T0_STA_DATA_UNDERRUN_ERR_RST                 0x0
#define USB_DEVICE_IN_EP_T0_STA_NAK_SENT_RST                          0x0
#define USB_DEVICE_IN_EP_T0_STA_BELOW_THRESHOLD_RST                   0x0
#define USB_DEVICE_IN_EP_T0_STA_DATA_SENT_RST                         0x0
#define USB_DEVICE_IN_EP_T0_STA_STATUS_RST                            0x0

__INLINE static void usb_device_in_ep_t0_sta_pack(uint8_t isotxdone, uint8_t dataunderrunerr, uint8_t naksent, uint8_t belowthreshold, uint8_t datasent, uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)isotxdone << 5) | ((uint32_t)dataunderrunerr << 4) | ((uint32_t)naksent << 3) | ((uint32_t)belowthreshold << 2) | ((uint32_t)datasent << 1) | ((uint32_t)status << 0));
}

__INLINE static void usb_device_in_ep_t0_sta_unpack(uint8_t* isotxdone, uint8_t* dataunderrunerr, uint8_t* naksent, uint8_t* belowthreshold, uint8_t* datasent, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *isotxdone = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dataunderrunerr = (localVal & ((uint32_t)0x00000010)) >> 4;
    *naksent = (localVal & ((uint32_t)0x00000008)) >> 3;
    *belowthreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *datasent = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_iso_tx_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_in_ep_t0_sta_iso_tx_done_setf(uint8_t isotxdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)isotxdone << 5));
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_data_underrun_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_in_ep_t0_sta_data_underrun_err_setf(uint8_t dataunderrunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dataunderrunerr << 4));
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_nak_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t0_sta_nak_sent_setf(uint8_t naksent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)naksent << 3));
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_below_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t0_sta_below_threshold_setf(uint8_t belowthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)belowthreshold << 2));
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_data_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_in_ep_t0_sta_data_sent_setf(uint8_t datasent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)datasent << 1));
}

__INLINE static uint8_t usb_device_in_ep_t0_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t0_sta_status_setf(uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)status << 0));
}

 /**
 * @brief IN_EP_T0_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00       FIFO_SZ_IN_EP0   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET 0x00004408


__INLINE static uint32_t usb_device_in_ep_t0_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t0_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T0_FIFO_SZ_FIFO_SZ_IN_EP0_MASK                   ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T0_FIFO_SZ_FIFO_SZ_IN_EP0_LSB                    0
#define USB_DEVICE_IN_EP_T0_FIFO_SZ_FIFO_SZ_IN_EP0_WIDTH                  ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T0_FIFO_SZ_FIFO_SZ_IN_EP0_RST                    0x10

__INLINE static void usb_device_in_ep_t0_fifo_sz_pack(uint16_t fifoszinep0)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoszinep0 << 0));
}

__INLINE static void usb_device_in_ep_t0_fifo_sz_unpack(uint8_t* fifoszinep0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoszinep0 = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t0_fifo_sz_fifo_sz_in_ep0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t0_fifo_sz_fifo_sz_in_ep0_setf(uint16_t fifoszinep0)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifoszinep0 << 0);
}

 /**
 * @brief IN_EP_T0_TRANS_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00             TRANS_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET 0x0000440C


__INLINE static uint32_t usb_device_in_ep_t0_trans_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t0_trans_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T0_TRANS_SZ_TRANS_SZ_MASK                         ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T0_TRANS_SZ_TRANS_SZ_LSB                          0
#define USB_DEVICE_IN_EP_T0_TRANS_SZ_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T0_TRANS_SZ_TRANS_SZ_RST                          0x10

__INLINE static void usb_device_in_ep_t0_trans_sz_pack(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)transsz << 0));
}

__INLINE static void usb_device_in_ep_t0_trans_sz_unpack(uint8_t* transsz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t0_trans_sz_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t0_trans_sz_trans_sz_setf(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T0_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)transsz << 0);
}

 /**
 * @brief IN_EP_T1_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     01             SEND_NAK   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET 0x00004410


__INLINE static uint32_t usb_device_in_ep_t1_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t1_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T1_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T1_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_IN_EP_T1_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T1_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_IN_EP_T1_CTL_SEND_NAK_BIT                          ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T1_CTL_SEND_NAK_POS                          1
#define USB_DEVICE_IN_EP_T1_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T1_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_IN_EP_T1_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_IN_EP_T1_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_IN_EP_T1_CTL_SEND_NAK_RST                          0x0
#define USB_DEVICE_IN_EP_T1_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_in_ep_t1_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_in_ep_t1_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendnak, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendnak = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t1_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t1_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_in_ep_t1_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t1_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_in_ep_t1_ctl_send_nak_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t usb_device_in_ep_t1_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t1_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief IN_EP_T1_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05          ISO_TX_DONE   0
 *     04    DATA_UNDERRUN_ERR   0
 *     03             NAK_SENT   0
 *     02      BELOW_THRESHOLD   0
 *     01            DATA_SENT   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET 0x00004414


__INLINE static uint32_t usb_device_in_ep_t1_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t1_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T1_STA_ISO_TX_DONE_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_IN_EP_T1_STA_ISO_TX_DONE_POS                       5
#define USB_DEVICE_IN_EP_T1_STA_DATA_UNDERRUN_ERR_BIT                 ((uint32_t)0x00000010)
#define USB_DEVICE_IN_EP_T1_STA_DATA_UNDERRUN_ERR_POS                 4
#define USB_DEVICE_IN_EP_T1_STA_NAK_SENT_BIT                          ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T1_STA_NAK_SENT_POS                          3
#define USB_DEVICE_IN_EP_T1_STA_BELOW_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T1_STA_BELOW_THRESHOLD_POS                   2
#define USB_DEVICE_IN_EP_T1_STA_DATA_SENT_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T1_STA_DATA_SENT_POS                         1
#define USB_DEVICE_IN_EP_T1_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T1_STA_STATUS_POS                            0

#define USB_DEVICE_IN_EP_T1_STA_ISO_TX_DONE_RST                       0x0
#define USB_DEVICE_IN_EP_T1_STA_DATA_UNDERRUN_ERR_RST                 0x0
#define USB_DEVICE_IN_EP_T1_STA_NAK_SENT_RST                          0x0
#define USB_DEVICE_IN_EP_T1_STA_BELOW_THRESHOLD_RST                   0x0
#define USB_DEVICE_IN_EP_T1_STA_DATA_SENT_RST                         0x0
#define USB_DEVICE_IN_EP_T1_STA_STATUS_RST                            0x0

__INLINE static void usb_device_in_ep_t1_sta_pack(uint8_t isotxdone, uint8_t dataunderrunerr, uint8_t naksent, uint8_t belowthreshold, uint8_t datasent, uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)isotxdone << 5) | ((uint32_t)dataunderrunerr << 4) | ((uint32_t)naksent << 3) | ((uint32_t)belowthreshold << 2) | ((uint32_t)datasent << 1) | ((uint32_t)status << 0));
}

__INLINE static void usb_device_in_ep_t1_sta_unpack(uint8_t* isotxdone, uint8_t* dataunderrunerr, uint8_t* naksent, uint8_t* belowthreshold, uint8_t* datasent, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *isotxdone = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dataunderrunerr = (localVal & ((uint32_t)0x00000010)) >> 4;
    *naksent = (localVal & ((uint32_t)0x00000008)) >> 3;
    *belowthreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *datasent = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_iso_tx_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_in_ep_t1_sta_iso_tx_done_setf(uint8_t isotxdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)isotxdone << 5));
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_data_underrun_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_in_ep_t1_sta_data_underrun_err_setf(uint8_t dataunderrunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dataunderrunerr << 4));
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_nak_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t1_sta_nak_sent_setf(uint8_t naksent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)naksent << 3));
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_below_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t1_sta_below_threshold_setf(uint8_t belowthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)belowthreshold << 2));
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_data_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_in_ep_t1_sta_data_sent_setf(uint8_t datasent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)datasent << 1));
}

__INLINE static uint8_t usb_device_in_ep_t1_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t1_sta_status_setf(uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)status << 0));
}

 /**
 * @brief IN_EP_T1_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00              FIFO_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET 0x00004418


__INLINE static uint32_t usb_device_in_ep_t1_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t1_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T1_FIFO_SZ_FIFO_SZ_MASK                          ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T1_FIFO_SZ_FIFO_SZ_LSB                           0
#define USB_DEVICE_IN_EP_T1_FIFO_SZ_FIFO_SZ_WIDTH                         ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T1_FIFO_SZ_FIFO_SZ_RST                           0x10

__INLINE static void usb_device_in_ep_t1_fifo_sz_pack(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifosz << 0));
}

__INLINE static void usb_device_in_ep_t1_fifo_sz_unpack(uint8_t* fifosz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifosz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t1_fifo_sz_fifo_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t1_fifo_sz_fifo_sz_setf(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifosz << 0);
}

 /**
 * @brief IN_EP_T1_TRANS_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00             TRANS_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET 0x0000441C


__INLINE static uint32_t usb_device_in_ep_t1_trans_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t1_trans_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T1_TRANS_SZ_TRANS_SZ_MASK                         ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T1_TRANS_SZ_TRANS_SZ_LSB                          0
#define USB_DEVICE_IN_EP_T1_TRANS_SZ_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T1_TRANS_SZ_TRANS_SZ_RST                          0x10

__INLINE static void usb_device_in_ep_t1_trans_sz_pack(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)transsz << 0));
}

__INLINE static void usb_device_in_ep_t1_trans_sz_unpack(uint8_t* transsz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t1_trans_sz_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t1_trans_sz_trans_sz_setf(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T1_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)transsz << 0);
}

 /**
 * @brief IN_EP_T2_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     01             SEND_NAK   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET 0x00004420


__INLINE static uint32_t usb_device_in_ep_t2_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t2_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T2_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T2_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_IN_EP_T2_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T2_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_IN_EP_T2_CTL_SEND_NAK_BIT                          ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T2_CTL_SEND_NAK_POS                          1
#define USB_DEVICE_IN_EP_T2_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T2_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_IN_EP_T2_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_IN_EP_T2_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_IN_EP_T2_CTL_SEND_NAK_RST                          0x0
#define USB_DEVICE_IN_EP_T2_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_in_ep_t2_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_in_ep_t2_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendnak, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendnak = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t2_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t2_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_in_ep_t2_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t2_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_in_ep_t2_ctl_send_nak_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t usb_device_in_ep_t2_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t2_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief IN_EP_T2_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05          ISO_TX_DONE   0
 *     04    DATA_UNDERRUN_ERR   0
 *     03             NAK_SENT   0
 *     02      BELOW_THRESHOLD   0
 *     01            DATA_SENT   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET 0x00004424


__INLINE static uint32_t usb_device_in_ep_t2_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t2_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T2_STA_ISO_TX_DONE_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_IN_EP_T2_STA_ISO_TX_DONE_POS                       5
#define USB_DEVICE_IN_EP_T2_STA_DATA_UNDERRUN_ERR_BIT                 ((uint32_t)0x00000010)
#define USB_DEVICE_IN_EP_T2_STA_DATA_UNDERRUN_ERR_POS                 4
#define USB_DEVICE_IN_EP_T2_STA_NAK_SENT_BIT                          ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T2_STA_NAK_SENT_POS                          3
#define USB_DEVICE_IN_EP_T2_STA_BELOW_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T2_STA_BELOW_THRESHOLD_POS                   2
#define USB_DEVICE_IN_EP_T2_STA_DATA_SENT_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T2_STA_DATA_SENT_POS                         1
#define USB_DEVICE_IN_EP_T2_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T2_STA_STATUS_POS                            0

#define USB_DEVICE_IN_EP_T2_STA_ISO_TX_DONE_RST                       0x0
#define USB_DEVICE_IN_EP_T2_STA_DATA_UNDERRUN_ERR_RST                 0x0
#define USB_DEVICE_IN_EP_T2_STA_NAK_SENT_RST                          0x0
#define USB_DEVICE_IN_EP_T2_STA_BELOW_THRESHOLD_RST                   0x0
#define USB_DEVICE_IN_EP_T2_STA_DATA_SENT_RST                         0x0
#define USB_DEVICE_IN_EP_T2_STA_STATUS_RST                            0x0

__INLINE static void usb_device_in_ep_t2_sta_pack(uint8_t isotxdone, uint8_t dataunderrunerr, uint8_t naksent, uint8_t belowthreshold, uint8_t datasent, uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)isotxdone << 5) | ((uint32_t)dataunderrunerr << 4) | ((uint32_t)naksent << 3) | ((uint32_t)belowthreshold << 2) | ((uint32_t)datasent << 1) | ((uint32_t)status << 0));
}

__INLINE static void usb_device_in_ep_t2_sta_unpack(uint8_t* isotxdone, uint8_t* dataunderrunerr, uint8_t* naksent, uint8_t* belowthreshold, uint8_t* datasent, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *isotxdone = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dataunderrunerr = (localVal & ((uint32_t)0x00000010)) >> 4;
    *naksent = (localVal & ((uint32_t)0x00000008)) >> 3;
    *belowthreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *datasent = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_iso_tx_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_in_ep_t2_sta_iso_tx_done_setf(uint8_t isotxdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)isotxdone << 5));
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_data_underrun_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_in_ep_t2_sta_data_underrun_err_setf(uint8_t dataunderrunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dataunderrunerr << 4));
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_nak_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t2_sta_nak_sent_setf(uint8_t naksent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)naksent << 3));
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_below_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t2_sta_below_threshold_setf(uint8_t belowthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)belowthreshold << 2));
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_data_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_in_ep_t2_sta_data_sent_setf(uint8_t datasent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)datasent << 1));
}

__INLINE static uint8_t usb_device_in_ep_t2_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t2_sta_status_setf(uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)status << 0));
}

 /**
 * @brief IN_EP_T2_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00              FIFO_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET 0x00004428


__INLINE static uint32_t usb_device_in_ep_t2_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t2_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T2_FIFO_SZ_FIFO_SZ_MASK                          ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T2_FIFO_SZ_FIFO_SZ_LSB                           0
#define USB_DEVICE_IN_EP_T2_FIFO_SZ_FIFO_SZ_WIDTH                         ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T2_FIFO_SZ_FIFO_SZ_RST                           0x10

__INLINE static void usb_device_in_ep_t2_fifo_sz_pack(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifosz << 0));
}

__INLINE static void usb_device_in_ep_t2_fifo_sz_unpack(uint8_t* fifosz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifosz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t2_fifo_sz_fifo_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t2_fifo_sz_fifo_sz_setf(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifosz << 0);
}

 /**
 * @brief IN_EP_T2_TRANS_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00             TRANS_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET 0x0000442C


__INLINE static uint32_t usb_device_in_ep_t2_trans_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t2_trans_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T2_TRANS_SZ_TRANS_SZ_MASK                         ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T2_TRANS_SZ_TRANS_SZ_LSB                          0
#define USB_DEVICE_IN_EP_T2_TRANS_SZ_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T2_TRANS_SZ_TRANS_SZ_RST                          0x10

__INLINE static void usb_device_in_ep_t2_trans_sz_pack(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)transsz << 0));
}

__INLINE static void usb_device_in_ep_t2_trans_sz_unpack(uint8_t* transsz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t2_trans_sz_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t2_trans_sz_trans_sz_setf(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T2_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)transsz << 0);
}

 /**
 * @brief IN_EP_T3_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     01             SEND_NAK   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET 0x00004430


__INLINE static uint32_t usb_device_in_ep_t3_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t3_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T3_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T3_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_IN_EP_T3_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T3_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_IN_EP_T3_CTL_SEND_NAK_BIT                          ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T3_CTL_SEND_NAK_POS                          1
#define USB_DEVICE_IN_EP_T3_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T3_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_IN_EP_T3_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_IN_EP_T3_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_IN_EP_T3_CTL_SEND_NAK_RST                          0x0
#define USB_DEVICE_IN_EP_T3_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_in_ep_t3_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_in_ep_t3_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendnak, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendnak = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t3_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t3_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_in_ep_t3_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t3_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_in_ep_t3_ctl_send_nak_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t usb_device_in_ep_t3_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t3_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief IN_EP_T3_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05          ISO_TX_DONE   0
 *     04    DATA_UNDERRUN_ERR   0
 *     03             NAK_SENT   0
 *     02      BELOW_THRESHOLD   0
 *     01            DATA_SENT   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET 0x00004434


__INLINE static uint32_t usb_device_in_ep_t3_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t3_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T3_STA_ISO_TX_DONE_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_IN_EP_T3_STA_ISO_TX_DONE_POS                       5
#define USB_DEVICE_IN_EP_T3_STA_DATA_UNDERRUN_ERR_BIT                 ((uint32_t)0x00000010)
#define USB_DEVICE_IN_EP_T3_STA_DATA_UNDERRUN_ERR_POS                 4
#define USB_DEVICE_IN_EP_T3_STA_NAK_SENT_BIT                          ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T3_STA_NAK_SENT_POS                          3
#define USB_DEVICE_IN_EP_T3_STA_BELOW_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T3_STA_BELOW_THRESHOLD_POS                   2
#define USB_DEVICE_IN_EP_T3_STA_DATA_SENT_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T3_STA_DATA_SENT_POS                         1
#define USB_DEVICE_IN_EP_T3_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T3_STA_STATUS_POS                            0

#define USB_DEVICE_IN_EP_T3_STA_ISO_TX_DONE_RST                       0x0
#define USB_DEVICE_IN_EP_T3_STA_DATA_UNDERRUN_ERR_RST                 0x0
#define USB_DEVICE_IN_EP_T3_STA_NAK_SENT_RST                          0x0
#define USB_DEVICE_IN_EP_T3_STA_BELOW_THRESHOLD_RST                   0x0
#define USB_DEVICE_IN_EP_T3_STA_DATA_SENT_RST                         0x0
#define USB_DEVICE_IN_EP_T3_STA_STATUS_RST                            0x0

__INLINE static void usb_device_in_ep_t3_sta_pack(uint8_t isotxdone, uint8_t dataunderrunerr, uint8_t naksent, uint8_t belowthreshold, uint8_t datasent, uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)isotxdone << 5) | ((uint32_t)dataunderrunerr << 4) | ((uint32_t)naksent << 3) | ((uint32_t)belowthreshold << 2) | ((uint32_t)datasent << 1) | ((uint32_t)status << 0));
}

__INLINE static void usb_device_in_ep_t3_sta_unpack(uint8_t* isotxdone, uint8_t* dataunderrunerr, uint8_t* naksent, uint8_t* belowthreshold, uint8_t* datasent, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *isotxdone = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dataunderrunerr = (localVal & ((uint32_t)0x00000010)) >> 4;
    *naksent = (localVal & ((uint32_t)0x00000008)) >> 3;
    *belowthreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *datasent = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_iso_tx_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_in_ep_t3_sta_iso_tx_done_setf(uint8_t isotxdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)isotxdone << 5));
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_data_underrun_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_in_ep_t3_sta_data_underrun_err_setf(uint8_t dataunderrunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dataunderrunerr << 4));
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_nak_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t3_sta_nak_sent_setf(uint8_t naksent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)naksent << 3));
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_below_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t3_sta_below_threshold_setf(uint8_t belowthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)belowthreshold << 2));
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_data_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_in_ep_t3_sta_data_sent_setf(uint8_t datasent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)datasent << 1));
}

__INLINE static uint8_t usb_device_in_ep_t3_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t3_sta_status_setf(uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)status << 0));
}

 /**
 * @brief IN_EP_T3_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00              FIFO_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET 0x00004438


__INLINE static uint32_t usb_device_in_ep_t3_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t3_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T3_FIFO_SZ_FIFO_SZ_MASK                          ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T3_FIFO_SZ_FIFO_SZ_LSB                           0
#define USB_DEVICE_IN_EP_T3_FIFO_SZ_FIFO_SZ_WIDTH                         ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T3_FIFO_SZ_FIFO_SZ_RST                           0x10

__INLINE static void usb_device_in_ep_t3_fifo_sz_pack(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifosz << 0));
}

__INLINE static void usb_device_in_ep_t3_fifo_sz_unpack(uint8_t* fifosz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifosz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t3_fifo_sz_fifo_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t3_fifo_sz_fifo_sz_setf(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifosz << 0);
}

 /**
 * @brief IN_EP_T3_TRANS_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00             TRANS_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET 0x0000443C


__INLINE static uint32_t usb_device_in_ep_t3_trans_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t3_trans_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T3_TRANS_SZ_TRANS_SZ_MASK                         ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T3_TRANS_SZ_TRANS_SZ_LSB                          0
#define USB_DEVICE_IN_EP_T3_TRANS_SZ_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T3_TRANS_SZ_TRANS_SZ_RST                          0x10

__INLINE static void usb_device_in_ep_t3_trans_sz_pack(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)transsz << 0));
}

__INLINE static void usb_device_in_ep_t3_trans_sz_unpack(uint8_t* transsz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t3_trans_sz_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t3_trans_sz_trans_sz_setf(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T3_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)transsz << 0);
}

 /**
 * @brief IN_EP_T4_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     01             SEND_NAK   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET 0x00004440


__INLINE static uint32_t usb_device_in_ep_t4_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t4_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T4_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T4_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_IN_EP_T4_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T4_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_IN_EP_T4_CTL_SEND_NAK_BIT                          ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T4_CTL_SEND_NAK_POS                          1
#define USB_DEVICE_IN_EP_T4_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T4_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_IN_EP_T4_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_IN_EP_T4_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_IN_EP_T4_CTL_SEND_NAK_RST                          0x0
#define USB_DEVICE_IN_EP_T4_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_in_ep_t4_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_in_ep_t4_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendnak, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendnak = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t4_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t4_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_in_ep_t4_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t4_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_in_ep_t4_ctl_send_nak_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t usb_device_in_ep_t4_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t4_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief IN_EP_T4_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     05          ISO_TX_DONE   0
 *     04    DATA_UNDERRUN_ERR   0
 *     03             NAK_SENT   0
 *     02      BELOW_THRESHOLD   0
 *     01            DATA_SENT   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET 0x00004444


__INLINE static uint32_t usb_device_in_ep_t4_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t4_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T4_STA_ISO_TX_DONE_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_IN_EP_T4_STA_ISO_TX_DONE_POS                       5
#define USB_DEVICE_IN_EP_T4_STA_DATA_UNDERRUN_ERR_BIT                 ((uint32_t)0x00000010)
#define USB_DEVICE_IN_EP_T4_STA_DATA_UNDERRUN_ERR_POS                 4
#define USB_DEVICE_IN_EP_T4_STA_NAK_SENT_BIT                          ((uint32_t)0x00000008)
#define USB_DEVICE_IN_EP_T4_STA_NAK_SENT_POS                          3
#define USB_DEVICE_IN_EP_T4_STA_BELOW_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_IN_EP_T4_STA_BELOW_THRESHOLD_POS                   2
#define USB_DEVICE_IN_EP_T4_STA_DATA_SENT_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_IN_EP_T4_STA_DATA_SENT_POS                         1
#define USB_DEVICE_IN_EP_T4_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_IN_EP_T4_STA_STATUS_POS                            0

#define USB_DEVICE_IN_EP_T4_STA_ISO_TX_DONE_RST                       0x0
#define USB_DEVICE_IN_EP_T4_STA_DATA_UNDERRUN_ERR_RST                 0x0
#define USB_DEVICE_IN_EP_T4_STA_NAK_SENT_RST                          0x0
#define USB_DEVICE_IN_EP_T4_STA_BELOW_THRESHOLD_RST                   0x0
#define USB_DEVICE_IN_EP_T4_STA_DATA_SENT_RST                         0x0
#define USB_DEVICE_IN_EP_T4_STA_STATUS_RST                            0x0

__INLINE static void usb_device_in_ep_t4_sta_pack(uint8_t isotxdone, uint8_t dataunderrunerr, uint8_t naksent, uint8_t belowthreshold, uint8_t datasent, uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)isotxdone << 5) | ((uint32_t)dataunderrunerr << 4) | ((uint32_t)naksent << 3) | ((uint32_t)belowthreshold << 2) | ((uint32_t)datasent << 1) | ((uint32_t)status << 0));
}

__INLINE static void usb_device_in_ep_t4_sta_unpack(uint8_t* isotxdone, uint8_t* dataunderrunerr, uint8_t* naksent, uint8_t* belowthreshold, uint8_t* datasent, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *isotxdone = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dataunderrunerr = (localVal & ((uint32_t)0x00000010)) >> 4;
    *naksent = (localVal & ((uint32_t)0x00000008)) >> 3;
    *belowthreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *datasent = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_iso_tx_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_in_ep_t4_sta_iso_tx_done_setf(uint8_t isotxdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)isotxdone << 5));
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_data_underrun_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_in_ep_t4_sta_data_underrun_err_setf(uint8_t dataunderrunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dataunderrunerr << 4));
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_nak_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_in_ep_t4_sta_nak_sent_setf(uint8_t naksent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)naksent << 3));
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_below_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_in_ep_t4_sta_below_threshold_setf(uint8_t belowthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)belowthreshold << 2));
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_data_sent_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_in_ep_t4_sta_data_sent_setf(uint8_t datasent)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)datasent << 1));
}

__INLINE static uint8_t usb_device_in_ep_t4_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_in_ep_t4_sta_status_setf(uint8_t status)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)status << 0));
}

 /**
 * @brief IN_EP_T4_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00              FIFO_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET 0x00004448


__INLINE static uint32_t usb_device_in_ep_t4_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t4_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T4_FIFO_SZ_FIFO_SZ_MASK                          ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T4_FIFO_SZ_FIFO_SZ_LSB                           0
#define USB_DEVICE_IN_EP_T4_FIFO_SZ_FIFO_SZ_WIDTH                         ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T4_FIFO_SZ_FIFO_SZ_RST                           0x10

__INLINE static void usb_device_in_ep_t4_fifo_sz_pack(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifosz << 0));
}

__INLINE static void usb_device_in_ep_t4_fifo_sz_unpack(uint8_t* fifosz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifosz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t4_fifo_sz_fifo_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t4_fifo_sz_fifo_sz_setf(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifosz << 0);
}

 /**
 * @brief IN_EP_T4_TRANS_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00             TRANS_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET 0x0000444C


__INLINE static uint32_t usb_device_in_ep_t4_trans_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_in_ep_t4_trans_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_IN_EP_T4_TRANS_SZ_TRANS_SZ_MASK                         ((uint32_t)0x000003FF)
#define USB_DEVICE_IN_EP_T4_TRANS_SZ_TRANS_SZ_LSB                          0
#define USB_DEVICE_IN_EP_T4_TRANS_SZ_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)

#define USB_DEVICE_IN_EP_T4_TRANS_SZ_TRANS_SZ_RST                          0x10

__INLINE static void usb_device_in_ep_t4_trans_sz_pack(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)transsz << 0));
}

__INLINE static void usb_device_in_ep_t4_trans_sz_unpack(uint8_t* transsz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_in_ep_t4_trans_sz_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_in_ep_t4_trans_sz_trans_sz_setf(uint16_t transsz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_IN_EP_T4_TRANS_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)transsz << 0);
}

 /**
 * @brief OUT_EP_R0_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET 0x00004500


__INLINE static uint32_t usb_device_out_ep_r0_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_r0_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_R0_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_OUT_EP_R0_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_OUT_EP_R0_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_R0_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_OUT_EP_R0_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_R0_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_OUT_EP_R0_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_OUT_EP_R0_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_OUT_EP_R0_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_out_ep_r0_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_out_ep_r0_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_out_ep_r0_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_out_ep_r0_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_out_ep_r0_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_out_ep_r0_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_out_ep_r0_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_out_ep_r0_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R0_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief OUT_EP_R1_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET 0x00004510


__INLINE static uint32_t usb_device_out_ep_r1_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_r1_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_R1_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_OUT_EP_R1_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_OUT_EP_R1_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_R1_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_OUT_EP_R1_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_R1_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_OUT_EP_R1_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_OUT_EP_R1_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_OUT_EP_R1_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_out_ep_r1_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_out_ep_r1_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_out_ep_r1_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_out_ep_r1_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_out_ep_r1_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_out_ep_r1_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_out_ep_r1_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_out_ep_r1_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R1_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief OUT_EP_R2_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET 0x00004520


__INLINE static uint32_t usb_device_out_ep_r2_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_r2_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_R2_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_OUT_EP_R2_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_OUT_EP_R2_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_R2_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_OUT_EP_R2_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_R2_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_OUT_EP_R2_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_OUT_EP_R2_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_OUT_EP_R2_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_out_ep_r2_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_out_ep_r2_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_out_ep_r2_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_out_ep_r2_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_out_ep_r2_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_out_ep_r2_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_out_ep_r2_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_out_ep_r2_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R2_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief OUT_EP_R3_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET 0x00004530


__INLINE static uint32_t usb_device_out_ep_r3_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_r3_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_R3_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_OUT_EP_R3_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_OUT_EP_R3_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_R3_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_OUT_EP_R3_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_R3_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_OUT_EP_R3_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_OUT_EP_R3_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_OUT_EP_R3_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_out_ep_r3_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_out_ep_r3_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_out_ep_r3_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_out_ep_r3_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_out_ep_r3_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_out_ep_r3_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_out_ep_r3_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_out_ep_r3_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R3_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief OUT_EP_R4_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03           FIFO_READY   0
 *     02           FLUSH_FIFO   0
 *     00           SEND_STALL   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET 0x00004540


__INLINE static uint32_t usb_device_out_ep_r4_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_r4_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_R4_CTL_FIFO_READY_BIT                        ((uint32_t)0x00000008)
#define USB_DEVICE_OUT_EP_R4_CTL_FIFO_READY_POS                        3
#define USB_DEVICE_OUT_EP_R4_CTL_FLUSH_FIFO_BIT                        ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_R4_CTL_FLUSH_FIFO_POS                        2
#define USB_DEVICE_OUT_EP_R4_CTL_SEND_STALL_BIT                        ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_R4_CTL_SEND_STALL_POS                        0

#define USB_DEVICE_OUT_EP_R4_CTL_FIFO_READY_RST                        0x0
#define USB_DEVICE_OUT_EP_R4_CTL_FLUSH_FIFO_RST                        0x0
#define USB_DEVICE_OUT_EP_R4_CTL_SEND_STALL_RST                        0x0

__INLINE static void usb_device_out_ep_r4_ctl_pack(uint8_t fifoready, uint8_t flushfifo, uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifoready << 3) | ((uint32_t)flushfifo << 2) | ((uint32_t)sendstall << 0));
}

__INLINE static void usb_device_out_ep_r4_ctl_unpack(uint8_t* fifoready, uint8_t* flushfifo, uint8_t* sendstall)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifoready = (localVal & ((uint32_t)0x00000008)) >> 3;
    *flushfifo = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sendstall = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_out_ep_r4_ctl_fifo_ready_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_out_ep_r4_ctl_fifo_ready_setf(uint8_t fifoready)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)fifoready << 3));
}

__INLINE static uint8_t usb_device_out_ep_r4_ctl_flush_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_out_ep_r4_ctl_flush_fifo_setf(uint8_t flushfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flushfifo << 2));
}

__INLINE static uint8_t usb_device_out_ep_r4_ctl_send_stall_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_out_ep_r4_ctl_send_stall_setf(uint8_t sendstall)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_R4_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sendstall << 0));
}

 /**
 * @brief DEV_CFG register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12         Status_bit_1   0
 *     11         Status_bit_0   0
 *     09           SCALE_DOWN   0
 *     08             HST_MODE   0
 *     07         SET_DESC_SUP   0
 *     06             CSR_DONE   0
 *     05          CSR_PRG_SUP   0
 *     04           SYNC_FRAME   0
 *     03         SELF_POWEPED   0
 *     02        REMOTE_WAKEUP   0
 *  01:00                SPEED   0b11
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET 0x00004600


__INLINE static uint32_t usb_device_dev_cfg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_dev_cfg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_DEV_CFG_STATUS_BIT_1_BIT                      ((uint32_t)0x00001000)
#define USB_DEVICE_DEV_CFG_STATUS_BIT_1_POS                      12
#define USB_DEVICE_DEV_CFG_STATUS_BIT_0_BIT                      ((uint32_t)0x00000800)
#define USB_DEVICE_DEV_CFG_STATUS_BIT_0_POS                      11
#define USB_DEVICE_DEV_CFG_SCALE_DOWN_BIT                        ((uint32_t)0x00000200)
#define USB_DEVICE_DEV_CFG_SCALE_DOWN_POS                        9
#define USB_DEVICE_DEV_CFG_HST_MODE_BIT                          ((uint32_t)0x00000100)
#define USB_DEVICE_DEV_CFG_HST_MODE_POS                          8
#define USB_DEVICE_DEV_CFG_SET_DESC_SUP_BIT                      ((uint32_t)0x00000080)
#define USB_DEVICE_DEV_CFG_SET_DESC_SUP_POS                      7
#define USB_DEVICE_DEV_CFG_CSR_DONE_BIT                          ((uint32_t)0x00000040)
#define USB_DEVICE_DEV_CFG_CSR_DONE_POS                          6
#define USB_DEVICE_DEV_CFG_CSR_PRG_SUP_BIT                       ((uint32_t)0x00000020)
#define USB_DEVICE_DEV_CFG_CSR_PRG_SUP_POS                       5
#define USB_DEVICE_DEV_CFG_SYNC_FRAME_BIT                        ((uint32_t)0x00000010)
#define USB_DEVICE_DEV_CFG_SYNC_FRAME_POS                        4
#define USB_DEVICE_DEV_CFG_SELF_POWEPED_BIT                      ((uint32_t)0x00000008)
#define USB_DEVICE_DEV_CFG_SELF_POWEPED_POS                      3
#define USB_DEVICE_DEV_CFG_REMOTE_WAKEUP_BIT                     ((uint32_t)0x00000004)
#define USB_DEVICE_DEV_CFG_REMOTE_WAKEUP_POS                     2
#define USB_DEVICE_DEV_CFG_SPEED_MASK                            ((uint32_t)0x00000003)
#define USB_DEVICE_DEV_CFG_SPEED_LSB                             0
#define USB_DEVICE_DEV_CFG_SPEED_WIDTH                           ((uint32_t)0x00000002)

#define USB_DEVICE_DEV_CFG_STATUS_BIT_1_RST                      0x0
#define USB_DEVICE_DEV_CFG_STATUS_BIT_0_RST                      0x0
#define USB_DEVICE_DEV_CFG_SCALE_DOWN_RST                        0x0
#define USB_DEVICE_DEV_CFG_HST_MODE_RST                          0x0
#define USB_DEVICE_DEV_CFG_SET_DESC_SUP_RST                      0x0
#define USB_DEVICE_DEV_CFG_CSR_DONE_RST                          0x0
#define USB_DEVICE_DEV_CFG_CSR_PRG_SUP_RST                       0x0
#define USB_DEVICE_DEV_CFG_SYNC_FRAME_RST                        0x0
#define USB_DEVICE_DEV_CFG_SELF_POWEPED_RST                      0x0
#define USB_DEVICE_DEV_CFG_REMOTE_WAKEUP_RST                     0x0
#define USB_DEVICE_DEV_CFG_SPEED_RST                             0x11

__INLINE static void usb_device_dev_cfg_pack(uint8_t statusbit1, uint8_t statusbit0, uint8_t scaledown, uint8_t hstmode, uint8_t setdescsup, uint8_t csrdone, uint8_t csrprgsup, uint8_t syncframe, uint8_t selfpoweped, uint8_t remotewakeup, uint8_t speed)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)statusbit1 << 12) | ((uint32_t)statusbit0 << 11) | ((uint32_t)scaledown << 9) | ((uint32_t)hstmode << 8) | ((uint32_t)setdescsup << 7) | ((uint32_t)csrdone << 6) | ((uint32_t)csrprgsup << 5) | ((uint32_t)syncframe << 4) | ((uint32_t)selfpoweped << 3) | ((uint32_t)remotewakeup << 2) | ((uint32_t)speed << 0));
}

__INLINE static void usb_device_dev_cfg_unpack(uint8_t* statusbit1, uint8_t* statusbit0, uint8_t* scaledown, uint8_t* hstmode, uint8_t* setdescsup, uint8_t* csrdone, uint8_t* csrprgsup, uint8_t* syncframe, uint8_t* selfpoweped, uint8_t* remotewakeup, uint8_t* speed)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *statusbit1 = (localVal & ((uint32_t)0x00001000)) >> 12;
    *statusbit0 = (localVal & ((uint32_t)0x00000800)) >> 11;
    *scaledown = (localVal & ((uint32_t)0x00000200)) >> 9;
    *hstmode = (localVal & ((uint32_t)0x00000100)) >> 8;
    *setdescsup = (localVal & ((uint32_t)0x00000080)) >> 7;
    *csrdone = (localVal & ((uint32_t)0x00000040)) >> 6;
    *csrprgsup = (localVal & ((uint32_t)0x00000020)) >> 5;
    *syncframe = (localVal & ((uint32_t)0x00000010)) >> 4;
    *selfpoweped = (localVal & ((uint32_t)0x00000008)) >> 3;
    *remotewakeup = (localVal & ((uint32_t)0x00000004)) >> 2;
    *speed = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t usb_device_dev_cfg_status_bit_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void usb_device_dev_cfg_status_bit_1_setf(uint8_t statusbit1)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)statusbit1 << 12));
}

__INLINE static uint8_t usb_device_dev_cfg_status_bit_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void usb_device_dev_cfg_status_bit_0_setf(uint8_t statusbit0)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)statusbit0 << 11));
}

__INLINE static uint8_t usb_device_dev_cfg_scale_down_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void usb_device_dev_cfg_scale_down_setf(uint8_t scaledown)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)scaledown << 9));
}

__INLINE static uint8_t usb_device_dev_cfg_hst_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void usb_device_dev_cfg_hst_mode_setf(uint8_t hstmode)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)hstmode << 8));
}

__INLINE static uint8_t usb_device_dev_cfg_set_desc_sup_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void usb_device_dev_cfg_set_desc_sup_setf(uint8_t setdescsup)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)setdescsup << 7));
}

__INLINE static uint8_t usb_device_dev_cfg_csr_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void usb_device_dev_cfg_csr_done_setf(uint8_t csrdone)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)csrdone << 6));
}

__INLINE static uint8_t usb_device_dev_cfg_csr_prg_sup_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_dev_cfg_csr_prg_sup_setf(uint8_t csrprgsup)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)csrprgsup << 5));
}

__INLINE static uint8_t usb_device_dev_cfg_sync_frame_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_dev_cfg_sync_frame_setf(uint8_t syncframe)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)syncframe << 4));
}

__INLINE static uint8_t usb_device_dev_cfg_self_poweped_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_dev_cfg_self_poweped_setf(uint8_t selfpoweped)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)selfpoweped << 3));
}

__INLINE static uint8_t usb_device_dev_cfg_remote_wakeup_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void usb_device_dev_cfg_remote_wakeup_setf(uint8_t remotewakeup)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)remotewakeup << 2));
}

__INLINE static uint8_t usb_device_dev_cfg_speed_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void usb_device_dev_cfg_speed_setf(uint8_t speed)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_CFG_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)speed << 0));
}

 /**
 * @brief DEV_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:21                   TS   0b0
 *     12                 SUSP   0
 *  11:08                  ALT   0b0
 *  07:04                 INTF   0b0
 *  03:00                  CFG   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET 0x00004604


__INLINE static uint32_t usb_device_dev_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

// field definitions
#define USB_DEVICE_DEV_STA_TS_MASK                               ((uint32_t)0xFFE00000)
#define USB_DEVICE_DEV_STA_TS_LSB                                21
#define USB_DEVICE_DEV_STA_TS_WIDTH                              ((uint32_t)0x0000000B)
#define USB_DEVICE_DEV_STA_SUSP_BIT                              ((uint32_t)0x00001000)
#define USB_DEVICE_DEV_STA_SUSP_POS                              12
#define USB_DEVICE_DEV_STA_ALT_MASK                              ((uint32_t)0x00000F00)
#define USB_DEVICE_DEV_STA_ALT_LSB                               8
#define USB_DEVICE_DEV_STA_ALT_WIDTH                             ((uint32_t)0x00000004)
#define USB_DEVICE_DEV_STA_INTF_MASK                             ((uint32_t)0x000000F0)
#define USB_DEVICE_DEV_STA_INTF_LSB                              4
#define USB_DEVICE_DEV_STA_INTF_WIDTH                            ((uint32_t)0x00000004)
#define USB_DEVICE_DEV_STA_CFG_MASK                              ((uint32_t)0x0000000F)
#define USB_DEVICE_DEV_STA_CFG_LSB                               0
#define USB_DEVICE_DEV_STA_CFG_WIDTH                             ((uint32_t)0x00000004)

#define USB_DEVICE_DEV_STA_TS_RST                                0x0
#define USB_DEVICE_DEV_STA_SUSP_RST                              0x0
#define USB_DEVICE_DEV_STA_ALT_RST                               0x0
#define USB_DEVICE_DEV_STA_INTF_RST                              0x0
#define USB_DEVICE_DEV_STA_CFG_RST                               0x0

__INLINE static void usb_device_dev_sta_unpack(uint8_t* ts, uint8_t* susp, uint8_t* alt, uint8_t* intf, uint8_t* cfg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *ts = (localVal & ((uint32_t)0xFFE00000)) >> 21;
    *susp = (localVal & ((uint32_t)0x00001000)) >> 12;
    *alt = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intf = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *cfg = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_dev_sta_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFE00000)) >> 21);
}

__INLINE static uint8_t usb_device_dev_sta_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t usb_device_dev_sta_alt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static uint8_t usb_device_dev_sta_intf_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t usb_device_dev_sta_cfg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief DEV_INT_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     10              I2C_INT   0
 *     09              OTG_INT   0
 *     08             PORT_INT   0
 *     07         OUT_RECEIVED   0
 *     06       SETUP_RECEIVED   0
 *     05                  SOF   0
 *     04                   US   0
 *     03                   UR   0
 *     01                   SI   0
 *     00                   SC   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET 0x00004608


__INLINE static uint32_t usb_device_dev_int_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_dev_int_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_DEV_INT_STA_I2C_INT_BIT                           ((uint32_t)0x00000400)
#define USB_DEVICE_DEV_INT_STA_I2C_INT_POS                           10
#define USB_DEVICE_DEV_INT_STA_OTG_INT_BIT                           ((uint32_t)0x00000200)
#define USB_DEVICE_DEV_INT_STA_OTG_INT_POS                           9
#define USB_DEVICE_DEV_INT_STA_PORT_INT_BIT                          ((uint32_t)0x00000100)
#define USB_DEVICE_DEV_INT_STA_PORT_INT_POS                          8
#define USB_DEVICE_DEV_INT_STA_OUT_RECEIVED_BIT                      ((uint32_t)0x00000080)
#define USB_DEVICE_DEV_INT_STA_OUT_RECEIVED_POS                      7
#define USB_DEVICE_DEV_INT_STA_SETUP_RECEIVED_BIT                    ((uint32_t)0x00000040)
#define USB_DEVICE_DEV_INT_STA_SETUP_RECEIVED_POS                    6
#define USB_DEVICE_DEV_INT_STA_SOF_BIT                               ((uint32_t)0x00000020)
#define USB_DEVICE_DEV_INT_STA_SOF_POS                               5
#define USB_DEVICE_DEV_INT_STA_US_BIT                                ((uint32_t)0x00000010)
#define USB_DEVICE_DEV_INT_STA_US_POS                                4
#define USB_DEVICE_DEV_INT_STA_UR_BIT                                ((uint32_t)0x00000008)
#define USB_DEVICE_DEV_INT_STA_UR_POS                                3
#define USB_DEVICE_DEV_INT_STA_SI_BIT                                ((uint32_t)0x00000002)
#define USB_DEVICE_DEV_INT_STA_SI_POS                                1
#define USB_DEVICE_DEV_INT_STA_SC_BIT                                ((uint32_t)0x00000001)
#define USB_DEVICE_DEV_INT_STA_SC_POS                                0

#define USB_DEVICE_DEV_INT_STA_I2C_INT_RST                           0x0
#define USB_DEVICE_DEV_INT_STA_OTG_INT_RST                           0x0
#define USB_DEVICE_DEV_INT_STA_PORT_INT_RST                          0x0
#define USB_DEVICE_DEV_INT_STA_OUT_RECEIVED_RST                      0x0
#define USB_DEVICE_DEV_INT_STA_SETUP_RECEIVED_RST                    0x0
#define USB_DEVICE_DEV_INT_STA_SOF_RST                               0x0
#define USB_DEVICE_DEV_INT_STA_US_RST                                0x0
#define USB_DEVICE_DEV_INT_STA_UR_RST                                0x0
#define USB_DEVICE_DEV_INT_STA_SI_RST                                0x0
#define USB_DEVICE_DEV_INT_STA_SC_RST                                0x0

__INLINE static void usb_device_dev_int_sta_pack(uint8_t i2cint, uint8_t otgint, uint8_t portint, uint8_t outreceived, uint8_t setupreceived, uint8_t sof, uint8_t us, uint8_t ur, uint8_t si, uint8_t sc)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)i2cint << 10) | ((uint32_t)otgint << 9) | ((uint32_t)portint << 8) | ((uint32_t)outreceived << 7) | ((uint32_t)setupreceived << 6) | ((uint32_t)sof << 5) | ((uint32_t)us << 4) | ((uint32_t)ur << 3) | ((uint32_t)si << 1) | ((uint32_t)sc << 0));
}

__INLINE static void usb_device_dev_int_sta_unpack(uint8_t* i2cint, uint8_t* otgint, uint8_t* portint, uint8_t* outreceived, uint8_t* setupreceived, uint8_t* sof, uint8_t* us, uint8_t* ur, uint8_t* si, uint8_t* sc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *i2cint = (localVal & ((uint32_t)0x00000400)) >> 10;
    *otgint = (localVal & ((uint32_t)0x00000200)) >> 9;
    *portint = (localVal & ((uint32_t)0x00000100)) >> 8;
    *outreceived = (localVal & ((uint32_t)0x00000080)) >> 7;
    *setupreceived = (localVal & ((uint32_t)0x00000040)) >> 6;
    *sof = (localVal & ((uint32_t)0x00000020)) >> 5;
    *us = (localVal & ((uint32_t)0x00000010)) >> 4;
    *ur = (localVal & ((uint32_t)0x00000008)) >> 3;
    *si = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sc = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_dev_int_sta_i2c_int_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void usb_device_dev_int_sta_i2c_int_setf(uint8_t i2cint)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)i2cint << 10));
}

__INLINE static uint8_t usb_device_dev_int_sta_otg_int_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void usb_device_dev_int_sta_otg_int_setf(uint8_t otgint)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)otgint << 9));
}

__INLINE static uint8_t usb_device_dev_int_sta_port_int_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void usb_device_dev_int_sta_port_int_setf(uint8_t portint)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)portint << 8));
}

__INLINE static uint8_t usb_device_dev_int_sta_out_received_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void usb_device_dev_int_sta_out_received_setf(uint8_t outreceived)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)outreceived << 7));
}

__INLINE static uint8_t usb_device_dev_int_sta_setup_received_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void usb_device_dev_int_sta_setup_received_setf(uint8_t setupreceived)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)setupreceived << 6));
}

__INLINE static uint8_t usb_device_dev_int_sta_sof_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_dev_int_sta_sof_setf(uint8_t sof)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)sof << 5));
}

__INLINE static uint8_t usb_device_dev_int_sta_us_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_dev_int_sta_us_setf(uint8_t us)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)us << 4));
}

__INLINE static uint8_t usb_device_dev_int_sta_ur_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_dev_int_sta_ur_setf(uint8_t ur)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)ur << 3));
}

__INLINE static uint8_t usb_device_dev_int_sta_si_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_dev_int_sta_si_setf(uint8_t si)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)si << 1));
}

__INLINE static uint8_t usb_device_dev_int_sta_sc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_dev_int_sta_sc_setf(uint8_t sc)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)sc << 0));
}

 /**
 * @brief DEV_INT_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     10           I2C_INT_EN   0
 *     09           OTG_INT_EN   0
 *     08          PORT_INT_EN   0
 *     07   OUT_RECEIVED_INT_EN   0
 *     06   SETUP_RECEIVED_INT_EN   0
 *     05           SOF_INT_EN   0
 *     04            US_INT_EN   0
 *     03            UR_INT_EN   0
 *     01            SI_INT_EN   0
 *     00            SC_INT_EN   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET 0x0000460C


__INLINE static uint32_t usb_device_dev_int_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_dev_int_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_DEV_INT_EN_I2C_INT_EN_BIT                        ((uint32_t)0x00000400)
#define USB_DEVICE_DEV_INT_EN_I2C_INT_EN_POS                        10
#define USB_DEVICE_DEV_INT_EN_OTG_INT_EN_BIT                        ((uint32_t)0x00000200)
#define USB_DEVICE_DEV_INT_EN_OTG_INT_EN_POS                        9
#define USB_DEVICE_DEV_INT_EN_PORT_INT_EN_BIT                       ((uint32_t)0x00000100)
#define USB_DEVICE_DEV_INT_EN_PORT_INT_EN_POS                       8
#define USB_DEVICE_DEV_INT_EN_OUT_RECEIVED_INT_EN_BIT               ((uint32_t)0x00000080)
#define USB_DEVICE_DEV_INT_EN_OUT_RECEIVED_INT_EN_POS               7
#define USB_DEVICE_DEV_INT_EN_SETUP_RECEIVED_INT_EN_BIT             ((uint32_t)0x00000040)
#define USB_DEVICE_DEV_INT_EN_SETUP_RECEIVED_INT_EN_POS             6
#define USB_DEVICE_DEV_INT_EN_SOF_INT_EN_BIT                        ((uint32_t)0x00000020)
#define USB_DEVICE_DEV_INT_EN_SOF_INT_EN_POS                        5
#define USB_DEVICE_DEV_INT_EN_US_INT_EN_BIT                         ((uint32_t)0x00000010)
#define USB_DEVICE_DEV_INT_EN_US_INT_EN_POS                         4
#define USB_DEVICE_DEV_INT_EN_UR_INT_EN_BIT                         ((uint32_t)0x00000008)
#define USB_DEVICE_DEV_INT_EN_UR_INT_EN_POS                         3
#define USB_DEVICE_DEV_INT_EN_SI_INT_EN_BIT                         ((uint32_t)0x00000002)
#define USB_DEVICE_DEV_INT_EN_SI_INT_EN_POS                         1
#define USB_DEVICE_DEV_INT_EN_SC_INT_EN_BIT                         ((uint32_t)0x00000001)
#define USB_DEVICE_DEV_INT_EN_SC_INT_EN_POS                         0

#define USB_DEVICE_DEV_INT_EN_I2C_INT_EN_RST                        0x0
#define USB_DEVICE_DEV_INT_EN_OTG_INT_EN_RST                        0x0
#define USB_DEVICE_DEV_INT_EN_PORT_INT_EN_RST                       0x0
#define USB_DEVICE_DEV_INT_EN_OUT_RECEIVED_INT_EN_RST               0x0
#define USB_DEVICE_DEV_INT_EN_SETUP_RECEIVED_INT_EN_RST             0x0
#define USB_DEVICE_DEV_INT_EN_SOF_INT_EN_RST                        0x0
#define USB_DEVICE_DEV_INT_EN_US_INT_EN_RST                         0x0
#define USB_DEVICE_DEV_INT_EN_UR_INT_EN_RST                         0x0
#define USB_DEVICE_DEV_INT_EN_SI_INT_EN_RST                         0x0
#define USB_DEVICE_DEV_INT_EN_SC_INT_EN_RST                         0x0

__INLINE static void usb_device_dev_int_en_pack(uint8_t i2cinten, uint8_t otginten, uint8_t portinten, uint8_t outreceivedinten, uint8_t setupreceivedinten, uint8_t sofinten, uint8_t usinten, uint8_t urinten, uint8_t siinten, uint8_t scinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)i2cinten << 10) | ((uint32_t)otginten << 9) | ((uint32_t)portinten << 8) | ((uint32_t)outreceivedinten << 7) | ((uint32_t)setupreceivedinten << 6) | ((uint32_t)sofinten << 5) | ((uint32_t)usinten << 4) | ((uint32_t)urinten << 3) | ((uint32_t)siinten << 1) | ((uint32_t)scinten << 0));
}

__INLINE static void usb_device_dev_int_en_unpack(uint8_t* i2cinten, uint8_t* otginten, uint8_t* portinten, uint8_t* outreceivedinten, uint8_t* setupreceivedinten, uint8_t* sofinten, uint8_t* usinten, uint8_t* urinten, uint8_t* siinten, uint8_t* scinten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *i2cinten = (localVal & ((uint32_t)0x00000400)) >> 10;
    *otginten = (localVal & ((uint32_t)0x00000200)) >> 9;
    *portinten = (localVal & ((uint32_t)0x00000100)) >> 8;
    *outreceivedinten = (localVal & ((uint32_t)0x00000080)) >> 7;
    *setupreceivedinten = (localVal & ((uint32_t)0x00000040)) >> 6;
    *sofinten = (localVal & ((uint32_t)0x00000020)) >> 5;
    *usinten = (localVal & ((uint32_t)0x00000010)) >> 4;
    *urinten = (localVal & ((uint32_t)0x00000008)) >> 3;
    *siinten = (localVal & ((uint32_t)0x00000002)) >> 1;
    *scinten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_dev_int_en_i2c_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void usb_device_dev_int_en_i2c_int_en_setf(uint8_t i2cinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)i2cinten << 10));
}

__INLINE static uint8_t usb_device_dev_int_en_otg_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void usb_device_dev_int_en_otg_int_en_setf(uint8_t otginten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)otginten << 9));
}

__INLINE static uint8_t usb_device_dev_int_en_port_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void usb_device_dev_int_en_port_int_en_setf(uint8_t portinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)portinten << 8));
}

__INLINE static uint8_t usb_device_dev_int_en_out_received_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void usb_device_dev_int_en_out_received_int_en_setf(uint8_t outreceivedinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)outreceivedinten << 7));
}

__INLINE static uint8_t usb_device_dev_int_en_setup_received_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void usb_device_dev_int_en_setup_received_int_en_setf(uint8_t setupreceivedinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)setupreceivedinten << 6));
}

__INLINE static uint8_t usb_device_dev_int_en_sof_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_dev_int_en_sof_int_en_setf(uint8_t sofinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)sofinten << 5));
}

__INLINE static uint8_t usb_device_dev_int_en_us_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_dev_int_en_us_int_en_setf(uint8_t usinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)usinten << 4));
}

__INLINE static uint8_t usb_device_dev_int_en_ur_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_dev_int_en_ur_int_en_setf(uint8_t urinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)urinten << 3));
}

__INLINE static uint8_t usb_device_dev_int_en_si_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_dev_int_en_si_int_en_setf(uint8_t siinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)siinten << 1));
}

__INLINE static uint8_t usb_device_dev_int_en_sc_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void usb_device_dev_int_en_sc_int_en_setf(uint8_t scinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)scinten << 0));
}

 /**
 * @brief OUT_EP_RX_FIFO_SZ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00              FIFO_SZ   0b10
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET 0x00004610


__INLINE static uint32_t usb_device_out_ep_rx_fifo_sz_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_rx_fifo_sz_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_RX_FIFO_SZ_FIFO_SZ_MASK                          ((uint32_t)0x000003FF)
#define USB_DEVICE_OUT_EP_RX_FIFO_SZ_FIFO_SZ_LSB                           0
#define USB_DEVICE_OUT_EP_RX_FIFO_SZ_FIFO_SZ_WIDTH                         ((uint32_t)0x0000000A)

#define USB_DEVICE_OUT_EP_RX_FIFO_SZ_FIFO_SZ_RST                           0x10

__INLINE static void usb_device_out_ep_rx_fifo_sz_pack(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)fifosz << 0));
}

__INLINE static void usb_device_out_ep_rx_fifo_sz_unpack(uint8_t* fifosz)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *fifosz = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_out_ep_rx_fifo_sz_fifo_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_out_ep_rx_fifo_sz_fifo_sz_setf(uint16_t fifosz)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_SZ_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)fifosz << 0);
}

 /**
 * @brief GLB_EP_INT_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16        OUT_EP_INT_EN   0b0
 *  15:00         IN_EP_INT_EN   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET 0x00004614


__INLINE static uint32_t usb_device_glb_ep_int_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_glb_ep_int_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_GLB_EP_INT_EN_OUT_EP_INT_EN_MASK                    ((uint32_t)0xFFFF0000)
#define USB_DEVICE_GLB_EP_INT_EN_OUT_EP_INT_EN_LSB                     16
#define USB_DEVICE_GLB_EP_INT_EN_OUT_EP_INT_EN_WIDTH                   ((uint32_t)0x00000010)
#define USB_DEVICE_GLB_EP_INT_EN_IN_EP_INT_EN_MASK                     ((uint32_t)0x0000FFFF)
#define USB_DEVICE_GLB_EP_INT_EN_IN_EP_INT_EN_LSB                      0
#define USB_DEVICE_GLB_EP_INT_EN_IN_EP_INT_EN_WIDTH                    ((uint32_t)0x00000010)

#define USB_DEVICE_GLB_EP_INT_EN_OUT_EP_INT_EN_RST                     0x0
#define USB_DEVICE_GLB_EP_INT_EN_IN_EP_INT_EN_RST                      0x0

__INLINE static void usb_device_glb_ep_int_en_pack(uint16_t outepinten, uint16_t inepinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)outepinten << 16) | ((uint32_t)inepinten << 0));
}

__INLINE static void usb_device_glb_ep_int_en_unpack(uint8_t* outepinten, uint8_t* inepinten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *outepinten = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *inepinten = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t usb_device_glb_ep_int_en_out_ep_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void usb_device_glb_ep_int_en_out_ep_int_en_setf(uint16_t outepinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)outepinten << 16));
}

__INLINE static uint16_t usb_device_glb_ep_int_en_in_ep_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void usb_device_glb_ep_int_en_in_ep_int_en_setf(uint16_t inepinten)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_EN_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)inepinten << 0));
}

 /**
 * @brief DEV_THD register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:16         RX_THRESHOLD   0b8
 *  09:00         TX_THRESHOLD   0b8
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET 0x00004618


__INLINE static uint32_t usb_device_dev_thd_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_dev_thd_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_DEV_THD_RX_THRESHOLD_MASK                     ((uint32_t)0x03FF0000)
#define USB_DEVICE_DEV_THD_RX_THRESHOLD_LSB                      16
#define USB_DEVICE_DEV_THD_RX_THRESHOLD_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_DEV_THD_TX_THRESHOLD_MASK                     ((uint32_t)0x000003FF)
#define USB_DEVICE_DEV_THD_TX_THRESHOLD_LSB                      0
#define USB_DEVICE_DEV_THD_TX_THRESHOLD_WIDTH                    ((uint32_t)0x0000000A)

#define USB_DEVICE_DEV_THD_RX_THRESHOLD_RST                      0x8
#define USB_DEVICE_DEV_THD_TX_THRESHOLD_RST                      0x8

__INLINE static void usb_device_dev_thd_pack(uint16_t rxthreshold, uint16_t txthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)rxthreshold << 16) | ((uint32_t)txthreshold << 0));
}

__INLINE static void usb_device_dev_thd_unpack(uint8_t* rxthreshold, uint8_t* txthreshold)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *rxthreshold = (localVal & ((uint32_t)0x03FF0000)) >> 16;
    *txthreshold = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t usb_device_dev_thd_rx_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03FF0000)) >> 16);
}

__INLINE static void usb_device_dev_thd_rx_threshold_setf(uint16_t rxthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x03FF0000)) | ((uint32_t)rxthreshold << 16));
}

__INLINE static uint16_t usb_device_dev_thd_tx_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void usb_device_dev_thd_tx_threshold_setf(uint16_t txthreshold)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_DEV_THD_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x000003FF)) | ((uint32_t)txthreshold << 0));
}

 /**
 * @brief OUT_EP_RX_FIFO_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:22             TRANS_SZ   0b0
 *  19:16               EP_NUM   0b0
 *     04   DATA_OVERRUN_ERROR   0
 *     02      ABOVE_THRESHOLD   0
 *     01      STATUS_COMPLETE   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET 0x0000461C


__INLINE static uint32_t usb_device_out_ep_rx_fifo_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_out_ep_rx_fifo_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_TRANS_SZ_MASK                         ((uint32_t)0xFFC00000)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_TRANS_SZ_LSB                          22
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_TRANS_SZ_WIDTH                        ((uint32_t)0x0000000A)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_EP_NUM_MASK                           ((uint32_t)0x000F0000)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_EP_NUM_LSB                            16
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_EP_NUM_WIDTH                          ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_DATA_OVERRUN_ERROR_BIT                ((uint32_t)0x00000010)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_DATA_OVERRUN_ERROR_POS                4
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_ABOVE_THRESHOLD_BIT                   ((uint32_t)0x00000004)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_ABOVE_THRESHOLD_POS                   2
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_COMPLETE_BIT                   ((uint32_t)0x00000002)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_COMPLETE_POS                   1
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_POS                            0

#define USB_DEVICE_OUT_EP_RX_FIFO_STA_TRANS_SZ_RST                          0x0
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_EP_NUM_RST                            0x0
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_DATA_OVERRUN_ERROR_RST                0x0
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_ABOVE_THRESHOLD_RST                   0x0
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_COMPLETE_RST                   0x0
#define USB_DEVICE_OUT_EP_RX_FIFO_STA_STATUS_RST                            0x0

__INLINE static void usb_device_out_ep_rx_fifo_sta_pack(uint8_t statuscomplete)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)statuscomplete << 1));
}

__INLINE static void usb_device_out_ep_rx_fifo_sta_unpack(uint8_t* transsz, uint8_t* epnum, uint8_t* dataoverrunerror, uint8_t* abovethreshold, uint8_t* statuscomplete, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *transsz = (localVal & ((uint32_t)0xFFC00000)) >> 22;
    *epnum = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *dataoverrunerror = (localVal & ((uint32_t)0x00000010)) >> 4;
    *abovethreshold = (localVal & ((uint32_t)0x00000004)) >> 2;
    *statuscomplete = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint16_t usb_device_out_ep_rx_fifo_sta_trans_sz_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFC00000)) >> 22);
}

__INLINE static uint8_t usb_device_out_ep_rx_fifo_sta_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static uint8_t usb_device_out_ep_rx_fifo_sta_data_overrun_error_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t usb_device_out_ep_rx_fifo_sta_above_threshold_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t usb_device_out_ep_rx_fifo_sta_status_complete_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_out_ep_rx_fifo_sta_status_complete_setf(uint8_t statuscomplete)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)statuscomplete << 1);
}

__INLINE static uint8_t usb_device_out_ep_rx_fifo_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_OUT_EP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief SETUP_RX_FIFO_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:16               EP_NUM   0b0
 *     15      SETUP_AFTER_OUT   0
 *     01      STATUS_COMPLETE   0
 *     00               STATUS   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET 0x00004620


__INLINE static uint32_t usb_device_setup_rx_fifo_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_setup_rx_fifo_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_SETUP_RX_FIFO_STA_EP_NUM_MASK                           ((uint32_t)0x000F0000)
#define USB_DEVICE_SETUP_RX_FIFO_STA_EP_NUM_LSB                            16
#define USB_DEVICE_SETUP_RX_FIFO_STA_EP_NUM_WIDTH                          ((uint32_t)0x00000004)
#define USB_DEVICE_SETUP_RX_FIFO_STA_SETUP_AFTER_OUT_BIT                   ((uint32_t)0x00008000)
#define USB_DEVICE_SETUP_RX_FIFO_STA_SETUP_AFTER_OUT_POS                   15
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_COMPLETE_BIT                   ((uint32_t)0x00000002)
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_COMPLETE_POS                   1
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_BIT                            ((uint32_t)0x00000001)
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_POS                            0

#define USB_DEVICE_SETUP_RX_FIFO_STA_EP_NUM_RST                            0x0
#define USB_DEVICE_SETUP_RX_FIFO_STA_SETUP_AFTER_OUT_RST                   0x0
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_COMPLETE_RST                   0x0
#define USB_DEVICE_SETUP_RX_FIFO_STA_STATUS_RST                            0x0

__INLINE static void usb_device_setup_rx_fifo_sta_pack(uint8_t setupafterout, uint8_t statuscomplete)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)setupafterout << 15) | ((uint32_t)statuscomplete << 1));
}

__INLINE static void usb_device_setup_rx_fifo_sta_unpack(uint8_t* epnum, uint8_t* setupafterout, uint8_t* statuscomplete, uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *epnum = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *setupafterout = (localVal & ((uint32_t)0x00008000)) >> 15;
    *statuscomplete = (localVal & ((uint32_t)0x00000002)) >> 1;
    *status = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_setup_rx_fifo_sta_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static uint8_t usb_device_setup_rx_fifo_sta_setup_after_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void usb_device_setup_rx_fifo_sta_setup_after_out_setf(uint8_t setupafterout)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)setupafterout << 15));
}

__INLINE static uint8_t usb_device_setup_rx_fifo_sta_status_complete_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_setup_rx_fifo_sta_status_complete_setf(uint8_t statuscomplete)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)statuscomplete << 1));
}

__INLINE static uint8_t usb_device_setup_rx_fifo_sta_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_RX_FIFO_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief GLB_EP_INT_STA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16       OUT_EP_INT_STA   0b0
 *  15:00        IN_EP_INT_STA   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET 0x00004624


__INLINE static uint32_t usb_device_glb_ep_int_sta_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_glb_ep_int_sta_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_GLB_EP_INT_STA_OUT_EP_INT_STA_MASK                   ((uint32_t)0xFFFF0000)
#define USB_DEVICE_GLB_EP_INT_STA_OUT_EP_INT_STA_LSB                    16
#define USB_DEVICE_GLB_EP_INT_STA_OUT_EP_INT_STA_WIDTH                  ((uint32_t)0x00000010)
#define USB_DEVICE_GLB_EP_INT_STA_IN_EP_INT_STA_MASK                    ((uint32_t)0x0000FFFF)
#define USB_DEVICE_GLB_EP_INT_STA_IN_EP_INT_STA_LSB                     0
#define USB_DEVICE_GLB_EP_INT_STA_IN_EP_INT_STA_WIDTH                   ((uint32_t)0x00000010)

#define USB_DEVICE_GLB_EP_INT_STA_OUT_EP_INT_STA_RST                    0x0
#define USB_DEVICE_GLB_EP_INT_STA_IN_EP_INT_STA_RST                     0x0

__INLINE static void usb_device_glb_ep_int_sta_pack(uint16_t outepintsta, uint16_t inepintsta)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)outepintsta << 16) | ((uint32_t)inepintsta << 0));
}

__INLINE static void usb_device_glb_ep_int_sta_unpack(uint8_t* outepintsta, uint8_t* inepintsta)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *outepintsta = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *inepintsta = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t usb_device_glb_ep_int_sta_out_ep_int_sta_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void usb_device_glb_ep_int_sta_out_ep_int_sta_setf(uint16_t outepintsta)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)outepintsta << 16));
}

__INLINE static uint16_t usb_device_glb_ep_int_sta_in_ep_int_sta_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void usb_device_glb_ep_int_sta_in_ep_int_sta_setf(uint16_t inepintsta)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_GLB_EP_INT_STA_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)inepintsta << 0));
}

 /**
 * @brief FRAME_NUM register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  10:00         FRAME_NUMBER   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET 0x00004628


__INLINE static uint32_t usb_device_frame_num_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_frame_num_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_FRAME_NUM_FRAME_NUMBER_MASK                     ((uint32_t)0x000007FF)
#define USB_DEVICE_FRAME_NUM_FRAME_NUMBER_LSB                      0
#define USB_DEVICE_FRAME_NUM_FRAME_NUMBER_WIDTH                    ((uint32_t)0x0000000B)

#define USB_DEVICE_FRAME_NUM_FRAME_NUMBER_RST                      0x0

__INLINE static void usb_device_frame_num_pack(uint16_t framenumber)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)framenumber << 0));
}

__INLINE static void usb_device_frame_num_unpack(uint8_t* framenumber)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *framenumber = (localVal & ((uint32_t)0x000007FF)) >> 0;
}

__INLINE static uint16_t usb_device_frame_num_frame_number_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000007FF)) >> 0);
}

__INLINE static void usb_device_frame_num_frame_number_setf(uint16_t framenumber)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FRAME_NUM_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)framenumber << 0);
}

 /**
 * @brief SETUP_DATA_0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00         SETUP_DATA_0   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_SETUP_DATA_0_OFFSET 0x00004700


__INLINE static uint32_t usb_device_setup_data_0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

// field definitions
#define USB_DEVICE_SETUP_DATA_0_SETUP_DATA_0_MASK                     ((uint32_t)0xFFFFFFFF)
#define USB_DEVICE_SETUP_DATA_0_SETUP_DATA_0_LSB                      0
#define USB_DEVICE_SETUP_DATA_0_SETUP_DATA_0_WIDTH                    ((uint32_t)0x00000020)

#define USB_DEVICE_SETUP_DATA_0_SETUP_DATA_0_RST                      0x0

__INLINE static void usb_device_setup_data_0_unpack(uint8_t* setupdata0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *setupdata0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_device_setup_data_0_setup_data_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief SETUP_DATA_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00         SETUP_DATA_1   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_SETUP_DATA_1_OFFSET 0x00004704


__INLINE static uint32_t usb_device_setup_data_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

// field definitions
#define USB_DEVICE_SETUP_DATA_1_SETUP_DATA_1_MASK                     ((uint32_t)0xFFFFFFFF)
#define USB_DEVICE_SETUP_DATA_1_SETUP_DATA_1_LSB                      0
#define USB_DEVICE_SETUP_DATA_1_SETUP_DATA_1_WIDTH                    ((uint32_t)0x00000020)

#define USB_DEVICE_SETUP_DATA_1_SETUP_DATA_1_RST                      0x0

__INLINE static void usb_device_setup_data_1_unpack(uint8_t* setupdata1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *setupdata1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_device_setup_data_1_setup_data_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_SETUP_DATA_1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief BIU_CTL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00          DELAY_COUNT   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET 0x00004708


__INLINE static uint32_t usb_device_biu_ctl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_biu_ctl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_BIU_CTL_DELAY_COUNT_MASK                      ((uint32_t)0x00000003)
#define USB_DEVICE_BIU_CTL_DELAY_COUNT_LSB                       0
#define USB_DEVICE_BIU_CTL_DELAY_COUNT_WIDTH                     ((uint32_t)0x00000002)

#define USB_DEVICE_BIU_CTL_DELAY_COUNT_RST                       0x0

__INLINE static void usb_device_biu_ctl_pack(uint8_t delaycount)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)delaycount << 0));
}

__INLINE static void usb_device_biu_ctl_unpack(uint8_t* delaycount)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *delaycount = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t usb_device_biu_ctl_delay_count_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void usb_device_biu_ctl_delay_count_setf(uint8_t delaycount)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_BIU_CTL_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (uint32_t)delaycount << 0);
}

 /**
 * @brief ENDPOINT_NE_EP0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:19         max_pkt_size   0b0
 *  18:15     config_alternate   0b0
 *  14:11     config_interface   0b0
 *  10:07           config_num   0b0
 *  06:05              ep_type   0b0
 *     04               ep_dir   0
 *  03:00               ep_num   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET 0x00004804


__INLINE static uint32_t usb_device_endpoint_ne_ep0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_endpoint_ne_ep0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_ENDPOINT_NE_EP0_MAX_PKT_SIZE_MASK                     ((uint32_t)0x1FF80000)
#define USB_DEVICE_ENDPOINT_NE_EP0_MAX_PKT_SIZE_LSB                      19
#define USB_DEVICE_ENDPOINT_NE_EP0_MAX_PKT_SIZE_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_ALTERNATE_MASK                 ((uint32_t)0x00078000)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_ALTERNATE_LSB                  15
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_ALTERNATE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_INTERFACE_MASK                 ((uint32_t)0x00007800)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_INTERFACE_LSB                  11
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_INTERFACE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_NUM_MASK                       ((uint32_t)0x00000780)
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_NUM_LSB                        7
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_NUM_WIDTH                      ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_TYPE_MASK                          ((uint32_t)0x00000060)
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_TYPE_LSB                           5
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_TYPE_WIDTH                         ((uint32_t)0x00000002)
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_DIR_BIT                            ((uint32_t)0x00000010)
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_DIR_POS                            4
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_NUM_MASK                           ((uint32_t)0x0000000F)
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_NUM_LSB                            0
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_NUM_WIDTH                          ((uint32_t)0x00000004)

#define USB_DEVICE_ENDPOINT_NE_EP0_MAX_PKT_SIZE_RST                      0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_ALTERNATE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_INTERFACE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_CONFIG_NUM_RST                        0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_TYPE_RST                           0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_DIR_RST                            0x0
#define USB_DEVICE_ENDPOINT_NE_EP0_EP_NUM_RST                            0x0

__INLINE static void usb_device_endpoint_ne_ep0_pack(uint16_t maxpktsize, uint8_t configalternate, uint8_t configinterface, uint8_t confignum, uint8_t eptype, uint8_t epdir, uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)maxpktsize << 19) | ((uint32_t)configalternate << 15) | ((uint32_t)configinterface << 11) | ((uint32_t)confignum << 7) | ((uint32_t)eptype << 5) | ((uint32_t)epdir << 4) | ((uint32_t)epnum << 0));
}

__INLINE static void usb_device_endpoint_ne_ep0_unpack(uint8_t* maxpktsize, uint8_t* configalternate, uint8_t* configinterface, uint8_t* confignum, uint8_t* eptype, uint8_t* epdir, uint8_t* epnum)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *maxpktsize = (localVal & ((uint32_t)0x1FF80000)) >> 19;
    *configalternate = (localVal & ((uint32_t)0x00078000)) >> 15;
    *configinterface = (localVal & ((uint32_t)0x00007800)) >> 11;
    *confignum = (localVal & ((uint32_t)0x00000780)) >> 7;
    *eptype = (localVal & ((uint32_t)0x00000060)) >> 5;
    *epdir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *epnum = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_endpoint_ne_ep0_max_pkt_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF80000)) >> 19);
}

__INLINE static void usb_device_endpoint_ne_ep0_max_pkt_size_setf(uint16_t maxpktsize)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x1FF80000)) | ((uint32_t)maxpktsize << 19));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_config_alternate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00078000)) >> 15);
}

__INLINE static void usb_device_endpoint_ne_ep0_config_alternate_setf(uint8_t configalternate)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00078000)) | ((uint32_t)configalternate << 15));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_config_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void usb_device_endpoint_ne_ep0_config_interface_setf(uint8_t configinterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)configinterface << 11));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_config_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void usb_device_endpoint_ne_ep0_config_num_setf(uint8_t confignum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)confignum << 7));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_ep_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void usb_device_endpoint_ne_ep0_ep_type_setf(uint8_t eptype)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)eptype << 5));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_ep_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_endpoint_ne_ep0_ep_dir_setf(uint8_t epdir)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)epdir << 4));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep0_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void usb_device_endpoint_ne_ep0_ep_num_setf(uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP0_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)epnum << 0));
}

 /**
 * @brief ENDPOINT_NE_EP1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:19         max_pkt_size   0b0
 *  18:15     config_alternate   0b0
 *  14:11     config_interface   0b0
 *  10:07           config_num   0b0
 *  06:05              ep_type   0b0
 *     04               ep_dir   0
 *  03:00               ep_num   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET 0x00004808


__INLINE static uint32_t usb_device_endpoint_ne_ep1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_endpoint_ne_ep1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_ENDPOINT_NE_EP1_MAX_PKT_SIZE_MASK                     ((uint32_t)0x1FF80000)
#define USB_DEVICE_ENDPOINT_NE_EP1_MAX_PKT_SIZE_LSB                      19
#define USB_DEVICE_ENDPOINT_NE_EP1_MAX_PKT_SIZE_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_ALTERNATE_MASK                 ((uint32_t)0x00078000)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_ALTERNATE_LSB                  15
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_ALTERNATE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_INTERFACE_MASK                 ((uint32_t)0x00007800)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_INTERFACE_LSB                  11
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_INTERFACE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_NUM_MASK                       ((uint32_t)0x00000780)
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_NUM_LSB                        7
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_NUM_WIDTH                      ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_TYPE_MASK                          ((uint32_t)0x00000060)
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_TYPE_LSB                           5
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_TYPE_WIDTH                         ((uint32_t)0x00000002)
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_DIR_BIT                            ((uint32_t)0x00000010)
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_DIR_POS                            4
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_NUM_MASK                           ((uint32_t)0x0000000F)
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_NUM_LSB                            0
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_NUM_WIDTH                          ((uint32_t)0x00000004)

#define USB_DEVICE_ENDPOINT_NE_EP1_MAX_PKT_SIZE_RST                      0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_ALTERNATE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_INTERFACE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_CONFIG_NUM_RST                        0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_TYPE_RST                           0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_DIR_RST                            0x0
#define USB_DEVICE_ENDPOINT_NE_EP1_EP_NUM_RST                            0x0

__INLINE static void usb_device_endpoint_ne_ep1_pack(uint16_t maxpktsize, uint8_t configalternate, uint8_t configinterface, uint8_t confignum, uint8_t eptype, uint8_t epdir, uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)maxpktsize << 19) | ((uint32_t)configalternate << 15) | ((uint32_t)configinterface << 11) | ((uint32_t)confignum << 7) | ((uint32_t)eptype << 5) | ((uint32_t)epdir << 4) | ((uint32_t)epnum << 0));
}

__INLINE static void usb_device_endpoint_ne_ep1_unpack(uint8_t* maxpktsize, uint8_t* configalternate, uint8_t* configinterface, uint8_t* confignum, uint8_t* eptype, uint8_t* epdir, uint8_t* epnum)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *maxpktsize = (localVal & ((uint32_t)0x1FF80000)) >> 19;
    *configalternate = (localVal & ((uint32_t)0x00078000)) >> 15;
    *configinterface = (localVal & ((uint32_t)0x00007800)) >> 11;
    *confignum = (localVal & ((uint32_t)0x00000780)) >> 7;
    *eptype = (localVal & ((uint32_t)0x00000060)) >> 5;
    *epdir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *epnum = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_endpoint_ne_ep1_max_pkt_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF80000)) >> 19);
}

__INLINE static void usb_device_endpoint_ne_ep1_max_pkt_size_setf(uint16_t maxpktsize)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x1FF80000)) | ((uint32_t)maxpktsize << 19));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_config_alternate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00078000)) >> 15);
}

__INLINE static void usb_device_endpoint_ne_ep1_config_alternate_setf(uint8_t configalternate)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00078000)) | ((uint32_t)configalternate << 15));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_config_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void usb_device_endpoint_ne_ep1_config_interface_setf(uint8_t configinterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)configinterface << 11));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_config_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void usb_device_endpoint_ne_ep1_config_num_setf(uint8_t confignum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)confignum << 7));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_ep_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void usb_device_endpoint_ne_ep1_ep_type_setf(uint8_t eptype)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)eptype << 5));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_ep_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_endpoint_ne_ep1_ep_dir_setf(uint8_t epdir)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)epdir << 4));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep1_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void usb_device_endpoint_ne_ep1_ep_num_setf(uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP1_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)epnum << 0));
}

 /**
 * @brief ENDPOINT_NE_EP2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:19         max_pkt_size   0b0
 *  18:15     config_alternate   0b0
 *  14:11     config_interface   0b0
 *  10:07           config_num   0b0
 *  06:05              ep_type   0b0
 *     04               ep_dir   0
 *  03:00               ep_num   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET 0x0000480C


__INLINE static uint32_t usb_device_endpoint_ne_ep2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_endpoint_ne_ep2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_ENDPOINT_NE_EP2_MAX_PKT_SIZE_MASK                     ((uint32_t)0x1FF80000)
#define USB_DEVICE_ENDPOINT_NE_EP2_MAX_PKT_SIZE_LSB                      19
#define USB_DEVICE_ENDPOINT_NE_EP2_MAX_PKT_SIZE_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_ALTERNATE_MASK                 ((uint32_t)0x00078000)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_ALTERNATE_LSB                  15
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_ALTERNATE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_INTERFACE_MASK                 ((uint32_t)0x00007800)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_INTERFACE_LSB                  11
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_INTERFACE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_NUM_MASK                       ((uint32_t)0x00000780)
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_NUM_LSB                        7
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_NUM_WIDTH                      ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_TYPE_MASK                          ((uint32_t)0x00000060)
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_TYPE_LSB                           5
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_TYPE_WIDTH                         ((uint32_t)0x00000002)
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_DIR_BIT                            ((uint32_t)0x00000010)
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_DIR_POS                            4
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_NUM_MASK                           ((uint32_t)0x0000000F)
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_NUM_LSB                            0
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_NUM_WIDTH                          ((uint32_t)0x00000004)

#define USB_DEVICE_ENDPOINT_NE_EP2_MAX_PKT_SIZE_RST                      0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_ALTERNATE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_INTERFACE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_CONFIG_NUM_RST                        0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_TYPE_RST                           0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_DIR_RST                            0x0
#define USB_DEVICE_ENDPOINT_NE_EP2_EP_NUM_RST                            0x0

__INLINE static void usb_device_endpoint_ne_ep2_pack(uint16_t maxpktsize, uint8_t configalternate, uint8_t configinterface, uint8_t confignum, uint8_t eptype, uint8_t epdir, uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)maxpktsize << 19) | ((uint32_t)configalternate << 15) | ((uint32_t)configinterface << 11) | ((uint32_t)confignum << 7) | ((uint32_t)eptype << 5) | ((uint32_t)epdir << 4) | ((uint32_t)epnum << 0));
}

__INLINE static void usb_device_endpoint_ne_ep2_unpack(uint8_t* maxpktsize, uint8_t* configalternate, uint8_t* configinterface, uint8_t* confignum, uint8_t* eptype, uint8_t* epdir, uint8_t* epnum)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *maxpktsize = (localVal & ((uint32_t)0x1FF80000)) >> 19;
    *configalternate = (localVal & ((uint32_t)0x00078000)) >> 15;
    *configinterface = (localVal & ((uint32_t)0x00007800)) >> 11;
    *confignum = (localVal & ((uint32_t)0x00000780)) >> 7;
    *eptype = (localVal & ((uint32_t)0x00000060)) >> 5;
    *epdir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *epnum = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_endpoint_ne_ep2_max_pkt_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF80000)) >> 19);
}

__INLINE static void usb_device_endpoint_ne_ep2_max_pkt_size_setf(uint16_t maxpktsize)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x1FF80000)) | ((uint32_t)maxpktsize << 19));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_config_alternate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00078000)) >> 15);
}

__INLINE static void usb_device_endpoint_ne_ep2_config_alternate_setf(uint8_t configalternate)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00078000)) | ((uint32_t)configalternate << 15));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_config_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void usb_device_endpoint_ne_ep2_config_interface_setf(uint8_t configinterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)configinterface << 11));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_config_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void usb_device_endpoint_ne_ep2_config_num_setf(uint8_t confignum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)confignum << 7));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_ep_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void usb_device_endpoint_ne_ep2_ep_type_setf(uint8_t eptype)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)eptype << 5));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_ep_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_endpoint_ne_ep2_ep_dir_setf(uint8_t epdir)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)epdir << 4));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep2_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void usb_device_endpoint_ne_ep2_ep_num_setf(uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP2_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)epnum << 0));
}

 /**
 * @brief ENDPOINT_NE_EP3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:19         max_pkt_size   0b0
 *  18:15     config_alternate   0b0
 *  14:11     config_interface   0b0
 *  10:07           config_num   0b0
 *  06:05              ep_type   0b0
 *     04               ep_dir   0
 *  03:00               ep_num   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET 0x00004810


__INLINE static uint32_t usb_device_endpoint_ne_ep3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_endpoint_ne_ep3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_ENDPOINT_NE_EP3_MAX_PKT_SIZE_MASK                     ((uint32_t)0x1FF80000)
#define USB_DEVICE_ENDPOINT_NE_EP3_MAX_PKT_SIZE_LSB                      19
#define USB_DEVICE_ENDPOINT_NE_EP3_MAX_PKT_SIZE_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_ALTERNATE_MASK                 ((uint32_t)0x00078000)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_ALTERNATE_LSB                  15
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_ALTERNATE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_INTERFACE_MASK                 ((uint32_t)0x00007800)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_INTERFACE_LSB                  11
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_INTERFACE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_NUM_MASK                       ((uint32_t)0x00000780)
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_NUM_LSB                        7
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_NUM_WIDTH                      ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_TYPE_MASK                          ((uint32_t)0x00000060)
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_TYPE_LSB                           5
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_TYPE_WIDTH                         ((uint32_t)0x00000002)
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_DIR_BIT                            ((uint32_t)0x00000010)
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_DIR_POS                            4
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_NUM_MASK                           ((uint32_t)0x0000000F)
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_NUM_LSB                            0
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_NUM_WIDTH                          ((uint32_t)0x00000004)

#define USB_DEVICE_ENDPOINT_NE_EP3_MAX_PKT_SIZE_RST                      0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_ALTERNATE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_INTERFACE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_CONFIG_NUM_RST                        0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_TYPE_RST                           0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_DIR_RST                            0x0
#define USB_DEVICE_ENDPOINT_NE_EP3_EP_NUM_RST                            0x0

__INLINE static void usb_device_endpoint_ne_ep3_pack(uint16_t maxpktsize, uint8_t configalternate, uint8_t configinterface, uint8_t confignum, uint8_t eptype, uint8_t epdir, uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)maxpktsize << 19) | ((uint32_t)configalternate << 15) | ((uint32_t)configinterface << 11) | ((uint32_t)confignum << 7) | ((uint32_t)eptype << 5) | ((uint32_t)epdir << 4) | ((uint32_t)epnum << 0));
}

__INLINE static void usb_device_endpoint_ne_ep3_unpack(uint8_t* maxpktsize, uint8_t* configalternate, uint8_t* configinterface, uint8_t* confignum, uint8_t* eptype, uint8_t* epdir, uint8_t* epnum)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *maxpktsize = (localVal & ((uint32_t)0x1FF80000)) >> 19;
    *configalternate = (localVal & ((uint32_t)0x00078000)) >> 15;
    *configinterface = (localVal & ((uint32_t)0x00007800)) >> 11;
    *confignum = (localVal & ((uint32_t)0x00000780)) >> 7;
    *eptype = (localVal & ((uint32_t)0x00000060)) >> 5;
    *epdir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *epnum = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_endpoint_ne_ep3_max_pkt_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF80000)) >> 19);
}

__INLINE static void usb_device_endpoint_ne_ep3_max_pkt_size_setf(uint16_t maxpktsize)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x1FF80000)) | ((uint32_t)maxpktsize << 19));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_config_alternate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00078000)) >> 15);
}

__INLINE static void usb_device_endpoint_ne_ep3_config_alternate_setf(uint8_t configalternate)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00078000)) | ((uint32_t)configalternate << 15));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_config_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void usb_device_endpoint_ne_ep3_config_interface_setf(uint8_t configinterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)configinterface << 11));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_config_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void usb_device_endpoint_ne_ep3_config_num_setf(uint8_t confignum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)confignum << 7));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_ep_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void usb_device_endpoint_ne_ep3_ep_type_setf(uint8_t eptype)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)eptype << 5));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_ep_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_endpoint_ne_ep3_ep_dir_setf(uint8_t epdir)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)epdir << 4));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep3_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void usb_device_endpoint_ne_ep3_ep_num_setf(uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP3_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)epnum << 0));
}

 /**
 * @brief ENDPOINT_NE_EP4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:19         max_pkt_size   0b0
 *  18:15     config_alternate   0b0
 *  14:11     config_interface   0b0
 *  10:07           config_num   0b0
 *  06:05              ep_type   0b0
 *     04               ep_dir   0
 *  03:00               ep_num   0b0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET 0x00004814


__INLINE static uint32_t usb_device_endpoint_ne_ep4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_endpoint_ne_ep4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_ENDPOINT_NE_EP4_MAX_PKT_SIZE_MASK                     ((uint32_t)0x1FF80000)
#define USB_DEVICE_ENDPOINT_NE_EP4_MAX_PKT_SIZE_LSB                      19
#define USB_DEVICE_ENDPOINT_NE_EP4_MAX_PKT_SIZE_WIDTH                    ((uint32_t)0x0000000A)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_ALTERNATE_MASK                 ((uint32_t)0x00078000)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_ALTERNATE_LSB                  15
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_ALTERNATE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_INTERFACE_MASK                 ((uint32_t)0x00007800)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_INTERFACE_LSB                  11
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_INTERFACE_WIDTH                ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_NUM_MASK                       ((uint32_t)0x00000780)
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_NUM_LSB                        7
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_NUM_WIDTH                      ((uint32_t)0x00000004)
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_TYPE_MASK                          ((uint32_t)0x00000060)
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_TYPE_LSB                           5
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_TYPE_WIDTH                         ((uint32_t)0x00000002)
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_DIR_BIT                            ((uint32_t)0x00000010)
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_DIR_POS                            4
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_NUM_MASK                           ((uint32_t)0x0000000F)
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_NUM_LSB                            0
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_NUM_WIDTH                          ((uint32_t)0x00000004)

#define USB_DEVICE_ENDPOINT_NE_EP4_MAX_PKT_SIZE_RST                      0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_ALTERNATE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_INTERFACE_RST                  0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_CONFIG_NUM_RST                        0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_TYPE_RST                           0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_DIR_RST                            0x0
#define USB_DEVICE_ENDPOINT_NE_EP4_EP_NUM_RST                            0x0

__INLINE static void usb_device_endpoint_ne_ep4_pack(uint16_t maxpktsize, uint8_t configalternate, uint8_t configinterface, uint8_t confignum, uint8_t eptype, uint8_t epdir, uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)maxpktsize << 19) | ((uint32_t)configalternate << 15) | ((uint32_t)configinterface << 11) | ((uint32_t)confignum << 7) | ((uint32_t)eptype << 5) | ((uint32_t)epdir << 4) | ((uint32_t)epnum << 0));
}

__INLINE static void usb_device_endpoint_ne_ep4_unpack(uint8_t* maxpktsize, uint8_t* configalternate, uint8_t* configinterface, uint8_t* confignum, uint8_t* eptype, uint8_t* epdir, uint8_t* epnum)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *maxpktsize = (localVal & ((uint32_t)0x1FF80000)) >> 19;
    *configalternate = (localVal & ((uint32_t)0x00078000)) >> 15;
    *configinterface = (localVal & ((uint32_t)0x00007800)) >> 11;
    *confignum = (localVal & ((uint32_t)0x00000780)) >> 7;
    *eptype = (localVal & ((uint32_t)0x00000060)) >> 5;
    *epdir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *epnum = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint16_t usb_device_endpoint_ne_ep4_max_pkt_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF80000)) >> 19);
}

__INLINE static void usb_device_endpoint_ne_ep4_max_pkt_size_setf(uint16_t maxpktsize)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x1FF80000)) | ((uint32_t)maxpktsize << 19));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_config_alternate_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00078000)) >> 15);
}

__INLINE static void usb_device_endpoint_ne_ep4_config_alternate_setf(uint8_t configalternate)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00078000)) | ((uint32_t)configalternate << 15));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_config_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void usb_device_endpoint_ne_ep4_config_interface_setf(uint8_t configinterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)configinterface << 11));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_config_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void usb_device_endpoint_ne_ep4_config_num_setf(uint8_t confignum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)confignum << 7));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_ep_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void usb_device_endpoint_ne_ep4_ep_type_setf(uint8_t eptype)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)eptype << 5));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_ep_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void usb_device_endpoint_ne_ep4_ep_dir_setf(uint8_t epdir)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)epdir << 4));
}

__INLINE static uint8_t usb_device_endpoint_ne_ep4_ep_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void usb_device_endpoint_ne_ep4_ep_num_setf(uint8_t epnum)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_ENDPOINT_NE_EP4_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)epnum << 0));
}

 /**
 * @brief FS_OTG_CONTROL_AND_STATUS register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31        OTG_Interface   0
 *     21          HNP_Capable   0
 *     20          SRP_Capable   0
 *     19          HNP_Enabled   0
 *     18      Host_HNP_Enable   0
 *     17          HNP_Request   0
 *     16      Session_Request   0
 *     10                 Mode   0
 *     09     ID_Status_Change   0
 *     08   Connector_ID_Status   0
 *     07   Host_Negotiation_Detect_Status_Change   0
 *     06   Host_Negotiation_Detected   0
 *     05   Session_Request_Detected_Status_Change   0
 *     04   Session_Request_Detected   0
 *     03   Host_Negotiation_Success_Status_Change   0
 *     02   Host_Negotiation_Success   0
 *     01   Session_Request_Status_Change   0
 *     00   Session_Request_Success   0
 * </pre>
 */
#define FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET 0x00004894


__INLINE static uint32_t usb_device_fs_otg_control_and_status_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
}

__INLINE static void usb_device_fs_otg_control_and_status_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, value);
}

// field definitions
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OTG_INTERFACE_BIT                     ((uint32_t)0x80000000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OTG_INTERFACE_POS                     31
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_CAPABLE_BIT                       ((uint32_t)0x00200000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_CAPABLE_POS                       21
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SRP_CAPABLE_BIT                       ((uint32_t)0x00100000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SRP_CAPABLE_POS                       20
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_ENABLED_BIT                       ((uint32_t)0x00080000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_ENABLED_POS                       19
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_HNP_ENABLE_BIT                   ((uint32_t)0x00040000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_HNP_ENABLE_POS                   18
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_REQUEST_BIT                       ((uint32_t)0x00020000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_REQUEST_POS                       17
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_BIT                   ((uint32_t)0x00010000)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_POS                   16
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_MODE_BIT                              ((uint32_t)0x00000400)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_MODE_POS                              10
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_ID_STATUS_CHANGE_BIT                  ((uint32_t)0x00000200)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_ID_STATUS_CHANGE_POS                  9
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_CONNECTOR_ID_STATUS_BIT               ((uint32_t)0x00000100)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_CONNECTOR_ID_STATUS_POS               8
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECT_STATUS_CHANGE_BIT    ((uint32_t)0x00000080)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECT_STATUS_CHANGE_POS    7
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECTED_BIT         ((uint32_t)0x00000040)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECTED_POS         6
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_STATUS_CHANGE_BIT    ((uint32_t)0x00000020)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_STATUS_CHANGE_POS    5
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_BIT          ((uint32_t)0x00000010)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_POS          4
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_STATUS_CHANGE_BIT    ((uint32_t)0x00000008)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_STATUS_CHANGE_POS    3
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_BIT          ((uint32_t)0x00000004)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_POS          2
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_STATUS_CHANGE_BIT     ((uint32_t)0x00000002)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_STATUS_CHANGE_POS     1
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_SUCCESS_BIT           ((uint32_t)0x00000001)
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_SUCCESS_POS           0

#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OTG_INTERFACE_RST                     0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_CAPABLE_RST                       0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SRP_CAPABLE_RST                       0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_ENABLED_RST                       0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_HNP_ENABLE_RST                   0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HNP_REQUEST_RST                       0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_RST                   0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_MODE_RST                              0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_ID_STATUS_CHANGE_RST                  0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_CONNECTOR_ID_STATUS_RST               0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECT_STATUS_CHANGE_RST  0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_DETECTED_RST         0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_STATUS_CHANGE_RST  0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_DETECTED_RST          0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_STATUS_CHANGE_RST  0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_HOST_NEGOTIATION_SUCCESS_RST          0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_STATUS_CHANGE_RST     0x0
#define USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_SESSION_REQUEST_SUCCESS_RST           0x0

__INLINE static void usb_device_fs_otg_control_and_status_pack(uint8_t otginterface, uint8_t hnpcapable, uint8_t srpcapable, uint8_t hnpenabled, uint8_t hosthnpenable, uint8_t hnprequest, uint8_t sessionrequest, uint8_t idstatuschange, uint8_t hostnegotiationdetectstatuschange, uint8_t sessionrequestdetectedstatuschange, uint8_t hostnegotiationsuccessstatuschange, uint8_t sessionrequeststatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR,  ((uint32_t)otginterface << 31) | ((uint32_t)hnpcapable << 21) | ((uint32_t)srpcapable << 20) | ((uint32_t)hnpenabled << 19) | ((uint32_t)hosthnpenable << 18) | ((uint32_t)hnprequest << 17) | ((uint32_t)sessionrequest << 16) | ((uint32_t)idstatuschange << 9) | ((uint32_t)hostnegotiationdetectstatuschange << 7) | ((uint32_t)sessionrequestdetectedstatuschange << 5) | ((uint32_t)hostnegotiationsuccessstatuschange << 3) | ((uint32_t)sessionrequeststatuschange << 1));
}

__INLINE static void usb_device_fs_otg_control_and_status_unpack(uint8_t* otginterface, uint8_t* hnpcapable, uint8_t* srpcapable, uint8_t* hnpenabled, uint8_t* hosthnpenable, uint8_t* hnprequest, uint8_t* sessionrequest, uint8_t* mode, uint8_t* idstatuschange, uint8_t* connectoridstatus, uint8_t* hostnegotiationdetectstatuschange, uint8_t* hostnegotiationdetected, uint8_t* sessionrequestdetectedstatuschange, uint8_t* sessionrequestdetected, uint8_t* hostnegotiationsuccessstatuschange, uint8_t* hostnegotiationsuccess, uint8_t* sessionrequeststatuschange, uint8_t* sessionrequestsuccess)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);

    *otginterface = (localVal & ((uint32_t)0x80000000)) >> 31;
    *hnpcapable = (localVal & ((uint32_t)0x00200000)) >> 21;
    *srpcapable = (localVal & ((uint32_t)0x00100000)) >> 20;
    *hnpenabled = (localVal & ((uint32_t)0x00080000)) >> 19;
    *hosthnpenable = (localVal & ((uint32_t)0x00040000)) >> 18;
    *hnprequest = (localVal & ((uint32_t)0x00020000)) >> 17;
    *sessionrequest = (localVal & ((uint32_t)0x00010000)) >> 16;
    *mode = (localVal & ((uint32_t)0x00000400)) >> 10;
    *idstatuschange = (localVal & ((uint32_t)0x00000200)) >> 9;
    *connectoridstatus = (localVal & ((uint32_t)0x00000100)) >> 8;
    *hostnegotiationdetectstatuschange = (localVal & ((uint32_t)0x00000080)) >> 7;
    *hostnegotiationdetected = (localVal & ((uint32_t)0x00000040)) >> 6;
    *sessionrequestdetectedstatuschange = (localVal & ((uint32_t)0x00000020)) >> 5;
    *sessionrequestdetected = (localVal & ((uint32_t)0x00000010)) >> 4;
    *hostnegotiationsuccessstatuschange = (localVal & ((uint32_t)0x00000008)) >> 3;
    *hostnegotiationsuccess = (localVal & ((uint32_t)0x00000004)) >> 2;
    *sessionrequeststatuschange = (localVal & ((uint32_t)0x00000002)) >> 1;
    *sessionrequestsuccess = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_otg_interface_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void usb_device_fs_otg_control_and_status_otg_interface_setf(uint8_t otginterface)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)otginterface << 31));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_hnp_capable_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00200000)) >> 21);
}

__INLINE static void usb_device_fs_otg_control_and_status_hnp_capable_setf(uint8_t hnpcapable)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00200000)) | ((uint32_t)hnpcapable << 21));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_srp_capable_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void usb_device_fs_otg_control_and_status_srp_capable_setf(uint8_t srpcapable)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)srpcapable << 20));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_hnp_enabled_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void usb_device_fs_otg_control_and_status_hnp_enabled_setf(uint8_t hnpenabled)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)hnpenabled << 19));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_host_hnp_enable_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void usb_device_fs_otg_control_and_status_host_hnp_enable_setf(uint8_t hosthnpenable)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)hosthnpenable << 18));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_hnp_request_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void usb_device_fs_otg_control_and_status_hnp_request_setf(uint8_t hnprequest)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)hnprequest << 17));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_session_request_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void usb_device_fs_otg_control_and_status_session_request_setf(uint8_t sessionrequest)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)sessionrequest << 16));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_id_status_change_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void usb_device_fs_otg_control_and_status_id_status_change_setf(uint8_t idstatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)idstatuschange << 9));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_connector_id_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_host_negotiation_detect_status_change_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void usb_device_fs_otg_control_and_status_host_negotiation_detect_status_change_setf(uint8_t hostnegotiationdetectstatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)hostnegotiationdetectstatuschange << 7));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_host_negotiation_detected_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_session_request_detected_status_change_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void usb_device_fs_otg_control_and_status_session_request_detected_status_change_setf(uint8_t sessionrequestdetectedstatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)sessionrequestdetectedstatuschange << 5));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_session_request_detected_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_host_negotiation_success_status_change_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void usb_device_fs_otg_control_and_status_host_negotiation_success_status_change_setf(uint8_t hostnegotiationsuccessstatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)hostnegotiationsuccessstatuschange << 3));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_host_negotiation_success_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_session_request_status_change_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void usb_device_fs_otg_control_and_status_session_request_status_change_setf(uint8_t sessionrequeststatuschange)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET+ FEMTO_REG_USB_DEVICE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)sessionrequeststatuschange << 1));
}

__INLINE static uint8_t usb_device_fs_otg_control_and_status_session_request_success_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_DEVICE_FS_OTG_CONTROL_AND_STATUS_OFFSET + FEMTO_REG_USB_DEVICE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}


#endif // _FEMTO_REG_USB_DEVICE_H_

