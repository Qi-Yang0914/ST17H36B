#ifndef _FEMTO_REG_OTP_H_
#define _FEMTO_REG_OTP_H_

#define FEMTO_REG_OTP_COUNT 28

#define FEMTO_REG_OTP_BASE_ADDR 0x1FFFC000

#define FEMTO_REG_OTP_SIZE 0x00000090


 /**
 * @brief MODE_SETTING register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     09            margin_en   0
 *     08            soft_mode   0
 *  07:04            test_mode   0b0
 *     03     progream_mode_en   0
 *     02   deep_sleep_mode_en   0
 *     01              read_en   0
 *     00             power_on   0
 * </pre>
 */
#define FEMTO_REG_OTP_MODE_SETTING_OFFSET 0x00000000


__INLINE static uint32_t otp_mode_setting_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_mode_setting_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_MODE_SETTING_MARGIN_EN_BIT                         ((uint32_t)0x00000200)
#define OTP_MODE_SETTING_MARGIN_EN_POS                         9
#define OTP_MODE_SETTING_SOFT_MODE_BIT                         ((uint32_t)0x00000100)
#define OTP_MODE_SETTING_SOFT_MODE_POS                         8
#define OTP_MODE_SETTING_TEST_MODE_MASK                        ((uint32_t)0x000000F0)
#define OTP_MODE_SETTING_TEST_MODE_LSB                         4
#define OTP_MODE_SETTING_TEST_MODE_WIDTH                       ((uint32_t)0x00000004)
#define OTP_MODE_SETTING_PROGREAM_MODE_EN_BIT                  ((uint32_t)0x00000008)
#define OTP_MODE_SETTING_PROGREAM_MODE_EN_POS                  3
#define OTP_MODE_SETTING_DEEP_SLEEP_MODE_EN_BIT                ((uint32_t)0x00000004)
#define OTP_MODE_SETTING_DEEP_SLEEP_MODE_EN_POS                2
#define OTP_MODE_SETTING_READ_EN_BIT                           ((uint32_t)0x00000002)
#define OTP_MODE_SETTING_READ_EN_POS                           1
#define OTP_MODE_SETTING_POWER_ON_BIT                          ((uint32_t)0x00000001)
#define OTP_MODE_SETTING_POWER_ON_POS                          0

#define OTP_MODE_SETTING_MARGIN_EN_RST                         0x0
#define OTP_MODE_SETTING_SOFT_MODE_RST                         0x0
#define OTP_MODE_SETTING_TEST_MODE_RST                         0x0
#define OTP_MODE_SETTING_PROGREAM_MODE_EN_RST                  0x0
#define OTP_MODE_SETTING_DEEP_SLEEP_MODE_EN_RST                0x0
#define OTP_MODE_SETTING_READ_EN_RST                           0x0
#define OTP_MODE_SETTING_POWER_ON_RST                          0x0

__INLINE static void otp_mode_setting_pack(uint8_t marginen, uint8_t softmode, uint8_t testmode, uint8_t progreammodeen, uint8_t deepsleepmodeen, uint8_t readen, uint8_t poweron)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)marginen << 9) | ((uint32_t)softmode << 8) | ((uint32_t)testmode << 4) | ((uint32_t)progreammodeen << 3) | ((uint32_t)deepsleepmodeen << 2) | ((uint32_t)readen << 1) | ((uint32_t)poweron << 0));
}

__INLINE static void otp_mode_setting_unpack(uint8_t* marginen, uint8_t* softmode, uint8_t* testmode, uint8_t* progreammodeen, uint8_t* deepsleepmodeen, uint8_t* readen, uint8_t* poweron)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *marginen = (localVal & ((uint32_t)0x00000200)) >> 9;
    *softmode = (localVal & ((uint32_t)0x00000100)) >> 8;
    *testmode = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *progreammodeen = (localVal & ((uint32_t)0x00000008)) >> 3;
    *deepsleepmodeen = (localVal & ((uint32_t)0x00000004)) >> 2;
    *readen = (localVal & ((uint32_t)0x00000002)) >> 1;
    *poweron = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_mode_setting_margin_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void otp_mode_setting_margin_en_setf(uint8_t marginen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)marginen << 9));
}

__INLINE static uint8_t otp_mode_setting_soft_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void otp_mode_setting_soft_mode_setf(uint8_t softmode)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)softmode << 8));
}

__INLINE static uint8_t otp_mode_setting_test_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void otp_mode_setting_test_mode_setf(uint8_t testmode)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)testmode << 4));
}

__INLINE static uint8_t otp_mode_setting_progream_mode_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_mode_setting_progream_mode_en_setf(uint8_t progreammodeen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)progreammodeen << 3));
}

__INLINE static uint8_t otp_mode_setting_deep_sleep_mode_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void otp_mode_setting_deep_sleep_mode_en_setf(uint8_t deepsleepmodeen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)deepsleepmodeen << 2));
}

__INLINE static uint8_t otp_mode_setting_read_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void otp_mode_setting_read_en_setf(uint8_t readen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)readen << 1));
}

__INLINE static uint8_t otp_mode_setting_power_on_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_mode_setting_power_on_setf(uint8_t poweron)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_MODE_SETTING_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_MODE_SETTING_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)poweron << 0));
}

 /**
 * @brief POWER_TIMING_CONTROL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:28                tvddh   0b1
 *  27:24                tpenh   0b1
 *  23:20                 tplh   0b1
 *  19:16                 tash   0b12
 *  15:12                 tsas   0b3
 *  11:08                 tpls   0b12
 *  07:04                tpens   0b2
 *  03:00                 tvds   0b2
 * </pre>
 */
#define FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET 0x00000004


__INLINE static uint32_t otp_power_timing_control_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_power_timing_control_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_POWER_TIMING_CONTROL_TVDDH_MASK                            ((uint32_t)0xF0000000)
#define OTP_POWER_TIMING_CONTROL_TVDDH_LSB                             28
#define OTP_POWER_TIMING_CONTROL_TVDDH_WIDTH                           ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TPENH_MASK                            ((uint32_t)0x0F000000)
#define OTP_POWER_TIMING_CONTROL_TPENH_LSB                             24
#define OTP_POWER_TIMING_CONTROL_TPENH_WIDTH                           ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TPLH_MASK                             ((uint32_t)0x00F00000)
#define OTP_POWER_TIMING_CONTROL_TPLH_LSB                              20
#define OTP_POWER_TIMING_CONTROL_TPLH_WIDTH                            ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TASH_MASK                             ((uint32_t)0x000F0000)
#define OTP_POWER_TIMING_CONTROL_TASH_LSB                              16
#define OTP_POWER_TIMING_CONTROL_TASH_WIDTH                            ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TSAS_MASK                             ((uint32_t)0x0000F000)
#define OTP_POWER_TIMING_CONTROL_TSAS_LSB                              12
#define OTP_POWER_TIMING_CONTROL_TSAS_WIDTH                            ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TPLS_MASK                             ((uint32_t)0x00000F00)
#define OTP_POWER_TIMING_CONTROL_TPLS_LSB                              8
#define OTP_POWER_TIMING_CONTROL_TPLS_WIDTH                            ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TPENS_MASK                            ((uint32_t)0x000000F0)
#define OTP_POWER_TIMING_CONTROL_TPENS_LSB                             4
#define OTP_POWER_TIMING_CONTROL_TPENS_WIDTH                           ((uint32_t)0x00000004)
#define OTP_POWER_TIMING_CONTROL_TVDS_MASK                             ((uint32_t)0x0000000F)
#define OTP_POWER_TIMING_CONTROL_TVDS_LSB                              0
#define OTP_POWER_TIMING_CONTROL_TVDS_WIDTH                            ((uint32_t)0x00000004)

#define OTP_POWER_TIMING_CONTROL_TVDDH_RST                             0x1
#define OTP_POWER_TIMING_CONTROL_TPENH_RST                             0x1
#define OTP_POWER_TIMING_CONTROL_TPLH_RST                              0x1
#define OTP_POWER_TIMING_CONTROL_TASH_RST                              0x12
#define OTP_POWER_TIMING_CONTROL_TSAS_RST                              0x3
#define OTP_POWER_TIMING_CONTROL_TPLS_RST                              0x12
#define OTP_POWER_TIMING_CONTROL_TPENS_RST                             0x2
#define OTP_POWER_TIMING_CONTROL_TVDS_RST                              0x2

