#ifndef _FEMTO_REG_AON_PM_H_
#define _FEMTO_REG_AON_PM_H_

#define FEMTO_REG_AON_PM_COUNT 18

#define FEMTO_REG_AON_PM_BASE_ADDR 0x4000F000

#define FEMTO_REG_AON_PM_SIZE 0x000000EC


 /**
 * @brief PM_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          power_off_i   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG0_OFFSET 0x00000000


__INLINE static uint32_t aon_pm_pm_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG0_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG0_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG0_POWER_OFF_I_BIT                       ((uint32_t)0x00000001)
#define AON_PM_PM_REG0_POWER_OFF_I_POS                       0

#define AON_PM_PM_REG0_POWER_OFF_I_RST                       0x0

__INLINE static void aon_pm_pm_reg0_pack(uint8_t poweroffi)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG0_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)poweroffi << 0));
}

__INLINE static void aon_pm_pm_reg0_power_off_i_setf(uint8_t poweroffi)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG0_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)poweroffi << 0);
}

 /**
 * @brief PM_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          power_slp_i   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG1_OFFSET 0x00000004


__INLINE static uint32_t aon_pm_pm_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG1_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG1_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG1_POWER_SLP_I_BIT                       ((uint32_t)0x00000001)
#define AON_PM_PM_REG1_POWER_SLP_I_POS                       0

#define AON_PM_PM_REG1_POWER_SLP_I_RST                       0x0

__INLINE static void aon_pm_pm_reg1_pack(uint8_t powerslpi)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG1_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)powerslpi << 0));
}

__INLINE static void aon_pm_pm_reg1_power_slp_i_setf(uint8_t powerslpi)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG1_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)powerslpi << 0);
}

 /**
 * @brief PM_REG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31               p7_ret   0
 *  30:29              p07_pul   0b0
 *     28             P07_wu_s   0
 *     27               p6_ret   0
 *  26:25              p06_pul   0b11
 *     24             P06_wu_s   0
 *     23               p5_ret   0
 *  22:21              p05_pul   0b0
 *     20             P05_wu_s   0
 *     19               p4_ret   0
 *  18:17              p04_pul   0b0
 *     16             p04_wu_s   0
 *     15               p3_ret   0
 *  14:13              p03_pul   0b11
 *     12             p03_wu_s   0
 *     11               p2_ret   0
 *  10:09              p02_pul   0b11
 *     08             p02_wu_s   0
 *     07               p1_ret   0
 *  06:05              p01_pul   0b0
 *     04             p01_wu_s   0
 *     03              p00_ret   0
 *  02:01              p00_pul   0b0
 *     00             p00_wu_s   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG2_OFFSET 0x00000010


__INLINE static uint32_t aon_pm_pm_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG2_P7_RET_BIT                            ((uint32_t)0x80000000)
#define AON_PM_PM_REG2_P7_RET_POS                            31
#define AON_PM_PM_REG2_P07_PUL_MASK                          ((uint32_t)0x60000000)
#define AON_PM_PM_REG2_P07_PUL_LSB                           29
#define AON_PM_PM_REG2_P07_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P07_WU_S_BIT                          ((uint32_t)0x10000000)
#define AON_PM_PM_REG2_P07_WU_S_POS                          28
#define AON_PM_PM_REG2_P6_RET_BIT                            ((uint32_t)0x08000000)
#define AON_PM_PM_REG2_P6_RET_POS                            27
#define AON_PM_PM_REG2_P06_PUL_MASK                          ((uint32_t)0x06000000)
#define AON_PM_PM_REG2_P06_PUL_LSB                           25
#define AON_PM_PM_REG2_P06_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P06_WU_S_BIT                          ((uint32_t)0x01000000)
#define AON_PM_PM_REG2_P06_WU_S_POS                          24
#define AON_PM_PM_REG2_P5_RET_BIT                            ((uint32_t)0x00800000)
#define AON_PM_PM_REG2_P5_RET_POS                            23
#define AON_PM_PM_REG2_P05_PUL_MASK                          ((uint32_t)0x00600000)
#define AON_PM_PM_REG2_P05_PUL_LSB                           21
#define AON_PM_PM_REG2_P05_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P05_WU_S_BIT                          ((uint32_t)0x00100000)
#define AON_PM_PM_REG2_P05_WU_S_POS                          20
#define AON_PM_PM_REG2_P4_RET_BIT                            ((uint32_t)0x00080000)
#define AON_PM_PM_REG2_P4_RET_POS                            19
#define AON_PM_PM_REG2_P04_PUL_MASK                          ((uint32_t)0x00060000)
#define AON_PM_PM_REG2_P04_PUL_LSB                           17
#define AON_PM_PM_REG2_P04_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P04_WU_S_BIT                          ((uint32_t)0x00010000)
#define AON_PM_PM_REG2_P04_WU_S_POS                          16
#define AON_PM_PM_REG2_P3_RET_BIT                            ((uint32_t)0x00008000)
#define AON_PM_PM_REG2_P3_RET_POS                            15
#define AON_PM_PM_REG2_P03_PUL_MASK                          ((uint32_t)0x00006000)
#define AON_PM_PM_REG2_P03_PUL_LSB                           13
#define AON_PM_PM_REG2_P03_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P03_WU_S_BIT                          ((uint32_t)0x00001000)
#define AON_PM_PM_REG2_P03_WU_S_POS                          12
#define AON_PM_PM_REG2_P2_RET_BIT                            ((uint32_t)0x00000800)
#define AON_PM_PM_REG2_P2_RET_POS                            11
#define AON_PM_PM_REG2_P02_PUL_MASK                          ((uint32_t)0x00000600)
#define AON_PM_PM_REG2_P02_PUL_LSB                           9
#define AON_PM_PM_REG2_P02_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P02_WU_S_BIT                          ((uint32_t)0x00000100)
#define AON_PM_PM_REG2_P02_WU_S_POS                          8
#define AON_PM_PM_REG2_P1_RET_BIT                            ((uint32_t)0x00000080)
#define AON_PM_PM_REG2_P1_RET_POS                            7
#define AON_PM_PM_REG2_P01_PUL_MASK                          ((uint32_t)0x00000060)
#define AON_PM_PM_REG2_P01_PUL_LSB                           5
#define AON_PM_PM_REG2_P01_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P01_WU_S_BIT                          ((uint32_t)0x00000010)
#define AON_PM_PM_REG2_P01_WU_S_POS                          4
#define AON_PM_PM_REG2_P00_RET_BIT                           ((uint32_t)0x00000008)
#define AON_PM_PM_REG2_P00_RET_POS                           3
#define AON_PM_PM_REG2_P00_PUL_MASK                          ((uint32_t)0x00000006)
#define AON_PM_PM_REG2_P00_PUL_LSB                           1
#define AON_PM_PM_REG2_P00_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG2_P00_WU_S_BIT                          ((uint32_t)0x00000001)
#define AON_PM_PM_REG2_P00_WU_S_POS                          0

#define AON_PM_PM_REG2_P7_RET_RST                            0x0
#define AON_PM_PM_REG2_P07_PUL_RST                           0x0
#define AON_PM_PM_REG2_P07_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P6_RET_RST                            0x0
#define AON_PM_PM_REG2_P06_PUL_RST                           0x11
#define AON_PM_PM_REG2_P06_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P5_RET_RST                            0x0
#define AON_PM_PM_REG2_P05_PUL_RST                           0x0
#define AON_PM_PM_REG2_P05_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P4_RET_RST                            0x0
#define AON_PM_PM_REG2_P04_PUL_RST                           0x0
#define AON_PM_PM_REG2_P04_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P3_RET_RST                            0x0
#define AON_PM_PM_REG2_P03_PUL_RST                           0x11
#define AON_PM_PM_REG2_P03_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P2_RET_RST                            0x0
#define AON_PM_PM_REG2_P02_PUL_RST                           0x11
#define AON_PM_PM_REG2_P02_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P1_RET_RST                            0x0
#define AON_PM_PM_REG2_P01_PUL_RST                           0x0
#define AON_PM_PM_REG2_P01_WU_S_RST                          0x0
#define AON_PM_PM_REG2_P00_RET_RST                           0x0
#define AON_PM_PM_REG2_P00_PUL_RST                           0x0
#define AON_PM_PM_REG2_P00_WU_S_RST                          0x0

__INLINE static void aon_pm_pm_reg2_pack(uint8_t p7ret, uint8_t p07pul, uint8_t p07wus, uint8_t p6ret, uint8_t p06pul, uint8_t p06wus, uint8_t p5ret, uint8_t p05pul, uint8_t p05wus, uint8_t p4ret, uint8_t p04pul, uint8_t p04wus, uint8_t p3ret, uint8_t p03pul, uint8_t p03wus, uint8_t p2ret, uint8_t p02pul, uint8_t p02wus, uint8_t p1ret, uint8_t p01pul, uint8_t p01wus, uint8_t p00ret, uint8_t p00pul, uint8_t p00wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)p7ret << 31) | ((uint32_t)p07pul << 29) | ((uint32_t)p07wus << 28) | ((uint32_t)p6ret << 27) | ((uint32_t)p06pul << 25) | ((uint32_t)p06wus << 24) | ((uint32_t)p5ret << 23) | ((uint32_t)p05pul << 21) | ((uint32_t)p05wus << 20) | ((uint32_t)p4ret << 19) | ((uint32_t)p04pul << 17) | ((uint32_t)p04wus << 16) | ((uint32_t)p3ret << 15) | ((uint32_t)p03pul << 13) | ((uint32_t)p03wus << 12) | ((uint32_t)p2ret << 11) | ((uint32_t)p02pul << 9) | ((uint32_t)p02wus << 8) | ((uint32_t)p1ret << 7) | ((uint32_t)p01pul << 5) | ((uint32_t)p01wus << 4) | ((uint32_t)p00ret << 3) | ((uint32_t)p00pul << 1) | ((uint32_t)p00wus << 0));
}

__INLINE static void aon_pm_pm_reg2_unpack(uint8_t* p7ret, uint8_t* p07pul, uint8_t* p07wus, uint8_t* p6ret, uint8_t* p06pul, uint8_t* p06wus, uint8_t* p5ret, uint8_t* p05pul, uint8_t* p05wus, uint8_t* p4ret, uint8_t* p04pul, uint8_t* p04wus, uint8_t* p3ret, uint8_t* p03pul, uint8_t* p03wus, uint8_t* p2ret, uint8_t* p02pul, uint8_t* p02wus, uint8_t* p1ret, uint8_t* p01pul, uint8_t* p01wus, uint8_t* p00ret, uint8_t* p00pul, uint8_t* p00wus)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *p7ret = (localVal & ((uint32_t)0x80000000)) >> 31;
    *p07pul = (localVal & ((uint32_t)0x60000000)) >> 29;
    *p07wus = (localVal & ((uint32_t)0x10000000)) >> 28;
    *p6ret = (localVal & ((uint32_t)0x08000000)) >> 27;
    *p06pul = (localVal & ((uint32_t)0x06000000)) >> 25;
    *p06wus = (localVal & ((uint32_t)0x01000000)) >> 24;
    *p5ret = (localVal & ((uint32_t)0x00800000)) >> 23;
    *p05pul = (localVal & ((uint32_t)0x00600000)) >> 21;
    *p05wus = (localVal & ((uint32_t)0x00100000)) >> 20;
    *p4ret = (localVal & ((uint32_t)0x00080000)) >> 19;
    *p04pul = (localVal & ((uint32_t)0x00060000)) >> 17;
    *p04wus = (localVal & ((uint32_t)0x00010000)) >> 16;
    *p3ret = (localVal & ((uint32_t)0x00008000)) >> 15;
    *p03pul = (localVal & ((uint32_t)0x00006000)) >> 13;
    *p03wus = (localVal & ((uint32_t)0x00001000)) >> 12;
    *p2ret = (localVal & ((uint32_t)0x00000800)) >> 11;
    *p02pul = (localVal & ((uint32_t)0x00000600)) >> 9;
    *p02wus = (localVal & ((uint32_t)0x00000100)) >> 8;
    *p1ret = (localVal & ((uint32_t)0x00000080)) >> 7;
    *p01pul = (localVal & ((uint32_t)0x00000060)) >> 5;
    *p01wus = (localVal & ((uint32_t)0x00000010)) >> 4;
    *p00ret = (localVal & ((uint32_t)0x00000008)) >> 3;
    *p00pul = (localVal & ((uint32_t)0x00000006)) >> 1;
    *p00wus = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg2_p7_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void aon_pm_pm_reg2_p7_ret_setf(uint8_t p7ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)p7ret << 31));
}

__INLINE static uint8_t aon_pm_pm_reg2_p07_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x60000000)) >> 29);
}

__INLINE static void aon_pm_pm_reg2_p07_pul_setf(uint8_t p07pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x60000000)) | ((uint32_t)p07pul << 29));
}

__INLINE static uint8_t aon_pm_pm_reg2_p07_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void aon_pm_pm_reg2_p07_wu_s_setf(uint8_t p07wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)p07wus << 28));
}

__INLINE static uint8_t aon_pm_pm_reg2_p6_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void aon_pm_pm_reg2_p6_ret_setf(uint8_t p6ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)p6ret << 27));
}

__INLINE static uint8_t aon_pm_pm_reg2_p06_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void aon_pm_pm_reg2_p06_pul_setf(uint8_t p06pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)p06pul << 25));
}

__INLINE static uint8_t aon_pm_pm_reg2_p06_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void aon_pm_pm_reg2_p06_wu_s_setf(uint8_t p06wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)p06wus << 24));
}

__INLINE static uint8_t aon_pm_pm_reg2_p5_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void aon_pm_pm_reg2_p5_ret_setf(uint8_t p5ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)p5ret << 23));
}

__INLINE static uint8_t aon_pm_pm_reg2_p05_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00600000)) >> 21);
}

__INLINE static void aon_pm_pm_reg2_p05_pul_setf(uint8_t p05pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00600000)) | ((uint32_t)p05pul << 21));
}

__INLINE static uint8_t aon_pm_pm_reg2_p05_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void aon_pm_pm_reg2_p05_wu_s_setf(uint8_t p05wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)p05wus << 20));
}

__INLINE static uint8_t aon_pm_pm_reg2_p4_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void aon_pm_pm_reg2_p4_ret_setf(uint8_t p4ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)p4ret << 19));
}

__INLINE static uint8_t aon_pm_pm_reg2_p04_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00060000)) >> 17);
}

__INLINE static void aon_pm_pm_reg2_p04_pul_setf(uint8_t p04pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00060000)) | ((uint32_t)p04pul << 17));
}

__INLINE static uint8_t aon_pm_pm_reg2_p04_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void aon_pm_pm_reg2_p04_wu_s_setf(uint8_t p04wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)p04wus << 16));
}

__INLINE static uint8_t aon_pm_pm_reg2_p3_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void aon_pm_pm_reg2_p3_ret_setf(uint8_t p3ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)p3ret << 15));
}

__INLINE static uint8_t aon_pm_pm_reg2_p03_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00006000)) >> 13);
}

__INLINE static void aon_pm_pm_reg2_p03_pul_setf(uint8_t p03pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00006000)) | ((uint32_t)p03pul << 13));
}

__INLINE static uint8_t aon_pm_pm_reg2_p03_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void aon_pm_pm_reg2_p03_wu_s_setf(uint8_t p03wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)p03wus << 12));
}

__INLINE static uint8_t aon_pm_pm_reg2_p2_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void aon_pm_pm_reg2_p2_ret_setf(uint8_t p2ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)p2ret << 11));
}

__INLINE static uint8_t aon_pm_pm_reg2_p02_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void aon_pm_pm_reg2_p02_pul_setf(uint8_t p02pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)p02pul << 9));
}

__INLINE static uint8_t aon_pm_pm_reg2_p02_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void aon_pm_pm_reg2_p02_wu_s_setf(uint8_t p02wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)p02wus << 8));
}

__INLINE static uint8_t aon_pm_pm_reg2_p1_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void aon_pm_pm_reg2_p1_ret_setf(uint8_t p1ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)p1ret << 7));
}

__INLINE static uint8_t aon_pm_pm_reg2_p01_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void aon_pm_pm_reg2_p01_pul_setf(uint8_t p01pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)p01pul << 5));
}

__INLINE static uint8_t aon_pm_pm_reg2_p01_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void aon_pm_pm_reg2_p01_wu_s_setf(uint8_t p01wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)p01wus << 4));
}

__INLINE static uint8_t aon_pm_pm_reg2_p00_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void aon_pm_pm_reg2_p00_ret_setf(uint8_t p00ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)p00ret << 3));
}

__INLINE static uint8_t aon_pm_pm_reg2_p00_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000006)) >> 1);
}

__INLINE static void aon_pm_pm_reg2_p00_pul_setf(uint8_t p00pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000006)) | ((uint32_t)p00pul << 1));
}

__INLINE static uint8_t aon_pm_pm_reg2_p00_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg2_p00_wu_s_setf(uint8_t p00wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG2_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG2_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)p00wus << 0));
}

 /**
 * @brief PM_REG3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31              p15_ret   0
 *  30:29              p15_pul   0b0
 *     28             P15_wu_s   0
 *     27              p14_ret   0
 *  26:25              p14_pul   0b0
 *     24             P14_wu_s   0
 *     23              p13_ret   0
 *  22:21              p13_pul   0b0
 *     20             P13_wu_s   0
 *     19              p12_ret   0
 *  18:17              p12_pul   0b0
 *     16             p12_wu_s   0
 *     15              p11_ret   0
 *  14:13              p11_pul   0b0
 *     12             p11_wu_s   0
 *     11              p10_ret   0
 *  10:09              p10_pul   0b0
 *     08             p10_wu_s   0
 *     07              p09_ret   0
 *  06:05              p09_pul   0b0
 *     04             p09_wu_s   0
 *     03              p08_ret   0
 *  02:01              p08_pul   0b0
 *     00             p08_wu_s   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG3_OFFSET 0x00000014


__INLINE static uint32_t aon_pm_pm_reg3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG3_P15_RET_BIT                           ((uint32_t)0x80000000)
#define AON_PM_PM_REG3_P15_RET_POS                           31
#define AON_PM_PM_REG3_P15_PUL_MASK                          ((uint32_t)0x60000000)
#define AON_PM_PM_REG3_P15_PUL_LSB                           29
#define AON_PM_PM_REG3_P15_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P15_WU_S_BIT                          ((uint32_t)0x10000000)
#define AON_PM_PM_REG3_P15_WU_S_POS                          28
#define AON_PM_PM_REG3_P14_RET_BIT                           ((uint32_t)0x08000000)
#define AON_PM_PM_REG3_P14_RET_POS                           27
#define AON_PM_PM_REG3_P14_PUL_MASK                          ((uint32_t)0x06000000)
#define AON_PM_PM_REG3_P14_PUL_LSB                           25
#define AON_PM_PM_REG3_P14_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P14_WU_S_BIT                          ((uint32_t)0x01000000)
#define AON_PM_PM_REG3_P14_WU_S_POS                          24
#define AON_PM_PM_REG3_P13_RET_BIT                           ((uint32_t)0x00800000)
#define AON_PM_PM_REG3_P13_RET_POS                           23
#define AON_PM_PM_REG3_P13_PUL_MASK                          ((uint32_t)0x00600000)
#define AON_PM_PM_REG3_P13_PUL_LSB                           21
#define AON_PM_PM_REG3_P13_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P13_WU_S_BIT                          ((uint32_t)0x00100000)
#define AON_PM_PM_REG3_P13_WU_S_POS                          20
#define AON_PM_PM_REG3_P12_RET_BIT                           ((uint32_t)0x00080000)
#define AON_PM_PM_REG3_P12_RET_POS                           19
#define AON_PM_PM_REG3_P12_PUL_MASK                          ((uint32_t)0x00060000)
#define AON_PM_PM_REG3_P12_PUL_LSB                           17
#define AON_PM_PM_REG3_P12_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P12_WU_S_BIT                          ((uint32_t)0x00010000)
#define AON_PM_PM_REG3_P12_WU_S_POS                          16
#define AON_PM_PM_REG3_P11_RET_BIT                           ((uint32_t)0x00008000)
#define AON_PM_PM_REG3_P11_RET_POS                           15
#define AON_PM_PM_REG3_P11_PUL_MASK                          ((uint32_t)0x00006000)
#define AON_PM_PM_REG3_P11_PUL_LSB                           13
#define AON_PM_PM_REG3_P11_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P11_WU_S_BIT                          ((uint32_t)0x00001000)
#define AON_PM_PM_REG3_P11_WU_S_POS                          12
#define AON_PM_PM_REG3_P10_RET_BIT                           ((uint32_t)0x00000800)
#define AON_PM_PM_REG3_P10_RET_POS                           11
#define AON_PM_PM_REG3_P10_PUL_MASK                          ((uint32_t)0x00000600)
#define AON_PM_PM_REG3_P10_PUL_LSB                           9
#define AON_PM_PM_REG3_P10_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P10_WU_S_BIT                          ((uint32_t)0x00000100)
#define AON_PM_PM_REG3_P10_WU_S_POS                          8
#define AON_PM_PM_REG3_P09_RET_BIT                           ((uint32_t)0x00000080)
#define AON_PM_PM_REG3_P09_RET_POS                           7
#define AON_PM_PM_REG3_P09_PUL_MASK                          ((uint32_t)0x00000060)
#define AON_PM_PM_REG3_P09_PUL_LSB                           5
#define AON_PM_PM_REG3_P09_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P09_WU_S_BIT                          ((uint32_t)0x00000010)
#define AON_PM_PM_REG3_P09_WU_S_POS                          4
#define AON_PM_PM_REG3_P08_RET_BIT                           ((uint32_t)0x00000008)
#define AON_PM_PM_REG3_P08_RET_POS                           3
#define AON_PM_PM_REG3_P08_PUL_MASK                          ((uint32_t)0x00000006)
#define AON_PM_PM_REG3_P08_PUL_LSB                           1
#define AON_PM_PM_REG3_P08_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG3_P08_WU_S_BIT                          ((uint32_t)0x00000001)
#define AON_PM_PM_REG3_P08_WU_S_POS                          0

#define AON_PM_PM_REG3_P15_RET_RST                           0x0
#define AON_PM_PM_REG3_P15_PUL_RST                           0x0
#define AON_PM_PM_REG3_P15_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P14_RET_RST                           0x0
#define AON_PM_PM_REG3_P14_PUL_RST                           0x0
#define AON_PM_PM_REG3_P14_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P13_RET_RST                           0x0
#define AON_PM_PM_REG3_P13_PUL_RST                           0x0
#define AON_PM_PM_REG3_P13_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P12_RET_RST                           0x0
#define AON_PM_PM_REG3_P12_PUL_RST                           0x0
#define AON_PM_PM_REG3_P12_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P11_RET_RST                           0x0
#define AON_PM_PM_REG3_P11_PUL_RST                           0x0
#define AON_PM_PM_REG3_P11_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P10_RET_RST                           0x0
#define AON_PM_PM_REG3_P10_PUL_RST                           0x0
#define AON_PM_PM_REG3_P10_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P09_RET_RST                           0x0
#define AON_PM_PM_REG3_P09_PUL_RST                           0x0
#define AON_PM_PM_REG3_P09_WU_S_RST                          0x0
#define AON_PM_PM_REG3_P08_RET_RST                           0x0
#define AON_PM_PM_REG3_P08_PUL_RST                           0x0
#define AON_PM_PM_REG3_P08_WU_S_RST                          0x0

__INLINE static void aon_pm_pm_reg3_pack(uint8_t p15ret, uint8_t p15pul, uint8_t p15wus, uint8_t p14ret, uint8_t p14pul, uint8_t p14wus, uint8_t p13ret, uint8_t p13pul, uint8_t p13wus, uint8_t p12ret, uint8_t p12pul, uint8_t p12wus, uint8_t p11ret, uint8_t p11pul, uint8_t p11wus, uint8_t p10ret, uint8_t p10pul, uint8_t p10wus, uint8_t p09ret, uint8_t p09pul, uint8_t p09wus, uint8_t p08ret, uint8_t p08pul, uint8_t p08wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)p15ret << 31) | ((uint32_t)p15pul << 29) | ((uint32_t)p15wus << 28) | ((uint32_t)p14ret << 27) | ((uint32_t)p14pul << 25) | ((uint32_t)p14wus << 24) | ((uint32_t)p13ret << 23) | ((uint32_t)p13pul << 21) | ((uint32_t)p13wus << 20) | ((uint32_t)p12ret << 19) | ((uint32_t)p12pul << 17) | ((uint32_t)p12wus << 16) | ((uint32_t)p11ret << 15) | ((uint32_t)p11pul << 13) | ((uint32_t)p11wus << 12) | ((uint32_t)p10ret << 11) | ((uint32_t)p10pul << 9) | ((uint32_t)p10wus << 8) | ((uint32_t)p09ret << 7) | ((uint32_t)p09pul << 5) | ((uint32_t)p09wus << 4) | ((uint32_t)p08ret << 3) | ((uint32_t)p08pul << 1) | ((uint32_t)p08wus << 0));
}

__INLINE static void aon_pm_pm_reg3_unpack(uint8_t* p15ret, uint8_t* p15pul, uint8_t* p15wus, uint8_t* p14ret, uint8_t* p14pul, uint8_t* p14wus, uint8_t* p13ret, uint8_t* p13pul, uint8_t* p13wus, uint8_t* p12ret, uint8_t* p12pul, uint8_t* p12wus, uint8_t* p11ret, uint8_t* p11pul, uint8_t* p11wus, uint8_t* p10ret, uint8_t* p10pul, uint8_t* p10wus, uint8_t* p09ret, uint8_t* p09pul, uint8_t* p09wus, uint8_t* p08ret, uint8_t* p08pul, uint8_t* p08wus)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *p15ret = (localVal & ((uint32_t)0x80000000)) >> 31;
    *p15pul = (localVal & ((uint32_t)0x60000000)) >> 29;
    *p15wus = (localVal & ((uint32_t)0x10000000)) >> 28;
    *p14ret = (localVal & ((uint32_t)0x08000000)) >> 27;
    *p14pul = (localVal & ((uint32_t)0x06000000)) >> 25;
    *p14wus = (localVal & ((uint32_t)0x01000000)) >> 24;
    *p13ret = (localVal & ((uint32_t)0x00800000)) >> 23;
    *p13pul = (localVal & ((uint32_t)0x00600000)) >> 21;
    *p13wus = (localVal & ((uint32_t)0x00100000)) >> 20;
    *p12ret = (localVal & ((uint32_t)0x00080000)) >> 19;
    *p12pul = (localVal & ((uint32_t)0x00060000)) >> 17;
    *p12wus = (localVal & ((uint32_t)0x00010000)) >> 16;
    *p11ret = (localVal & ((uint32_t)0x00008000)) >> 15;
    *p11pul = (localVal & ((uint32_t)0x00006000)) >> 13;
    *p11wus = (localVal & ((uint32_t)0x00001000)) >> 12;
    *p10ret = (localVal & ((uint32_t)0x00000800)) >> 11;
    *p10pul = (localVal & ((uint32_t)0x00000600)) >> 9;
    *p10wus = (localVal & ((uint32_t)0x00000100)) >> 8;
    *p09ret = (localVal & ((uint32_t)0x00000080)) >> 7;
    *p09pul = (localVal & ((uint32_t)0x00000060)) >> 5;
    *p09wus = (localVal & ((uint32_t)0x00000010)) >> 4;
    *p08ret = (localVal & ((uint32_t)0x00000008)) >> 3;
    *p08pul = (localVal & ((uint32_t)0x00000006)) >> 1;
    *p08wus = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg3_p15_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void aon_pm_pm_reg3_p15_ret_setf(uint8_t p15ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)p15ret << 31));
}

__INLINE static uint8_t aon_pm_pm_reg3_p15_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x60000000)) >> 29);
}

__INLINE static void aon_pm_pm_reg3_p15_pul_setf(uint8_t p15pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x60000000)) | ((uint32_t)p15pul << 29));
}

__INLINE static uint8_t aon_pm_pm_reg3_p15_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void aon_pm_pm_reg3_p15_wu_s_setf(uint8_t p15wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)p15wus << 28));
}

__INLINE static uint8_t aon_pm_pm_reg3_p14_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void aon_pm_pm_reg3_p14_ret_setf(uint8_t p14ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)p14ret << 27));
}

__INLINE static uint8_t aon_pm_pm_reg3_p14_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void aon_pm_pm_reg3_p14_pul_setf(uint8_t p14pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)p14pul << 25));
}

__INLINE static uint8_t aon_pm_pm_reg3_p14_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01000000)) >> 24);
}

__INLINE static void aon_pm_pm_reg3_p14_wu_s_setf(uint8_t p14wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x01000000)) | ((uint32_t)p14wus << 24));
}

__INLINE static uint8_t aon_pm_pm_reg3_p13_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00800000)) >> 23);
}

__INLINE static void aon_pm_pm_reg3_p13_ret_setf(uint8_t p13ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00800000)) | ((uint32_t)p13ret << 23));
}

__INLINE static uint8_t aon_pm_pm_reg3_p13_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00600000)) >> 21);
}

__INLINE static void aon_pm_pm_reg3_p13_pul_setf(uint8_t p13pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00600000)) | ((uint32_t)p13pul << 21));
}

__INLINE static uint8_t aon_pm_pm_reg3_p13_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void aon_pm_pm_reg3_p13_wu_s_setf(uint8_t p13wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)p13wus << 20));
}

__INLINE static uint8_t aon_pm_pm_reg3_p12_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void aon_pm_pm_reg3_p12_ret_setf(uint8_t p12ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)p12ret << 19));
}

__INLINE static uint8_t aon_pm_pm_reg3_p12_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00060000)) >> 17);
}

__INLINE static void aon_pm_pm_reg3_p12_pul_setf(uint8_t p12pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00060000)) | ((uint32_t)p12pul << 17));
}

__INLINE static uint8_t aon_pm_pm_reg3_p12_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void aon_pm_pm_reg3_p12_wu_s_setf(uint8_t p12wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)p12wus << 16));
}

__INLINE static uint8_t aon_pm_pm_reg3_p11_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void aon_pm_pm_reg3_p11_ret_setf(uint8_t p11ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)p11ret << 15));
}

__INLINE static uint8_t aon_pm_pm_reg3_p11_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00006000)) >> 13);
}

__INLINE static void aon_pm_pm_reg3_p11_pul_setf(uint8_t p11pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00006000)) | ((uint32_t)p11pul << 13));
}

__INLINE static uint8_t aon_pm_pm_reg3_p11_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void aon_pm_pm_reg3_p11_wu_s_setf(uint8_t p11wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)p11wus << 12));
}

__INLINE static uint8_t aon_pm_pm_reg3_p10_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void aon_pm_pm_reg3_p10_ret_setf(uint8_t p10ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)p10ret << 11));
}

__INLINE static uint8_t aon_pm_pm_reg3_p10_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void aon_pm_pm_reg3_p10_pul_setf(uint8_t p10pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)p10pul << 9));
}

__INLINE static uint8_t aon_pm_pm_reg3_p10_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void aon_pm_pm_reg3_p10_wu_s_setf(uint8_t p10wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)p10wus << 8));
}

__INLINE static uint8_t aon_pm_pm_reg3_p09_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void aon_pm_pm_reg3_p09_ret_setf(uint8_t p09ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)p09ret << 7));
}

__INLINE static uint8_t aon_pm_pm_reg3_p09_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void aon_pm_pm_reg3_p09_pul_setf(uint8_t p09pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)p09pul << 5));
}

__INLINE static uint8_t aon_pm_pm_reg3_p09_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void aon_pm_pm_reg3_p09_wu_s_setf(uint8_t p09wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)p09wus << 4));
}

__INLINE static uint8_t aon_pm_pm_reg3_p08_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void aon_pm_pm_reg3_p08_ret_setf(uint8_t p08ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)p08ret << 3));
}

__INLINE static uint8_t aon_pm_pm_reg3_p08_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000006)) >> 1);
}

__INLINE static void aon_pm_pm_reg3_p08_pul_setf(uint8_t p08pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000006)) | ((uint32_t)p08pul << 1));
}

__INLINE static uint8_t aon_pm_pm_reg3_p08_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg3_p08_wu_s_setf(uint8_t p08wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG3_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG3_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)p08wus << 0));
}

 /**
 * @brief PM_REG4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     19              p20_ret   0
 *  18:17              p20_pul   0b0
 *     16             p20_wu_s   0
 *     15              p19_ret   0
 *  14:13              p19_pul   0b0
 *     12             p19_wu_s   0
 *     11              p18_ret   0
 *  10:09              p18_pul   0b0
 *     08             p18_wu_s   0
 *     07              p17_ret   0
 *  06:05              p17_pul   0b0
 *     04             p17_wu_s   0
 *     03              p16_ret   0
 *  02:01              p16_pul   0b0
 *     00             p16_wu_s   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG4_OFFSET 0x00000018


__INLINE static uint32_t aon_pm_pm_reg4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG4_P20_RET_BIT                           ((uint32_t)0x00080000)
#define AON_PM_PM_REG4_P20_RET_POS                           19
#define AON_PM_PM_REG4_P20_PUL_MASK                          ((uint32_t)0x00060000)
#define AON_PM_PM_REG4_P20_PUL_LSB                           17
#define AON_PM_PM_REG4_P20_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG4_P20_WU_S_BIT                          ((uint32_t)0x00010000)
#define AON_PM_PM_REG4_P20_WU_S_POS                          16
#define AON_PM_PM_REG4_P19_RET_BIT                           ((uint32_t)0x00008000)
#define AON_PM_PM_REG4_P19_RET_POS                           15
#define AON_PM_PM_REG4_P19_PUL_MASK                          ((uint32_t)0x00006000)
#define AON_PM_PM_REG4_P19_PUL_LSB                           13
#define AON_PM_PM_REG4_P19_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG4_P19_WU_S_BIT                          ((uint32_t)0x00001000)
#define AON_PM_PM_REG4_P19_WU_S_POS                          12
#define AON_PM_PM_REG4_P18_RET_BIT                           ((uint32_t)0x00000800)
#define AON_PM_PM_REG4_P18_RET_POS                           11
#define AON_PM_PM_REG4_P18_PUL_MASK                          ((uint32_t)0x00000600)
#define AON_PM_PM_REG4_P18_PUL_LSB                           9
#define AON_PM_PM_REG4_P18_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG4_P18_WU_S_BIT                          ((uint32_t)0x00000100)
#define AON_PM_PM_REG4_P18_WU_S_POS                          8
#define AON_PM_PM_REG4_P17_RET_BIT                           ((uint32_t)0x00000080)
#define AON_PM_PM_REG4_P17_RET_POS                           7
#define AON_PM_PM_REG4_P17_PUL_MASK                          ((uint32_t)0x00000060)
#define AON_PM_PM_REG4_P17_PUL_LSB                           5
#define AON_PM_PM_REG4_P17_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG4_P17_WU_S_BIT                          ((uint32_t)0x00000010)
#define AON_PM_PM_REG4_P17_WU_S_POS                          4
#define AON_PM_PM_REG4_P16_RET_BIT                           ((uint32_t)0x00000008)
#define AON_PM_PM_REG4_P16_RET_POS                           3
#define AON_PM_PM_REG4_P16_PUL_MASK                          ((uint32_t)0x00000006)
#define AON_PM_PM_REG4_P16_PUL_LSB                           1
#define AON_PM_PM_REG4_P16_PUL_WIDTH                         ((uint32_t)0x00000002)
#define AON_PM_PM_REG4_P16_WU_S_BIT                          ((uint32_t)0x00000001)
#define AON_PM_PM_REG4_P16_WU_S_POS                          0

#define AON_PM_PM_REG4_P20_RET_RST                           0x0
#define AON_PM_PM_REG4_P20_PUL_RST                           0x0
#define AON_PM_PM_REG4_P20_WU_S_RST                          0x0
#define AON_PM_PM_REG4_P19_RET_RST                           0x0
#define AON_PM_PM_REG4_P19_PUL_RST                           0x0
#define AON_PM_PM_REG4_P19_WU_S_RST                          0x0
#define AON_PM_PM_REG4_P18_RET_RST                           0x0
#define AON_PM_PM_REG4_P18_PUL_RST                           0x0
#define AON_PM_PM_REG4_P18_WU_S_RST                          0x0
#define AON_PM_PM_REG4_P17_RET_RST                           0x0
#define AON_PM_PM_REG4_P17_PUL_RST                           0x0
#define AON_PM_PM_REG4_P17_WU_S_RST                          0x0
#define AON_PM_PM_REG4_P16_RET_RST                           0x0
#define AON_PM_PM_REG4_P16_PUL_RST                           0x0
#define AON_PM_PM_REG4_P16_WU_S_RST                          0x0

__INLINE static void aon_pm_pm_reg4_pack(uint8_t p20ret, uint8_t p20pul, uint8_t p20wus, uint8_t p19ret, uint8_t p19pul, uint8_t p19wus, uint8_t p18ret, uint8_t p18pul, uint8_t p18wus, uint8_t p17ret, uint8_t p17pul, uint8_t p17wus, uint8_t p16ret, uint8_t p16pul, uint8_t p16wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)p20ret << 19) | ((uint32_t)p20pul << 17) | ((uint32_t)p20wus << 16) | ((uint32_t)p19ret << 15) | ((uint32_t)p19pul << 13) | ((uint32_t)p19wus << 12) | ((uint32_t)p18ret << 11) | ((uint32_t)p18pul << 9) | ((uint32_t)p18wus << 8) | ((uint32_t)p17ret << 7) | ((uint32_t)p17pul << 5) | ((uint32_t)p17wus << 4) | ((uint32_t)p16ret << 3) | ((uint32_t)p16pul << 1) | ((uint32_t)p16wus << 0));
}

__INLINE static void aon_pm_pm_reg4_unpack(uint8_t* p20ret, uint8_t* p20pul, uint8_t* p20wus, uint8_t* p19ret, uint8_t* p19pul, uint8_t* p19wus, uint8_t* p18ret, uint8_t* p18pul, uint8_t* p18wus, uint8_t* p17ret, uint8_t* p17pul, uint8_t* p17wus, uint8_t* p16ret, uint8_t* p16pul, uint8_t* p16wus)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *p20ret = (localVal & ((uint32_t)0x00080000)) >> 19;
    *p20pul = (localVal & ((uint32_t)0x00060000)) >> 17;
    *p20wus = (localVal & ((uint32_t)0x00010000)) >> 16;
    *p19ret = (localVal & ((uint32_t)0x00008000)) >> 15;
    *p19pul = (localVal & ((uint32_t)0x00006000)) >> 13;
    *p19wus = (localVal & ((uint32_t)0x00001000)) >> 12;
    *p18ret = (localVal & ((uint32_t)0x00000800)) >> 11;
    *p18pul = (localVal & ((uint32_t)0x00000600)) >> 9;
    *p18wus = (localVal & ((uint32_t)0x00000100)) >> 8;
    *p17ret = (localVal & ((uint32_t)0x00000080)) >> 7;
    *p17pul = (localVal & ((uint32_t)0x00000060)) >> 5;
    *p17wus = (localVal & ((uint32_t)0x00000010)) >> 4;
    *p16ret = (localVal & ((uint32_t)0x00000008)) >> 3;
    *p16pul = (localVal & ((uint32_t)0x00000006)) >> 1;
    *p16wus = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg4_p20_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void aon_pm_pm_reg4_p20_ret_setf(uint8_t p20ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)p20ret << 19));
}

__INLINE static uint8_t aon_pm_pm_reg4_p20_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00060000)) >> 17);
}

__INLINE static void aon_pm_pm_reg4_p20_pul_setf(uint8_t p20pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00060000)) | ((uint32_t)p20pul << 17));
}

__INLINE static uint8_t aon_pm_pm_reg4_p20_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void aon_pm_pm_reg4_p20_wu_s_setf(uint8_t p20wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)p20wus << 16));
}

__INLINE static uint8_t aon_pm_pm_reg4_p19_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void aon_pm_pm_reg4_p19_ret_setf(uint8_t p19ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)p19ret << 15));
}

__INLINE static uint8_t aon_pm_pm_reg4_p19_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00006000)) >> 13);
}

__INLINE static void aon_pm_pm_reg4_p19_pul_setf(uint8_t p19pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00006000)) | ((uint32_t)p19pul << 13));
}

__INLINE static uint8_t aon_pm_pm_reg4_p19_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void aon_pm_pm_reg4_p19_wu_s_setf(uint8_t p19wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)p19wus << 12));
}

__INLINE static uint8_t aon_pm_pm_reg4_p18_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void aon_pm_pm_reg4_p18_ret_setf(uint8_t p18ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)p18ret << 11));
}

__INLINE static uint8_t aon_pm_pm_reg4_p18_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void aon_pm_pm_reg4_p18_pul_setf(uint8_t p18pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)p18pul << 9));
}

__INLINE static uint8_t aon_pm_pm_reg4_p18_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void aon_pm_pm_reg4_p18_wu_s_setf(uint8_t p18wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)p18wus << 8));
}

__INLINE static uint8_t aon_pm_pm_reg4_p17_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void aon_pm_pm_reg4_p17_ret_setf(uint8_t p17ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)p17ret << 7));
}

__INLINE static uint8_t aon_pm_pm_reg4_p17_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void aon_pm_pm_reg4_p17_pul_setf(uint8_t p17pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)p17pul << 5));
}

__INLINE static uint8_t aon_pm_pm_reg4_p17_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void aon_pm_pm_reg4_p17_wu_s_setf(uint8_t p17wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)p17wus << 4));
}

__INLINE static uint8_t aon_pm_pm_reg4_p16_ret_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void aon_pm_pm_reg4_p16_ret_setf(uint8_t p16ret)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)p16ret << 3));
}

__INLINE static uint8_t aon_pm_pm_reg4_p16_pul_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000006)) >> 1);
}

__INLINE static void aon_pm_pm_reg4_p16_pul_setf(uint8_t p16pul)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000006)) | ((uint32_t)p16pul << 1));
}

__INLINE static uint8_t aon_pm_pm_reg4_p16_wu_s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg4_p16_wu_s_setf(uint8_t p16wus)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG4_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG4_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)p16wus << 0));
}

 /**
 * @brief PM_REG9 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  20:00         gpio_wu_mask   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG9_OFFSET 0x00000030


__INLINE static uint32_t aon_pm_pm_reg9_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG9_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg9_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG9_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG9_GPIO_WU_MASK_MASK                     ((uint32_t)0x001FFFFF)
#define AON_PM_PM_REG9_GPIO_WU_MASK_LSB                      0
#define AON_PM_PM_REG9_GPIO_WU_MASK_WIDTH                    ((uint32_t)0x00000015)

#define AON_PM_PM_REG9_GPIO_WU_MASK_RST                      0x0

__INLINE static void aon_pm_pm_reg9_pack(uint32_t gpiowumask)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG9_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)gpiowumask << 0));
}

__INLINE static void aon_pm_pm_reg9_unpack(uint8_t* gpiowumask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG9_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *gpiowumask = (localVal & ((uint32_t)0x001FFFFF)) >> 0;
}

__INLINE static uint32_t aon_pm_pm_reg9_gpio_wu_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG9_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001FFFFF)) >> 0);
}

__INLINE static void aon_pm_pm_reg9_gpio_wu_mask_setf(uint32_t gpiowumask)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG9_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)gpiowumask << 0);
}

 /**
 * @brief PM_REG10 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   io_pending_clr_reg   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG10_OFFSET 0x00000038


__INLINE static uint32_t aon_pm_pm_reg10_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG10_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg10_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG10_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG10_IO_PENDING_CLR_REG_BIT                ((uint32_t)0x00000001)
#define AON_PM_PM_REG10_IO_PENDING_CLR_REG_POS                0

#define AON_PM_PM_REG10_IO_PENDING_CLR_REG_RST                0x0

__INLINE static void aon_pm_pm_reg10_pack(uint8_t iopendingclrreg)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG10_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)iopendingclrreg << 0));
}

__INLINE static void aon_pm_pm_reg10_unpack(uint8_t* iopendingclrreg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG10_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *iopendingclrreg = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg10_io_pending_clr_reg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG10_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg10_io_pending_clr_reg_setf(uint8_t iopendingclrreg)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG10_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)iopendingclrreg << 0);
}

 /**
 * @brief PM_REG11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00             sleep_r3   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG11_OFFSET 0x00000040


__INLINE static uint32_t aon_pm_pm_reg11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG11_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG11_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG11_SLEEP_R3_MASK                         ((uint32_t)0xFFFFFFFF)
#define AON_PM_PM_REG11_SLEEP_R3_LSB                          0
#define AON_PM_PM_REG11_SLEEP_R3_WIDTH                        ((uint32_t)0x00000020)

#define AON_PM_PM_REG11_SLEEP_R3_RST                          0x0

__INLINE static void aon_pm_pm_reg11_pack(uint32_t sleepr3)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG11_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)sleepr3 << 0));
}

__INLINE static void aon_pm_pm_reg11_unpack(uint8_t* sleepr3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG11_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *sleepr3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aon_pm_pm_reg11_sleep_r3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG11_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aon_pm_pm_reg11_sleep_r3_setf(uint32_t sleepr3)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG11_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)sleepr3 << 0);
}

 /**
 * @brief PM_REG12 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00   io_pending_evt_list   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG12_OFFSET 0x00000048


__INLINE static uint32_t aon_pm_pm_reg12_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG12_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

// field definitions
#define AON_PM_PM_REG12_IO_PENDING_EVT_LIST_BIT               ((uint32_t)0x00000001)
#define AON_PM_PM_REG12_IO_PENDING_EVT_LIST_POS               0

#define AON_PM_PM_REG12_IO_PENDING_EVT_LIST_RST               0x0

__INLINE static void aon_pm_pm_reg12_unpack(uint8_t* iopendingevtlist)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG12_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *iopendingevtlist = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg12_io_pending_evt_list_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG12_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief PM_REG13 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     29           slp_en_rtc   0
 *     27         slp_en_rc32k   0
 *  22:21         dig_ldo_trim   0b11
 *     20       ovr_io_pending   0
 *  19:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG13_OFFSET 0x00000050


__INLINE static uint32_t aon_pm_pm_reg13_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg13_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG13_SLP_EN_RTC_BIT                        ((uint32_t)0x20000000)
#define AON_PM_PM_REG13_SLP_EN_RTC_POS                        29
#define AON_PM_PM_REG13_SLP_EN_RC32K_BIT                      ((uint32_t)0x08000000)
#define AON_PM_PM_REG13_SLP_EN_RC32K_POS                      27
#define AON_PM_PM_REG13_DIG_LDO_TRIM_MASK                     ((uint32_t)0x00600000)
#define AON_PM_PM_REG13_DIG_LDO_TRIM_LSB                      21
#define AON_PM_PM_REG13_DIG_LDO_TRIM_WIDTH                    ((uint32_t)0x00000002)
#define AON_PM_PM_REG13_OVR_IO_PENDING_BIT                    ((uint32_t)0x00100000)
#define AON_PM_PM_REG13_OVR_IO_PENDING_POS                    20
#define AON_PM_PM_REG13_RESERVED_MASK                         ((uint32_t)0x000FFFFF)
#define AON_PM_PM_REG13_RESERVED_LSB                          0
#define AON_PM_PM_REG13_RESERVED_WIDTH                        ((uint32_t)0x00000014)

#define AON_PM_PM_REG13_SLP_EN_RTC_RST                        0x0
#define AON_PM_PM_REG13_SLP_EN_RC32K_RST                      0x0
#define AON_PM_PM_REG13_DIG_LDO_TRIM_RST                      0x11
#define AON_PM_PM_REG13_OVR_IO_PENDING_RST                    0x0
#define AON_PM_PM_REG13_RESERVED_RST                          0x0

__INLINE static void aon_pm_pm_reg13_pack(uint8_t slpenrtc, uint8_t slpenrc32k, uint8_t digldotrim, uint8_t ovriopending)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)slpenrtc << 29) | ((uint32_t)slpenrc32k << 27) | ((uint32_t)digldotrim << 21) | ((uint32_t)ovriopending << 20));
}

__INLINE static void aon_pm_pm_reg13_unpack(uint8_t* slpenrtc, uint8_t* slpenrc32k, uint8_t* digldotrim, uint8_t* ovriopending, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *slpenrtc = (localVal & ((uint32_t)0x20000000)) >> 29;
    *slpenrc32k = (localVal & ((uint32_t)0x08000000)) >> 27;
    *digldotrim = (localVal & ((uint32_t)0x00600000)) >> 21;
    *ovriopending = (localVal & ((uint32_t)0x00100000)) >> 20;
    *reserved = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg13_slp_en_rtc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x20000000)) >> 29);
}

__INLINE static void aon_pm_pm_reg13_slp_en_rtc_setf(uint8_t slpenrtc)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x20000000)) | ((uint32_t)slpenrtc << 29));
}

__INLINE static uint8_t aon_pm_pm_reg13_slp_en_rc32k_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void aon_pm_pm_reg13_slp_en_rc32k_setf(uint8_t slpenrc32k)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)slpenrc32k << 27));
}

__INLINE static uint8_t aon_pm_pm_reg13_dig_ldo_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00600000)) >> 21);
}

__INLINE static void aon_pm_pm_reg13_dig_ldo_trim_setf(uint8_t digldotrim)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00600000)) | ((uint32_t)digldotrim << 21));
}

__INLINE static uint8_t aon_pm_pm_reg13_ovr_io_pending_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00100000)) >> 20);
}

__INLINE static void aon_pm_pm_reg13_ovr_io_pending_setf(uint8_t ovriopending)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG13_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG13_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00100000)) | ((uint32_t)ovriopending << 20));
}

 /**
 * @brief PM_REG14 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31          wdt_en_reg2   0
 *  14:09         rc32m_c_trim   0b20
 *  06:01         rc32k_c_trim   0b20
 *     00       rc64m_tune_r_r   1
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG14_OFFSET 0x00000054


__INLINE static uint32_t aon_pm_pm_reg14_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg14_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG14_WDT_EN_REG2_BIT                       ((uint32_t)0x80000000)
#define AON_PM_PM_REG14_WDT_EN_REG2_POS                       31
#define AON_PM_PM_REG14_RC32M_C_TRIM_MASK                     ((uint32_t)0x00007E00)
#define AON_PM_PM_REG14_RC32M_C_TRIM_LSB                      9
#define AON_PM_PM_REG14_RC32M_C_TRIM_WIDTH                    ((uint32_t)0x00000006)
#define AON_PM_PM_REG14_RC32K_C_TRIM_MASK                     ((uint32_t)0x0000007E)
#define AON_PM_PM_REG14_RC32K_C_TRIM_LSB                      1
#define AON_PM_PM_REG14_RC32K_C_TRIM_WIDTH                    ((uint32_t)0x00000006)
#define AON_PM_PM_REG14_RC64M_TUNE_R_R_BIT                    ((uint32_t)0x00000001)
#define AON_PM_PM_REG14_RC64M_TUNE_R_R_POS                    0

#define AON_PM_PM_REG14_WDT_EN_REG2_RST                       0x0
#define AON_PM_PM_REG14_RC32M_C_TRIM_RST                      0x20
#define AON_PM_PM_REG14_RC32K_C_TRIM_RST                      0x20
#define AON_PM_PM_REG14_RC64M_TUNE_R_R_RST                    0x1

__INLINE static void aon_pm_pm_reg14_pack(uint8_t wdtenreg2, uint8_t rc32mctrim, uint8_t rc32kctrim, uint8_t rc64mtunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)wdtenreg2 << 31) | ((uint32_t)rc32mctrim << 9) | ((uint32_t)rc32kctrim << 1) | ((uint32_t)rc64mtunerr << 0));
}

__INLINE static void aon_pm_pm_reg14_unpack(uint8_t* wdtenreg2, uint8_t* rc32mctrim, uint8_t* rc32kctrim, uint8_t* rc64mtunerr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *wdtenreg2 = (localVal & ((uint32_t)0x80000000)) >> 31;
    *rc32mctrim = (localVal & ((uint32_t)0x00007E00)) >> 9;
    *rc32kctrim = (localVal & ((uint32_t)0x0000007E)) >> 1;
    *rc64mtunerr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg14_wdt_en_reg2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void aon_pm_pm_reg14_wdt_en_reg2_setf(uint8_t wdtenreg2)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)wdtenreg2 << 31));
}

__INLINE static uint8_t aon_pm_pm_reg14_rc32m_c_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007E00)) >> 9);
}

__INLINE static void aon_pm_pm_reg14_rc32m_c_trim_setf(uint8_t rc32mctrim)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00007E00)) | ((uint32_t)rc32mctrim << 9));
}

__INLINE static uint8_t aon_pm_pm_reg14_rc32k_c_trim_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007E)) >> 1);
}

__INLINE static void aon_pm_pm_reg14_rc32k_c_trim_setf(uint8_t rc32kctrim)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x0000007E)) | ((uint32_t)rc32kctrim << 1));
}

__INLINE static uint8_t aon_pm_pm_reg14_rc64m_tune_r_r_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg14_rc64m_tune_r_r_setf(uint8_t rc64mtunerr)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG14_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG14_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)rc64mtunerr << 0));
}

 /**
 * @brief PM_REG15 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28          wdt_en_reg3   0
 *     17           retram0_en   0
 *     15           rtc_en_ctl   1
 *     14         lcldo_en_ctl   1
 *     06         pwr_ctl_mode   0
 *  05:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG15_OFFSET 0x00000060


__INLINE static uint32_t aon_pm_pm_reg15_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg15_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG15_WDT_EN_REG3_BIT                       ((uint32_t)0x10000000)
#define AON_PM_PM_REG15_WDT_EN_REG3_POS                       28
#define AON_PM_PM_REG15_RETRAM0_EN_BIT                        ((uint32_t)0x00020000)
#define AON_PM_PM_REG15_RETRAM0_EN_POS                        17
#define AON_PM_PM_REG15_RTC_EN_CTL_BIT                        ((uint32_t)0x00008000)
#define AON_PM_PM_REG15_RTC_EN_CTL_POS                        15
#define AON_PM_PM_REG15_LCLDO_EN_CTL_BIT                      ((uint32_t)0x00004000)
#define AON_PM_PM_REG15_LCLDO_EN_CTL_POS                      14
#define AON_PM_PM_REG15_PWR_CTL_MODE_BIT                      ((uint32_t)0x00000040)
#define AON_PM_PM_REG15_PWR_CTL_MODE_POS                      6
#define AON_PM_PM_REG15_RESERVED_MASK                         ((uint32_t)0x0000003F)
#define AON_PM_PM_REG15_RESERVED_LSB                          0
#define AON_PM_PM_REG15_RESERVED_WIDTH                        ((uint32_t)0x00000006)

#define AON_PM_PM_REG15_WDT_EN_REG3_RST                       0x0
#define AON_PM_PM_REG15_RETRAM0_EN_RST                        0x0
#define AON_PM_PM_REG15_RTC_EN_CTL_RST                        0x1
#define AON_PM_PM_REG15_LCLDO_EN_CTL_RST                      0x1
#define AON_PM_PM_REG15_PWR_CTL_MODE_RST                      0x0
#define AON_PM_PM_REG15_RESERVED_RST                          0x0

__INLINE static void aon_pm_pm_reg15_pack(uint8_t wdtenreg3, uint8_t retram0en, uint8_t rtcenctl, uint8_t lcldoenctl, uint8_t pwrctlmode)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)wdtenreg3 << 28) | ((uint32_t)retram0en << 17) | ((uint32_t)rtcenctl << 15) | ((uint32_t)lcldoenctl << 14) | ((uint32_t)pwrctlmode << 6));
}

__INLINE static void aon_pm_pm_reg15_unpack(uint8_t* wdtenreg3, uint8_t* retram0en, uint8_t* rtcenctl, uint8_t* lcldoenctl, uint8_t* pwrctlmode, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *wdtenreg3 = (localVal & ((uint32_t)0x10000000)) >> 28;
    *retram0en = (localVal & ((uint32_t)0x00020000)) >> 17;
    *rtcenctl = (localVal & ((uint32_t)0x00008000)) >> 15;
    *lcldoenctl = (localVal & ((uint32_t)0x00004000)) >> 14;
    *pwrctlmode = (localVal & ((uint32_t)0x00000040)) >> 6;
    *reserved = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg15_wdt_en_reg3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void aon_pm_pm_reg15_wdt_en_reg3_setf(uint8_t wdtenreg3)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)wdtenreg3 << 28));
}

__INLINE static uint8_t aon_pm_pm_reg15_retram0_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void aon_pm_pm_reg15_retram0_en_setf(uint8_t retram0en)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)retram0en << 17));
}

__INLINE static uint8_t aon_pm_pm_reg15_rtc_en_ctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void aon_pm_pm_reg15_rtc_en_ctl_setf(uint8_t rtcenctl)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)rtcenctl << 15));
}

__INLINE static uint8_t aon_pm_pm_reg15_lcldo_en_ctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void aon_pm_pm_reg15_lcldo_en_ctl_setf(uint8_t lcldoenctl)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)lcldoenctl << 14));
}

__INLINE static uint8_t aon_pm_pm_reg15_pwr_ctl_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void aon_pm_pm_reg15_pwr_ctl_mode_setf(uint8_t pwrctlmode)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG15_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG15_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)pwrctlmode << 6));
}

 /**
 * @brief PM_REG16 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     03          wdt_en_reg0   0
 *  02:01            remap_lat   0b0
 *     00           wakeup_flg   0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG16_OFFSET 0x000000B0


__INLINE static uint32_t aon_pm_pm_reg16_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg16_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG16_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG16_WDT_EN_REG0_BIT                       ((uint32_t)0x00000008)
#define AON_PM_PM_REG16_WDT_EN_REG0_POS                       3
#define AON_PM_PM_REG16_REMAP_LAT_MASK                        ((uint32_t)0x00000006)
#define AON_PM_PM_REG16_REMAP_LAT_LSB                         1
#define AON_PM_PM_REG16_REMAP_LAT_WIDTH                       ((uint32_t)0x00000002)
#define AON_PM_PM_REG16_WAKEUP_FLG_BIT                        ((uint32_t)0x00000001)
#define AON_PM_PM_REG16_WAKEUP_FLG_POS                        0

#define AON_PM_PM_REG16_WDT_EN_REG0_RST                       0x0
#define AON_PM_PM_REG16_REMAP_LAT_RST                         0x0
#define AON_PM_PM_REG16_WAKEUP_FLG_RST                        0x0

__INLINE static void aon_pm_pm_reg16_pack(uint8_t wdtenreg0, uint8_t remaplat, uint8_t wakeupflg)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG16_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)wdtenreg0 << 3) | ((uint32_t)remaplat << 1) | ((uint32_t)wakeupflg << 0));
}

__INLINE static void aon_pm_pm_reg16_unpack(uint8_t* wdtenreg0, uint8_t* remaplat, uint8_t* wakeupflg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *wdtenreg0 = (localVal & ((uint32_t)0x00000008)) >> 3;
    *remaplat = (localVal & ((uint32_t)0x00000006)) >> 1;
    *wakeupflg = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg16_wdt_en_reg0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void aon_pm_pm_reg16_wdt_en_reg0_setf(uint8_t wdtenreg0)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG16_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)wdtenreg0 << 3));
}

__INLINE static uint8_t aon_pm_pm_reg16_remap_lat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000006)) >> 1);
}

__INLINE static void aon_pm_pm_reg16_remap_lat_setf(uint8_t remaplat)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG16_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000006)) | ((uint32_t)remaplat << 1));
}

__INLINE static uint8_t aon_pm_pm_reg16_wakeup_flg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg16_wakeup_flg_setf(uint8_t wakeupflg)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG16_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG16_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)wakeupflg << 0));
}

 /**
 * @brief PM_REG17 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00             sleep_r2   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG17_OFFSET 0x000000B4


__INLINE static uint32_t aon_pm_pm_reg17_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG17_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg17_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG17_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG17_SLEEP_R2_MASK                         ((uint32_t)0xFFFFFFFF)
#define AON_PM_PM_REG17_SLEEP_R2_LSB                          0
#define AON_PM_PM_REG17_SLEEP_R2_WIDTH                        ((uint32_t)0x00000020)

#define AON_PM_PM_REG17_SLEEP_R2_RST                          0x0

__INLINE static void aon_pm_pm_reg17_pack(uint32_t sleepr2)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG17_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)sleepr2 << 0));
}

__INLINE static void aon_pm_pm_reg17_unpack(uint8_t* sleepr2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG17_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *sleepr2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aon_pm_pm_reg17_sleep_r2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG17_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aon_pm_pm_reg17_sleep_r2_setf(uint32_t sleepr2)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG17_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)sleepr2 << 0);
}

 /**
 * @brief PM_REG18 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00     pclk_clk_gate_en   1
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG18_OFFSET 0x000000D4


__INLINE static uint32_t aon_pm_pm_reg18_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG18_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg18_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG18_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG18_PCLK_CLK_GATE_EN_BIT                  ((uint32_t)0x00000001)
#define AON_PM_PM_REG18_PCLK_CLK_GATE_EN_POS                  0

#define AON_PM_PM_REG18_PCLK_CLK_GATE_EN_RST                  0x1

__INLINE static void aon_pm_pm_reg18_pack(uint8_t pclkclkgateen)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG18_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)pclkclkgateen << 0));
}

__INLINE static void aon_pm_pm_reg18_unpack(uint8_t* pclkclkgateen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG18_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *pclkclkgateen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t aon_pm_pm_reg18_pclk_clk_gate_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG18_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void aon_pm_pm_reg18_pclk_clk_gate_en_setf(uint8_t pclkclkgateen)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG18_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)pclkclkgateen << 0);
}

 /**
 * @brief PM_REG19 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00             sleep_r0   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG19_OFFSET 0x000000E0


__INLINE static uint32_t aon_pm_pm_reg19_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG19_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg19_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG19_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG19_SLEEP_R0_MASK                         ((uint32_t)0xFFFFFFFF)
#define AON_PM_PM_REG19_SLEEP_R0_LSB                          0
#define AON_PM_PM_REG19_SLEEP_R0_WIDTH                        ((uint32_t)0x00000020)

#define AON_PM_PM_REG19_SLEEP_R0_RST                          0x0

__INLINE static void aon_pm_pm_reg19_pack(uint32_t sleepr0)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG19_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)sleepr0 << 0));
}

__INLINE static void aon_pm_pm_reg19_unpack(uint8_t* sleepr0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG19_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *sleepr0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aon_pm_pm_reg19_sleep_r0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG19_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aon_pm_pm_reg19_sleep_r0_setf(uint32_t sleepr0)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG19_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)sleepr0 << 0);
}

 /**
 * @brief PM_REG20 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00             sleep_r1   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG20_OFFSET 0x000000E4


__INLINE static uint32_t aon_pm_pm_reg20_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG20_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
}

__INLINE static void aon_pm_pm_reg20_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG20_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG20_SLEEP_R1_MASK                         ((uint32_t)0xFFFFFFFF)
#define AON_PM_PM_REG20_SLEEP_R1_LSB                          0
#define AON_PM_PM_REG20_SLEEP_R1_WIDTH                        ((uint32_t)0x00000020)

#define AON_PM_PM_REG20_SLEEP_R1_RST                          0x0

__INLINE static void aon_pm_pm_reg20_pack(uint32_t sleepr1)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG20_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)sleepr1 << 0));
}

__INLINE static void aon_pm_pm_reg20_unpack(uint8_t* sleepr1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG20_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *sleepr1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t aon_pm_pm_reg20_sleep_r1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG20_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void aon_pm_pm_reg20_sleep_r1_setf(uint32_t sleepr1)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG20_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, (uint32_t)sleepr1 << 0);
}

 /**
 * @brief PM_REG21 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31    xtal16m_en_static   1
 *  10:08       boot_clk_sel_r   0b0
 *     07          wdt_en_reg1   0
 *  06:04     pmu_ldoH_out_reg   0b0
 *     03   pmu_ldoH_out_en_reg   1
 *     02    pmu_ldoH_out_ctrl   0
 *  01:00        xtal_16m_ctrl   0b0
 * </pre>
 */
