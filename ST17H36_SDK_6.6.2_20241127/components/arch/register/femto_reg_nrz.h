#ifndef _FEMTO_REG_NRZ_H_
#define _FEMTO_REG_NRZ_H_

#define FEMTO_REG_NRZ_COUNT 12

#define FEMTO_REG_NRZ_BASE_ADDR 0x40005000

#define FEMTO_REG_NRZ_SIZE 0x00000030


 /**
 * @brief CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     21       data_in_irq_en   0
 *     20            nrz_start   0
 *  19:04        tx_bits_count   0b0
 *     02       tx_ctrl_endian   0
 *  01:00           frame_ctrl   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_CTRL_OFFSET 0x00000000


__INLINE static uint32_t nrz_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_CTRL_DATA_IN_IRQ_EN_BIT                    ((uint32_t)0x00200000)
#define NRZ_CTRL_DATA_IN_IRQ_EN_POS                    21
#define NRZ_CTRL_NRZ_START_BIT                         ((uint32_t)0x00100000)
#define NRZ_CTRL_NRZ_START_POS                         20
#define NRZ_CTRL_TX_BITS_COUNT_MASK                    ((uint32_t)0x000FFFF0)
#define NRZ_CTRL_TX_BITS_COUNT_LSB                     4
#define NRZ_CTRL_TX_BITS_COUNT_WIDTH                   ((uint32_t)0x00000010)
#define NRZ_CTRL_TX_CTRL_ENDIAN_BIT                    ((uint32_t)0x00000004)
#define NRZ_CTRL_TX_CTRL_ENDIAN_POS                    2
#define NRZ_CTRL_FRAME_CTRL_MASK                       ((uint32_t)0x00000003)
#define NRZ_CTRL_FRAME_CTRL_LSB                        0
#define NRZ_CTRL_FRAME_CTRL_WIDTH                      ((uint32_t)0x00000002)

#define NRZ_CTRL_DATA_IN_IRQ_EN_RST                    0x0
#define NRZ_CTRL_NRZ_START_RST                         0x0
#define NRZ_CTRL_TX_BITS_COUNT_RST                     0x0
#define NRZ_CTRL_TX_CTRL_ENDIAN_RST                    0x0
#define NRZ_CTRL_FRAME_CTRL_RST                        0x0

__INLINE static void nrz_ctrl_pack(uint8_t datainirqen, uint8_t nrzstart, uint16_t txbitscount, uint8_t txctrlendian, uint8_t framectrl)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)datainirqen << 21) | ((uint32_t)nrzstart << 20) | ((uint32_t)txbitscount << 4) | ((uint32_t)txctrlendian << 2) | ((uint32_t)framectrl << 0));
}

__INLINE static void nrz_ctrl_unpack(uint8_t* datainirqen, uint8_t* nrzstart, uint8_t* txbitscount, uint8_t* txctrlendian, uint8_t* framectrl)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *datainirqen = (localVal & ((uint32_t)0x00200000)) >> 21;
    *nrzstart = (localVal & ((uint32_t)0x00100000)) >> 20;
    *txbitscount = (localVal & ((uint32_t)0x000FFFF0)) >> 4;
    *txctrlendian = (localVal & ((uint32_t)0x00000004)) >> 2;
    *framectrl = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t nrz_ctrl_data_in_irq_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00200000)) >> 21);
}

__INLINE static void nrz_ctrl_data_in_irq_en_setf(uint8_t datainirqen)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00200000)) | ((uint32_t)datainirqen << 21));
}

__INLINE static uint8_t nrz_ctrl_nrz_start_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void nrz_ctrl_nrz_start_setf(uint8_t nrzstart)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)nrzstart << 20));
}

__INLINE static uint16_t nrz_ctrl_tx_bits_count_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFF0)) >> 4);
}

__INLINE static void nrz_ctrl_tx_bits_count_setf(uint16_t txbitscount)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x000FFFF0)) | ((uint32_t)txbitscount << 4));
}

__INLINE static uint8_t nrz_ctrl_tx_ctrl_endian_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void nrz_ctrl_tx_ctrl_endian_setf(uint8_t txctrlendian)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)txctrlendian << 2));
}

__INLINE static uint8_t nrz_ctrl_frame_ctrl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void nrz_ctrl_frame_ctrl_setf(uint8_t framectrl)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)framectrl << 0));
}

 /**
 * @brief NRZ_DATA_IN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              data_in   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_NRZ_DATA_IN_OFFSET 0x00000004


__INLINE static uint32_t nrz_nrz_data_in_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_NRZ_DATA_IN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

// field definitions
#define NRZ_NRZ_DATA_IN_DATA_IN_MASK                          ((uint32_t)0xFFFFFFFF)
#define NRZ_NRZ_DATA_IN_DATA_IN_LSB                           0
#define NRZ_NRZ_DATA_IN_DATA_IN_WIDTH                         ((uint32_t)0x00000020)

#define NRZ_NRZ_DATA_IN_DATA_IN_RST                           0x0

__INLINE static void nrz_nrz_data_in_unpack(uint8_t* datain)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_NRZ_DATA_IN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *datain = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t nrz_nrz_data_in_data_in_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_NRZ_DATA_IN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief CARR_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16          carr_t1_cnt   0b0
 *  15:00          carr_t0_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_CARR_CNT_OFFSET 0x00000008


__INLINE static uint32_t nrz_carr_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_carr_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CARR_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_CARR_CNT_CARR_T1_CNT_MASK                      ((uint32_t)0xFFFF0000)
#define NRZ_CARR_CNT_CARR_T1_CNT_LSB                       16
#define NRZ_CARR_CNT_CARR_T1_CNT_WIDTH                     ((uint32_t)0x00000010)
#define NRZ_CARR_CNT_CARR_T0_CNT_MASK                      ((uint32_t)0x0000FFFF)
#define NRZ_CARR_CNT_CARR_T0_CNT_LSB                       0
#define NRZ_CARR_CNT_CARR_T0_CNT_WIDTH                     ((uint32_t)0x00000010)

#define NRZ_CARR_CNT_CARR_T1_CNT_RST                       0x0
#define NRZ_CARR_CNT_CARR_T0_CNT_RST                       0x0

__INLINE static void nrz_carr_cnt_pack(uint16_t carrt1cnt, uint16_t carrt0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CARR_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)carrt1cnt << 16) | ((uint32_t)carrt0cnt << 0));
}

__INLINE static void nrz_carr_cnt_unpack(uint8_t* carrt1cnt, uint8_t* carrt0cnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *carrt1cnt = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *carrt0cnt = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t nrz_carr_cnt_carr_t1_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void nrz_carr_cnt_carr_t1_cnt_setf(uint16_t carrt1cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CARR_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)carrt1cnt << 16));
}

__INLINE static uint16_t nrz_carr_cnt_carr_t0_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void nrz_carr_cnt_carr_t0_cnt_setf(uint16_t carrt0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CARR_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CARR_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)carrt0cnt << 0));
}

 /**
 * @brief PREM_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16          prem_t1_cnt   0b0
 *  15:00          prem_t0_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_PREM_CNT_OFFSET 0x0000000C


__INLINE static uint32_t nrz_prem_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_prem_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_PREM_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_PREM_CNT_PREM_T1_CNT_MASK                      ((uint32_t)0xFFFF0000)
#define NRZ_PREM_CNT_PREM_T1_CNT_LSB                       16
#define NRZ_PREM_CNT_PREM_T1_CNT_WIDTH                     ((uint32_t)0x00000010)
#define NRZ_PREM_CNT_PREM_T0_CNT_MASK                      ((uint32_t)0x0000FFFF)
#define NRZ_PREM_CNT_PREM_T0_CNT_LSB                       0
#define NRZ_PREM_CNT_PREM_T0_CNT_WIDTH                     ((uint32_t)0x00000010)

#define NRZ_PREM_CNT_PREM_T1_CNT_RST                       0x0
#define NRZ_PREM_CNT_PREM_T0_CNT_RST                       0x0

__INLINE static void nrz_prem_cnt_pack(uint16_t premt1cnt, uint16_t premt0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_PREM_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)premt1cnt << 16) | ((uint32_t)premt0cnt << 0));
}

__INLINE static void nrz_prem_cnt_unpack(uint8_t* premt1cnt, uint8_t* premt0cnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *premt1cnt = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *premt0cnt = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t nrz_prem_cnt_prem_t1_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void nrz_prem_cnt_prem_t1_cnt_setf(uint16_t premt1cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_PREM_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)premt1cnt << 16));
}

__INLINE static uint16_t nrz_prem_cnt_prem_t0_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void nrz_prem_cnt_prem_t0_cnt_setf(uint16_t premt0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_PREM_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_PREM_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)premt0cnt << 0));
}

 /**
 * @brief CODE0_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16         code0_t1_cnt   0b0
 *  15:00         code0_t0_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_CODE0_CNT_OFFSET 0x00000010


__INLINE static uint32_t nrz_code0_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_code0_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE0_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_CODE0_CNT_CODE0_T1_CNT_MASK                     ((uint32_t)0xFFFF0000)
#define NRZ_CODE0_CNT_CODE0_T1_CNT_LSB                      16
#define NRZ_CODE0_CNT_CODE0_T1_CNT_WIDTH                    ((uint32_t)0x00000010)
#define NRZ_CODE0_CNT_CODE0_T0_CNT_MASK                     ((uint32_t)0x0000FFFF)
#define NRZ_CODE0_CNT_CODE0_T0_CNT_LSB                      0
#define NRZ_CODE0_CNT_CODE0_T0_CNT_WIDTH                    ((uint32_t)0x00000010)

#define NRZ_CODE0_CNT_CODE0_T1_CNT_RST                      0x0
#define NRZ_CODE0_CNT_CODE0_T0_CNT_RST                      0x0

__INLINE static void nrz_code0_cnt_pack(uint16_t code0t1cnt, uint16_t code0t0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE0_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)code0t1cnt << 16) | ((uint32_t)code0t0cnt << 0));
}

__INLINE static void nrz_code0_cnt_unpack(uint8_t* code0t1cnt, uint8_t* code0t0cnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *code0t1cnt = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *code0t0cnt = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t nrz_code0_cnt_code0_t1_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void nrz_code0_cnt_code0_t1_cnt_setf(uint16_t code0t1cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE0_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)code0t1cnt << 16));
}

__INLINE static uint16_t nrz_code0_cnt_code0_t0_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void nrz_code0_cnt_code0_t0_cnt_setf(uint16_t code0t0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE0_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CODE0_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)code0t0cnt << 0));
}

 /**
 * @brief CODE1_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:16         code1_t1_cnt   0b0
 *  15:00         code1_t0_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_CODE1_CNT_OFFSET 0x00000014


__INLINE static uint32_t nrz_code1_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_code1_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE1_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_CODE1_CNT_CODE1_T1_CNT_MASK                     ((uint32_t)0xFFFF0000)
#define NRZ_CODE1_CNT_CODE1_T1_CNT_LSB                      16
#define NRZ_CODE1_CNT_CODE1_T1_CNT_WIDTH                    ((uint32_t)0x00000010)
#define NRZ_CODE1_CNT_CODE1_T0_CNT_MASK                     ((uint32_t)0x0000FFFF)
#define NRZ_CODE1_CNT_CODE1_T0_CNT_LSB                      0
#define NRZ_CODE1_CNT_CODE1_T0_CNT_WIDTH                    ((uint32_t)0x00000010)

#define NRZ_CODE1_CNT_CODE1_T1_CNT_RST                      0x0
#define NRZ_CODE1_CNT_CODE1_T0_CNT_RST                      0x0

__INLINE static void nrz_code1_cnt_pack(uint16_t code1t1cnt, uint16_t code1t0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE1_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)code1t1cnt << 16) | ((uint32_t)code1t0cnt << 0));
}

__INLINE static void nrz_code1_cnt_unpack(uint8_t* code1t1cnt, uint8_t* code1t0cnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *code1t1cnt = (localVal & ((uint32_t)0xFFFF0000)) >> 16;
    *code1t0cnt = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t nrz_code1_cnt_code1_t1_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFF0000)) >> 16);
}

__INLINE static void nrz_code1_cnt_code1_t1_cnt_setf(uint16_t code1t1cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE1_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0xFFFF0000)) | ((uint32_t)code1t1cnt << 16));
}

__INLINE static uint16_t nrz_code1_cnt_code1_t0_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void nrz_code1_cnt_code1_t0_cnt_setf(uint16_t code1t0cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CODE1_CNT_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CODE1_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)code1t0cnt << 0));
}

 /**
 * @brief WAVE_CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:23        code1_cnt_div   0b0
 *  22:21           code1_mode   0b0
 *  18:16        code0_cnt_div   0b0
 *  15:14           code0_mode   0b0
 *  11:09         prem_cnt_div   0b0
 *  08:07            prem_mode   0b0
 *  04:02         carr_cnt_div   0b0
 *  01:00            carr_mode   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_WAVE_CTRL_OFFSET 0x00000018


__INLINE static uint32_t nrz_wave_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_wave_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_WAVE_CTRL_CODE1_CNT_DIV_MASK                    ((uint32_t)0x03800000)
#define NRZ_WAVE_CTRL_CODE1_CNT_DIV_LSB                     23
#define NRZ_WAVE_CTRL_CODE1_CNT_DIV_WIDTH                   ((uint32_t)0x00000003)
#define NRZ_WAVE_CTRL_CODE1_MODE_MASK                       ((uint32_t)0x00600000)
#define NRZ_WAVE_CTRL_CODE1_MODE_LSB                        21
#define NRZ_WAVE_CTRL_CODE1_MODE_WIDTH                      ((uint32_t)0x00000002)
#define NRZ_WAVE_CTRL_CODE0_CNT_DIV_MASK                    ((uint32_t)0x00070000)
#define NRZ_WAVE_CTRL_CODE0_CNT_DIV_LSB                     16
#define NRZ_WAVE_CTRL_CODE0_CNT_DIV_WIDTH                   ((uint32_t)0x00000003)
#define NRZ_WAVE_CTRL_CODE0_MODE_MASK                       ((uint32_t)0x0000C000)
#define NRZ_WAVE_CTRL_CODE0_MODE_LSB                        14
#define NRZ_WAVE_CTRL_CODE0_MODE_WIDTH                      ((uint32_t)0x00000002)
#define NRZ_WAVE_CTRL_PREM_CNT_DIV_MASK                     ((uint32_t)0x00000E00)
#define NRZ_WAVE_CTRL_PREM_CNT_DIV_LSB                      9
#define NRZ_WAVE_CTRL_PREM_CNT_DIV_WIDTH                    ((uint32_t)0x00000003)
#define NRZ_WAVE_CTRL_PREM_MODE_MASK                        ((uint32_t)0x00000180)
#define NRZ_WAVE_CTRL_PREM_MODE_LSB                         7
#define NRZ_WAVE_CTRL_PREM_MODE_WIDTH                       ((uint32_t)0x00000002)
#define NRZ_WAVE_CTRL_CARR_CNT_DIV_MASK                     ((uint32_t)0x0000001C)
#define NRZ_WAVE_CTRL_CARR_CNT_DIV_LSB                      2
#define NRZ_WAVE_CTRL_CARR_CNT_DIV_WIDTH                    ((uint32_t)0x00000003)
#define NRZ_WAVE_CTRL_CARR_MODE_MASK                        ((uint32_t)0x00000003)
#define NRZ_WAVE_CTRL_CARR_MODE_LSB                         0
#define NRZ_WAVE_CTRL_CARR_MODE_WIDTH                       ((uint32_t)0x00000002)

#define NRZ_WAVE_CTRL_CODE1_CNT_DIV_RST                     0x0
#define NRZ_WAVE_CTRL_CODE1_MODE_RST                        0x0
#define NRZ_WAVE_CTRL_CODE0_CNT_DIV_RST                     0x0
#define NRZ_WAVE_CTRL_CODE0_MODE_RST                        0x0
#define NRZ_WAVE_CTRL_PREM_CNT_DIV_RST                      0x0
#define NRZ_WAVE_CTRL_PREM_MODE_RST                         0x0
#define NRZ_WAVE_CTRL_CARR_CNT_DIV_RST                      0x0
#define NRZ_WAVE_CTRL_CARR_MODE_RST                         0x0

__INLINE static void nrz_wave_ctrl_pack(uint8_t code1cntdiv, uint8_t code1mode, uint8_t code0cntdiv, uint8_t code0mode, uint8_t premcntdiv, uint8_t premmode, uint8_t carrcntdiv, uint8_t carrmode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)code1cntdiv << 23) | ((uint32_t)code1mode << 21) | ((uint32_t)code0cntdiv << 16) | ((uint32_t)code0mode << 14) | ((uint32_t)premcntdiv << 9) | ((uint32_t)premmode << 7) | ((uint32_t)carrcntdiv << 2) | ((uint32_t)carrmode << 0));
}

__INLINE static void nrz_wave_ctrl_unpack(uint8_t* code1cntdiv, uint8_t* code1mode, uint8_t* code0cntdiv, uint8_t* code0mode, uint8_t* premcntdiv, uint8_t* premmode, uint8_t* carrcntdiv, uint8_t* carrmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *code1cntdiv = (localVal & ((uint32_t)0x03800000)) >> 23;
    *code1mode = (localVal & ((uint32_t)0x00600000)) >> 21;
    *code0cntdiv = (localVal & ((uint32_t)0x00070000)) >> 16;
    *code0mode = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *premcntdiv = (localVal & ((uint32_t)0x00000E00)) >> 9;
    *premmode = (localVal & ((uint32_t)0x00000180)) >> 7;
    *carrcntdiv = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *carrmode = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t nrz_wave_ctrl_code1_cnt_div_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03800000)) >> 23);
}

__INLINE static void nrz_wave_ctrl_code1_cnt_div_setf(uint8_t code1cntdiv)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x03800000)) | ((uint32_t)code1cntdiv << 23));
}

__INLINE static uint8_t nrz_wave_ctrl_code1_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00600000)) >> 21);
}

__INLINE static void nrz_wave_ctrl_code1_mode_setf(uint8_t code1mode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00600000)) | ((uint32_t)code1mode << 21));
}

__INLINE static uint8_t nrz_wave_ctrl_code0_cnt_div_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static void nrz_wave_ctrl_code0_cnt_div_setf(uint8_t code0cntdiv)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00070000)) | ((uint32_t)code0cntdiv << 16));
}

__INLINE static uint8_t nrz_wave_ctrl_code0_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void nrz_wave_ctrl_code0_mode_setf(uint8_t code0mode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)code0mode << 14));
}

__INLINE static uint8_t nrz_wave_ctrl_prem_cnt_div_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000E00)) >> 9);
}

__INLINE static void nrz_wave_ctrl_prem_cnt_div_setf(uint8_t premcntdiv)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000E00)) | ((uint32_t)premcntdiv << 9));
}

__INLINE static uint8_t nrz_wave_ctrl_prem_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void nrz_wave_ctrl_prem_mode_setf(uint8_t premmode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)premmode << 7));
}

__INLINE static uint8_t nrz_wave_ctrl_carr_cnt_div_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void nrz_wave_ctrl_carr_cnt_div_setf(uint8_t carrcntdiv)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)carrcntdiv << 2));
}

__INLINE static uint8_t nrz_wave_ctrl_carr_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void nrz_wave_ctrl_carr_mode_setf(uint8_t carrmode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_WAVE_CTRL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)carrmode << 0));
}

 /**
 * @brief TX_CURRENT_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:00       tx_current_cnt   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_TX_CURRENT_CNT_OFFSET 0x0000001C


__INLINE static uint32_t nrz_tx_current_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_TX_CURRENT_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

// field definitions
#define NRZ_TX_CURRENT_CNT_TX_CURRENT_CNT_MASK                   ((uint32_t)0x0000FFFF)
#define NRZ_TX_CURRENT_CNT_TX_CURRENT_CNT_LSB                    0
#define NRZ_TX_CURRENT_CNT_TX_CURRENT_CNT_WIDTH                  ((uint32_t)0x00000010)

#define NRZ_TX_CURRENT_CNT_TX_CURRENT_CNT_RST                    0x0

__INLINE static void nrz_tx_current_cnt_unpack(uint8_t* txcurrentcnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_TX_CURRENT_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *txcurrentcnt = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t nrz_tx_current_cnt_tx_current_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_TX_CURRENT_CNT_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

 /**
 * @brief MODE_DONE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00            mode_done   0
 * </pre>
 */