__INLINE static void otp_power_timing_control_pack(uint8_t tvddh, uint8_t tpenh, uint8_t tplh, uint8_t tash, uint8_t tsas, uint8_t tpls, uint8_t tpens, uint8_t tvds)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)tvddh << 28) | ((uint32_t)tpenh << 24) | ((uint32_t)tplh << 20) | ((uint32_t)tash << 16) | ((uint32_t)tsas << 12) | ((uint32_t)tpls << 8) | ((uint32_t)tpens << 4) | ((uint32_t)tvds << 0));
}

__INLINE static void otp_power_timing_control_unpack(uint8_t* tvddh, uint8_t* tpenh, uint8_t* tplh, uint8_t* tash, uint8_t* tsas, uint8_t* tpls, uint8_t* tpens, uint8_t* tvds)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *tvddh = (localVal & ((uint32_t)0xF0000000)) >> 28;
    *tpenh = (localVal & ((uint32_t)0x0F000000)) >> 24;
    *tplh = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *tash = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *tsas = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *tpls = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *tpens = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *tvds = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t otp_power_timing_control_tvddh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xF0000000)) >> 28);
}

__INLINE static void otp_power_timing_control_tvddh_setf(uint8_t tvddh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0xF0000000)) | ((uint32_t)tvddh << 28));
}

__INLINE static uint8_t otp_power_timing_control_tpenh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0F000000)) >> 24);
}

__INLINE static void otp_power_timing_control_tpenh_setf(uint8_t tpenh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0F000000)) | ((uint32_t)tpenh << 24));
}

__INLINE static uint8_t otp_power_timing_control_tplh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static void otp_power_timing_control_tplh_setf(uint8_t tplh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00F00000)) | ((uint32_t)tplh << 20));
}

__INLINE static uint8_t otp_power_timing_control_tash_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void otp_power_timing_control_tash_setf(uint8_t tash)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)tash << 16));
}

__INLINE static uint8_t otp_power_timing_control_tsas_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void otp_power_timing_control_tsas_setf(uint8_t tsas)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)tsas << 12));
}

__INLINE static uint8_t otp_power_timing_control_tpls_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void otp_power_timing_control_tpls_setf(uint8_t tpls)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)tpls << 8));
}

__INLINE static uint8_t otp_power_timing_control_tpens_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void otp_power_timing_control_tpens_setf(uint8_t tpens)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)tpens << 4));
}

__INLINE static uint8_t otp_power_timing_control_tvds_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void otp_power_timing_control_tvds_setf(uint8_t tvds)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_POWER_TIMING_CONTROL_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)tvds << 0));
}

 /**
 * @brief SETTING1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  23:21                 tpwi   0b2
 *  20:16                  tpw   0b12
 *  15:11                 tpps   0b6
 *  10:04                 tcps   0b12
 *  03:00                  tms   0b2
 * </pre>
 */
#define FEMTO_REG_OTP_SETTING1_OFFSET 0x00000008


__INLINE static uint32_t otp_setting1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_setting1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_SETTING1_TPWI_MASK                             ((uint32_t)0x00E00000)
#define OTP_SETTING1_TPWI_LSB                              21
#define OTP_SETTING1_TPWI_WIDTH                            ((uint32_t)0x00000003)
#define OTP_SETTING1_TPW_MASK                              ((uint32_t)0x001F0000)
#define OTP_SETTING1_TPW_LSB                               16
#define OTP_SETTING1_TPW_WIDTH                             ((uint32_t)0x00000005)
#define OTP_SETTING1_TPPS_MASK                             ((uint32_t)0x0000F800)
#define OTP_SETTING1_TPPS_LSB                              11
#define OTP_SETTING1_TPPS_WIDTH                            ((uint32_t)0x00000005)
#define OTP_SETTING1_TCPS_MASK                             ((uint32_t)0x000007F0)
#define OTP_SETTING1_TCPS_LSB                              4
#define OTP_SETTING1_TCPS_WIDTH                            ((uint32_t)0x00000007)
#define OTP_SETTING1_TMS_MASK                              ((uint32_t)0x0000000F)
#define OTP_SETTING1_TMS_LSB                               0
#define OTP_SETTING1_TMS_WIDTH                             ((uint32_t)0x00000004)

#define OTP_SETTING1_TPWI_RST                              0x2
#define OTP_SETTING1_TPW_RST                               0x12
#define OTP_SETTING1_TPPS_RST                              0x6
#define OTP_SETTING1_TCPS_RST                              0x12
#define OTP_SETTING1_TMS_RST                               0x2

__INLINE static void otp_setting1_pack(uint8_t tpwi, uint8_t tpw, uint8_t tpps, uint8_t tcps, uint8_t tms)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)tpwi << 21) | ((uint32_t)tpw << 16) | ((uint32_t)tpps << 11) | ((uint32_t)tcps << 4) | ((uint32_t)tms << 0));
}

__INLINE static void otp_setting1_unpack(uint8_t* tpwi, uint8_t* tpw, uint8_t* tpps, uint8_t* tcps, uint8_t* tms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *tpwi = (localVal & ((uint32_t)0x00E00000)) >> 21;
    *tpw = (localVal & ((uint32_t)0x001F0000)) >> 16;
    *tpps = (localVal & ((uint32_t)0x0000F800)) >> 11;
    *tcps = (localVal & ((uint32_t)0x000007F0)) >> 4;
    *tms = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t otp_setting1_tpwi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00E00000)) >> 21);
}

__INLINE static void otp_setting1_tpwi_setf(uint8_t tpwi)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00E00000)) | ((uint32_t)tpwi << 21));
}

__INLINE static uint8_t otp_setting1_tpw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x001F0000)) >> 16);
}

__INLINE static void otp_setting1_tpw_setf(uint8_t tpw)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x001F0000)) | ((uint32_t)tpw << 16));
}

__INLINE static uint8_t otp_setting1_tpps_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F800)) >> 11);
}

__INLINE static void otp_setting1_tpps_setf(uint8_t tpps)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0000F800)) | ((uint32_t)tpps << 11));
}

__INLINE static uint8_t otp_setting1_tcps_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000007F0)) >> 4);
}

__INLINE static void otp_setting1_tcps_setf(uint8_t tcps)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x000007F0)) | ((uint32_t)tcps << 4));
}

__INLINE static uint8_t otp_setting1_tms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void otp_setting1_tms_setf(uint8_t tms)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING1_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING1_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)tms << 0));
}

 /**
 * @brief SETTING2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  19:16                  tmh   0b1
 *  14:08                 tppr   0b12
 *  04:00                 tpph   0b6
 * </pre>
 */
#define FEMTO_REG_OTP_SETTING2_OFFSET 0x0000000C


__INLINE static uint32_t otp_setting2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_setting2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_SETTING2_TMH_MASK                              ((uint32_t)0x000F0000)
#define OTP_SETTING2_TMH_LSB                               16
#define OTP_SETTING2_TMH_WIDTH                             ((uint32_t)0x00000004)
#define OTP_SETTING2_TPPR_MASK                             ((uint32_t)0x00007F00)
#define OTP_SETTING2_TPPR_LSB                              8
#define OTP_SETTING2_TPPR_WIDTH                            ((uint32_t)0x00000007)
#define OTP_SETTING2_TPPH_MASK                             ((uint32_t)0x0000001F)
#define OTP_SETTING2_TPPH_LSB                              0
#define OTP_SETTING2_TPPH_WIDTH                            ((uint32_t)0x00000005)

#define OTP_SETTING2_TMH_RST                               0x1
#define OTP_SETTING2_TPPR_RST                              0x12
#define OTP_SETTING2_TPPH_RST                              0x6

__INLINE static void otp_setting2_pack(uint8_t tmh, uint8_t tppr, uint8_t tpph)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)tmh << 16) | ((uint32_t)tppr << 8) | ((uint32_t)tpph << 0));
}

