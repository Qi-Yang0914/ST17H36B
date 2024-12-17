#ifndef _FEMTO_REG_UART0_H_
#define _FEMTO_REG_UART0_H_

#define FEMTO_REG_UART0_COUNT 34

#define FEMTO_REG_UART0_BASE_ADDR 0x40004000

#define FEMTO_REG_UART0_SIZE 0x000000FC


 /**
 * @brief RBR_RECEIVE_BUFFER_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Receive_Buffer_Register   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_RBR_RECEIVE_BUFFER_REGISTER_OFFSET 0x00000000


__INLINE static uint32_t uart0_rbr_receive_buffer_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_RBR_RECEIVE_BUFFER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_RBR_RECEIVE_BUFFER_REGISTER_RECEIVE_BUFFER_REGISTER_MASK          ((uint32_t)0x000000FF)
#define UART0_RBR_RECEIVE_BUFFER_REGISTER_RECEIVE_BUFFER_REGISTER_LSB           0
#define UART0_RBR_RECEIVE_BUFFER_REGISTER_RECEIVE_BUFFER_REGISTER_WIDTH         ((uint32_t)0x00000008)

#define UART0_RBR_RECEIVE_BUFFER_REGISTER_RECEIVE_BUFFER_REGISTER_RST           0x0

__INLINE static void uart0_rbr_receive_buffer_register_unpack(uint8_t* receivebufferregister)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_RBR_RECEIVE_BUFFER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *receivebufferregister = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_rbr_receive_buffer_register_receive_buffer_register_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_RBR_RECEIVE_BUFFER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

 /**
 * @brief THR_TRANSMIT_HOLDING_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Transmit_Holding_Register   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET 0x00000000


__INLINE static uint32_t uart0_thr_transmit_holding_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_thr_transmit_holding_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_THR_TRANSMIT_HOLDING_REGISTER_TRANSMIT_HOLDING_REGISTER_MASK        ((uint32_t)0x000000FF)
#define UART0_THR_TRANSMIT_HOLDING_REGISTER_TRANSMIT_HOLDING_REGISTER_LSB         0
#define UART0_THR_TRANSMIT_HOLDING_REGISTER_TRANSMIT_HOLDING_REGISTER_WIDTH       ((uint32_t)0x00000008)

#define UART0_THR_TRANSMIT_HOLDING_REGISTER_TRANSMIT_HOLDING_REGISTER_RST         0x0

__INLINE static void uart0_thr_transmit_holding_register_pack(uint8_t transmitholdingregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)transmitholdingregister << 0));
}

__INLINE static void uart0_thr_transmit_holding_register_transmit_holding_register_setf(uint8_t transmitholdingregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_THR_TRANSMIT_HOLDING_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)transmitholdingregister << 0);
}

 /**
 * @brief DLL_DIVISOR_LATCH_LOW register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00    Divisor_Latch_low   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET 0x00000000


__INLINE static uint32_t uart0_dll_divisor_latch_low_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_dll_divisor_latch_low_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_DLL_DIVISOR_LATCH_LOW_DIVISOR_LATCH_LOW_MASK                ((uint32_t)0x000000FF)
#define UART0_DLL_DIVISOR_LATCH_LOW_DIVISOR_LATCH_LOW_LSB                 0
#define UART0_DLL_DIVISOR_LATCH_LOW_DIVISOR_LATCH_LOW_WIDTH               ((uint32_t)0x00000008)

#define UART0_DLL_DIVISOR_LATCH_LOW_DIVISOR_LATCH_LOW_RST                 0x0

__INLINE static void uart0_dll_divisor_latch_low_pack(uint8_t divisorlatchlow)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)divisorlatchlow << 0));
}

__INLINE static void uart0_dll_divisor_latch_low_unpack(uint8_t* divisorlatchlow)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *divisorlatchlow = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_dll_divisor_latch_low_divisor_latch_low_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void uart0_dll_divisor_latch_low_divisor_latch_low_setf(uint8_t divisorlatchlow)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLL_DIVISOR_LATCH_LOW_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)divisorlatchlow << 0);
}

 /**
 * @brief DLH_DIVISOR_LATCH_HIGH register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Divisor_Latch_high   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET 0x00000004


__INLINE static uint32_t uart0_dlh_divisor_latch_high_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_dlh_divisor_latch_high_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_DLH_DIVISOR_LATCH_HIGH_DIVISOR_LATCH_HIGH_MASK               ((uint32_t)0x000000FF)
#define UART0_DLH_DIVISOR_LATCH_HIGH_DIVISOR_LATCH_HIGH_LSB                0
#define UART0_DLH_DIVISOR_LATCH_HIGH_DIVISOR_LATCH_HIGH_WIDTH              ((uint32_t)0x00000008)

#define UART0_DLH_DIVISOR_LATCH_HIGH_DIVISOR_LATCH_HIGH_RST                0x0

__INLINE static void uart0_dlh_divisor_latch_high_pack(uint8_t divisorlatchhigh)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)divisorlatchhigh << 0));
}

__INLINE static void uart0_dlh_divisor_latch_high_unpack(uint8_t* divisorlatchhigh)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *divisorlatchhigh = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_dlh_divisor_latch_high_divisor_latch_high_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void uart0_dlh_divisor_latch_high_divisor_latch_high_setf(uint8_t divisorlatchhigh)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DLH_DIVISOR_LATCH_HIGH_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)divisorlatchhigh << 0);
}

 /**
 * @brief IER_INTERRUPT_ENABLE_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     07                PTIME   0
 *     03                EDSSI   0
 *     02                 ELSI   0
 *     01                ETBEI   0
 *     00                ERBFI   0
 * </pre>
 */
#define FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET 0x00000004


__INLINE static uint32_t uart0_ier_interrupt_enable_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_ier_interrupt_enable_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_PTIME_BIT                             ((uint32_t)0x00000080)
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_PTIME_POS                             7
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_EDSSI_BIT                             ((uint32_t)0x00000008)
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_EDSSI_POS                             3
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ELSI_BIT                              ((uint32_t)0x00000004)
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ELSI_POS                              2
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ETBEI_BIT                             ((uint32_t)0x00000002)
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ETBEI_POS                             1
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ERBFI_BIT                             ((uint32_t)0x00000001)
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ERBFI_POS                             0

#define UART0_IER_INTERRUPT_ENABLE_REGISTER_PTIME_RST                             0x0
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_EDSSI_RST                             0x0
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ELSI_RST                              0x0
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ETBEI_RST                             0x0
#define UART0_IER_INTERRUPT_ENABLE_REGISTER_ERBFI_RST                             0x0

__INLINE static void uart0_ier_interrupt_enable_register_pack(uint8_t ptime, uint8_t edssi, uint8_t elsi, uint8_t etbei, uint8_t erbfi)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)ptime << 7) | ((uint32_t)edssi << 3) | ((uint32_t)elsi << 2) | ((uint32_t)etbei << 1) | ((uint32_t)erbfi << 0));
}

__INLINE static void uart0_ier_interrupt_enable_register_unpack(uint8_t* ptime, uint8_t* edssi, uint8_t* elsi, uint8_t* etbei, uint8_t* erbfi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *ptime = (localVal & ((uint32_t)0x00000080)) >> 7;
    *edssi = (localVal & ((uint32_t)0x00000008)) >> 3;
    *elsi = (localVal & ((uint32_t)0x00000004)) >> 2;
    *etbei = (localVal & ((uint32_t)0x00000002)) >> 1;
    *erbfi = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_ier_interrupt_enable_register_ptime_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void uart0_ier_interrupt_enable_register_ptime_setf(uint8_t ptime)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)ptime << 7));
}

__INLINE static uint8_t uart0_ier_interrupt_enable_register_edssi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void uart0_ier_interrupt_enable_register_edssi_setf(uint8_t edssi)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)edssi << 3));
}