#define FEMTO_REG_AON_PM_PM_REG21_OFFSET 0x000000EC


__INLINE static void aon_pm_pm_reg21_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG21_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR, value);
}

// field definitions
#define AON_PM_PM_REG21_XTAL16M_EN_STATIC_BIT                 ((uint32_t)0x80000000)
#define AON_PM_PM_REG21_XTAL16M_EN_STATIC_POS                 31
#define AON_PM_PM_REG21_BOOT_CLK_SEL_R_MASK                   ((uint32_t)0x00000700)
#define AON_PM_PM_REG21_BOOT_CLK_SEL_R_LSB                    8
#define AON_PM_PM_REG21_BOOT_CLK_SEL_R_WIDTH                  ((uint32_t)0x00000003)
#define AON_PM_PM_REG21_WDT_EN_REG1_BIT                       ((uint32_t)0x00000080)
#define AON_PM_PM_REG21_WDT_EN_REG1_POS                       7
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_REG_MASK                ((uint32_t)0x00000070)
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_REG_LSB                 4
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_REG_WIDTH               ((uint32_t)0x00000003)
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_EN_REG_BIT              ((uint32_t)0x00000008)
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_EN_REG_POS              3
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_CTRL_BIT                ((uint32_t)0x00000004)
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_CTRL_POS                2
#define AON_PM_PM_REG21_XTAL_16M_CTRL_MASK                    ((uint32_t)0x00000003)
#define AON_PM_PM_REG21_XTAL_16M_CTRL_LSB                     0
#define AON_PM_PM_REG21_XTAL_16M_CTRL_WIDTH                   ((uint32_t)0x00000002)