#define FEMTO_REG_NRZ_MODE_DONE_OFFSET 0x00000024


__INLINE static uint32_t nrz_mode_done_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_MODE_DONE_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

// field definitions
#define NRZ_MODE_DONE_MODE_DONE_BIT                         ((uint32_t)0x00000001)
#define NRZ_MODE_DONE_MODE_DONE_POS                         0

#define NRZ_MODE_DONE_MODE_DONE_RST                         0x0

__INLINE static void nrz_mode_done_unpack(uint8_t* modedone)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_MODE_DONE_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *modedone = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t nrz_mode_done_mode_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_MODE_DONE_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief CHANNEL_SEL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08              ch_mode   0
 *  07:00            ch_en_sel   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET 0x00000028


__INLINE static uint32_t nrz_channel_sel_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_channel_sel_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_CHANNEL_SEL_CH_MODE_BIT                           ((uint32_t)0x00000100)
#define NRZ_CHANNEL_SEL_CH_MODE_POS                           8
#define NRZ_CHANNEL_SEL_CH_EN_SEL_MASK                        ((uint32_t)0x000000FF)
#define NRZ_CHANNEL_SEL_CH_EN_SEL_LSB                         0
#define NRZ_CHANNEL_SEL_CH_EN_SEL_WIDTH                       ((uint32_t)0x00000008)