__INLINE static uint8_t uart0_ier_interrupt_enable_register_elsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void uart0_ier_interrupt_enable_register_elsi_setf(uint8_t elsi)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)elsi << 2));
}

__INLINE static uint8_t uart0_ier_interrupt_enable_register_etbei_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void uart0_ier_interrupt_enable_register_etbei_setf(uint8_t etbei)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)etbei << 1));
}

__INLINE static uint8_t uart0_ier_interrupt_enable_register_erbfi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_ier_interrupt_enable_register_erbfi_setf(uint8_t erbfi)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_IER_INTERRUPT_ENABLE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)erbfi << 0));
}

 /**
 * @brief IIR_INTERRUPT_IDENTITY_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:06               FIFOSE   0b0
 *  03:00                  IID   0b1
 * </pre>
 */
#define FEMTO_REG_UART0_IIR_INTERRUPT_IDENTITY_REGISTER_OFFSET 0x00000008


__INLINE static uint32_t uart0_iir_interrupt_identity_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_IIR_INTERRUPT_IDENTITY_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_FIFOSE_MASK                           ((uint32_t)0x000000C0)
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_FIFOSE_LSB                            6
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_FIFOSE_WIDTH                          ((uint32_t)0x00000002)
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_IID_MASK                              ((uint32_t)0x0000000F)
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_IID_LSB                               0
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_IID_WIDTH                             ((uint32_t)0x00000004)

#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_FIFOSE_RST                            0x0
#define UART0_IIR_INTERRUPT_IDENTITY_REGISTER_IID_RST                               0x1

__INLINE static void uart0_iir_interrupt_identity_register_unpack(uint8_t* fifose, uint8_t* iid)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IIR_INTERRUPT_IDENTITY_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *fifose = (localVal & ((uint32_t)0x000000C0)) >> 6;
    *iid = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t uart0_iir_interrupt_identity_register_fifose_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IIR_INTERRUPT_IDENTITY_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000C0)) >> 6);
}

__INLINE static uint8_t uart0_iir_interrupt_identity_register_iid_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_IIR_INTERRUPT_IDENTITY_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief FCR_FIFO_CONTROL_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:06                   RT   0b0
 *  05:04                  TET   0b0
 *     03                 DMAM   0
 *     02               XFIFOR   0
 *     01               RFIFOR   0
 *     00                FIFOE   0
 * </pre>
 */
#define FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET 0x00000008


__INLINE static uint32_t uart0_fcr_fifo_control_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_fcr_fifo_control_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_FCR_FIFO_CONTROL_REGISTER_RT_MASK                               ((uint32_t)0x000000C0)
#define UART0_FCR_FIFO_CONTROL_REGISTER_RT_LSB                                6
#define UART0_FCR_FIFO_CONTROL_REGISTER_RT_WIDTH                              ((uint32_t)0x00000002)
#define UART0_FCR_FIFO_CONTROL_REGISTER_TET_MASK                              ((uint32_t)0x00000030)
#define UART0_FCR_FIFO_CONTROL_REGISTER_TET_LSB                               4
#define UART0_FCR_FIFO_CONTROL_REGISTER_TET_WIDTH                             ((uint32_t)0x00000002)
#define UART0_FCR_FIFO_CONTROL_REGISTER_DMAM_BIT                              ((uint32_t)0x00000008)
#define UART0_FCR_FIFO_CONTROL_REGISTER_DMAM_POS                              3
#define UART0_FCR_FIFO_CONTROL_REGISTER_XFIFOR_BIT                            ((uint32_t)0x00000004)
#define UART0_FCR_FIFO_CONTROL_REGISTER_XFIFOR_POS                            2
#define UART0_FCR_FIFO_CONTROL_REGISTER_RFIFOR_BIT                            ((uint32_t)0x00000002)
#define UART0_FCR_FIFO_CONTROL_REGISTER_RFIFOR_POS                            1
#define UART0_FCR_FIFO_CONTROL_REGISTER_FIFOE_BIT                             ((uint32_t)0x00000001)
#define UART0_FCR_FIFO_CONTROL_REGISTER_FIFOE_POS                             0

#define UART0_FCR_FIFO_CONTROL_REGISTER_RT_RST                                0x0
#define UART0_FCR_FIFO_CONTROL_REGISTER_TET_RST                               0x0
#define UART0_FCR_FIFO_CONTROL_REGISTER_DMAM_RST                              0x0
#define UART0_FCR_FIFO_CONTROL_REGISTER_XFIFOR_RST                            0x0
#define UART0_FCR_FIFO_CONTROL_REGISTER_RFIFOR_RST                            0x0
#define UART0_FCR_FIFO_CONTROL_REGISTER_FIFOE_RST                             0x0

__INLINE static void uart0_fcr_fifo_control_register_pack(uint8_t rt, uint8_t tet, uint8_t dmam, uint8_t xfifor, uint8_t rfifor, uint8_t fifoe)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)rt << 6) | ((uint32_t)tet << 4) | ((uint32_t)dmam << 3) | ((uint32_t)xfifor << 2) | ((uint32_t)rfifor << 1) | ((uint32_t)fifoe << 0));
}

__INLINE static void uart0_fcr_fifo_control_register_rt_setf(uint8_t rt)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x000000C0)) | ((uint32_t)rt << 6));
}

__INLINE static void uart0_fcr_fifo_control_register_tet_setf(uint8_t tet)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000030)) | ((uint32_t)tet << 4));
}

__INLINE static void uart0_fcr_fifo_control_register_dmam_setf(uint8_t dmam)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)dmam << 3));
}

__INLINE static void uart0_fcr_fifo_control_register_xfifor_setf(uint8_t xfifor)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)xfifor << 2));
}

__INLINE static void uart0_fcr_fifo_control_register_rfifor_setf(uint8_t rfifor)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rfifor << 1));
}