#define AON_PM_PM_REG21_XTAL16M_EN_STATIC_RST                 0x1
#define AON_PM_PM_REG21_BOOT_CLK_SEL_R_RST                    0x0
#define AON_PM_PM_REG21_WDT_EN_REG1_RST                       0x0
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_REG_RST                 0x0
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_EN_REG_RST              0x1
#define AON_PM_PM_REG21_PMU_LDO_H_OUT_CTRL_RST                0x0
#define AON_PM_PM_REG21_XTAL_16M_CTRL_RST                     0x0

__INLINE static void aon_pm_pm_reg21_pack(uint8_t xtal16menstatic, uint8_t bootclkselr, uint8_t wdtenreg1, uint8_t pmuldohoutreg, uint8_t pmuldohoutenreg, uint8_t pmuldohoutctrl, uint8_t xtal16mctrl)
{
    _FEMTO_REG_WR(FEMTO_REG_AON_PM_PM_REG21_OFFSET+ FEMTO_REG_AON_PM_BASE_ADDR,  ((uint32_t)xtal16menstatic << 31) | ((uint32_t)bootclkselr << 8) | ((uint32_t)wdtenreg1 << 7) | ((uint32_t)pmuldohoutreg << 4) | ((uint32_t)pmuldohoutenreg << 3) | ((uint32_t)pmuldohoutctrl << 2) | ((uint32_t)xtal16mctrl << 0));
}

__INLINE static void aon_pm_pm_reg21_unpack(uint8_t* xtal16menstatic, uint8_t* bootclkselr, uint8_t* wdtenreg1, uint8_t* pmuldohoutreg, uint8_t* pmuldohoutenreg, uint8_t* pmuldohoutctrl, uint8_t* xtal16mctrl)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_AON_PM_PM_REG21_OFFSET + FEMTO_REG_AON_PM_BASE_ADDR);

    *xtal16menstatic = (localVal & ((uint32_t)0x80000000)) >> 31;
    *bootclkselr = (localVal & ((uint32_t)0x00000700)) >> 8;
    *wdtenreg1 = (localVal & ((uint32_t)0x00000080)) >> 7;
    *pmuldohoutreg = (localVal & ((uint32_t)0x00000070)) >> 4;
    *pmuldohoutenreg = (localVal & ((uint32_t)0x00000008)) >> 3;
    *pmuldohoutctrl = (localVal & ((uint32_t)0x00000004)) >> 2;
    *xtal16mctrl = (localVal & ((uint32_t)0x00000003)) >> 0;
}


#endif // _FEMTO_REG_AON_PM_H_

