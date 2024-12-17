#ifndef _FEMTO_REG_AES_H_
#define _FEMTO_REG_AES_H_

#define FEMTO_REG_AES_COUNT 21

#define FEMTO_REG_AES_BASE_ADDR 0x40040000

#define FEMTO_REG_AES_SIZE 0x00000100


 /**
 * @brief AES_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00               Enable   0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG0_OFFSET 0x00000000


__INLINE static uint32_t aes_aes_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG0_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG0_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG0_ENABLE_BIT                            ((uint32_t)0x00000001)
#define AES_AES_REG0_ENABLE_POS                            0

#define AES_AES_REG0_ENABLE_RST                            0x0

__INLINE static void aes_aes_reg0_pack(uint8_t enable)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG0_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)enable << 0));
}

__INLINE static void aes_aes_reg0_unpack(uint8_t* enable)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG0_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *enable = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aes_aes_reg0_enable_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG0_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aes_aes_reg0_enable_setf(uint8_t enable)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG0_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)enable << 0);
}

 /**
 * @brief AES_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04      Aes_single_mode   0
 *     03            Code_mode   0
 *  02:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG1_OFFSET 0x00000004


__INLINE static uint32_t aes_aes_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG1_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG1_AES_SINGLE_MODE_BIT                   ((uint32_t)0x00000010)
#define AES_AES_REG1_AES_SINGLE_MODE_POS                   4
#define AES_AES_REG1_CODE_MODE_BIT                         ((uint32_t)0x00000008)
#define AES_AES_REG1_CODE_MODE_POS                         3
#define AES_AES_REG1_RESERVED_MASK                         ((uint32_t)0x00000007)
#define AES_AES_REG1_RESERVED_LSB                          0
#define AES_AES_REG1_RESERVED_WIDTH                        ((uint32_t)0x00000003)

#define AES_AES_REG1_AES_SINGLE_MODE_RST                   0x0
#define AES_AES_REG1_CODE_MODE_RST                         0x0
#define AES_AES_REG1_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg1_pack(uint8_t aessinglemode, uint8_t codemode)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG1_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)aessinglemode << 4) | ((uint32_t)codemode << 3));
}

__INLINE static void aes_aes_reg1_unpack(uint8_t* aessinglemode, uint8_t* codemode, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *aessinglemode = (localVal & ((uint32_t)0x00000010)) >> 4;
    *codemode = (localVal & ((uint32_t)0x00000008)) >> 3;
    *reserved = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t aes_aes_reg1_aes_single_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void aes_aes_reg1_aes_single_mode_setf(uint8_t aessinglemode)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG1_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)aessinglemode << 4));
}

__INLINE static uint8_t aes_aes_reg1_code_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void aes_aes_reg1_code_mode_setf(uint8_t codemode)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG1_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AES_AES_REG1_OFFSET + FEMTO_REG_AES_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)codemode << 3));
}

 /**
 * @brief AES_REG2 register definition
 */
#define FEMTO_REG_AES_AES_REG2_OFFSET 0x00000008


__INLINE static uint32_t aes_aes_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG2_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG2_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG2_RESERVED_LSB                          0
#define AES_AES_REG2_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define AES_AES_REG2_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg2_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG2_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief AES_REG3 register definition
 */
#define FEMTO_REG_AES_AES_REG3_OFFSET 0x0000000C


__INLINE static uint32_t aes_aes_reg3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG3_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG3_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG3_RESERVED_LSB                          0
#define AES_AES_REG3_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define AES_AES_REG3_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg3_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG3_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief AES_REG4 register definition
 */
#define FEMTO_REG_AES_AES_REG4_OFFSET 0x00000010


__INLINE static uint32_t aes_aes_reg4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG4_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG4_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG4_RESERVED_LSB                          0
#define AES_AES_REG4_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define AES_AES_REG4_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg4_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG4_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief AES_REG5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          single_done   0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG5_OFFSET 0x00000014


__INLINE static uint32_t aes_aes_reg5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG5_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG5_SINGLE_DONE_BIT                       ((uint32_t)0x00000001)
#define AES_AES_REG5_SINGLE_DONE_POS                       0

#define AES_AES_REG5_SINGLE_DONE_RST                       0x0

__INLINE static void aes_aes_reg5_unpack(uint8_t* singledone)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG5_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *singledone = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aes_aes_reg5_single_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG5_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief AES_REG6 register definition
 */
#define FEMTO_REG_AES_AES_REG6_OFFSET 0x00000018


__INLINE static uint32_t aes_aes_reg6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG6_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG6_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG6_RESERVED_LSB                          0
#define AES_AES_REG6_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define AES_AES_REG6_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg6_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG6_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief AES_REG7 register definition
 */
#define FEMTO_REG_AES_AES_REG7_OFFSET 0x0000001C


__INLINE static uint32_t aes_aes_reg7_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG7_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG7_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG7_RESERVED_LSB                          0
#define AES_AES_REG7_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define AES_AES_REG7_RESERVED_RST                          0x0