__INLINE static void uart0_fcr_fifo_control_register_fifoe_setf(uint8_t fifoe)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_FCR_FIFO_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fifoe << 0));
}

 /**
 * @brief LCR_LINE_CONTROL_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     07                 DLAB   0
 *     06           Break_COND   0
 *     04                  EPS   0
 *     03                  PEN   0
 *     02                 STOP   0
 *  01:00                  DLS   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET 0x0000000C


__INLINE static uint32_t uart0_lcr_line_control_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_lcr_line_control_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_LCR_LINE_CONTROL_REGISTER_DLAB_BIT                              ((uint32_t)0x00000080)
#define UART0_LCR_LINE_CONTROL_REGISTER_DLAB_POS                              7
#define UART0_LCR_LINE_CONTROL_REGISTER_BREAK_COND_BIT                        ((uint32_t)0x00000040)
#define UART0_LCR_LINE_CONTROL_REGISTER_BREAK_COND_POS                        6
#define UART0_LCR_LINE_CONTROL_REGISTER_EPS_BIT                               ((uint32_t)0x00000010)
#define UART0_LCR_LINE_CONTROL_REGISTER_EPS_POS                               4
#define UART0_LCR_LINE_CONTROL_REGISTER_PEN_BIT                               ((uint32_t)0x00000008)
#define UART0_LCR_LINE_CONTROL_REGISTER_PEN_POS                               3
#define UART0_LCR_LINE_CONTROL_REGISTER_STOP_BIT                              ((uint32_t)0x00000004)
#define UART0_LCR_LINE_CONTROL_REGISTER_STOP_POS                              2
#define UART0_LCR_LINE_CONTROL_REGISTER_DLS_MASK                              ((uint32_t)0x00000003)
#define UART0_LCR_LINE_CONTROL_REGISTER_DLS_LSB                               0
#define UART0_LCR_LINE_CONTROL_REGISTER_DLS_WIDTH                             ((uint32_t)0x00000002)

#define UART0_LCR_LINE_CONTROL_REGISTER_DLAB_RST                              0x0
#define UART0_LCR_LINE_CONTROL_REGISTER_BREAK_COND_RST                        0x0
#define UART0_LCR_LINE_CONTROL_REGISTER_EPS_RST                               0x0
#define UART0_LCR_LINE_CONTROL_REGISTER_PEN_RST                               0x0
#define UART0_LCR_LINE_CONTROL_REGISTER_STOP_RST                              0x0
#define UART0_LCR_LINE_CONTROL_REGISTER_DLS_RST                               0x0

__INLINE static void uart0_lcr_line_control_register_pack(uint8_t dlab, uint8_t breakcond, uint8_t eps, uint8_t pen, uint8_t stop, uint8_t dls)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)dlab << 7) | ((uint32_t)breakcond << 6) | ((uint32_t)eps << 4) | ((uint32_t)pen << 3) | ((uint32_t)stop << 2) | ((uint32_t)dls << 0));
}

__INLINE static void uart0_lcr_line_control_register_unpack(uint8_t* dlab, uint8_t* breakcond, uint8_t* eps, uint8_t* pen, uint8_t* stop, uint8_t* dls)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *dlab = (localVal & ((uint32_t)0x00000080)) >> 7;
    *breakcond = (localVal & ((uint32_t)0x00000040)) >> 6;
    *eps = (localVal & ((uint32_t)0x00000010)) >> 4;
    *pen = (localVal & ((uint32_t)0x00000008)) >> 3;
    *stop = (localVal & ((uint32_t)0x00000004)) >> 2;
    *dls = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t uart0_lcr_line_control_register_dlab_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void uart0_lcr_line_control_register_dlab_setf(uint8_t dlab)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)dlab << 7));
}

__INLINE static uint8_t uart0_lcr_line_control_register_break_cond_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void uart0_lcr_line_control_register_break_cond_setf(uint8_t breakcond)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)breakcond << 6));
}

__INLINE static uint8_t uart0_lcr_line_control_register_eps_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void uart0_lcr_line_control_register_eps_setf(uint8_t eps)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)eps << 4));
}

__INLINE static uint8_t uart0_lcr_line_control_register_pen_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void uart0_lcr_line_control_register_pen_setf(uint8_t pen)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)pen << 3));
}

__INLINE static uint8_t uart0_lcr_line_control_register_stop_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void uart0_lcr_line_control_register_stop_setf(uint8_t stop)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)stop << 2));
}

__INLINE static uint8_t uart0_lcr_line_control_register_dls_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void uart0_lcr_line_control_register_dls_setf(uint8_t dls)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_LCR_LINE_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)dls << 0));
}

 /**
 * @brief MCR_MODEM_CONTROL_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06                 SIRE   0
 *     05                 AFCE   0
 *     04             LoopBack   0
 *     03                 OUT2   0
 *     02                 OUT1   0
 *     01                  RTS   0
 *     00                  DTR   0
 * </pre>
 */
#define FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET 0x00000010


__INLINE static uint32_t uart0_mcr_modem_control_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_mcr_modem_control_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_MCR_MODEM_CONTROL_REGISTER_SIRE_BIT                              ((uint32_t)0x00000040)
#define UART0_MCR_MODEM_CONTROL_REGISTER_SIRE_POS                              6
#define UART0_MCR_MODEM_CONTROL_REGISTER_AFCE_BIT                              ((uint32_t)0x00000020)
#define UART0_MCR_MODEM_CONTROL_REGISTER_AFCE_POS                              5
#define UART0_MCR_MODEM_CONTROL_REGISTER_LOOP_BACK_BIT                         ((uint32_t)0x00000010)
#define UART0_MCR_MODEM_CONTROL_REGISTER_LOOP_BACK_POS                         4
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT2_BIT                              ((uint32_t)0x00000008)
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT2_POS                              3
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT1_BIT                              ((uint32_t)0x00000004)
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT1_POS                              2
#define UART0_MCR_MODEM_CONTROL_REGISTER_RTS_BIT                               ((uint32_t)0x00000002)
#define UART0_MCR_MODEM_CONTROL_REGISTER_RTS_POS                               1
#define UART0_MCR_MODEM_CONTROL_REGISTER_DTR_BIT                               ((uint32_t)0x00000001)
#define UART0_MCR_MODEM_CONTROL_REGISTER_DTR_POS                               0

#define UART0_MCR_MODEM_CONTROL_REGISTER_SIRE_RST                              0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_AFCE_RST                              0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_LOOP_BACK_RST                         0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT2_RST                              0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_OUT1_RST                              0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_RTS_RST                               0x0
#define UART0_MCR_MODEM_CONTROL_REGISTER_DTR_RST                               0x0

__INLINE static void uart0_mcr_modem_control_register_pack(uint8_t sire, uint8_t afce, uint8_t loopback, uint8_t out2, uint8_t out1, uint8_t rts, uint8_t dtr)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)sire << 6) | ((uint32_t)afce << 5) | ((uint32_t)loopback << 4) | ((uint32_t)out2 << 3) | ((uint32_t)out1 << 2) | ((uint32_t)rts << 1) | ((uint32_t)dtr << 0));
}

__INLINE static void uart0_mcr_modem_control_register_unpack(uint8_t* sire, uint8_t* afce, uint8_t* loopback, uint8_t* out2, uint8_t* out1, uint8_t* rts, uint8_t* dtr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *sire = (localVal & ((uint32_t)0x00000040)) >> 6;
    *afce = (localVal & ((uint32_t)0x00000020)) >> 5;
    *loopback = (localVal & ((uint32_t)0x00000010)) >> 4;
    *out2 = (localVal & ((uint32_t)0x00000008)) >> 3;
    *out1 = (localVal & ((uint32_t)0x00000004)) >> 2;
    *rts = (localVal & ((uint32_t)0x00000002)) >> 1;
    *dtr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_mcr_modem_control_register_sire_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void uart0_mcr_modem_control_register_sire_setf(uint8_t sire)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)sire << 6));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_afce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void uart0_mcr_modem_control_register_afce_setf(uint8_t afce)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)afce << 5));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_loop_back_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void uart0_mcr_modem_control_register_loop_back_setf(uint8_t loopback)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)loopback << 4));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_out2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void uart0_mcr_modem_control_register_out2_setf(uint8_t out2)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)out2 << 3));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_out1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void uart0_mcr_modem_control_register_out1_setf(uint8_t out1)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)out1 << 2));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_rts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void uart0_mcr_modem_control_register_rts_setf(uint8_t rts)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rts << 1));
}

__INLINE static uint8_t uart0_mcr_modem_control_register_dtr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_mcr_modem_control_register_dtr_setf(uint8_t dtr)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_MCR_MODEM_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)dtr << 0));
}

 /**
 * @brief LSR_LINE_STATUS_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     07                  RFE   0
 *     06                 TEMT   1
 *     05                 THRE   1
 *     04                   BI   0
 *     03                   FE   0
 *     02                   PE   0
 *     01                   OE   0
 *     00                   DR   0
 * </pre>
 */
#define FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET 0x00000014