__INLINE static void otp_setting2_unpack(uint8_t* tmh, uint8_t* tppr, uint8_t* tpph)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *tmh = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *tppr = (localVal & ((uint32_t)0x00007F00)) >> 8;
    *tpph = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t otp_setting2_tmh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static void otp_setting2_tmh_setf(uint8_t tmh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x000F0000)) | ((uint32_t)tmh << 16));
}

__INLINE static uint8_t otp_setting2_tppr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007F00)) >> 8);
}

__INLINE static void otp_setting2_tppr_setf(uint8_t tppr)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00007F00)) | ((uint32_t)tppr << 8));
}

__INLINE static uint8_t otp_setting2_tpph_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

__INLINE static void otp_setting2_tpph_setf(uint8_t tpph)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_SETTING2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_SETTING2_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0000001F)) | ((uint32_t)tpph << 0));
}

 /**
 * @brief TEST_CTRL register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  tcs   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_TEST_CTRL_OFFSET 0x00000010


__INLINE static uint32_t otp_test_ctrl_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_TEST_CTRL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_test_ctrl_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_TEST_CTRL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_TEST_CTRL_TCS_MASK                              ((uint32_t)0x0000000F)
#define OTP_TEST_CTRL_TCS_LSB                               0
#define OTP_TEST_CTRL_TCS_WIDTH                             ((uint32_t)0x00000004)

#define OTP_TEST_CTRL_TCS_RST                               0x0

__INLINE static void otp_test_ctrl_pack(uint8_t tcs)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_TEST_CTRL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)tcs << 0));
}

__INLINE static void otp_test_ctrl_unpack(uint8_t* tcs)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_TEST_CTRL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *tcs = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t otp_test_ctrl_tcs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_TEST_CTRL_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void otp_test_ctrl_tcs_setf(uint8_t tcs)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_TEST_CTRL_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)tcs << 0);
}

 /**
 * @brief STATE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04                 busy   0
 *  03:00                state   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_STATE_OFFSET 0x00000014


__INLINE static uint32_t otp_state_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_STATE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

// field definitions
#define OTP_STATE_BUSY_BIT                              ((uint32_t)0x00000010)
#define OTP_STATE_BUSY_POS                              4
#define OTP_STATE_STATE_MASK                            ((uint32_t)0x0000000F)
#define OTP_STATE_STATE_LSB                             0
#define OTP_STATE_STATE_WIDTH                           ((uint32_t)0x00000004)

#define OTP_STATE_BUSY_RST                              0x0
#define OTP_STATE_STATE_RST                             0x0

__INLINE static void otp_state_unpack(uint8_t* busy, uint8_t* state)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_STATE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *busy = (localVal & ((uint32_t)0x00000010)) >> 4;
    *state = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t otp_state_busy_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_STATE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t otp_state_state_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_STATE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief PROG_NUM register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:00       program_number   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PROG_NUM_OFFSET 0x00000018


__INLINE static uint32_t otp_prog_num_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_NUM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_prog_num_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_NUM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PROG_NUM_PROGRAM_NUMBER_MASK                   ((uint32_t)0x00000FFF)
#define OTP_PROG_NUM_PROGRAM_NUMBER_LSB                    0
#define OTP_PROG_NUM_PROGRAM_NUMBER_WIDTH                  ((uint32_t)0x0000000C)

#define OTP_PROG_NUM_PROGRAM_NUMBER_RST                    0x0

__INLINE static void otp_prog_num_pack(uint16_t programnumber)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_NUM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programnumber << 0));
}

__INLINE static void otp_prog_num_unpack(uint8_t* programnumber)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_NUM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programnumber = (localVal & ((uint32_t)0x00000FFF)) >> 0;
}

__INLINE static uint16_t otp_prog_num_program_number_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_NUM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FFF)) >> 0);
}

__INLINE static void otp_prog_num_program_number_setf(uint16_t programnumber)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_NUM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)programnumber << 0);
}

 /**
 * @brief PROG_ADDR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:00      program_address   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PROG_ADDR_OFFSET 0x0000001C


__INLINE static uint32_t otp_prog_addr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_ADDR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_prog_addr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_ADDR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PROG_ADDR_PROGRAM_ADDRESS_MASK                  ((uint32_t)0x00000FFF)
#define OTP_PROG_ADDR_PROGRAM_ADDRESS_LSB                   0
#define OTP_PROG_ADDR_PROGRAM_ADDRESS_WIDTH                 ((uint32_t)0x0000000C)

#define OTP_PROG_ADDR_PROGRAM_ADDRESS_RST                   0x0

__INLINE static void otp_prog_addr_pack(uint16_t programaddress)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_ADDR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programaddress << 0));
}

__INLINE static void otp_prog_addr_unpack(uint8_t* programaddress)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_ADDR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programaddress = (localVal & ((uint32_t)0x00000FFF)) >> 0;
}

__INLINE static uint16_t otp_prog_addr_program_address_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_ADDR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FFF)) >> 0);
}

__INLINE static void otp_prog_addr_program_address_setf(uint16_t programaddress)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_ADDR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)programaddress << 0);
}

 /**
 * @brief PROG_DATA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00      program_data_in   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PROG_DATA_OFFSET 0x00000020


__INLINE static uint32_t otp_prog_data_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_DATA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_prog_data_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_DATA_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PROG_DATA_PROGRAM_DATA_IN_MASK                  ((uint32_t)0xFFFFFFFF)
#define OTP_PROG_DATA_PROGRAM_DATA_IN_LSB                   0
#define OTP_PROG_DATA_PROGRAM_DATA_IN_WIDTH                 ((uint32_t)0x00000020)

#define OTP_PROG_DATA_PROGRAM_DATA_IN_RST                   0x0

__INLINE static void otp_prog_data_pack(uint32_t programdatain)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_DATA_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programdatain << 0));
}

__INLINE static void otp_prog_data_unpack(uint8_t* programdatain)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_DATA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programdatain = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t otp_prog_data_program_data_in_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_DATA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void otp_prog_data_program_data_in_setf(uint32_t programdatain)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_DATA_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)programdatain << 0);
}

 /**
 * @brief INT_MASK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06   program_load_next_word_interupter   0
 *     05   program_down_interupter   0
 *     04   program_ready_interupter   0
 *     03   deep_sleep_out_interupter   0
 *     02   deep_sleep_interupter   0
 *     01   power_down_interupter   0
 *     00   standby__intrupter   0
 * </pre>
 */
#define FEMTO_REG_OTP_INT_MASK_OFFSET 0x00000024


__INLINE static uint32_t otp_int_mask_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_int_mask_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_INT_MASK_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_BIT    ((uint32_t)0x00000040)
#define OTP_INT_MASK_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_POS    6
#define OTP_INT_MASK_PROGRAM_DOWN_INTERUPTER_BIT           ((uint32_t)0x00000020)
#define OTP_INT_MASK_PROGRAM_DOWN_INTERUPTER_POS           5
#define OTP_INT_MASK_PROGRAM_READY_INTERUPTER_BIT          ((uint32_t)0x00000010)
#define OTP_INT_MASK_PROGRAM_READY_INTERUPTER_POS          4
#define OTP_INT_MASK_DEEP_SLEEP_OUT_INTERUPTER_BIT         ((uint32_t)0x00000008)
#define OTP_INT_MASK_DEEP_SLEEP_OUT_INTERUPTER_POS         3
#define OTP_INT_MASK_DEEP_SLEEP_INTERUPTER_BIT             ((uint32_t)0x00000004)
#define OTP_INT_MASK_DEEP_SLEEP_INTERUPTER_POS             2
#define OTP_INT_MASK_POWER_DOWN_INTERUPTER_BIT             ((uint32_t)0x00000002)
#define OTP_INT_MASK_POWER_DOWN_INTERUPTER_POS             1
#define OTP_INT_MASK_STANDBY__INTRUPTER_BIT                ((uint32_t)0x00000001)
#define OTP_INT_MASK_STANDBY__INTRUPTER_POS                0

#define OTP_INT_MASK_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_RST  0x0
#define OTP_INT_MASK_PROGRAM_DOWN_INTERUPTER_RST           0x0
#define OTP_INT_MASK_PROGRAM_READY_INTERUPTER_RST          0x0
#define OTP_INT_MASK_DEEP_SLEEP_OUT_INTERUPTER_RST         0x0
#define OTP_INT_MASK_DEEP_SLEEP_INTERUPTER_RST             0x0
#define OTP_INT_MASK_POWER_DOWN_INTERUPTER_RST             0x0
#define OTP_INT_MASK_STANDBY__INTRUPTER_RST                0x0

