#ifndef _FEMTO_REG_EFUSE_H_
#define _FEMTO_REG_EFUSE_H_

#define FEMTO_REG_EFUSE_COUNT 22

#define FEMTO_REG_EFUSE_BASE_ADDR 0x4000F900

#define FEMTO_REG_EFUSE_SIZE 0x0000007C


 /**
 * @brief EFUSE_INT_STATE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     20        pgm_bit_state   0
 *  15:12       pgm_word_state   0b0
 *  07:04      read_word_state   0b0
 *     00            pgm_error   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET 0x00000000


__INLINE static uint32_t efuse_efuse_int_state_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

// field definitions
#define EFUSE_EFUSE_INT_STATE_PGM_BIT_STATE_BIT                     ((uint32_t)0x00100000)
#define EFUSE_EFUSE_INT_STATE_PGM_BIT_STATE_POS                     20
#define EFUSE_EFUSE_INT_STATE_PGM_WORD_STATE_MASK                   ((uint32_t)0x0000F000)
#define EFUSE_EFUSE_INT_STATE_PGM_WORD_STATE_LSB                    12
#define EFUSE_EFUSE_INT_STATE_PGM_WORD_STATE_WIDTH                  ((uint32_t)0x00000004)
#define EFUSE_EFUSE_INT_STATE_READ_WORD_STATE_MASK                  ((uint32_t)0x000000F0)
#define EFUSE_EFUSE_INT_STATE_READ_WORD_STATE_LSB                   4
#define EFUSE_EFUSE_INT_STATE_READ_WORD_STATE_WIDTH                 ((uint32_t)0x00000004)
#define EFUSE_EFUSE_INT_STATE_PGM_ERROR_BIT                         ((uint32_t)0x00000001)
#define EFUSE_EFUSE_INT_STATE_PGM_ERROR_POS                         0

#define EFUSE_EFUSE_INT_STATE_PGM_BIT_STATE_RST                     0x0
#define EFUSE_EFUSE_INT_STATE_PGM_WORD_STATE_RST                    0x0
#define EFUSE_EFUSE_INT_STATE_READ_WORD_STATE_RST                   0x0
#define EFUSE_EFUSE_INT_STATE_PGM_ERROR_RST                         0x0

__INLINE static void efuse_efuse_int_state_unpack(uint8_t* pgmbitstate, uint8_t* pgmwordstate, uint8_t* readwordstate, uint8_t* pgmerror)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *pgmbitstate = (localVal & ((uint32_t)0x00100000)) >> 20;
    *pgmwordstate = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *readwordstate = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *pgmerror = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t efuse_efuse_int_state_pgm_bit_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static uint8_t efuse_efuse_int_state_pgm_word_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static uint8_t efuse_efuse_int_state_read_word_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t efuse_efuse_int_state_pgm_error_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_STATE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief EFUSE_INT_MASK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     16            int_clear   0
 *     12    pgm_bit_state_msk   1
 *     08   pgm_word_state_msk   1
 *     04   read_word_state_msk   1
 *     00        pgm_error_msk   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET 0x00000004


__INLINE static uint32_t efuse_efuse_int_mask_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_int_mask_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_INT_MASK_INT_CLEAR_BIT                         ((uint32_t)0x00010000)
#define EFUSE_EFUSE_INT_MASK_INT_CLEAR_POS                         16
#define EFUSE_EFUSE_INT_MASK_PGM_BIT_STATE_MSK_BIT                 ((uint32_t)0x00001000)
#define EFUSE_EFUSE_INT_MASK_PGM_BIT_STATE_MSK_POS                 12
#define EFUSE_EFUSE_INT_MASK_PGM_WORD_STATE_MSK_BIT                ((uint32_t)0x00000100)
#define EFUSE_EFUSE_INT_MASK_PGM_WORD_STATE_MSK_POS                8
#define EFUSE_EFUSE_INT_MASK_READ_WORD_STATE_MSK_BIT               ((uint32_t)0x00000010)
#define EFUSE_EFUSE_INT_MASK_READ_WORD_STATE_MSK_POS               4
#define EFUSE_EFUSE_INT_MASK_PGM_ERROR_MSK_BIT                     ((uint32_t)0x00000001)
#define EFUSE_EFUSE_INT_MASK_PGM_ERROR_MSK_POS                     0

#define EFUSE_EFUSE_INT_MASK_INT_CLEAR_RST                         0x0
#define EFUSE_EFUSE_INT_MASK_PGM_BIT_STATE_MSK_RST                 0x1
#define EFUSE_EFUSE_INT_MASK_PGM_WORD_STATE_MSK_RST                0x1
#define EFUSE_EFUSE_INT_MASK_READ_WORD_STATE_MSK_RST               0x1
#define EFUSE_EFUSE_INT_MASK_PGM_ERROR_MSK_RST                     0x0

__INLINE static void efuse_efuse_int_mask_pack(uint8_t intclear, uint8_t pgmbitstatemsk, uint8_t pgmwordstatemsk, uint8_t readwordstatemsk, uint8_t pgmerrormsk)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)intclear << 16) | ((uint32_t)pgmbitstatemsk << 12) | ((uint32_t)pgmwordstatemsk << 8) | ((uint32_t)readwordstatemsk << 4) | ((uint32_t)pgmerrormsk << 0));
}

__INLINE static void efuse_efuse_int_mask_unpack(uint8_t* intclear, uint8_t* pgmbitstatemsk, uint8_t* pgmwordstatemsk, uint8_t* readwordstatemsk, uint8_t* pgmerrormsk)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *intclear = (localVal & ((uint32_t)0x00010000)) >> 16;
    *pgmbitstatemsk = (localVal & ((uint32_t)0x00001000)) >> 12;
    *pgmwordstatemsk = (localVal & ((uint32_t)0x00000100)) >> 8;
    *readwordstatemsk = (localVal & ((uint32_t)0x00000010)) >> 4;
    *pgmerrormsk = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t efuse_efuse_int_mask_int_clear_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void efuse_efuse_int_mask_int_clear_setf(uint8_t intclear)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)intclear << 16));
}

__INLINE static uint8_t efuse_efuse_int_mask_pgm_bit_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void efuse_efuse_int_mask_pgm_bit_state_msk_setf(uint8_t pgmbitstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)pgmbitstatemsk << 12));
}

__INLINE static uint8_t efuse_efuse_int_mask_pgm_word_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void efuse_efuse_int_mask_pgm_word_state_msk_setf(uint8_t pgmwordstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)pgmwordstatemsk << 8));
}

__INLINE static uint8_t efuse_efuse_int_mask_read_word_state_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void efuse_efuse_int_mask_read_word_state_msk_setf(uint8_t readwordstatemsk)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)readwordstatemsk << 4));
}

__INLINE static uint8_t efuse_efuse_int_mask_pgm_error_msk_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void efuse_efuse_int_mask_pgm_error_msk_setf(uint8_t pgmerrormsk)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_INT_MASK_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)pgmerrormsk << 0));
}

 /**
 * @brief EFUSE_PGM_DATA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00       efuse_pgm_data   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET 0x00000008


__INLINE static uint32_t efuse_efuse_pgm_data_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgm_data_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGM_DATA_EFUSE_PGM_DATA_MASK                   ((uint32_t)0xFFFFFFFF)
#define EFUSE_EFUSE_PGM_DATA_EFUSE_PGM_DATA_LSB                    0
#define EFUSE_EFUSE_PGM_DATA_EFUSE_PGM_DATA_WIDTH                  ((uint32_t)0x00000020)

#define EFUSE_EFUSE_PGM_DATA_EFUSE_PGM_DATA_RST                    0x0

__INLINE static void efuse_efuse_pgm_data_pack(uint32_t efusepgmdata)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusepgmdata << 0));
}

__INLINE static void efuse_efuse_pgm_data_unpack(uint8_t* efusepgmdata)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusepgmdata = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t efuse_efuse_pgm_data_efuse_pgm_data_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void efuse_efuse_pgm_data_efuse_pgm_data_setf(uint32_t efusepgmdata)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_DATA_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusepgmdata << 0);
}

 /**
 * @brief EFUSE_ADDR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08             wordmode   0
 *  06:00           efuse_addr   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET 0x0000000C


__INLINE static uint32_t efuse_efuse_addr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_addr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_ADDR_WORDMODE_BIT                          ((uint32_t)0x00000100)
#define EFUSE_EFUSE_ADDR_WORDMODE_POS                          8
#define EFUSE_EFUSE_ADDR_EFUSE_ADDR_MASK                       ((uint32_t)0x0000007F)
#define EFUSE_EFUSE_ADDR_EFUSE_ADDR_LSB                        0
#define EFUSE_EFUSE_ADDR_EFUSE_ADDR_WIDTH                      ((uint32_t)0x00000007)

#define EFUSE_EFUSE_ADDR_WORDMODE_RST                          0x0
#define EFUSE_EFUSE_ADDR_EFUSE_ADDR_RST                        0x0

__INLINE static void efuse_efuse_addr_pack(uint8_t wordmode, uint8_t efuseaddr)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)wordmode << 8) | ((uint32_t)efuseaddr << 0));
}

__INLINE static void efuse_efuse_addr_unpack(uint8_t* wordmode, uint8_t* efuseaddr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *wordmode = (localVal & ((uint32_t)0x00000100)) >> 8;
    *efuseaddr = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t efuse_efuse_addr_wordmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void efuse_efuse_addr_wordmode_setf(uint8_t wordmode)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)wordmode << 8));
}

__INLINE static uint8_t efuse_efuse_addr_efuse_addr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void efuse_efuse_addr_efuse_addr_setf(uint8_t efuseaddr)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_ADDR_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)efuseaddr << 0));
}

 /**
 * @brief EFUSE_DATA_NUMBER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00    efuse_data_number   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET 0x00000010


__INLINE static uint32_t efuse_efuse_data_number_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_data_number_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_MASK                ((uint32_t)0x00000003)
#define EFUSE_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_LSB                 0
#define EFUSE_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_WIDTH               ((uint32_t)0x00000002)

#define EFUSE_EFUSE_DATA_NUMBER_EFUSE_DATA_NUMBER_RST                 0x0

__INLINE static void efuse_efuse_data_number_pack(uint8_t efusedatanumber)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusedatanumber << 0));
}

__INLINE static void efuse_efuse_data_number_unpack(uint8_t* efusedatanumber)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusedatanumber = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t efuse_efuse_data_number_efuse_data_number_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void efuse_efuse_data_number_efuse_data_number_setf(uint8_t efusedatanumber)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DATA_NUMBER_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusedatanumber << 0);
}

 /**
 * @brief EFUSE_READ_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00        efuse_read_en   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_EN_OFFSET 0x00000014


__INLINE static uint32_t efuse_efuse_read_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_EN_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_read_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_READ_EN_EFUSE_READ_EN_BIT                     ((uint32_t)0x00000001)
#define EFUSE_EFUSE_READ_EN_EFUSE_READ_EN_POS                     0

#define EFUSE_EFUSE_READ_EN_EFUSE_READ_EN_RST                     0x0

__INLINE static void efuse_efuse_read_en_pack(uint8_t efusereaden)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusereaden << 0));
}

__INLINE static void efuse_efuse_read_en_efuse_read_en_setf(uint8_t efusereaden)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusereaden << 0);
}

 /**
 * @brief EFUSE_PGM_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00         efuse_pgm_en   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGM_EN_OFFSET 0x00000018


__INLINE static uint32_t efuse_efuse_pgm_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_EN_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgm_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGM_EN_EFUSE_PGM_EN_BIT                      ((uint32_t)0x00000001)
#define EFUSE_EFUSE_PGM_EN_EFUSE_PGM_EN_POS                      0

#define EFUSE_EFUSE_PGM_EN_EFUSE_PGM_EN_RST                      0x0

__INLINE static void efuse_efuse_pgm_en_pack(uint8_t efusepgmen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusepgmen << 0));
}

__INLINE static void efuse_efuse_pgm_en_efuse_pgm_en_setf(uint8_t efusepgmen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_EN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusepgmen << 0);
}

 /**
 * @brief EFUSE_PGM_REQ register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:00        efuse_pgm_req   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGM_REQ_OFFSET 0x0000001C


__INLINE static uint32_t efuse_efuse_pgm_req_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_REQ_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgm_req_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_REQ_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGM_REQ_EFUSE_PGM_REQ_MASK                    ((uint32_t)0x0000FFFF)
#define EFUSE_EFUSE_PGM_REQ_EFUSE_PGM_REQ_LSB                     0
#define EFUSE_EFUSE_PGM_REQ_EFUSE_PGM_REQ_WIDTH                   ((uint32_t)0x00000010)

#define EFUSE_EFUSE_PGM_REQ_EFUSE_PGM_REQ_RST                     0x0

__INLINE static void efuse_efuse_pgm_req_pack(uint16_t efusepgmreq)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_REQ_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusepgmreq << 0));
}

__INLINE static void efuse_efuse_pgm_req_efuse_pgm_req_setf(uint16_t efusepgmreq)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_REQ_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusepgmreq << 0);
}

 /**
 * @brief MODE_CHOOSE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00            soft_mode   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET 0x00000020


__INLINE static uint32_t efuse_mode_choose_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_mode_choose_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_MODE_CHOOSE_SOFT_MODE_BIT                         ((uint32_t)0x00000001)
#define EFUSE_MODE_CHOOSE_SOFT_MODE_POS                         0

#define EFUSE_MODE_CHOOSE_SOFT_MODE_RST                         0x0

__INLINE static void efuse_mode_choose_pack(uint8_t softmode)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)softmode << 0));
}

__INLINE static void efuse_mode_choose_unpack(uint8_t* softmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *softmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t efuse_mode_choose_soft_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void efuse_mode_choose_soft_mode_setf(uint8_t softmode)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_MODE_CHOOSE_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)softmode << 0);
}

 /**
 * @brief EFUSE_SECURITY register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00             security   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET 0x00000024


__INLINE static uint32_t efuse_efuse_security_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_security_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_SECURITY_SECURITY_MASK                         ((uint32_t)0x0000000F)
#define EFUSE_EFUSE_SECURITY_SECURITY_LSB                          0
#define EFUSE_EFUSE_SECURITY_SECURITY_WIDTH                        ((uint32_t)0x00000004)

#define EFUSE_EFUSE_SECURITY_SECURITY_RST                          0x0

__INLINE static void efuse_efuse_security_pack(uint8_t security)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)security << 0));
}

__INLINE static void efuse_efuse_security_unpack(uint8_t* security)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *security = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t efuse_efuse_security_security_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void efuse_efuse_security_security_setf(uint8_t security)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_SECURITY_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)security << 0);
}

 /**
 * @brief EFUSE_READ_DATA3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00     efuse_read_data3   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_DATA3_OFFSET 0x00000050


__INLINE static uint32_t efuse_efuse_read_data3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA3_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

// field definitions
#define EFUSE_EFUSE_READ_DATA3_EFUSE_READ_DATA3_MASK                 ((uint32_t)0xFFFFFFFF)
#define EFUSE_EFUSE_READ_DATA3_EFUSE_READ_DATA3_LSB                  0
#define EFUSE_EFUSE_READ_DATA3_EFUSE_READ_DATA3_WIDTH                ((uint32_t)0x00000020)

#define EFUSE_EFUSE_READ_DATA3_EFUSE_READ_DATA3_RST                  0x0

__INLINE static void efuse_efuse_read_data3_unpack(uint8_t* efusereaddata3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA3_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusereaddata3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t efuse_efuse_read_data3_efuse_read_data3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA3_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief EFUSE_READ_DATA2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00     efuse_read_data2   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_DATA2_OFFSET 0x00000054


__INLINE static uint32_t efuse_efuse_read_data2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA2_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

// field definitions
#define EFUSE_EFUSE_READ_DATA2_EFUSE_READ_DATA2_MASK                 ((uint32_t)0xFFFFFFFF)
#define EFUSE_EFUSE_READ_DATA2_EFUSE_READ_DATA2_LSB                  0
#define EFUSE_EFUSE_READ_DATA2_EFUSE_READ_DATA2_WIDTH                ((uint32_t)0x00000020)

#define EFUSE_EFUSE_READ_DATA2_EFUSE_READ_DATA2_RST                  0x0

__INLINE static void efuse_efuse_read_data2_unpack(uint8_t* efusereaddata2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA2_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusereaddata2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t efuse_efuse_read_data2_efuse_read_data2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA2_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief EFUSE_READ_DATA1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00     efuse_read_data1   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_DATA1_OFFSET 0x00000058


__INLINE static uint32_t efuse_efuse_read_data1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

// field definitions
#define EFUSE_EFUSE_READ_DATA1_EFUSE_READ_DATA1_MASK                 ((uint32_t)0xFFFFFFFF)
#define EFUSE_EFUSE_READ_DATA1_EFUSE_READ_DATA1_LSB                  0
#define EFUSE_EFUSE_READ_DATA1_EFUSE_READ_DATA1_WIDTH                ((uint32_t)0x00000020)

#define EFUSE_EFUSE_READ_DATA1_EFUSE_READ_DATA1_RST                  0x0

__INLINE static void efuse_efuse_read_data1_unpack(uint8_t* efusereaddata1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusereaddata1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t efuse_efuse_read_data1_efuse_read_data1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief EFUSE_READ_DATA0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00     efuse_read_data0   0b0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_DATA0_OFFSET 0x0000005C


__INLINE static uint32_t efuse_efuse_read_data0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

// field definitions
#define EFUSE_EFUSE_READ_DATA0_EFUSE_READ_DATA0_MASK                 ((uint32_t)0xFFFFFFFF)
#define EFUSE_EFUSE_READ_DATA0_EFUSE_READ_DATA0_LSB                  0
#define EFUSE_EFUSE_READ_DATA0_EFUSE_READ_DATA0_WIDTH                ((uint32_t)0x00000020)

#define EFUSE_EFUSE_READ_DATA0_EFUSE_READ_DATA0_RST                  0x0

__INLINE static void efuse_efuse_read_data0_unpack(uint8_t* efusereaddata0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *efusereaddata0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t efuse_efuse_read_data0_efuse_read_data0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_DATA0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief EFUSE_PGM_TIMING0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:20               Tsp_rd   0b3
 *  19:12          Tsp_pg_avdd   0b17
 *  11:08              Tsp_pgm   0b2
 *  06:00                 Tpgm   0b64
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET 0x00000060


__INLINE static uint32_t efuse_efuse_pgm_timing0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgm_timing0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGM_TIMING0_TSP_RD_MASK                           ((uint32_t)0x00F00000)
#define EFUSE_EFUSE_PGM_TIMING0_TSP_RD_LSB                            20
#define EFUSE_EFUSE_PGM_TIMING0_TSP_RD_WIDTH                          ((uint32_t)0x00000004)
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PG_AVDD_MASK                      ((uint32_t)0x000FF000)
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PG_AVDD_LSB                       12
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PG_AVDD_WIDTH                     ((uint32_t)0x00000008)
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PGM_MASK                          ((uint32_t)0x00000F00)
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PGM_LSB                           8
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PGM_WIDTH                         ((uint32_t)0x00000004)
#define EFUSE_EFUSE_PGM_TIMING0_TPGM_MASK                             ((uint32_t)0x0000007F)
#define EFUSE_EFUSE_PGM_TIMING0_TPGM_LSB                              0
#define EFUSE_EFUSE_PGM_TIMING0_TPGM_WIDTH                            ((uint32_t)0x00000007)

#define EFUSE_EFUSE_PGM_TIMING0_TSP_RD_RST                            0x3
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PG_AVDD_RST                       0x17
#define EFUSE_EFUSE_PGM_TIMING0_TSP_PGM_RST                           0x2
#define EFUSE_EFUSE_PGM_TIMING0_TPGM_RST                              0x64

__INLINE static void efuse_efuse_pgm_timing0_pack(uint8_t tsprd, uint8_t tsppgavdd, uint8_t tsppgm, uint8_t tpgm)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)tsprd << 20) | ((uint32_t)tsppgavdd << 12) | ((uint32_t)tsppgm << 8) | ((uint32_t)tpgm << 0));
}

__INLINE static void efuse_efuse_pgm_timing0_unpack(uint8_t* tsprd, uint8_t* tsppgavdd, uint8_t* tsppgm, uint8_t* tpgm)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *tsprd = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *tsppgavdd = (localVal & ((uint32_t)0x000FF000)) >> 12;
    *tsppgm = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *tpgm = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t efuse_efuse_pgm_timing0_tsp_rd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void efuse_efuse_pgm_timing0_tsp_rd_setf(uint8_t tsprd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)tsprd << 20));
}

__INLINE static uint8_t efuse_efuse_pgm_timing0_tsp_pg_avdd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FF000)) >> 12);
}

__INLINE static void efuse_efuse_pgm_timing0_tsp_pg_avdd_setf(uint8_t tsppgavdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x000FF000)) | ((uint32_t)tsppgavdd << 12));
}

__INLINE static uint8_t efuse_efuse_pgm_timing0_tsp_pgm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void efuse_efuse_pgm_timing0_tsp_pgm_setf(uint8_t tsppgm)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)tsppgm << 8));
}

__INLINE static uint8_t efuse_efuse_pgm_timing0_tpgm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void efuse_efuse_pgm_timing0_tpgm_setf(uint8_t tpgm)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING0_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)tpgm << 0));
}

 /**
 * @brief EFUSE_PGM_TIMING1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:12              Thp_pgm   0b2
 *  11:08               Thp_rd   0b3
 *  07:00          Thp_pg_avdd   0b17
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET 0x00000064


__INLINE static uint32_t efuse_efuse_pgm_timing1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgm_timing1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGM_TIMING1_THP_PGM_MASK                          ((uint32_t)0x000FF000)
#define EFUSE_EFUSE_PGM_TIMING1_THP_PGM_LSB                           12
#define EFUSE_EFUSE_PGM_TIMING1_THP_PGM_WIDTH                         ((uint32_t)0x00000008)
#define EFUSE_EFUSE_PGM_TIMING1_THP_RD_MASK                           ((uint32_t)0x00000F00)
#define EFUSE_EFUSE_PGM_TIMING1_THP_RD_LSB                            8
#define EFUSE_EFUSE_PGM_TIMING1_THP_RD_WIDTH                          ((uint32_t)0x00000004)
#define EFUSE_EFUSE_PGM_TIMING1_THP_PG_AVDD_MASK                      ((uint32_t)0x000000FF)
#define EFUSE_EFUSE_PGM_TIMING1_THP_PG_AVDD_LSB                       0
#define EFUSE_EFUSE_PGM_TIMING1_THP_PG_AVDD_WIDTH                     ((uint32_t)0x00000008)

#define EFUSE_EFUSE_PGM_TIMING1_THP_PGM_RST                           0x2
#define EFUSE_EFUSE_PGM_TIMING1_THP_RD_RST                            0x3
#define EFUSE_EFUSE_PGM_TIMING1_THP_PG_AVDD_RST                       0x17

__INLINE static void efuse_efuse_pgm_timing1_pack(uint8_t thppgm, uint8_t thprd, uint8_t thppgavdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)thppgm << 12) | ((uint32_t)thprd << 8) | ((uint32_t)thppgavdd << 0));
}

__INLINE static void efuse_efuse_pgm_timing1_unpack(uint8_t* thppgm, uint8_t* thprd, uint8_t* thppgavdd)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *thppgm = (localVal & ((uint32_t)0x000FF000)) >> 12;
    *thprd = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *thppgavdd = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t efuse_efuse_pgm_timing1_thp_pgm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FF000)) >> 12);
}

__INLINE static void efuse_efuse_pgm_timing1_thp_pgm_setf(uint8_t thppgm)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x000FF000)) | ((uint32_t)thppgm << 12));
}

__INLINE static uint8_t efuse_efuse_pgm_timing1_thp_rd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void efuse_efuse_pgm_timing1_thp_rd_setf(uint8_t thprd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)thprd << 8));
}

__INLINE static uint8_t efuse_efuse_pgm_timing1_thp_pg_avdd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void efuse_efuse_pgm_timing1_thp_pg_avdd_setf(uint8_t thppgavdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGM_TIMING1_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)thppgavdd << 0));
}

 /**
 * @brief EFUSE_READ_TIMING register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  21:20                  Tsq   0b2
 *  19:16             Tsr_dvdd   0b3
 *  15:12               Tsr_rd   0b3
 *  11:08                  Trd   0b3
 *  07:04               Thr_rd   0b4
 *  03:00             Thr_dvdd   0b3
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET 0x00000068


__INLINE static uint32_t efuse_efuse_read_timing_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_read_timing_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_READ_TIMING_TSQ_MASK                              ((uint32_t)0x00300000)
#define EFUSE_EFUSE_READ_TIMING_TSQ_LSB                               20
#define EFUSE_EFUSE_READ_TIMING_TSQ_WIDTH                             ((uint32_t)0x00000002)
#define EFUSE_EFUSE_READ_TIMING_TSR_DVDD_MASK                         ((uint32_t)0x000F0000)
#define EFUSE_EFUSE_READ_TIMING_TSR_DVDD_LSB                          16
#define EFUSE_EFUSE_READ_TIMING_TSR_DVDD_WIDTH                        ((uint32_t)0x00000004)
#define EFUSE_EFUSE_READ_TIMING_TSR_RD_MASK                           ((uint32_t)0x0000F000)
#define EFUSE_EFUSE_READ_TIMING_TSR_RD_LSB                            12
#define EFUSE_EFUSE_READ_TIMING_TSR_RD_WIDTH                          ((uint32_t)0x00000004)
#define EFUSE_EFUSE_READ_TIMING_TRD_MASK                              ((uint32_t)0x00000F00)
#define EFUSE_EFUSE_READ_TIMING_TRD_LSB                               8
#define EFUSE_EFUSE_READ_TIMING_TRD_WIDTH                             ((uint32_t)0x00000004)
#define EFUSE_EFUSE_READ_TIMING_THR_RD_MASK                           ((uint32_t)0x000000F0)
#define EFUSE_EFUSE_READ_TIMING_THR_RD_LSB                            4
#define EFUSE_EFUSE_READ_TIMING_THR_RD_WIDTH                          ((uint32_t)0x00000004)
#define EFUSE_EFUSE_READ_TIMING_THR_DVDD_MASK                         ((uint32_t)0x0000000F)
#define EFUSE_EFUSE_READ_TIMING_THR_DVDD_LSB                          0
#define EFUSE_EFUSE_READ_TIMING_THR_DVDD_WIDTH                        ((uint32_t)0x00000004)

#define EFUSE_EFUSE_READ_TIMING_TSQ_RST                               0x2
#define EFUSE_EFUSE_READ_TIMING_TSR_DVDD_RST                          0x3
#define EFUSE_EFUSE_READ_TIMING_TSR_RD_RST                            0x3
#define EFUSE_EFUSE_READ_TIMING_TRD_RST                               0x3
#define EFUSE_EFUSE_READ_TIMING_THR_RD_RST                            0x4
#define EFUSE_EFUSE_READ_TIMING_THR_DVDD_RST                          0x3

__INLINE static void efuse_efuse_read_timing_pack(uint8_t tsq, uint8_t tsrdvdd, uint8_t tsrrd, uint8_t trd, uint8_t thrrd, uint8_t thrdvdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)tsq << 20) | ((uint32_t)tsrdvdd << 16) | ((uint32_t)tsrrd << 12) | ((uint32_t)trd << 8) | ((uint32_t)thrrd << 4) | ((uint32_t)thrdvdd << 0));
}

__INLINE static void efuse_efuse_read_timing_unpack(uint8_t* tsq, uint8_t* tsrdvdd, uint8_t* tsrrd, uint8_t* trd, uint8_t* thrrd, uint8_t* thrdvdd)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);

    *tsq = (localVal & ((uint32_t)0x00300000)) >> 20;
    *tsrdvdd = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *tsrrd = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *trd = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *thrrd = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *thrdvdd = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t efuse_efuse_read_timing_tsq_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00300000)) >> 20);
}

__INLINE static void efuse_efuse_read_timing_tsq_setf(uint8_t tsq)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00300000)) | ((uint32_t)tsq << 20));
}

__INLINE static uint8_t efuse_efuse_read_timing_tsr_dvdd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void efuse_efuse_read_timing_tsr_dvdd_setf(uint8_t tsrdvdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)tsrdvdd << 16));
}

__INLINE static uint8_t efuse_efuse_read_timing_tsr_rd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void efuse_efuse_read_timing_tsr_rd_setf(uint8_t tsrrd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)tsrrd << 12));
}

__INLINE static uint8_t efuse_efuse_read_timing_trd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void efuse_efuse_read_timing_trd_setf(uint8_t trd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)trd << 8));
}

__INLINE static uint8_t efuse_efuse_read_timing_thr_rd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void efuse_efuse_read_timing_thr_rd_setf(uint8_t thrrd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)thrrd << 4));
}

__INLINE static uint8_t efuse_efuse_read_timing_thr_dvdd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void efuse_efuse_read_timing_thr_dvdd_setf(uint8_t thrdvdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_READ_TIMING_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)thrdvdd << 0));
}

 /**
 * @brief EFUSE_DVDD register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00           efuse_dvdd   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_DVDD_OFFSET 0x0000006C


__INLINE static uint32_t efuse_efuse_dvdd_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_DVDD_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_dvdd_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_DVDD_EFUSE_DVDD_BIT                        ((uint32_t)0x00000001)
#define EFUSE_EFUSE_DVDD_EFUSE_DVDD_POS                        0

#define EFUSE_EFUSE_DVDD_EFUSE_DVDD_RST                        0x0

__INLINE static void efuse_efuse_dvdd_pack(uint8_t efusedvdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusedvdd << 0));
}

__INLINE static void efuse_efuse_dvdd_efuse_dvdd_setf(uint8_t efusedvdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_DVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusedvdd << 0);
}

 /**
 * @brief EFUSE_AVDD register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00           efuse_avdd   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_AVDD_OFFSET 0x00000070


__INLINE static uint32_t efuse_efuse_avdd_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_AVDD_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_avdd_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_AVDD_EFUSE_AVDD_BIT                        ((uint32_t)0x00000001)
#define EFUSE_EFUSE_AVDD_EFUSE_AVDD_POS                        0

#define EFUSE_EFUSE_AVDD_EFUSE_AVDD_RST                        0x0

__INLINE static void efuse_efuse_avdd_pack(uint8_t efuseavdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efuseavdd << 0));
}

__INLINE static void efuse_efuse_avdd_efuse_avdd_setf(uint8_t efuseavdd)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AVDD_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efuseavdd << 0);
}

 /**
 * @brief EFUSE_PGMEN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          efuse_pgmen   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_PGMEN_OFFSET 0x00000074


__INLINE static uint32_t efuse_efuse_pgmen_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_PGMEN_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_pgmen_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGMEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_PGMEN_EFUSE_PGMEN_BIT                       ((uint32_t)0x00000001)
#define EFUSE_EFUSE_PGMEN_EFUSE_PGMEN_POS                       0

#define EFUSE_EFUSE_PGMEN_EFUSE_PGMEN_RST                       0x0

__INLINE static void efuse_efuse_pgmen_pack(uint8_t efusepgmen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGMEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efusepgmen << 0));
}

__INLINE static void efuse_efuse_pgmen_efuse_pgmen_setf(uint8_t efusepgmen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_PGMEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efusepgmen << 0);
}

 /**
 * @brief EFUSE_RDEN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00           efuse_rden   1
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_RDEN_OFFSET 0x00000078


__INLINE static uint32_t efuse_efuse_rden_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_RDEN_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_rden_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_RDEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_RDEN_EFUSE_RDEN_BIT                        ((uint32_t)0x00000001)
#define EFUSE_EFUSE_RDEN_EFUSE_RDEN_POS                        0

#define EFUSE_EFUSE_RDEN_EFUSE_RDEN_RST                        0x1

__INLINE static void efuse_efuse_rden_pack(uint8_t efuserden)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_RDEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efuserden << 0));
}

__INLINE static void efuse_efuse_rden_efuse_rden_setf(uint8_t efuserden)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_RDEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efuserden << 0);
}

 /**
 * @brief EFUSE_AEN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00            efuse_aen   0
 * </pre>
 */
#define FEMTO_REG_EFUSE_EFUSE_AEN_OFFSET 0x0000007C


__INLINE static uint32_t efuse_efuse_aen_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_EFUSE_EFUSE_AEN_OFFSET + FEMTO_REG_EFUSE_BASE_ADDR);
}

__INLINE static void efuse_efuse_aen_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, value);
}

// field definitions
#define EFUSE_EFUSE_AEN_EFUSE_AEN_BIT                         ((uint32_t)0x00000001)
#define EFUSE_EFUSE_AEN_EFUSE_AEN_POS                         0

#define EFUSE_EFUSE_AEN_EFUSE_AEN_RST                         0x0

__INLINE static void efuse_efuse_aen_pack(uint8_t efuseaen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR,  ((uint32_t)efuseaen << 0));
}

__INLINE static void efuse_efuse_aen_efuse_aen_setf(uint8_t efuseaen)
{
    _FEMTO_REG_WR(FEMTO_REG_EFUSE_EFUSE_AEN_OFFSET+ FEMTO_REG_EFUSE_BASE_ADDR, (uint32_t)efuseaen << 0);
}


#endif // _FEMTO_REG_EFUSE_H_