__INLINE static uint32_t uart0_lsr_line_status_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_LSR_LINE_STATUS_REGISTER_RFE_BIT                               ((uint32_t)0x00000080)
#define UART0_LSR_LINE_STATUS_REGISTER_RFE_POS                               7
#define UART0_LSR_LINE_STATUS_REGISTER_TEMT_BIT                              ((uint32_t)0x00000040)
#define UART0_LSR_LINE_STATUS_REGISTER_TEMT_POS                              6
#define UART0_LSR_LINE_STATUS_REGISTER_THRE_BIT                              ((uint32_t)0x00000020)
#define UART0_LSR_LINE_STATUS_REGISTER_THRE_POS                              5
#define UART0_LSR_LINE_STATUS_REGISTER_BI_BIT                                ((uint32_t)0x00000010)
#define UART0_LSR_LINE_STATUS_REGISTER_BI_POS                                4
#define UART0_LSR_LINE_STATUS_REGISTER_FE_BIT                                ((uint32_t)0x00000008)
#define UART0_LSR_LINE_STATUS_REGISTER_FE_POS                                3
#define UART0_LSR_LINE_STATUS_REGISTER_PE_BIT                                ((uint32_t)0x00000004)
#define UART0_LSR_LINE_STATUS_REGISTER_PE_POS                                2
#define UART0_LSR_LINE_STATUS_REGISTER_OE_BIT                                ((uint32_t)0x00000002)
#define UART0_LSR_LINE_STATUS_REGISTER_OE_POS                                1
#define UART0_LSR_LINE_STATUS_REGISTER_DR_BIT                                ((uint32_t)0x00000001)
#define UART0_LSR_LINE_STATUS_REGISTER_DR_POS                                0

#define UART0_LSR_LINE_STATUS_REGISTER_RFE_RST                               0x0
#define UART0_LSR_LINE_STATUS_REGISTER_TEMT_RST                              0x1
#define UART0_LSR_LINE_STATUS_REGISTER_THRE_RST                              0x1
#define UART0_LSR_LINE_STATUS_REGISTER_BI_RST                                0x0
#define UART0_LSR_LINE_STATUS_REGISTER_FE_RST                                0x0
#define UART0_LSR_LINE_STATUS_REGISTER_PE_RST                                0x0
#define UART0_LSR_LINE_STATUS_REGISTER_OE_RST                                0x0
#define UART0_LSR_LINE_STATUS_REGISTER_DR_RST                                0x0

__INLINE static void uart0_lsr_line_status_register_unpack(uint8_t* rfe, uint8_t* temt, uint8_t* thre, uint8_t* bi, uint8_t* fe, uint8_t* pe, uint8_t* oe, uint8_t* dr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *rfe = (localVal & ((uint32_t)0x00000080)) >> 7;
    *temt = (localVal & ((uint32_t)0x00000040)) >> 6;
    *thre = (localVal & ((uint32_t)0x00000020)) >> 5;
    *bi = (localVal & ((uint32_t)0x00000010)) >> 4;
    *fe = (localVal & ((uint32_t)0x00000008)) >> 3;
    *pe = (localVal & ((uint32_t)0x00000004)) >> 2;
    *oe = (localVal & ((uint32_t)0x00000002)) >> 1;
    *dr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_lsr_line_status_register_rfe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t uart0_lsr_line_status_register_temt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t uart0_lsr_line_status_register_thre_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static uint8_t uart0_lsr_line_status_register_bi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t uart0_lsr_line_status_register_fe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static uint8_t uart0_lsr_line_status_register_pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t uart0_lsr_line_status_register_oe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t uart0_lsr_line_status_register_dr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LSR_LINE_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief MSR_MODEM_STATUS_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     07                  DCD   0
 *     06                   RI   0
 *     05                  DSR   0
 *     04                  CTS   0
 *     03                 DDCD   0
 *     02                 TERI   0
 *     01                 DDSR   0
 *     00                 DCTS   0
 * </pre>
 */
#define FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET 0x00000018


__INLINE static uint32_t uart0_msr_modem_status_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_MSR_MODEM_STATUS_REGISTER_DCD_BIT                               ((uint32_t)0x00000080)
#define UART0_MSR_MODEM_STATUS_REGISTER_DCD_POS                               7
#define UART0_MSR_MODEM_STATUS_REGISTER_RI_BIT                                ((uint32_t)0x00000040)
#define UART0_MSR_MODEM_STATUS_REGISTER_RI_POS                                6
#define UART0_MSR_MODEM_STATUS_REGISTER_DSR_BIT                               ((uint32_t)0x00000020)
#define UART0_MSR_MODEM_STATUS_REGISTER_DSR_POS                               5
#define UART0_MSR_MODEM_STATUS_REGISTER_CTS_BIT                               ((uint32_t)0x00000010)
#define UART0_MSR_MODEM_STATUS_REGISTER_CTS_POS                               4
#define UART0_MSR_MODEM_STATUS_REGISTER_DDCD_BIT                              ((uint32_t)0x00000008)
#define UART0_MSR_MODEM_STATUS_REGISTER_DDCD_POS                              3
#define UART0_MSR_MODEM_STATUS_REGISTER_TERI_BIT                              ((uint32_t)0x00000004)
#define UART0_MSR_MODEM_STATUS_REGISTER_TERI_POS                              2
#define UART0_MSR_MODEM_STATUS_REGISTER_DDSR_BIT                              ((uint32_t)0x00000002)
#define UART0_MSR_MODEM_STATUS_REGISTER_DDSR_POS                              1
#define UART0_MSR_MODEM_STATUS_REGISTER_DCTS_BIT                              ((uint32_t)0x00000001)
#define UART0_MSR_MODEM_STATUS_REGISTER_DCTS_POS                              0

#define UART0_MSR_MODEM_STATUS_REGISTER_DCD_RST                               0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_RI_RST                                0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_DSR_RST                               0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_CTS_RST                               0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_DDCD_RST                              0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_TERI_RST                              0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_DDSR_RST                              0x0
#define UART0_MSR_MODEM_STATUS_REGISTER_DCTS_RST                              0x0

__INLINE static void uart0_msr_modem_status_register_unpack(uint8_t* dcd, uint8_t* ri, uint8_t* dsr, uint8_t* cts, uint8_t* ddcd, uint8_t* teri, uint8_t* ddsr, uint8_t* dcts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *dcd = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ri = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsr = (localVal & ((uint32_t)0x00000020)) >> 5;
    *cts = (localVal & ((uint32_t)0x00000010)) >> 4;
    *ddcd = (localVal & ((uint32_t)0x00000008)) >> 3;
    *teri = (localVal & ((uint32_t)0x00000004)) >> 2;
    *ddsr = (localVal & ((uint32_t)0x00000002)) >> 1;
    *dcts = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_msr_modem_status_register_dcd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t uart0_msr_modem_status_register_ri_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t uart0_msr_modem_status_register_dsr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static uint8_t uart0_msr_modem_status_register_cts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t uart0_msr_modem_status_register_ddcd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static uint8_t uart0_msr_modem_status_register_teri_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t uart0_msr_modem_status_register_ddsr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t uart0_msr_modem_status_register_dcts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_MSR_MODEM_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief SCR_SCRATCHPAD_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Scratchpad_Register   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET 0x0000001C


__INLINE static uint32_t uart0_scr_scratchpad_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_scr_scratchpad_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SCR_SCRATCHPAD_REGISTER_SCRATCHPAD_REGISTER_MASK              ((uint32_t)0x000000FF)
#define UART0_SCR_SCRATCHPAD_REGISTER_SCRATCHPAD_REGISTER_LSB               0
#define UART0_SCR_SCRATCHPAD_REGISTER_SCRATCHPAD_REGISTER_WIDTH             ((uint32_t)0x00000008)

#define UART0_SCR_SCRATCHPAD_REGISTER_SCRATCHPAD_REGISTER_RST               0x0

__INLINE static void uart0_scr_scratchpad_register_pack(uint8_t scratchpadregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)scratchpadregister << 0));
}