__INLINE static void otp_int_mask_pack(uint8_t programloadnextwordinterupter, uint8_t programdowninterupter, uint8_t programreadyinterupter, uint8_t deepsleepoutinterupter, uint8_t deepsleepinterupter, uint8_t powerdowninterupter, uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programloadnextwordinterupter << 6) | ((uint32_t)programdowninterupter << 5) | ((uint32_t)programreadyinterupter << 4) | ((uint32_t)deepsleepoutinterupter << 3) | ((uint32_t)deepsleepinterupter << 2) | ((uint32_t)powerdowninterupter << 1) | ((uint32_t)standbyintrupter << 0));
}

__INLINE static void otp_int_mask_unpack(uint8_t* programloadnextwordinterupter, uint8_t* programdowninterupter, uint8_t* programreadyinterupter, uint8_t* deepsleepoutinterupter, uint8_t* deepsleepinterupter, uint8_t* powerdowninterupter, uint8_t* standbyintrupter)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programloadnextwordinterupter = (localVal & ((uint32_t)0x00000040)) >> 6;
    *programdowninterupter = (localVal & ((uint32_t)0x00000020)) >> 5;
    *programreadyinterupter = (localVal & ((uint32_t)0x00000010)) >> 4;
    *deepsleepoutinterupter = (localVal & ((uint32_t)0x00000008)) >> 3;
    *deepsleepinterupter = (localVal & ((uint32_t)0x00000004)) >> 2;
    *powerdowninterupter = (localVal & ((uint32_t)0x00000002)) >> 1;
    *standbyintrupter = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_int_mask_program_load_next_word_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void otp_int_mask_program_load_next_word_interupter_setf(uint8_t programloadnextwordinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)programloadnextwordinterupter << 6));
}

__INLINE static uint8_t otp_int_mask_program_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void otp_int_mask_program_down_interupter_setf(uint8_t programdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)programdowninterupter << 5));
}

__INLINE static uint8_t otp_int_mask_program_ready_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void otp_int_mask_program_ready_interupter_setf(uint8_t programreadyinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)programreadyinterupter << 4));
}

__INLINE static uint8_t otp_int_mask_deep_sleep_out_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_int_mask_deep_sleep_out_interupter_setf(uint8_t deepsleepoutinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)deepsleepoutinterupter << 3));
}

__INLINE static uint8_t otp_int_mask_deep_sleep_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void otp_int_mask_deep_sleep_interupter_setf(uint8_t deepsleepinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)deepsleepinterupter << 2));
}

__INLINE static uint8_t otp_int_mask_power_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void otp_int_mask_power_down_interupter_setf(uint8_t powerdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)powerdowninterupter << 1));
}

__INLINE static uint8_t otp_int_mask_standby__intrupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_int_mask_standby__intrupter_setf(uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_MASK_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_MASK_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)standbyintrupter << 0));
}

 /**
 * @brief INT_CLR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06   program_load_next_word_interupter   0
 *     05   program_down_interupter   0
 *     04   program_ready_interupter   0
 *     03   deep_sleep_out_interupter   0
 *     02   deep_sleep_interupter   0
 *     01   power_down_interupter   0
 *     00   standby__intrupter   0
 * </pre>
 */
#define FEMTO_REG_OTP_INT_CLR_OFFSET 0x00000028


__INLINE static uint32_t otp_int_clr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_int_clr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_INT_CLR_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_BIT    ((uint32_t)0x00000040)
#define OTP_INT_CLR_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_POS    6
#define OTP_INT_CLR_PROGRAM_DOWN_INTERUPTER_BIT           ((uint32_t)0x00000020)
#define OTP_INT_CLR_PROGRAM_DOWN_INTERUPTER_POS           5
#define OTP_INT_CLR_PROGRAM_READY_INTERUPTER_BIT          ((uint32_t)0x00000010)
#define OTP_INT_CLR_PROGRAM_READY_INTERUPTER_POS          4
#define OTP_INT_CLR_DEEP_SLEEP_OUT_INTERUPTER_BIT         ((uint32_t)0x00000008)
#define OTP_INT_CLR_DEEP_SLEEP_OUT_INTERUPTER_POS         3
#define OTP_INT_CLR_DEEP_SLEEP_INTERUPTER_BIT             ((uint32_t)0x00000004)
#define OTP_INT_CLR_DEEP_SLEEP_INTERUPTER_POS             2
#define OTP_INT_CLR_POWER_DOWN_INTERUPTER_BIT             ((uint32_t)0x00000002)
#define OTP_INT_CLR_POWER_DOWN_INTERUPTER_POS             1
#define OTP_INT_CLR_STANDBY__INTRUPTER_BIT                ((uint32_t)0x00000001)
#define OTP_INT_CLR_STANDBY__INTRUPTER_POS                0

#define OTP_INT_CLR_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_RST  0x0
#define OTP_INT_CLR_PROGRAM_DOWN_INTERUPTER_RST           0x0
#define OTP_INT_CLR_PROGRAM_READY_INTERUPTER_RST          0x0
#define OTP_INT_CLR_DEEP_SLEEP_OUT_INTERUPTER_RST         0x0
#define OTP_INT_CLR_DEEP_SLEEP_INTERUPTER_RST             0x0
#define OTP_INT_CLR_POWER_DOWN_INTERUPTER_RST             0x0
#define OTP_INT_CLR_STANDBY__INTRUPTER_RST                0x0

__INLINE static void otp_int_clr_pack(uint8_t programloadnextwordinterupter, uint8_t programdowninterupter, uint8_t programreadyinterupter, uint8_t deepsleepoutinterupter, uint8_t deepsleepinterupter, uint8_t powerdowninterupter, uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programloadnextwordinterupter << 6) | ((uint32_t)programdowninterupter << 5) | ((uint32_t)programreadyinterupter << 4) | ((uint32_t)deepsleepoutinterupter << 3) | ((uint32_t)deepsleepinterupter << 2) | ((uint32_t)powerdowninterupter << 1) | ((uint32_t)standbyintrupter << 0));
}

__INLINE static void otp_int_clr_unpack(uint8_t* programloadnextwordinterupter, uint8_t* programdowninterupter, uint8_t* programreadyinterupter, uint8_t* deepsleepoutinterupter, uint8_t* deepsleepinterupter, uint8_t* powerdowninterupter, uint8_t* standbyintrupter)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programloadnextwordinterupter = (localVal & ((uint32_t)0x00000040)) >> 6;
    *programdowninterupter = (localVal & ((uint32_t)0x00000020)) >> 5;
    *programreadyinterupter = (localVal & ((uint32_t)0x00000010)) >> 4;
    *deepsleepoutinterupter = (localVal & ((uint32_t)0x00000008)) >> 3;
    *deepsleepinterupter = (localVal & ((uint32_t)0x00000004)) >> 2;
    *powerdowninterupter = (localVal & ((uint32_t)0x00000002)) >> 1;
    *standbyintrupter = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_int_clr_program_load_next_word_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void otp_int_clr_program_load_next_word_interupter_setf(uint8_t programloadnextwordinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)programloadnextwordinterupter << 6));
}

__INLINE static uint8_t otp_int_clr_program_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void otp_int_clr_program_down_interupter_setf(uint8_t programdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)programdowninterupter << 5));
}

__INLINE static uint8_t otp_int_clr_program_ready_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void otp_int_clr_program_ready_interupter_setf(uint8_t programreadyinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)programreadyinterupter << 4));
}

__INLINE static uint8_t otp_int_clr_deep_sleep_out_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_int_clr_deep_sleep_out_interupter_setf(uint8_t deepsleepoutinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)deepsleepoutinterupter << 3));
}

__INLINE static uint8_t otp_int_clr_deep_sleep_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void otp_int_clr_deep_sleep_interupter_setf(uint8_t deepsleepinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)deepsleepinterupter << 2));
}

__INLINE static uint8_t otp_int_clr_power_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void otp_int_clr_power_down_interupter_setf(uint8_t powerdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)powerdowninterupter << 1));
}