__INLINE static void aes_aes_reg7_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG7_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief AES_REG8 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 Key0   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG8_OFFSET 0x00000020


__INLINE static uint32_t aes_aes_reg8_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG8_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg8_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG8_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG8_KEY0_MASK                             ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG8_KEY0_LSB                              0
#define AES_AES_REG8_KEY0_WIDTH                            ((uint32_t)0x00000020)

#define AES_AES_REG8_KEY0_RST                              0x0

__INLINE static void aes_aes_reg8_pack(uint32_t key0)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG8_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)key0 << 0));
}

__INLINE static void aes_aes_reg8_unpack(uint8_t* key0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG8_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *key0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg8_key0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG8_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg8_key0_setf(uint32_t key0)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG8_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)key0 << 0);
}

 /**
 * @brief AES_REG9 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 Key1   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG9_OFFSET 0x00000024


__INLINE static uint32_t aes_aes_reg9_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG9_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg9_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG9_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG9_KEY1_MASK                             ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG9_KEY1_LSB                              0
#define AES_AES_REG9_KEY1_WIDTH                            ((uint32_t)0x00000020)

#define AES_AES_REG9_KEY1_RST                              0x0

__INLINE static void aes_aes_reg9_pack(uint32_t key1)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG9_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)key1 << 0));
}

__INLINE static void aes_aes_reg9_unpack(uint8_t* key1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG9_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *key1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg9_key1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG9_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg9_key1_setf(uint32_t key1)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG9_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)key1 << 0);
}

 /**
 * @brief AES_REG10 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 Key2   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG10_OFFSET 0x00000028


__INLINE static uint32_t aes_aes_reg10_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG10_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg10_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG10_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG10_KEY2_MASK                             ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG10_KEY2_LSB                              0
#define AES_AES_REG10_KEY2_WIDTH                            ((uint32_t)0x00000020)

#define AES_AES_REG10_KEY2_RST                              0x0

__INLINE static void aes_aes_reg10_pack(uint32_t key2)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG10_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)key2 << 0));
}

__INLINE static void aes_aes_reg10_unpack(uint8_t* key2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG10_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *key2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg10_key2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG10_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg10_key2_setf(uint32_t key2)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG10_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)key2 << 0);
}

 /**
 * @brief AES_REG11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 Key3   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG11_OFFSET 0x0000002C


__INLINE static uint32_t aes_aes_reg11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG11_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG11_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG11_KEY3_MASK                             ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG11_KEY3_LSB                              0
#define AES_AES_REG11_KEY3_WIDTH                            ((uint32_t)0x00000020)

#define AES_AES_REG11_KEY3_RST                              0x0

__INLINE static void aes_aes_reg11_pack(uint32_t key3)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG11_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)key3 << 0));
}

__INLINE static void aes_aes_reg11_unpack(uint8_t* key3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG11_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *key3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg11_key3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG11_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg11_key3_setf(uint32_t key3)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG11_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)key3 << 0);
}

 /**
 * @brief AES_REG12 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00               Nonce0   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG12_OFFSET 0x00000030


__INLINE static uint32_t aes_aes_reg12_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG12_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg12_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG12_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG12_NONCE0_MASK                           ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG12_NONCE0_LSB                            0
#define AES_AES_REG12_NONCE0_WIDTH                          ((uint32_t)0x00000020)

#define AES_AES_REG12_NONCE0_RST                            0x0

__INLINE static void aes_aes_reg12_pack(uint32_t nonce0)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG12_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)nonce0 << 0));
}

__INLINE static void aes_aes_reg12_unpack(uint8_t* nonce0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG12_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *nonce0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg12_nonce0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG12_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg12_nonce0_setf(uint32_t nonce0)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG12_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)nonce0 << 0);
}

 /**
 * @brief AES_REG13 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00               Nonce1   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG13_OFFSET 0x00000034


__INLINE static uint32_t aes_aes_reg13_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG13_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg13_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG13_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG13_NONCE1_MASK                           ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG13_NONCE1_LSB                            0
#define AES_AES_REG13_NONCE1_WIDTH                          ((uint32_t)0x00000020)

#define AES_AES_REG13_NONCE1_RST                            0x0

__INLINE static void aes_aes_reg13_pack(uint32_t nonce1)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG13_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)nonce1 << 0));
}

__INLINE static void aes_aes_reg13_unpack(uint8_t* nonce1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG13_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *nonce1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg13_nonce1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG13_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg13_nonce1_setf(uint32_t nonce1)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG13_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)nonce1 << 0);
}

 /**
 * @brief AES_REG14 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00               Nonce2   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG14_OFFSET 0x00000038


__INLINE static uint32_t aes_aes_reg14_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG14_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg14_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG14_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG14_NONCE2_MASK                           ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG14_NONCE2_LSB                            0
#define AES_AES_REG14_NONCE2_WIDTH                          ((uint32_t)0x00000020)

#define AES_AES_REG14_NONCE2_RST                            0x0

__INLINE static void aes_aes_reg14_pack(uint32_t nonce2)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG14_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)nonce2 << 0));
}

__INLINE static void aes_aes_reg14_unpack(uint8_t* nonce2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG14_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *nonce2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg14_nonce2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG14_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg14_nonce2_setf(uint32_t nonce2)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG14_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)nonce2 << 0);
}

 /**
 * @brief AES_REG15 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00               Nonce3   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG15_OFFSET 0x0000003C


__INLINE static uint32_t aes_aes_reg15_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG15_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg15_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG15_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG15_NONCE3_MASK                           ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG15_NONCE3_LSB                            0
#define AES_AES_REG15_NONCE3_WIDTH                          ((uint32_t)0x00000020)

#define AES_AES_REG15_NONCE3_RST                            0x0

__INLINE static void aes_aes_reg15_pack(uint32_t nonce3)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG15_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)nonce3 << 0));
}

__INLINE static void aes_aes_reg15_unpack(uint8_t* nonce3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG15_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *nonce3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg15_nonce3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG15_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg15_nonce3_setf(uint32_t nonce3)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG15_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)nonce3 << 0);
}

 /**
 * @brief AES_REG16 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              Data_o0   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG16_OFFSET 0x00000050


__INLINE static uint32_t aes_aes_reg16_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG16_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG16_DATA_O0_MASK                          ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG16_DATA_O0_LSB                           0
#define AES_AES_REG16_DATA_O0_WIDTH                         ((uint32_t)0x00000020)

#define AES_AES_REG16_DATA_O0_RST                           0x0

__INLINE static void aes_aes_reg16_unpack(uint8_t* datao0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG16_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *datao0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg16_data_o0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG16_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief AES_REG17 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              Data_o1   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG17_OFFSET 0x00000054


__INLINE static uint32_t aes_aes_reg17_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG17_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG17_DATA_O1_MASK                          ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG17_DATA_O1_LSB                           0
#define AES_AES_REG17_DATA_O1_WIDTH                         ((uint32_t)0x00000020)

#define AES_AES_REG17_DATA_O1_RST                           0x0

__INLINE static void aes_aes_reg17_unpack(uint8_t* datao1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG17_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *datao1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg17_data_o1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG17_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief AES_REG18 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              Data_o2   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG18_OFFSET 0x00000058


__INLINE static uint32_t aes_aes_reg18_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG18_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG18_DATA_O2_MASK                          ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG18_DATA_O2_LSB                           0
#define AES_AES_REG18_DATA_O2_WIDTH                         ((uint32_t)0x00000020)

#define AES_AES_REG18_DATA_O2_RST                           0x0

__INLINE static void aes_aes_reg18_unpack(uint8_t* datao2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG18_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *datao2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg18_data_o2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG18_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief AES_REG19 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              Data_o3   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG19_OFFSET 0x0000005C


__INLINE static uint32_t aes_aes_reg19_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG19_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

// field definitions
#define AES_AES_REG19_DATA_O3_MASK                          ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG19_DATA_O3_LSB                           0
#define AES_AES_REG19_DATA_O3_WIDTH                         ((uint32_t)0x00000020)

#define AES_AES_REG19_DATA_O3_RST                           0x0

__INLINE static void aes_aes_reg19_unpack(uint8_t* datao3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG19_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *datao3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg19_data_o3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG19_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief AES_REG20 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00         memory_write   0b0
 * </pre>
 */