__INLINE static void uart0_scr_scratchpad_register_unpack(uint8_t* scratchpadregister)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *scratchpadregister = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_scr_scratchpad_register_scratchpad_register_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void uart0_scr_scratchpad_register_scratchpad_register_setf(uint8_t scratchpadregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SCR_SCRATCHPAD_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)scratchpadregister << 0);
}

 /**
 * @brief LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00                LPDLL   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET 0x00000020


__INLINE static uint32_t uart0_lpdll_low_power_divisor_latch_low_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_lpdll_low_power_divisor_latch_low_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_LPDLL_MASK                            ((uint32_t)0x000000FF)
#define UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_LPDLL_LSB                             0
#define UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_LPDLL_WIDTH                           ((uint32_t)0x00000008)

#define UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_LPDLL_RST                             0x0

__INLINE static void uart0_lpdll_low_power_divisor_latch_low_register_pack(uint8_t lpdll)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)lpdll << 0));
}

__INLINE static void uart0_lpdll_low_power_divisor_latch_low_register_unpack(uint8_t* lpdll)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *lpdll = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_lpdll_low_power_divisor_latch_low_register_lpdll_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void uart0_lpdll_low_power_divisor_latch_low_register_lpdll_setf(uint8_t lpdll)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLL_LOW_POWER_DIVISOR_LATCH_LOW_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)lpdll << 0);
}

 /**
 * @brief LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00                LPDLH   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET 0x00000024


__INLINE static uint32_t uart0_lpdlh_low_power_divisor_latch_high_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_lpdlh_low_power_divisor_latch_high_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_LPDLH_MASK                            ((uint32_t)0x000000FF)
#define UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_LPDLH_LSB                             0
#define UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_LPDLH_WIDTH                           ((uint32_t)0x00000008)

#define UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_LPDLH_RST                             0x0

__INLINE static void uart0_lpdlh_low_power_divisor_latch_high_register_pack(uint8_t lpdlh)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)lpdlh << 0));
}

__INLINE static void uart0_lpdlh_low_power_divisor_latch_high_register_unpack(uint8_t* lpdlh)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *lpdlh = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_lpdlh_low_power_divisor_latch_high_register_lpdlh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void uart0_lpdlh_low_power_divisor_latch_high_register_lpdlh_setf(uint8_t lpdlh)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_LPDLH_LOW_POWER_DIVISOR_LATCH_HIGH_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)lpdlh << 0);
}

 /**
 * @brief SRBR_SHADOW_RECEIVE_BUFFER_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Shadow_Receive_Buffer_Register   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_ADDR(n) 0x00000030+ n*4
#define FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_OFFSET(n) FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_ADDR(n)


__INLINE static uint32_t uart0_srbr_shadow_receive_buffer_register_get(int n)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_OFFSET(n) + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_SHADOW_RECEIVE_BUFFER_REGISTER_MASK   ((uint32_t)0x000000FF)
#define UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_SHADOW_RECEIVE_BUFFER_REGISTER_LSB    0
#define UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_SHADOW_RECEIVE_BUFFER_REGISTER_WIDTH  ((uint32_t)0x00000008)

#define UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_SHADOW_RECEIVE_BUFFER_REGISTER_RST    0x0

__INLINE static void uart0_srbr_shadow_receive_buffer_register_unpack(int n, uint8_t* shadowreceivebufferregister)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_OFFSET(n) + FEMTO_REG_UART0_BASE_ADDR);

    *shadowreceivebufferregister = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_srbr_shadow_receive_buffer_register_shadow_receive_buffer_register_getf(int n)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRBR_SHADOW_RECEIVE_BUFFER_REGISTER_OFFSET(n) + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

 /**
 * @brief STHR_SHADOW_TRANSMIT_HOLDING_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Shadow_Transmit_Holding_Register   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_ADDR(n) 0x00000030+ n*4
#define FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_OFFSET(n) FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_ADDR(n)


__INLINE static uint32_t uart0_sthr_shadow_transmit_holding_register_get(int n)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_OFFSET(n) + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_sthr_shadow_transmit_holding_register_set(uint32_t value, int n)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_OFFSET(n)+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_SHADOW_TRANSMIT_HOLDING_REGISTER_MASK   ((uint32_t)0x000000FF)
#define UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_SHADOW_TRANSMIT_HOLDING_REGISTER_LSB    0
#define UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_SHADOW_TRANSMIT_HOLDING_REGISTER_WIDTH  ((uint32_t)0x00000008)

#define UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_SHADOW_TRANSMIT_HOLDING_REGISTER_RST  0x0

__INLINE static void uart0_sthr_shadow_transmit_holding_register_pack(int n, uint8_t shadowtransmitholdingregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_OFFSET(n)+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowtransmitholdingregister << 0));
}

__INLINE static void uart0_sthr_shadow_transmit_holding_register_shadow_transmit_holding_register_setf(uint8_t shadowtransmitholdingregister, int n)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STHR_SHADOW_TRANSMIT_HOLDING_REGISTER_OFFSET(n)+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowtransmitholdingregister << 0);
}

 /**
 * @brief FAR_FIFO_ACCESS_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   FIFO_Access_Register   0
 * </pre>
 */
#define FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET 0x00000070


__INLINE static uint32_t uart0_far_fifo_access_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_far_fifo_access_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_FAR_FIFO_ACCESS_REGISTER_FIFO_ACCESS_REGISTER_BIT              ((uint32_t)0x00000001)
#define UART0_FAR_FIFO_ACCESS_REGISTER_FIFO_ACCESS_REGISTER_POS              0

#define UART0_FAR_FIFO_ACCESS_REGISTER_FIFO_ACCESS_REGISTER_RST              0x0

__INLINE static void uart0_far_fifo_access_register_pack(uint8_t fifoaccessregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)fifoaccessregister << 0));
}

__INLINE static void uart0_far_fifo_access_register_unpack(uint8_t* fifoaccessregister)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *fifoaccessregister = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_far_fifo_access_register_fifo_access_register_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_far_fifo_access_register_fifo_access_register_setf(uint8_t fifoaccessregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_FAR_FIFO_ACCESS_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)fifoaccessregister << 0);
}

 /**
 * @brief TFR_TRANSMIT_FIFO_READ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00   Transmit_FIFO_Read   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_TFR_TRANSMIT_FIFO_READ_OFFSET 0x00000074


__INLINE static uint32_t uart0_tfr_transmit_fifo_read_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_TFR_TRANSMIT_FIFO_READ_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_TFR_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_MASK               ((uint32_t)0x000000FF)
#define UART0_TFR_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_LSB                0
#define UART0_TFR_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_WIDTH              ((uint32_t)0x00000008)

#define UART0_TFR_TRANSMIT_FIFO_READ_TRANSMIT_FIFO_READ_RST                0x0

__INLINE static void uart0_tfr_transmit_fifo_read_unpack(uint8_t* transmitfiforead)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_TFR_TRANSMIT_FIFO_READ_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *transmitfiforead = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t uart0_tfr_transmit_fifo_read_transmit_fifo_read_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_TFR_TRANSMIT_FIFO_READ_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

 /**
 * @brief RFW_RECEIVE_FIFO_WRITE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     09                 RFFE   0
 *     08                 RFPE   0
 *  07:00                 RFWD   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET 0x00000078


__INLINE static uint32_t uart0_rfw_receive_fifo_write_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_rfw_receive_fifo_write_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFFE_BIT                              ((uint32_t)0x00000200)
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFFE_POS                              9
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFPE_BIT                              ((uint32_t)0x00000100)
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFPE_POS                              8
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFWD_MASK                             ((uint32_t)0x000000FF)
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFWD_LSB                              0
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFWD_WIDTH                            ((uint32_t)0x00000008)

#define UART0_RFW_RECEIVE_FIFO_WRITE_RFFE_RST                              0x0
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFPE_RST                              0x0
#define UART0_RFW_RECEIVE_FIFO_WRITE_RFWD_RST                              0x0

__INLINE static void uart0_rfw_receive_fifo_write_pack(uint8_t rffe, uint8_t rfpe, uint8_t rfwd)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)rffe << 9) | ((uint32_t)rfpe << 8) | ((uint32_t)rfwd << 0));
}

__INLINE static void uart0_rfw_receive_fifo_write_rffe_setf(uint8_t rffe)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)rffe << 9));
}

__INLINE static void uart0_rfw_receive_fifo_write_rfpe_setf(uint8_t rfpe)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)rfpe << 8));
}

__INLINE static void uart0_rfw_receive_fifo_write_rfwd_setf(uint8_t rfwd)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_RFW_RECEIVE_FIFO_WRITE_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)rfwd << 0));
}

 /**
 * @brief USR_UART_STATUS_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04                  RFF   0
 *     03                 RFNE   0
 *     02                  TFE   1
 *     01                 TFNF   1
 *     00                 BUSY   0
 * </pre>
 */