__INLINE static uint8_t otp_int_clr_standby__intrupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_int_clr_standby__intrupter_setf(uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_CLR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_CLR_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)standbyintrupter << 0));
}

 /**
 * @brief INT_SOURCE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     06   program_load_next_word_interupter   0
 *     05   program_down_interupter   0
 *     04   program_ready_interupter   0
 *     03   deep_sleep_out_interupter   0
 *     02   deep_sleep_interupter   0
 *     01   power_down_interupter   0
 *     00   standby__intrupter   0
 * </pre>
 */
#define FEMTO_REG_OTP_INT_SOURCE_OFFSET 0x0000002C


__INLINE static uint32_t otp_int_source_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_int_source_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_INT_SOURCE_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_BIT    ((uint32_t)0x00000040)
#define OTP_INT_SOURCE_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_POS    6
#define OTP_INT_SOURCE_PROGRAM_DOWN_INTERUPTER_BIT           ((uint32_t)0x00000020)
#define OTP_INT_SOURCE_PROGRAM_DOWN_INTERUPTER_POS           5
#define OTP_INT_SOURCE_PROGRAM_READY_INTERUPTER_BIT          ((uint32_t)0x00000010)
#define OTP_INT_SOURCE_PROGRAM_READY_INTERUPTER_POS          4
#define OTP_INT_SOURCE_DEEP_SLEEP_OUT_INTERUPTER_BIT         ((uint32_t)0x00000008)
#define OTP_INT_SOURCE_DEEP_SLEEP_OUT_INTERUPTER_POS         3
#define OTP_INT_SOURCE_DEEP_SLEEP_INTERUPTER_BIT             ((uint32_t)0x00000004)
#define OTP_INT_SOURCE_DEEP_SLEEP_INTERUPTER_POS             2
#define OTP_INT_SOURCE_POWER_DOWN_INTERUPTER_BIT             ((uint32_t)0x00000002)
#define OTP_INT_SOURCE_POWER_DOWN_INTERUPTER_POS             1
#define OTP_INT_SOURCE_STANDBY__INTRUPTER_BIT                ((uint32_t)0x00000001)
#define OTP_INT_SOURCE_STANDBY__INTRUPTER_POS                0

#define OTP_INT_SOURCE_PROGRAM_LOAD_NEXT_WORD_INTERUPTER_RST  0x0
#define OTP_INT_SOURCE_PROGRAM_DOWN_INTERUPTER_RST           0x0
#define OTP_INT_SOURCE_PROGRAM_READY_INTERUPTER_RST          0x0
#define OTP_INT_SOURCE_DEEP_SLEEP_OUT_INTERUPTER_RST         0x0
#define OTP_INT_SOURCE_DEEP_SLEEP_INTERUPTER_RST             0x0
#define OTP_INT_SOURCE_POWER_DOWN_INTERUPTER_RST             0x0
#define OTP_INT_SOURCE_STANDBY__INTRUPTER_RST                0x0

__INLINE static void otp_int_source_pack(uint8_t programloadnextwordinterupter, uint8_t programdowninterupter, uint8_t programreadyinterupter, uint8_t deepsleepoutinterupter, uint8_t deepsleepinterupter, uint8_t powerdowninterupter, uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)programloadnextwordinterupter << 6) | ((uint32_t)programdowninterupter << 5) | ((uint32_t)programreadyinterupter << 4) | ((uint32_t)deepsleepoutinterupter << 3) | ((uint32_t)deepsleepinterupter << 2) | ((uint32_t)powerdowninterupter << 1) | ((uint32_t)standbyintrupter << 0));
}

__INLINE static void otp_int_source_unpack(uint8_t* programloadnextwordinterupter, uint8_t* programdowninterupter, uint8_t* programreadyinterupter, uint8_t* deepsleepoutinterupter, uint8_t* deepsleepinterupter, uint8_t* powerdowninterupter, uint8_t* standbyintrupter)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *programloadnextwordinterupter = (localVal & ((uint32_t)0x00000040)) >> 6;
    *programdowninterupter = (localVal & ((uint32_t)0x00000020)) >> 5;
    *programreadyinterupter = (localVal & ((uint32_t)0x00000010)) >> 4;
    *deepsleepoutinterupter = (localVal & ((uint32_t)0x00000008)) >> 3;
    *deepsleepinterupter = (localVal & ((uint32_t)0x00000004)) >> 2;
    *powerdowninterupter = (localVal & ((uint32_t)0x00000002)) >> 1;
    *standbyintrupter = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_int_source_program_load_next_word_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void otp_int_source_program_load_next_word_interupter_setf(uint8_t programloadnextwordinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)programloadnextwordinterupter << 6));
}

__INLINE static uint8_t otp_int_source_program_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void otp_int_source_program_down_interupter_setf(uint8_t programdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)programdowninterupter << 5));
}

__INLINE static uint8_t otp_int_source_program_ready_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void otp_int_source_program_ready_interupter_setf(uint8_t programreadyinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)programreadyinterupter << 4));
}

__INLINE static uint8_t otp_int_source_deep_sleep_out_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_int_source_deep_sleep_out_interupter_setf(uint8_t deepsleepoutinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)deepsleepoutinterupter << 3));
}

__INLINE static uint8_t otp_int_source_deep_sleep_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void otp_int_source_deep_sleep_interupter_setf(uint8_t deepsleepinterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)deepsleepinterupter << 2));
}

__INLINE static uint8_t otp_int_source_power_down_interupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void otp_int_source_power_down_interupter_setf(uint8_t powerdowninterupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)powerdowninterupter << 1));
}

__INLINE static uint8_t otp_int_source_standby__intrupter_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_int_source_standby__intrupter_setf(uint8_t standbyintrupter)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_INT_SOURCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_INT_SOURCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)standbyintrupter << 0));
}

 /**
 * @brief ADDR_PROG_S register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04               hs_mux   0
 *     03                 wdt4   0
 *     02                 wdt3   0
 *     01                 wdt2   0
 *     00                 wdt1   0
 * </pre>
 */
#define FEMTO_REG_OTP_ADDR_PROG_S_OFFSET 0x00000030


__INLINE static uint32_t otp_addr_prog_s_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_addr_prog_s_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_ADDR_PROG_S_HS_MUX_BIT                            ((uint32_t)0x00000010)
#define OTP_ADDR_PROG_S_HS_MUX_POS                            4
#define OTP_ADDR_PROG_S_WDT4_BIT                              ((uint32_t)0x00000008)
#define OTP_ADDR_PROG_S_WDT4_POS                              3
#define OTP_ADDR_PROG_S_WDT3_BIT                              ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_S_WDT3_POS                              2
#define OTP_ADDR_PROG_S_WDT2_BIT                              ((uint32_t)0x00000002)
#define OTP_ADDR_PROG_S_WDT2_POS                              1
#define OTP_ADDR_PROG_S_WDT1_BIT                              ((uint32_t)0x00000001)
#define OTP_ADDR_PROG_S_WDT1_POS                              0

#define OTP_ADDR_PROG_S_HS_MUX_RST                            0x0
#define OTP_ADDR_PROG_S_WDT4_RST                              0x0
#define OTP_ADDR_PROG_S_WDT3_RST                              0x0
#define OTP_ADDR_PROG_S_WDT2_RST                              0x0
#define OTP_ADDR_PROG_S_WDT1_RST                              0x0

__INLINE static void otp_addr_prog_s_pack(uint8_t hsmux, uint8_t wdt4, uint8_t wdt2)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)hsmux << 4) | ((uint32_t)wdt4 << 3) | ((uint32_t)wdt2 << 1));
}

__INLINE static void otp_addr_prog_s_unpack(uint8_t* hsmux, uint8_t* wdt4, uint8_t* wdt3, uint8_t* wdt2, uint8_t* wdt1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *hsmux = (localVal & ((uint32_t)0x00000010)) >> 4;
    *wdt4 = (localVal & ((uint32_t)0x00000008)) >> 3;
    *wdt3 = (localVal & ((uint32_t)0x00000004)) >> 2;
    *wdt2 = (localVal & ((uint32_t)0x00000002)) >> 1;
    *wdt1 = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_addr_prog_s_hs_mux_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void otp_addr_prog_s_hs_mux_setf(uint8_t hsmux)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)hsmux << 4));
}