#define NRZ_CHANNEL_SEL_CH_MODE_RST                           0x0
#define NRZ_CHANNEL_SEL_CH_EN_SEL_RST                         0x0

__INLINE static void nrz_channel_sel_pack(uint8_t chmode, uint8_t chensel)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)chmode << 8) | ((uint32_t)chensel << 0));
}

__INLINE static void nrz_channel_sel_unpack(uint8_t* chmode, uint8_t* chensel)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *chmode = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chensel = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t nrz_channel_sel_ch_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void nrz_channel_sel_ch_mode_setf(uint8_t chmode)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chmode << 8));
}

__INLINE static uint8_t nrz_channel_sel_ch_en_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void nrz_channel_sel_ch_en_sel_setf(uint8_t chensel)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_NRZ_CHANNEL_SEL_OFFSET + FEMTO_REG_NRZ_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)chensel << 0));
}

 /**
 * @brief DATA_LENGTH_SEL_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00   data_length_sel_en   0b0
 * </pre>
 */
#define FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET 0x0000002C


__INLINE static uint32_t nrz_data_length_sel_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

__INLINE static void nrz_data_length_sel_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, value);
}

// field definitions
#define NRZ_DATA_LENGTH_SEL_EN_DATA_LENGTH_SEL_EN_MASK               ((uint32_t)0x00000003)
#define NRZ_DATA_LENGTH_SEL_EN_DATA_LENGTH_SEL_EN_LSB                0
#define NRZ_DATA_LENGTH_SEL_EN_DATA_LENGTH_SEL_EN_WIDTH              ((uint32_t)0x00000002)