#define FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET 0x0000007C


__INLINE static uint32_t uart0_usr_uart_status_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_USR_UART_STATUS_REGISTER_RFF_BIT                               ((uint32_t)0x00000010)
#define UART0_USR_UART_STATUS_REGISTER_RFF_POS                               4
#define UART0_USR_UART_STATUS_REGISTER_RFNE_BIT                              ((uint32_t)0x00000008)
#define UART0_USR_UART_STATUS_REGISTER_RFNE_POS                              3
#define UART0_USR_UART_STATUS_REGISTER_TFE_BIT                               ((uint32_t)0x00000004)
#define UART0_USR_UART_STATUS_REGISTER_TFE_POS                               2
#define UART0_USR_UART_STATUS_REGISTER_TFNF_BIT                              ((uint32_t)0x00000002)
#define UART0_USR_UART_STATUS_REGISTER_TFNF_POS                              1
#define UART0_USR_UART_STATUS_REGISTER_BUSY_BIT                              ((uint32_t)0x00000001)
#define UART0_USR_UART_STATUS_REGISTER_BUSY_POS                              0

#define UART0_USR_UART_STATUS_REGISTER_RFF_RST                               0x0
#define UART0_USR_UART_STATUS_REGISTER_RFNE_RST                              0x0
#define UART0_USR_UART_STATUS_REGISTER_TFE_RST                               0x1
#define UART0_USR_UART_STATUS_REGISTER_TFNF_RST                              0x1
#define UART0_USR_UART_STATUS_REGISTER_BUSY_RST                              0x0

__INLINE static void uart0_usr_uart_status_register_unpack(uint8_t* rff, uint8_t* rfne, uint8_t* tfe, uint8_t* tfnf, uint8_t* busy)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *rff = (localVal & ((uint32_t)0x00000010)) >> 4;
    *rfne = (localVal & ((uint32_t)0x00000008)) >> 3;
    *tfe = (localVal & ((uint32_t)0x00000004)) >> 2;
    *tfnf = (localVal & ((uint32_t)0x00000002)) >> 1;
    *busy = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_usr_uart_status_register_rff_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t uart0_usr_uart_status_register_rfne_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static uint8_t uart0_usr_uart_status_register_tfe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t uart0_usr_uart_status_register_tfnf_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t uart0_usr_uart_status_register_busy_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_USR_UART_STATUS_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief TFL_TRANSMIT_FIFO_LEVEL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  04:00   Transmit_FIFO_Level   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_TFL_TRANSMIT_FIFO_LEVEL_OFFSET 0x00000080


__INLINE static uint32_t uart0_tfl_transmit_fifo_level_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_TFL_TRANSMIT_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_TFL_TRANSMIT_FIFO_LEVEL_TRANSMIT_FIFO_LEVEL_MASK              ((uint32_t)0x0000001F)
#define UART0_TFL_TRANSMIT_FIFO_LEVEL_TRANSMIT_FIFO_LEVEL_LSB               0
#define UART0_TFL_TRANSMIT_FIFO_LEVEL_TRANSMIT_FIFO_LEVEL_WIDTH             ((uint32_t)0x00000005)

#define UART0_TFL_TRANSMIT_FIFO_LEVEL_TRANSMIT_FIFO_LEVEL_RST               0x0

__INLINE static void uart0_tfl_transmit_fifo_level_unpack(uint8_t* transmitfifolevel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_TFL_TRANSMIT_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *transmitfifolevel = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t uart0_tfl_transmit_fifo_level_transmit_fifo_level_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_TFL_TRANSMIT_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

 /**
 * @brief RFL_RECEIVE_FIFO_LEVEL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  04:00   Receive_FIFO_Level   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_RFL_RECEIVE_FIFO_LEVEL_OFFSET 0x00000084


__INLINE static uint32_t uart0_rfl_receive_fifo_level_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_RFL_RECEIVE_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_RFL_RECEIVE_FIFO_LEVEL_RECEIVE_FIFO_LEVEL_MASK               ((uint32_t)0x0000001F)
#define UART0_RFL_RECEIVE_FIFO_LEVEL_RECEIVE_FIFO_LEVEL_LSB                0
#define UART0_RFL_RECEIVE_FIFO_LEVEL_RECEIVE_FIFO_LEVEL_WIDTH              ((uint32_t)0x00000005)

#define UART0_RFL_RECEIVE_FIFO_LEVEL_RECEIVE_FIFO_LEVEL_RST                0x0

__INLINE static void uart0_rfl_receive_fifo_level_unpack(uint8_t* receivefifolevel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_RFL_RECEIVE_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *receivefifolevel = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t uart0_rfl_receive_fifo_level_receive_fifo_level_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_RFL_RECEIVE_FIFO_LEVEL_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

 /**
 * @brief SRR_SOFTWARE_RESET_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     02                  XFR   0
 *     01                  RFR   0
 *     00                   UR   0
 * </pre>
 */
#define FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET 0x00000088


__INLINE static uint32_t uart0_srr_software_reset_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_srr_software_reset_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SRR_SOFTWARE_RESET_REGISTER_XFR_BIT                               ((uint32_t)0x00000004)
#define UART0_SRR_SOFTWARE_RESET_REGISTER_XFR_POS                               2
#define UART0_SRR_SOFTWARE_RESET_REGISTER_RFR_BIT                               ((uint32_t)0x00000002)
#define UART0_SRR_SOFTWARE_RESET_REGISTER_RFR_POS                               1
#define UART0_SRR_SOFTWARE_RESET_REGISTER_UR_BIT                                ((uint32_t)0x00000001)
#define UART0_SRR_SOFTWARE_RESET_REGISTER_UR_POS                                0

#define UART0_SRR_SOFTWARE_RESET_REGISTER_XFR_RST                               0x0
#define UART0_SRR_SOFTWARE_RESET_REGISTER_RFR_RST                               0x0
#define UART0_SRR_SOFTWARE_RESET_REGISTER_UR_RST                                0x0

__INLINE static void uart0_srr_software_reset_register_pack(uint8_t xfr, uint8_t rfr, uint8_t ur)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)xfr << 2) | ((uint32_t)rfr << 1) | ((uint32_t)ur << 0));
}

__INLINE static void uart0_srr_software_reset_register_xfr_setf(uint8_t xfr)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)xfr << 2));
}

__INLINE static void uart0_srr_software_reset_register_rfr_setf(uint8_t rfr)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)rfr << 1));
}

__INLINE static void uart0_srr_software_reset_register_ur_setf(uint8_t ur)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_UART0_SRR_SOFTWARE_RESET_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)ur << 0));
}

 /**
 * @brief SRTS_SHADOW_REQUEST_TO_SEND register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   Shadow_Request_to_Send   0
 * </pre>
 */
#define FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET 0x0000008C


__INLINE static uint32_t uart0_srts_shadow_request_to_send_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_srts_shadow_request_to_send_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SRTS_SHADOW_REQUEST_TO_SEND_SHADOW_REQUEST_TO_SEND_BIT            ((uint32_t)0x00000001)
#define UART0_SRTS_SHADOW_REQUEST_TO_SEND_SHADOW_REQUEST_TO_SEND_POS            0

#define UART0_SRTS_SHADOW_REQUEST_TO_SEND_SHADOW_REQUEST_TO_SEND_RST            0x0