__INLINE static uint8_t otp_addr_prog_s_wdt4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_addr_prog_s_wdt4_setf(uint8_t wdt4)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)wdt4 << 3));
}

__INLINE static uint8_t otp_addr_prog_s_wdt3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t otp_addr_prog_s_wdt2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void otp_addr_prog_s_wdt2_setf(uint8_t wdt2)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)wdt2 << 1));
}

__INLINE static uint8_t otp_addr_prog_s_wdt1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_S_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief ADDR_PROG_3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:23                tvpus   0b0
 *  21:18                tpvds   0b0
 *  16:13                 tvps   0b0
 *  11:08                 tvph   0b0
 *  06:03                tpvdh   0b0
 *  02:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_ADDR_PROG_3_OFFSET 0x00000034


__INLINE static uint32_t otp_addr_prog_3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_addr_prog_3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_ADDR_PROG_3_TVPUS_MASK                            ((uint32_t)0x07800000)
#define OTP_ADDR_PROG_3_TVPUS_LSB                             23
#define OTP_ADDR_PROG_3_TVPUS_WIDTH                           ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_3_TPVDS_MASK                            ((uint32_t)0x003C0000)
#define OTP_ADDR_PROG_3_TPVDS_LSB                             18
#define OTP_ADDR_PROG_3_TPVDS_WIDTH                           ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_3_TVPS_MASK                             ((uint32_t)0x0001E000)
#define OTP_ADDR_PROG_3_TVPS_LSB                              13
#define OTP_ADDR_PROG_3_TVPS_WIDTH                            ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_3_TVPH_MASK                             ((uint32_t)0x00000F00)
#define OTP_ADDR_PROG_3_TVPH_LSB                              8
#define OTP_ADDR_PROG_3_TVPH_WIDTH                            ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_3_TPVDH_MASK                            ((uint32_t)0x00000078)
#define OTP_ADDR_PROG_3_TPVDH_LSB                             3
#define OTP_ADDR_PROG_3_TPVDH_WIDTH                           ((uint32_t)0x00000004)
#define OTP_ADDR_PROG_3_RESERVED_MASK                         ((uint32_t)0x00000007)
#define OTP_ADDR_PROG_3_RESERVED_LSB                          0
#define OTP_ADDR_PROG_3_RESERVED_WIDTH                        ((uint32_t)0x00000003)

#define OTP_ADDR_PROG_3_TVPUS_RST                             0x0
#define OTP_ADDR_PROG_3_TPVDS_RST                             0x0
#define OTP_ADDR_PROG_3_TVPS_RST                              0x0
#define OTP_ADDR_PROG_3_TVPH_RST                              0x0
#define OTP_ADDR_PROG_3_TPVDH_RST                             0x0
#define OTP_ADDR_PROG_3_RESERVED_RST                          0x0

__INLINE static void otp_addr_prog_3_pack(uint8_t tvpus, uint8_t tpvds, uint8_t tvps, uint8_t tvph, uint8_t tpvdh, uint8_t reserved)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)tvpus << 23) | ((uint32_t)tpvds << 18) | ((uint32_t)tvps << 13) | ((uint32_t)tvph << 8) | ((uint32_t)tpvdh << 3) | ((uint32_t)reserved << 0));
}

__INLINE static void otp_addr_prog_3_unpack(uint8_t* tvpus, uint8_t* tpvds, uint8_t* tvps, uint8_t* tvph, uint8_t* tpvdh, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *tvpus = (localVal & ((uint32_t)0x07800000)) >> 23;
    *tpvds = (localVal & ((uint32_t)0x003C0000)) >> 18;
    *tvps = (localVal & ((uint32_t)0x0001E000)) >> 13;
    *tvph = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *tpvdh = (localVal & ((uint32_t)0x00000078)) >> 3;
    *reserved = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t otp_addr_prog_3_tvpus_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07800000)) >> 23);
}

__INLINE static void otp_addr_prog_3_tvpus_setf(uint8_t tvpus)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x07800000)) | ((uint32_t)tvpus << 23));
}

__INLINE static uint8_t otp_addr_prog_3_tpvds_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x003C0000)) >> 18);
}

__INLINE static void otp_addr_prog_3_tpvds_setf(uint8_t tpvds)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x003C0000)) | ((uint32_t)tpvds << 18));
}

__INLINE static uint8_t otp_addr_prog_3_tvps_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001E000)) >> 13);
}

__INLINE static void otp_addr_prog_3_tvps_setf(uint8_t tvps)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x0001E000)) | ((uint32_t)tvps << 13));
}

__INLINE static uint8_t otp_addr_prog_3_tvph_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void otp_addr_prog_3_tvph_setf(uint8_t tvph)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)tvph << 8));
}

__INLINE static uint8_t otp_addr_prog_3_tpvdh_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000078)) >> 3);
}