#define FEMTO_REG_AES_AES_REG20_OFFSET 0x00000100


__INLINE static uint32_t aes_aes_reg20_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG20_OFFSET + FEMTO_REG_AES_BASE_ADDR);
}

__INLINE static void aes_aes_reg20_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG20_OFFSET+ FEMTO_REG_AES_BASE_ADDR, value);
}

// field definitions
#define AES_AES_REG20_MEMORY_WRITE_MASK                     ((uint32_t)0xFFFFFFFF)
#define AES_AES_REG20_MEMORY_WRITE_LSB                      0
#define AES_AES_REG20_MEMORY_WRITE_WIDTH                    ((uint32_t)0x00000020)

#define AES_AES_REG20_MEMORY_WRITE_RST                      0x0

__INLINE static void aes_aes_reg20_pack(uint32_t memorywrite)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG20_OFFSET+ FEMTO_REG_AES_BASE_ADDR,  ((uint32_t)memorywrite << 0));
}

__INLINE static void aes_aes_reg20_unpack(uint8_t* memorywrite)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG20_OFFSET + FEMTO_REG_AES_BASE_ADDR);

    *memorywrite = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aes_aes_reg20_memory_write_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AES_AES_REG20_OFFSET + FEMTO_REG_AES_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aes_aes_reg20_memory_write_setf(uint32_t memorywrite)
{
    _FEMTO_REG_WR(FEMTO_REG_AES_AES_REG20_OFFSET+ FEMTO_REG_AES_BASE_ADDR, (uint32_t)memorywrite << 0);
}


#endif // _FEMTO_REG_AES_H_