__INLINE static void uart0_srts_shadow_request_to_send_pack(uint8_t shadowrequesttosend)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowrequesttosend << 0));
}

__INLINE static void uart0_srts_shadow_request_to_send_unpack(uint8_t* shadowrequesttosend)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowrequesttosend = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_srts_shadow_request_to_send_shadow_request_to_send_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_srts_shadow_request_to_send_shadow_request_to_send_setf(uint8_t shadowrequesttosend)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRTS_SHADOW_REQUEST_TO_SEND_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowrequesttosend << 0);
}

 /**
 * @brief SBCR_SHADOW_BREAK_CONTROL_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   Shadow_Break_Control_Register   0
 * </pre>
 */
#define FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET 0x00000090


__INLINE static uint32_t uart0_sbcr_shadow_break_control_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_sbcr_shadow_break_control_register_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_SHADOW_BREAK_CONTROL_REGISTER_BIT     ((uint32_t)0x00000001)
#define UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_SHADOW_BREAK_CONTROL_REGISTER_POS     0

#define UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_SHADOW_BREAK_CONTROL_REGISTER_RST     0x0

__INLINE static void uart0_sbcr_shadow_break_control_register_pack(uint8_t shadowbreakcontrolregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowbreakcontrolregister << 0));
}

__INLINE static void uart0_sbcr_shadow_break_control_register_unpack(uint8_t* shadowbreakcontrolregister)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowbreakcontrolregister = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_sbcr_shadow_break_control_register_shadow_break_control_register_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_sbcr_shadow_break_control_register_shadow_break_control_register_setf(uint8_t shadowbreakcontrolregister)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SBCR_SHADOW_BREAK_CONTROL_REGISTER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowbreakcontrolregister << 0);
}

 /**
 * @brief SDMAM_SHADOW_DMA_MODE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00      Shadow_DMA_Mode   0
 * </pre>
 */
#define FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET 0x00000094


__INLINE static uint32_t uart0_sdmam_shadow_dma_mode_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_sdmam_shadow_dma_mode_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SDMAM_SHADOW_DMA_MODE_SHADOW_DMA_MODE_BIT                   ((uint32_t)0x00000001)
#define UART0_SDMAM_SHADOW_DMA_MODE_SHADOW_DMA_MODE_POS                   0

#define UART0_SDMAM_SHADOW_DMA_MODE_SHADOW_DMA_MODE_RST                   0x0

__INLINE static void uart0_sdmam_shadow_dma_mode_pack(uint8_t shadowdmamode)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowdmamode << 0));
}

__INLINE static void uart0_sdmam_shadow_dma_mode_unpack(uint8_t* shadowdmamode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowdmamode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_sdmam_shadow_dma_mode_shadow_dma_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_sdmam_shadow_dma_mode_shadow_dma_mode_setf(uint8_t shadowdmamode)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SDMAM_SHADOW_DMA_MODE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowdmamode << 0);
}

 /**
 * @brief SFE_SHADOW_FIFO_ENABLE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   Shadow_FIFO_Enable   0
 * </pre>
 */
#define FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET 0x00000098


__INLINE static uint32_t uart0_sfe_shadow_fifo_enable_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_sfe_shadow_fifo_enable_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SFE_SHADOW_FIFO_ENABLE_SHADOW_FIFO_ENABLE_BIT                ((uint32_t)0x00000001)
#define UART0_SFE_SHADOW_FIFO_ENABLE_SHADOW_FIFO_ENABLE_POS                0

#define UART0_SFE_SHADOW_FIFO_ENABLE_SHADOW_FIFO_ENABLE_RST                0x0

__INLINE static void uart0_sfe_shadow_fifo_enable_pack(uint8_t shadowfifoenable)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowfifoenable << 0));
}

__INLINE static void uart0_sfe_shadow_fifo_enable_unpack(uint8_t* shadowfifoenable)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowfifoenable = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_sfe_shadow_fifo_enable_shadow_fifo_enable_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_sfe_shadow_fifo_enable_shadow_fifo_enable_setf(uint8_t shadowfifoenable)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SFE_SHADOW_FIFO_ENABLE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowfifoenable << 0);
}

 /**
 * @brief SRT_SHADOW_RCVR_TRIGGER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00   Shadow_RCVR_Trigger   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET 0x0000009C


__INLINE static uint32_t uart0_srt_shadow_rcvr_trigger_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_srt_shadow_rcvr_trigger_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_SRT_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_MASK              ((uint32_t)0x00000003)
#define UART0_SRT_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_LSB               0
#define UART0_SRT_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_WIDTH             ((uint32_t)0x00000002)

#define UART0_SRT_SHADOW_RCVR_TRIGGER_SHADOW_RCVR_TRIGGER_RST               0x0

__INLINE static void uart0_srt_shadow_rcvr_trigger_pack(uint8_t shadowrcvrtrigger)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowrcvrtrigger << 0));
}

__INLINE static void uart0_srt_shadow_rcvr_trigger_unpack(uint8_t* shadowrcvrtrigger)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowrcvrtrigger = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t uart0_srt_shadow_rcvr_trigger_shadow_rcvr_trigger_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void uart0_srt_shadow_rcvr_trigger_shadow_rcvr_trigger_setf(uint8_t shadowrcvrtrigger)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_SRT_SHADOW_RCVR_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowrcvrtrigger << 0);
}

 /**
 * @brief STET_SHADOW_TX_EMPTY_TRIGGER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00   Shadow_TX_Empty_Trigger   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET 0x000000A0


__INLINE static uint32_t uart0_stet_shadow_tx_empty_trigger_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_stet_shadow_tx_empty_trigger_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_STET_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_MASK          ((uint32_t)0x00000003)
#define UART0_STET_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_LSB           0
#define UART0_STET_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_WIDTH         ((uint32_t)0x00000002)

#define UART0_STET_SHADOW_TX_EMPTY_TRIGGER_SHADOW_TX_EMPTY_TRIGGER_RST           0x0

__INLINE static void uart0_stet_shadow_tx_empty_trigger_pack(uint8_t shadowtxemptytrigger)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)shadowtxemptytrigger << 0));
}

__INLINE static void uart0_stet_shadow_tx_empty_trigger_unpack(uint8_t* shadowtxemptytrigger)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *shadowtxemptytrigger = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t uart0_stet_shadow_tx_empty_trigger_shadow_tx_empty_trigger_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void uart0_stet_shadow_tx_empty_trigger_shadow_tx_empty_trigger_setf(uint8_t shadowtxemptytrigger)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_STET_SHADOW_TX_EMPTY_TRIGGER_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)shadowtxemptytrigger << 0);
}

 /**
 * @brief HTX_HALT_TX register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00              Halt_TX   0
 * </pre>
 */
#define FEMTO_REG_UART0_HTX_HALT_TX_OFFSET 0x000000A4


__INLINE static uint32_t uart0_htx_halt_tx_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_htx_halt_tx_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_HTX_HALT_TX_HALT_TX_BIT                           ((uint32_t)0x00000001)
#define UART0_HTX_HALT_TX_HALT_TX_POS                           0

#define UART0_HTX_HALT_TX_HALT_TX_RST                           0x0

__INLINE static void uart0_htx_halt_tx_pack(uint8_t halttx)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)halttx << 0));
}

__INLINE static void uart0_htx_halt_tx_unpack(uint8_t* halttx)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *halttx = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t uart0_htx_halt_tx_halt_tx_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void uart0_htx_halt_tx_halt_tx_setf(uint8_t halttx)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_HTX_HALT_TX_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)halttx << 0);
}

 /**
 * @brief DMASA_DMA_SOFTWARE_ACKNOWLEDGE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   DMA_Software_Acknowledge   0
 * </pre>
 */
#define FEMTO_REG_UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_OFFSET 0x000000A8


__INLINE static uint32_t uart0_dmasa_dma_software_acknowledge_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