__INLINE static void otp_addr_prog_3_tpvdh_setf(uint8_t tpvdh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_3_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000078)) | ((uint32_t)tpvdh << 3));
}

 /**
 * @brief ADDR_PROG_M register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12             read_sel   0
 *     10                ptr_h   0
 *     09           pclk_sel_d   0
 *     08          otp_sel_err   0
 *  07:05              mux_sel   0b0
 *     04           hclk_sel_d   0
 *     03            mux_sel_c   0
 *  02:00           mux_sel_cs   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_ADDR_PROG_M_OFFSET 0x00000038


__INLINE static uint32_t otp_addr_prog_m_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_addr_prog_m_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_ADDR_PROG_M_READ_SEL_BIT                          ((uint32_t)0x00001000)
#define OTP_ADDR_PROG_M_READ_SEL_POS                          12
#define OTP_ADDR_PROG_M_PTR_H_BIT                             ((uint32_t)0x00000400)
#define OTP_ADDR_PROG_M_PTR_H_POS                             10
#define OTP_ADDR_PROG_M_PCLK_SEL_D_BIT                        ((uint32_t)0x00000200)
#define OTP_ADDR_PROG_M_PCLK_SEL_D_POS                        9
#define OTP_ADDR_PROG_M_OTP_SEL_ERR_BIT                       ((uint32_t)0x00000100)
#define OTP_ADDR_PROG_M_OTP_SEL_ERR_POS                       8
#define OTP_ADDR_PROG_M_MUX_SEL_MASK                          ((uint32_t)0x000000E0)
#define OTP_ADDR_PROG_M_MUX_SEL_LSB                           5
#define OTP_ADDR_PROG_M_MUX_SEL_WIDTH                         ((uint32_t)0x00000003)
#define OTP_ADDR_PROG_M_HCLK_SEL_D_BIT                        ((uint32_t)0x00000010)
#define OTP_ADDR_PROG_M_HCLK_SEL_D_POS                        4
#define OTP_ADDR_PROG_M_MUX_SEL_C_BIT                         ((uint32_t)0x00000008)
#define OTP_ADDR_PROG_M_MUX_SEL_C_POS                         3
#define OTP_ADDR_PROG_M_MUX_SEL_CS_MASK                       ((uint32_t)0x00000007)
#define OTP_ADDR_PROG_M_MUX_SEL_CS_LSB                        0
#define OTP_ADDR_PROG_M_MUX_SEL_CS_WIDTH                      ((uint32_t)0x00000003)

#define OTP_ADDR_PROG_M_READ_SEL_RST                          0x0
#define OTP_ADDR_PROG_M_PTR_H_RST                             0x0
#define OTP_ADDR_PROG_M_PCLK_SEL_D_RST                        0x0
#define OTP_ADDR_PROG_M_OTP_SEL_ERR_RST                       0x0
#define OTP_ADDR_PROG_M_MUX_SEL_RST                           0x0
#define OTP_ADDR_PROG_M_HCLK_SEL_D_RST                        0x0
#define OTP_ADDR_PROG_M_MUX_SEL_C_RST                         0x0
#define OTP_ADDR_PROG_M_MUX_SEL_CS_RST                        0x0

__INLINE static void otp_addr_prog_m_pack(uint8_t readsel, uint8_t ptrh, uint8_t pclkseld, uint8_t hclkseld, uint8_t muxselc, uint8_t muxselcs)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)readsel << 12) | ((uint32_t)ptrh << 10) | ((uint32_t)pclkseld << 9) | ((uint32_t)hclkseld << 4) | ((uint32_t)muxselc << 3) | ((uint32_t)muxselcs << 0));
}

__INLINE static void otp_addr_prog_m_unpack(uint8_t* readsel, uint8_t* ptrh, uint8_t* pclkseld, uint8_t* otpselerr, uint8_t* muxsel, uint8_t* hclkseld, uint8_t* muxselc, uint8_t* muxselcs)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *readsel = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ptrh = (localVal & ((uint32_t)0x00000400)) >> 10;
    *pclkseld = (localVal & ((uint32_t)0x00000200)) >> 9;
    *otpselerr = (localVal & ((uint32_t)0x00000100)) >> 8;
    *muxsel = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *hclkseld = (localVal & ((uint32_t)0x00000010)) >> 4;
    *muxselc = (localVal & ((uint32_t)0x00000008)) >> 3;
    *muxselcs = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t otp_addr_prog_m_read_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void otp_addr_prog_m_read_sel_setf(uint8_t readsel)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)readsel << 12));
}

__INLINE static uint8_t otp_addr_prog_m_ptr_h_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void otp_addr_prog_m_ptr_h_setf(uint8_t ptrh)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)ptrh << 10));
}

__INLINE static uint8_t otp_addr_prog_m_pclk_sel_d_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void otp_addr_prog_m_pclk_sel_d_setf(uint8_t pclkseld)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)pclkseld << 9));
}

__INLINE static uint8_t otp_addr_prog_m_otp_sel_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t otp_addr_prog_m_mux_sel_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static uint8_t otp_addr_prog_m_hclk_sel_d_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void otp_addr_prog_m_hclk_sel_d_setf(uint8_t hclkseld)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)hclkseld << 4));
}

__INLINE static uint8_t otp_addr_prog_m_mux_sel_c_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void otp_addr_prog_m_mux_sel_c_setf(uint8_t muxselc)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)muxselc << 3));
}

__INLINE static uint8_t otp_addr_prog_m_mux_sel_cs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void otp_addr_prog_m_mux_sel_cs_setf(uint8_t muxselcs)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_ADDR_PROG_M_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)muxselcs << 0));
}

 /**
 * @brief PAIO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  05:00                 PAIO   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PAIO_OFFSET 0x00000080


__INLINE static uint32_t otp_paio_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PAIO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_paio_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PAIO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PAIO_PAIO_MASK                             ((uint32_t)0x0000003F)
#define OTP_PAIO_PAIO_LSB                              0
#define OTP_PAIO_PAIO_WIDTH                            ((uint32_t)0x00000006)

#define OTP_PAIO_PAIO_RST                              0x0

__INLINE static void otp_paio_pack(uint8_t paio)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PAIO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)paio << 0));
}

__INLINE static void otp_paio_unpack(uint8_t* paio)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PAIO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *paio = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t otp_paio_paio_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PAIO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void otp_paio_paio_setf(uint8_t paio)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PAIO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)paio << 0);
}

 /**
 * @brief PTM register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  PTM   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PTM_OFFSET 0x00000084


__INLINE static uint32_t otp_ptm_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PTM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_ptm_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PTM_PTM_MASK                              ((uint32_t)0x0000000F)
#define OTP_PTM_PTM_LSB                               0
#define OTP_PTM_PTM_WIDTH                             ((uint32_t)0x00000004)

#define OTP_PTM_PTM_RST                               0x0

__INLINE static void otp_ptm_pack(uint8_t ptm)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)ptm << 0));
}

__INLINE static void otp_ptm_unpack(uint8_t* ptm)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PTM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *ptm = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t otp_ptm_ptm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PTM_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void otp_ptm_ptm_setf(uint8_t ptm)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTM_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)ptm << 0);
}

 /**
 * @brief PWE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                  PWE   0
 * </pre>
 */
#define FEMTO_REG_OTP_PWE_OFFSET 0x00000088


__INLINE static uint32_t otp_pwe_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PWE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pwe_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PWE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PWE_PWE_BIT                               ((uint32_t)0x00000001)
#define OTP_PWE_PWE_POS                               0

#define OTP_PWE_PWE_RST                               0x0

__INLINE static void otp_pwe_pack(uint8_t pwe)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PWE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)pwe << 0));
}

__INLINE static void otp_pwe_unpack(uint8_t* pwe)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PWE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pwe = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pwe_pwe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PWE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pwe_pwe_setf(uint8_t pwe)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PWE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)pwe << 0);
}

 /**
 * @brief PROG register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                 PROG   0
 * </pre>
 */
#define FEMTO_REG_OTP_PROG_OFFSET 0x0000003C


__INLINE static uint32_t otp_prog_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_prog_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PROG_PROG_BIT                              ((uint32_t)0x00000001)
#define OTP_PROG_PROG_POS                              0

#define OTP_PROG_PROG_RST                              0x0

__INLINE static void otp_prog_pack(uint8_t prog)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)prog << 0));
}

__INLINE static void otp_prog_unpack(uint8_t* prog)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *prog = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_prog_prog_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_prog_prog_setf(uint8_t prog)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)prog << 0);
}

 /**
 * @brief PCLK_CLOCKGATE_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00    pclk_clockgate_en   0
 * </pre>
 */
#define FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET 0x00000040


__INLINE static uint32_t otp_pclk_clockgate_en_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pclk_clockgate_en_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PCLK_CLOCKGATE_EN_PCLK_CLOCKGATE_EN_BIT                 ((uint32_t)0x00000001)
#define OTP_PCLK_CLOCKGATE_EN_PCLK_CLOCKGATE_EN_POS                 0

#define OTP_PCLK_CLOCKGATE_EN_PCLK_CLOCKGATE_EN_RST                 0x0

__INLINE static void otp_pclk_clockgate_en_pack(uint8_t pclkclockgateen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)pclkclockgateen << 0));
}

__INLINE static void otp_pclk_clockgate_en_unpack(uint8_t* pclkclockgateen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pclkclockgateen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pclk_clockgate_en_pclk_clockgate_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pclk_clockgate_en_pclk_clockgate_en_setf(uint8_t pclkclockgateen)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCLK_CLOCKGATE_EN_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)pclkclockgateen << 0);
}

 /**
 * @brief PCE register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                  PCE   0
 * </pre>
 */
#define FEMTO_REG_OTP_PCE_OFFSET 0x00000044


__INLINE static uint32_t otp_pce_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pce_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PCE_PCE_BIT                               ((uint32_t)0x00000001)
#define OTP_PCE_PCE_POS                               0

#define OTP_PCE_PCE_RST                               0x0

__INLINE static void otp_pce_pack(uint8_t pce)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)pce << 0));
}

__INLINE static void otp_pce_unpack(uint8_t* pce)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pce = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pce_pce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PCE_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pce_pce_setf(uint8_t pce)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PCE_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)pce << 0);
}

 /**
 * @brief PTR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                  PTR   0
 * </pre>
 */
#define FEMTO_REG_OTP_PTR_OFFSET 0x00000048


__INLINE static uint32_t otp_ptr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PTR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_ptr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PTR_PTR_BIT                               ((uint32_t)0x00000001)
#define OTP_PTR_PTR_POS                               0

#define OTP_PTR_PTR_RST                               0x0

__INLINE static void otp_ptr_pack(uint8_t ptr)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)ptr << 0));
}

__INLINE static void otp_ptr_unpack(uint8_t* ptr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PTR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *ptr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_ptr_ptr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PTR_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_ptr_ptr_setf(uint8_t ptr)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PTR_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)ptr << 0);
}

 /**
 * @brief PDSTB register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                PDSTB   0
 * </pre>
 */
#define FEMTO_REG_OTP_PDSTB_OFFSET 0x0000004C


__INLINE static uint32_t otp_pdstb_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PDSTB_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pdstb_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PDSTB_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PDSTB_PDSTB_BIT                             ((uint32_t)0x00000001)
#define OTP_PDSTB_PDSTB_POS                             0

#define OTP_PDSTB_PDSTB_RST                             0x0

__INLINE static void otp_pdstb_pack(uint8_t pdstb)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PDSTB_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)pdstb << 0));
}

