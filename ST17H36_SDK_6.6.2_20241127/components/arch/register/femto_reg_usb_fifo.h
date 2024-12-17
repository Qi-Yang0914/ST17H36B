#ifndef _FEMTO_REG_USB_FIFO_H_
#define _FEMTO_REG_USB_FIFO_H_

#define FEMTO_REG_USB_FIFO_COUNT 6

#define FEMTO_REG_USB_FIFO_BASE_ADDR 0x14000000

#define FEMTO_REG_USB_FIFO_SIZE 0x00004000


 /**
 * @brief IN_TX_FIFO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        IN_EP_TX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET 0x00000000


__INLINE static uint32_t usb_fifo_in_tx_fifo_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_in_tx_fifo_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_IN_TX_FIFO_IN_EP_TX_FIFO_MASK                    ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_IN_TX_FIFO_IN_EP_TX_FIFO_LSB                     0
#define USB_FIFO_IN_TX_FIFO_IN_EP_TX_FIFO_WIDTH                   ((uint32_t)0x00000020)

#define USB_FIFO_IN_TX_FIFO_IN_EP_TX_FIFO_RST                     0x0

__INLINE static void usb_fifo_in_tx_fifo_pack(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)ineptxfifo << 0));
}

__INLINE static void usb_fifo_in_tx_fifo_unpack(uint8_t* ineptxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *ineptxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_in_tx_fifo_in_ep_tx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_in_tx_fifo_in_ep_tx_fifo_setf(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_TX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)ineptxfifo << 0);
}

 /**
 * @brief IN_EP_TX_FIFO_EP1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        IN_EP_TX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET 0x00000400


__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_IN_EP_TX_FIFO_EP1_IN_EP_TX_FIFO_MASK                    ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_IN_EP_TX_FIFO_EP1_IN_EP_TX_FIFO_LSB                     0
#define USB_FIFO_IN_EP_TX_FIFO_EP1_IN_EP_TX_FIFO_WIDTH                   ((uint32_t)0x00000020)

#define USB_FIFO_IN_EP_TX_FIFO_EP1_IN_EP_TX_FIFO_RST                     0x0

__INLINE static void usb_fifo_in_ep_tx_fifo_ep1_pack(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)ineptxfifo << 0));
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep1_unpack(uint8_t* ineptxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *ineptxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep1_in_ep_tx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep1_in_ep_tx_fifo_setf(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP1_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)ineptxfifo << 0);
}

 /**
 * @brief IN_EP_TX_FIFO_EP2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        IN_EP_TX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET 0x00000800


__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_IN_EP_TX_FIFO_EP2_IN_EP_TX_FIFO_MASK                    ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_IN_EP_TX_FIFO_EP2_IN_EP_TX_FIFO_LSB                     0
#define USB_FIFO_IN_EP_TX_FIFO_EP2_IN_EP_TX_FIFO_WIDTH                   ((uint32_t)0x00000020)

#define USB_FIFO_IN_EP_TX_FIFO_EP2_IN_EP_TX_FIFO_RST                     0x0

__INLINE static void usb_fifo_in_ep_tx_fifo_ep2_pack(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)ineptxfifo << 0));
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep2_unpack(uint8_t* ineptxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *ineptxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep2_in_ep_tx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep2_in_ep_tx_fifo_setf(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP2_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)ineptxfifo << 0);
}

 /**
 * @brief IN_EP_TX_FIFO_EP3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        IN_EP_TX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET 0x00000C00


__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_IN_EP_TX_FIFO_EP3_IN_EP_TX_FIFO_MASK                    ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_IN_EP_TX_FIFO_EP3_IN_EP_TX_FIFO_LSB                     0
#define USB_FIFO_IN_EP_TX_FIFO_EP3_IN_EP_TX_FIFO_WIDTH                   ((uint32_t)0x00000020)

#define USB_FIFO_IN_EP_TX_FIFO_EP3_IN_EP_TX_FIFO_RST                     0x0

__INLINE static void usb_fifo_in_ep_tx_fifo_ep3_pack(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)ineptxfifo << 0));
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep3_unpack(uint8_t* ineptxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *ineptxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep3_in_ep_tx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep3_in_ep_tx_fifo_setf(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP3_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)ineptxfifo << 0);
}

 /**
 * @brief IN_EP_TX_FIFO_EP4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        IN_EP_TX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET 0x00001000


__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_IN_EP_TX_FIFO_EP4_IN_EP_TX_FIFO_MASK                    ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_IN_EP_TX_FIFO_EP4_IN_EP_TX_FIFO_LSB                     0
#define USB_FIFO_IN_EP_TX_FIFO_EP4_IN_EP_TX_FIFO_WIDTH                   ((uint32_t)0x00000020)

#define USB_FIFO_IN_EP_TX_FIFO_EP4_IN_EP_TX_FIFO_RST                     0x0

__INLINE static void usb_fifo_in_ep_tx_fifo_ep4_pack(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)ineptxfifo << 0));
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep4_unpack(uint8_t* ineptxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *ineptxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_in_ep_tx_fifo_ep4_in_ep_tx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_in_ep_tx_fifo_ep4_in_ep_tx_fifo_setf(uint32_t ineptxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_IN_EP_TX_FIFO_EP4_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)ineptxfifo << 0);
}

 /**
 * @brief OUT_RX_FIFO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          OUT_RX_FIFO   0b0
 * </pre>
 */
#define FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET 0x00004000


__INLINE static uint32_t usb_fifo_out_rx_fifo_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
}

__INLINE static void usb_fifo_out_rx_fifo_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, value);
}

// field definitions
#define USB_FIFO_OUT_RX_FIFO_OUT_RX_FIFO_MASK                      ((uint32_t)0xFFFFFFFF)
#define USB_FIFO_OUT_RX_FIFO_OUT_RX_FIFO_LSB                       0
#define USB_FIFO_OUT_RX_FIFO_OUT_RX_FIFO_WIDTH                     ((uint32_t)0x00000020)

#define USB_FIFO_OUT_RX_FIFO_OUT_RX_FIFO_RST                       0x0

__INLINE static void usb_fifo_out_rx_fifo_pack(uint32_t outrxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR,  ((uint32_t)outrxfifo << 0));
}

__INLINE static void usb_fifo_out_rx_fifo_unpack(uint8_t* outrxfifo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);

    *outrxfifo = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t usb_fifo_out_rx_fifo_out_rx_fifo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET + FEMTO_REG_USB_FIFO_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void usb_fifo_out_rx_fifo_out_rx_fifo_setf(uint32_t outrxfifo)
{
    _FEMTO_REG_WR(FEMTO_REG_USB_FIFO_OUT_RX_FIFO_OFFSET+ FEMTO_REG_USB_FIFO_BASE_ADDR, (uint32_t)outrxfifo << 0);
}


#endif // _FEMTO_REG_USB_FIFO_H_