__INLINE static void uart0_dmasa_dma_software_acknowledge_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, value);
}

// field definitions
#define UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_DMA_SOFTWARE_ACKNOWLEDGE_BIT          ((uint32_t)0x00000001)
#define UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_DMA_SOFTWARE_ACKNOWLEDGE_POS          0

#define UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_DMA_SOFTWARE_ACKNOWLEDGE_RST          0x0

__INLINE static void uart0_dmasa_dma_software_acknowledge_pack(uint8_t dmasoftwareacknowledge)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR,  ((uint32_t)dmasoftwareacknowledge << 0));
}

__INLINE static void uart0_dmasa_dma_software_acknowledge_dma_software_acknowledge_setf(uint8_t dmasoftwareacknowledge)
{
    _FEMTO_REG_WR(FEMTO_REG_UART0_DMASA_DMA_SOFTWARE_ACKNOWLEDGE_OFFSET+ FEMTO_REG_UART0_BASE_ADDR, (uint32_t)dmasoftwareacknowledge << 0);
}

 /**
 * @brief CPR_COMPONENT_PARAMETER_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:16            FIFO_MODE   0b0
 *     13            DMA_EXTRA   0
 *     12   UART_ADD_ENCODED_PARAMS   0
 *     11               SHADOW   0
 *     10            FIFO_STAT   0
 *     09          FIFO_ACCESS   0
 *     08      ADDITIONAL_FEAT   0
 *     07          SIR_LP_MODE   0
 *     06             SIR_MODE   0
 *     05            THRE_MODE   0
 *     04            AFCE_MODE   0
 *  01:00       APB_DATA_WIDTH   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET 0x000000F4


__INLINE static uint32_t uart0_cpr_component_parameter_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_MASK                        ((uint32_t)0x00FF0000)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_LSB                         16
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_WIDTH                       ((uint32_t)0x00000008)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_DMA_EXTRA_BIT                         ((uint32_t)0x00002000)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_DMA_EXTRA_POS                         13
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_UART_ADD_ENCODED_PARAMS_BIT           ((uint32_t)0x00001000)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_UART_ADD_ENCODED_PARAMS_POS           12
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SHADOW_BIT                            ((uint32_t)0x00000800)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SHADOW_POS                            11
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_STAT_BIT                         ((uint32_t)0x00000400)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_STAT_POS                         10
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_ACCESS_BIT                       ((uint32_t)0x00000200)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_ACCESS_POS                       9
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_ADDITIONAL_FEAT_BIT                   ((uint32_t)0x00000100)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_ADDITIONAL_FEAT_POS                   8
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_LP_MODE_BIT                       ((uint32_t)0x00000080)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_LP_MODE_POS                       7
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_MODE_BIT                          ((uint32_t)0x00000040)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_MODE_POS                          6
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_THRE_MODE_BIT                         ((uint32_t)0x00000020)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_THRE_MODE_POS                         5
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_AFCE_MODE_BIT                         ((uint32_t)0x00000010)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_AFCE_MODE_POS                         4
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_MASK                   ((uint32_t)0x00000003)
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_LSB                    0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_WIDTH                  ((uint32_t)0x00000002)

#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_MODE_RST                         0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_DMA_EXTRA_RST                         0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_UART_ADD_ENCODED_PARAMS_RST           0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SHADOW_RST                            0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_STAT_RST                         0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_FIFO_ACCESS_RST                       0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_ADDITIONAL_FEAT_RST                   0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_LP_MODE_RST                       0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_SIR_MODE_RST                          0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_THRE_MODE_RST                         0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_AFCE_MODE_RST                         0x0
#define UART0_CPR_COMPONENT_PARAMETER_REGISTER_APB_DATA_WIDTH_RST                    0x0

__INLINE static void uart0_cpr_component_parameter_register_unpack(uint8_t* fifomode, uint8_t* dmaextra, uint8_t* uartaddencodedparams, uint8_t* shadow, uint8_t* fifostat, uint8_t* fifoaccess, uint8_t* additionalfeat, uint8_t* sirlpmode, uint8_t* sirmode, uint8_t* thremode, uint8_t* afcemode, uint8_t* apbdatawidth)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *fifomode = (localVal & ((uint32_t)0x00FF0000)) >> 16;
    *dmaextra = (localVal & ((uint32_t)0x00002000)) >> 13;
    *uartaddencodedparams = (localVal & ((uint32_t)0x00001000)) >> 12;
    *shadow = (localVal & ((uint32_t)0x00000800)) >> 11;
    *fifostat = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoaccess = (localVal & ((uint32_t)0x00000200)) >> 9;
    *additionalfeat = (localVal & ((uint32_t)0x00000100)) >> 8;
    *sirlpmode = (localVal & ((uint32_t)0x00000080)) >> 7;
    *sirmode = (localVal & ((uint32_t)0x00000040)) >> 6;
    *thremode = (localVal & ((uint32_t)0x00000020)) >> 5;
    *afcemode = (localVal & ((uint32_t)0x00000010)) >> 4;
    *apbdatawidth = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00FF0000)) >> 16);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_dma_extra_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_uart_add_encoded_params_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_shadow_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_fifo_stat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_fifo_access_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_additional_feat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_sir_lp_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_sir_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_thre_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_afce_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t uart0_cpr_component_parameter_register_apb_data_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CPR_COMPONENT_PARAMETER_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

 /**
 * @brief UCV_UART_COMPONENT_VERSION register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00   UART_Component_Version   0b0
 * </pre>
 */
#define FEMTO_REG_UART0_UCV_UART_COMPONENT_VERSION_OFFSET 0x000000F8


__INLINE static uint32_t uart0_ucv_uart_component_version_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_UCV_UART_COMPONENT_VERSION_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_UCV_UART_COMPONENT_VERSION_UART_COMPONENT_VERSION_MASK           ((uint32_t)0xFFFFFFFF)
#define UART0_UCV_UART_COMPONENT_VERSION_UART_COMPONENT_VERSION_LSB            0
#define UART0_UCV_UART_COMPONENT_VERSION_UART_COMPONENT_VERSION_WIDTH          ((uint32_t)0x00000020)

#define UART0_UCV_UART_COMPONENT_VERSION_UART_COMPONENT_VERSION_RST            0x0

__INLINE static void uart0_ucv_uart_component_version_unpack(uint8_t* uartcomponentversion)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_UCV_UART_COMPONENT_VERSION_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *uartcomponentversion = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t uart0_ucv_uart_component_version_uart_component_version_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_UCV_UART_COMPONENT_VERSION_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief CTR_COMPONENT_TYPE_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        Peripheral_ID   0b44570110
 * </pre>
 */
#define FEMTO_REG_UART0_CTR_COMPONENT_TYPE_REGISTER_OFFSET 0x000000FC


__INLINE static uint32_t uart0_ctr_component_type_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_UART0_CTR_COMPONENT_TYPE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
}

// field definitions
#define UART0_CTR_COMPONENT_TYPE_REGISTER_PERIPHERAL_ID_MASK                    ((uint32_t)0xFFFFFFFF)
#define UART0_CTR_COMPONENT_TYPE_REGISTER_PERIPHERAL_ID_LSB                     0
#define UART0_CTR_COMPONENT_TYPE_REGISTER_PERIPHERAL_ID_WIDTH                   ((uint32_t)0x00000020)

#define UART0_CTR_COMPONENT_TYPE_REGISTER_PERIPHERAL_ID_RST                     0x44570110

__INLINE static void uart0_ctr_component_type_register_unpack(uint8_t* peripheralid)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CTR_COMPONENT_TYPE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);

    *peripheralid = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t uart0_ctr_component_type_register_peripheral_id_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_UART0_CTR_COMPONENT_TYPE_REGISTER_OFFSET + FEMTO_REG_UART0_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}


#endif // _FEMTO_REG_UART0_H_