__INLINE static void otp_pdstb_unpack(uint8_t* pdstb)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PDSTB_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pdstb = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pdstb_pdstb_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PDSTB_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pdstb_pdstb_setf(uint8_t pdstb)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PDSTB_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)pdstb << 0);
}

 /**
 * @brief PLDO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00                 PLDO   0
 * </pre>
 */
#define FEMTO_REG_OTP_PLDO_OFFSET 0x00000050


__INLINE static uint32_t otp_pldo_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pldo_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PLDO_PLDO_BIT                              ((uint32_t)0x00000001)
#define OTP_PLDO_PLDO_POS                              0

#define OTP_PLDO_PLDO_RST                              0x0

__INLINE static void otp_pldo_pack(uint8_t pldo)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)pldo << 0));
}

__INLINE static void otp_pldo_unpack(uint8_t* pldo)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pldo = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pldo_pldo_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pldo_pldo_setf(uint8_t pldo)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)pldo << 0);
}

 /**
 * @brief PLDO2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00              PENVDD2   0
 * </pre>
 */
#define FEMTO_REG_OTP_PLDO2_OFFSET 0x00000054


__INLINE static uint32_t otp_pldo2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_pldo2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PLDO2_PENVDD2_BIT                           ((uint32_t)0x00000001)
#define OTP_PLDO2_PENVDD2_POS                           0

#define OTP_PLDO2_PENVDD2_RST                           0x0

__INLINE static void otp_pldo2_pack(uint8_t penvdd2)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)penvdd2 << 0));
}

__INLINE static void otp_pldo2_unpack(uint8_t* penvdd2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *penvdd2 = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_pldo2_penvdd2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PLDO2_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void otp_pldo2_penvdd2_setf(uint8_t penvdd2)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PLDO2_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)penvdd2 << 0);
}

 /**
 * @brief PA register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  10:00                   PA   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PA_OFFSET 0x00000058


__INLINE static uint32_t otp_pa_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

// field definitions
#define OTP_PA_PA_MASK                               ((uint32_t)0x000007FF)
#define OTP_PA_PA_LSB                                0
#define OTP_PA_PA_WIDTH                              ((uint32_t)0x0000000B)

#define OTP_PA_PA_RST                                0x0

__INLINE static void otp_pa_unpack(uint8_t* pa)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *pa = (localVal & ((uint32_t)0x000007FF)) >> 0;
}

__INLINE static uint16_t otp_pa_pa_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PA_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000007FF)) >> 0);
}

 /**
 * @brief PROG_PROTECT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00         prog_protect   0b0
 * </pre>
 */
#define FEMTO_REG_OTP_PROG_PROTECT_OFFSET 0x00000070


__INLINE static uint32_t otp_prog_protect_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_PROTECT_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_prog_protect_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_PROTECT_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_PROG_PROTECT_PROG_PROTECT_MASK                     ((uint32_t)0xFFFFFFFF)
#define OTP_PROG_PROTECT_PROG_PROTECT_LSB                      0
#define OTP_PROG_PROTECT_PROG_PROTECT_WIDTH                    ((uint32_t)0x00000020)

#define OTP_PROG_PROTECT_PROG_PROTECT_RST                      0x0

__INLINE static void otp_prog_protect_pack(uint32_t progprotect)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_PROTECT_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)progprotect << 0));
}

__INLINE static void otp_prog_protect_unpack(uint8_t* progprotect)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_PROTECT_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *progprotect = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t otp_prog_protect_prog_protect_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_PROG_PROTECT_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void otp_prog_protect_prog_protect_setf(uint32_t progprotect)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_PROG_PROTECT_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (uint32_t)progprotect << 0);
}

 /**
 * @brief FIFO register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  10:09     set_almost_empty   0b0
 *  08:07      set_almost_full   0b0
 *     06    fifo_almost_empty   0
 *     05     fifo_almost_full   0
 *     04            fifo_full   0
 *  03:01             fifo_num   0b0
 *     00           fifo_empty   0
 * </pre>
 */
#define FEMTO_REG_OTP_FIFO_OFFSET 0x00000090


__INLINE static uint32_t otp_fifo_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
}

__INLINE static void otp_fifo_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_FIFO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, value);
}

// field definitions
#define OTP_FIFO_SET_ALMOST_EMPTY_MASK                 ((uint32_t)0x00000600)
#define OTP_FIFO_SET_ALMOST_EMPTY_LSB                  9
#define OTP_FIFO_SET_ALMOST_EMPTY_WIDTH                ((uint32_t)0x00000002)
#define OTP_FIFO_SET_ALMOST_FULL_MASK                  ((uint32_t)0x00000180)
#define OTP_FIFO_SET_ALMOST_FULL_LSB                   7
#define OTP_FIFO_SET_ALMOST_FULL_WIDTH                 ((uint32_t)0x00000002)
#define OTP_FIFO_FIFO_ALMOST_EMPTY_BIT                 ((uint32_t)0x00000040)
#define OTP_FIFO_FIFO_ALMOST_EMPTY_POS                 6
#define OTP_FIFO_FIFO_ALMOST_FULL_BIT                  ((uint32_t)0x00000020)
#define OTP_FIFO_FIFO_ALMOST_FULL_POS                  5
#define OTP_FIFO_FIFO_FULL_BIT                         ((uint32_t)0x00000010)
#define OTP_FIFO_FIFO_FULL_POS                         4
#define OTP_FIFO_FIFO_NUM_MASK                         ((uint32_t)0x0000000E)
#define OTP_FIFO_FIFO_NUM_LSB                          1
#define OTP_FIFO_FIFO_NUM_WIDTH                        ((uint32_t)0x00000003)
#define OTP_FIFO_FIFO_EMPTY_BIT                        ((uint32_t)0x00000001)
#define OTP_FIFO_FIFO_EMPTY_POS                        0

#define OTP_FIFO_SET_ALMOST_EMPTY_RST                  0x0
#define OTP_FIFO_SET_ALMOST_FULL_RST                   0x0
#define OTP_FIFO_FIFO_ALMOST_EMPTY_RST                 0x0
#define OTP_FIFO_FIFO_ALMOST_FULL_RST                  0x0
#define OTP_FIFO_FIFO_FULL_RST                         0x0
#define OTP_FIFO_FIFO_NUM_RST                          0x0
#define OTP_FIFO_FIFO_EMPTY_RST                        0x0

__INLINE static void otp_fifo_pack(uint8_t setalmostempty, uint8_t setalmostfull)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_FIFO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR,  ((uint32_t)setalmostempty << 9) | ((uint32_t)setalmostfull << 7));
}

__INLINE static void otp_fifo_unpack(uint8_t* setalmostempty, uint8_t* setalmostfull, uint8_t* fifoalmostempty, uint8_t* fifoalmostfull, uint8_t* fifofull, uint8_t* fifonum, uint8_t* fifoempty)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);

    *setalmostempty = (localVal & ((uint32_t)0x00000600)) >> 9;
    *setalmostfull = (localVal & ((uint32_t)0x00000180)) >> 7;
    *fifoalmostempty = (localVal & ((uint32_t)0x00000040)) >> 6;
    *fifoalmostfull = (localVal & ((uint32_t)0x00000020)) >> 5;
    *fifofull = (localVal & ((uint32_t)0x00000010)) >> 4;
    *fifonum = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *fifoempty = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t otp_fifo_set_almost_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void otp_fifo_set_almost_empty_setf(uint8_t setalmostempty)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_FIFO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)setalmostempty << 9));
}

__INLINE static uint8_t otp_fifo_set_almost_full_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void otp_fifo_set_almost_full_setf(uint8_t setalmostfull)
{
    _FEMTO_REG_WR(FEMTO_REG_OTP_FIFO_OFFSET+ FEMTO_REG_OTP_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)setalmostfull << 7));
}

__INLINE static uint8_t otp_fifo_fifo_almost_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t otp_fifo_fifo_almost_full_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static uint8_t otp_fifo_fifo_full_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t otp_fifo_fifo_num_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static uint8_t otp_fifo_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_OTP_FIFO_OFFSET + FEMTO_REG_OTP_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}


#endif // _FEMTO_REG_OTP_H_