#define NRZ_DATA_LENGTH_SEL_EN_DATA_LENGTH_SEL_EN_RST                0x0

__INLINE static void nrz_data_length_sel_en_pack(uint8_t datalengthselen)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR,  ((uint32_t)datalengthselen << 0));
}

__INLINE static void nrz_data_length_sel_en_unpack(uint8_t* datalengthselen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *datalengthselen = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t nrz_data_length_sel_en_data_length_sel_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void nrz_data_length_sel_en_data_length_sel_en_setf(uint8_t datalengthselen)
{
    _FEMTO_REG_WR(FEMTO_REG_NRZ_DATA_LENGTH_SEL_EN_OFFSET+ FEMTO_REG_NRZ_BASE_ADDR, (uint32_t)datalengthselen << 0);
}

 /**
 * @brief DATA_WAVE_START register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   data_wave_start_flag   0
 * </pre>
 */
#define FEMTO_REG_NRZ_DATA_WAVE_START_OFFSET 0x00000030


__INLINE static uint32_t nrz_data_wave_start_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_WAVE_START_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
}

// field definitions
#define NRZ_DATA_WAVE_START_DATA_WAVE_START_FLAG_BIT              ((uint32_t)0x00000001)
#define NRZ_DATA_WAVE_START_DATA_WAVE_START_FLAG_POS              0

#define NRZ_DATA_WAVE_START_DATA_WAVE_START_FLAG_RST              0x0

__INLINE static void nrz_data_wave_start_unpack(uint8_t* datawavestartflag)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_WAVE_START_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);

    *datawavestartflag = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t nrz_data_wave_start_data_wave_start_flag_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_NRZ_DATA_WAVE_START_OFFSET + FEMTO_REG_NRZ_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}


#endif // _FEMTO_REG_NRZ_H_

