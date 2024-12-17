#ifndef _FEMTO_REG_TIMX1_H_
#define _FEMTO_REG_TIMX1_H_

#define FEMTO_REG_TIMX1_COUNT 22

#define FEMTO_REG_TIMX1_BASE_ADDR 0x4000A000

#define FEMTO_REG_TIMX1_SIZE 0x0000004C


 /**
 * @brief TIMX_CR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:08                  ckd   0b0
 *     07                 arpe   0
 *  06:05                  cms   0b0
 *     04                  dir   0
 *     03                  opm   0
 *     02                  urs   0
 *     01                 udis   0
 *     00                  cen   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CR1_OFFSET 0x00000000


__INLINE static uint32_t timx1_timx_cr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_cr1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CR1_CKD_MASK                              ((uint32_t)0x00000300)
#define TIMX1_TIMX_CR1_CKD_LSB                               8
#define TIMX1_TIMX_CR1_CKD_WIDTH                             ((uint32_t)0x00000002)
#define TIMX1_TIMX_CR1_ARPE_BIT                              ((uint32_t)0x00000080)
#define TIMX1_TIMX_CR1_ARPE_POS                              7
#define TIMX1_TIMX_CR1_CMS_MASK                              ((uint32_t)0x00000060)
#define TIMX1_TIMX_CR1_CMS_LSB                               5
#define TIMX1_TIMX_CR1_CMS_WIDTH                             ((uint32_t)0x00000002)
#define TIMX1_TIMX_CR1_DIR_BIT                               ((uint32_t)0x00000010)
#define TIMX1_TIMX_CR1_DIR_POS                               4
#define TIMX1_TIMX_CR1_OPM_BIT                               ((uint32_t)0x00000008)
#define TIMX1_TIMX_CR1_OPM_POS                               3
#define TIMX1_TIMX_CR1_URS_BIT                               ((uint32_t)0x00000004)
#define TIMX1_TIMX_CR1_URS_POS                               2
#define TIMX1_TIMX_CR1_UDIS_BIT                              ((uint32_t)0x00000002)
#define TIMX1_TIMX_CR1_UDIS_POS                              1
#define TIMX1_TIMX_CR1_CEN_BIT                               ((uint32_t)0x00000001)
#define TIMX1_TIMX_CR1_CEN_POS                               0

#define TIMX1_TIMX_CR1_CKD_RST                               0x0
#define TIMX1_TIMX_CR1_ARPE_RST                              0x0
#define TIMX1_TIMX_CR1_CMS_RST                               0x0
#define TIMX1_TIMX_CR1_DIR_RST                               0x0
#define TIMX1_TIMX_CR1_OPM_RST                               0x0
#define TIMX1_TIMX_CR1_URS_RST                               0x0
#define TIMX1_TIMX_CR1_UDIS_RST                              0x0
#define TIMX1_TIMX_CR1_CEN_RST                               0x0

__INLINE static void timx1_timx_cr1_pack(uint8_t ckd, uint8_t arpe, uint8_t cms, uint8_t dir, uint8_t opm, uint8_t urs, uint8_t udis, uint8_t cen)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ckd << 8) | ((uint32_t)arpe << 7) | ((uint32_t)cms << 5) | ((uint32_t)dir << 4) | ((uint32_t)opm << 3) | ((uint32_t)urs << 2) | ((uint32_t)udis << 1) | ((uint32_t)cen << 0));
}

__INLINE static void timx1_timx_cr1_unpack(uint8_t* ckd, uint8_t* arpe, uint8_t* cms, uint8_t* dir, uint8_t* opm, uint8_t* urs, uint8_t* udis, uint8_t* cen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ckd = (localVal & ((uint32_t)0x00000300)) >> 8;
    *arpe = (localVal & ((uint32_t)0x00000080)) >> 7;
    *cms = (localVal & ((uint32_t)0x00000060)) >> 5;
    *dir = (localVal & ((uint32_t)0x00000010)) >> 4;
    *opm = (localVal & ((uint32_t)0x00000008)) >> 3;
    *urs = (localVal & ((uint32_t)0x00000004)) >> 2;
    *udis = (localVal & ((uint32_t)0x00000002)) >> 1;
    *cen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t timx1_timx_cr1_ckd_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_cr1_ckd_setf(uint8_t ckd)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)ckd << 8));
}

__INLINE static uint8_t timx1_timx_cr1_arpe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_cr1_arpe_setf(uint8_t arpe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)arpe << 7));
}

__INLINE static uint8_t timx1_timx_cr1_cms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000060)) >> 5);
}

__INLINE static void timx1_timx_cr1_cms_setf(uint8_t cms)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000060)) | ((uint32_t)cms << 5));
}

__INLINE static uint8_t timx1_timx_cr1_dir_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void timx1_timx_cr1_dir_setf(uint8_t dir)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dir << 4));
}

__INLINE static uint8_t timx1_timx_cr1_opm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_cr1_opm_setf(uint8_t opm)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)opm << 3));
}

__INLINE static uint8_t timx1_timx_cr1_urs_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_cr1_urs_setf(uint8_t urs)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)urs << 2));
}

__INLINE static uint8_t timx1_timx_cr1_udis_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void timx1_timx_cr1_udis_setf(uint8_t udis)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)udis << 1));
}

__INLINE static uint8_t timx1_timx_cr1_cen_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void timx1_timx_cr1_cen_setf(uint8_t cen)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)cen << 0));
}

 /**
 * @brief TIMX_CR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     14                 ois4   0
 *     13                ois3n   0
 *     12                 ois3   0
 *     11                ois2n   0
 *     10                 ois2   0
 *     09                ois1n   0
 *     08                 ois1   0
 *     07                 ti1s   0
 *  06:04                  mms   0b0
 *     03                 ccds   0
 *     02                 ccus   0
 *     00                 ccpc   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CR2_OFFSET 0x00000004


__INLINE static uint32_t timx1_timx_cr2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_cr2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CR2_OIS4_BIT                              ((uint32_t)0x00004000)
#define TIMX1_TIMX_CR2_OIS4_POS                              14
#define TIMX1_TIMX_CR2_OIS3N_BIT                             ((uint32_t)0x00002000)
#define TIMX1_TIMX_CR2_OIS3N_POS                             13
#define TIMX1_TIMX_CR2_OIS3_BIT                              ((uint32_t)0x00001000)
#define TIMX1_TIMX_CR2_OIS3_POS                              12
#define TIMX1_TIMX_CR2_OIS2N_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_CR2_OIS2N_POS                             11
#define TIMX1_TIMX_CR2_OIS2_BIT                              ((uint32_t)0x00000400)
#define TIMX1_TIMX_CR2_OIS2_POS                              10
#define TIMX1_TIMX_CR2_OIS1N_BIT                             ((uint32_t)0x00000200)
#define TIMX1_TIMX_CR2_OIS1N_POS                             9
#define TIMX1_TIMX_CR2_OIS1_BIT                              ((uint32_t)0x00000100)
#define TIMX1_TIMX_CR2_OIS1_POS                              8
#define TIMX1_TIMX_CR2_TI1S_BIT                              ((uint32_t)0x00000080)
#define TIMX1_TIMX_CR2_TI1S_POS                              7
#define TIMX1_TIMX_CR2_MMS_MASK                              ((uint32_t)0x00000070)
#define TIMX1_TIMX_CR2_MMS_LSB                               4
#define TIMX1_TIMX_CR2_MMS_WIDTH                             ((uint32_t)0x00000003)
#define TIMX1_TIMX_CR2_CCDS_BIT                              ((uint32_t)0x00000008)
#define TIMX1_TIMX_CR2_CCDS_POS                              3
#define TIMX1_TIMX_CR2_CCUS_BIT                              ((uint32_t)0x00000004)
#define TIMX1_TIMX_CR2_CCUS_POS                              2
#define TIMX1_TIMX_CR2_CCPC_BIT                              ((uint32_t)0x00000001)
#define TIMX1_TIMX_CR2_CCPC_POS                              0

#define TIMX1_TIMX_CR2_OIS4_RST                              0x0
#define TIMX1_TIMX_CR2_OIS3N_RST                             0x0
#define TIMX1_TIMX_CR2_OIS3_RST                              0x0
#define TIMX1_TIMX_CR2_OIS2N_RST                             0x0
#define TIMX1_TIMX_CR2_OIS2_RST                              0x0
#define TIMX1_TIMX_CR2_OIS1N_RST                             0x0
#define TIMX1_TIMX_CR2_OIS1_RST                              0x0
#define TIMX1_TIMX_CR2_TI1S_RST                              0x0
#define TIMX1_TIMX_CR2_MMS_RST                               0x0
#define TIMX1_TIMX_CR2_CCDS_RST                              0x0
#define TIMX1_TIMX_CR2_CCUS_RST                              0x0
#define TIMX1_TIMX_CR2_CCPC_RST                              0x0

__INLINE static void timx1_timx_cr2_pack(uint8_t ois4, uint8_t ois3n, uint8_t ois3, uint8_t ois2n, uint8_t ois2, uint8_t ois1n, uint8_t ois1, uint8_t ti1s, uint8_t mms, uint8_t ccds, uint8_t ccus, uint8_t ccpc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ois4 << 14) | ((uint32_t)ois3n << 13) | ((uint32_t)ois3 << 12) | ((uint32_t)ois2n << 11) | ((uint32_t)ois2 << 10) | ((uint32_t)ois1n << 9) | ((uint32_t)ois1 << 8) | ((uint32_t)ti1s << 7) | ((uint32_t)mms << 4) | ((uint32_t)ccds << 3) | ((uint32_t)ccus << 2) | ((uint32_t)ccpc << 0));
}

__INLINE static void timx1_timx_cr2_unpack(uint8_t* ois4, uint8_t* ois3n, uint8_t* ois3, uint8_t* ois2n, uint8_t* ois2, uint8_t* ois1n, uint8_t* ois1, uint8_t* ti1s, uint8_t* mms, uint8_t* ccds, uint8_t* ccus, uint8_t* ccpc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ois4 = (localVal & ((uint32_t)0x00004000)) >> 14;
    *ois3n = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ois3 = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ois2n = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ois2 = (localVal & ((uint32_t)0x00000400)) >> 10;
    *ois1n = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ois1 = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ti1s = (localVal & ((uint32_t)0x00000080)) >> 7;
    *mms = (localVal & ((uint32_t)0x00000070)) >> 4;
    *ccds = (localVal & ((uint32_t)0x00000008)) >> 3;
    *ccus = (localVal & ((uint32_t)0x00000004)) >> 2;
    *ccpc = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t timx1_timx_cr2_ois4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void timx1_timx_cr2_ois4_setf(uint8_t ois4)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)ois4 << 14));
}

__INLINE static uint8_t timx1_timx_cr2_ois3n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void timx1_timx_cr2_ois3n_setf(uint8_t ois3n)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)ois3n << 13));
}

__INLINE static uint8_t timx1_timx_cr2_ois3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void timx1_timx_cr2_ois3_setf(uint8_t ois3)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)ois3 << 12));
}

__INLINE static uint8_t timx1_timx_cr2_ois2n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_cr2_ois2n_setf(uint8_t ois2n)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)ois2n << 11));
}

__INLINE static uint8_t timx1_timx_cr2_ois2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_cr2_ois2_setf(uint8_t ois2)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)ois2 << 10));
}

__INLINE static uint8_t timx1_timx_cr2_ois1n_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void timx1_timx_cr2_ois1n_setf(uint8_t ois1n)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)ois1n << 9));
}

__INLINE static uint8_t timx1_timx_cr2_ois1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void timx1_timx_cr2_ois1_setf(uint8_t ois1)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)ois1 << 8));
}

__INLINE static uint8_t timx1_timx_cr2_ti1s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_cr2_ti1s_setf(uint8_t ti1s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)ti1s << 7));
}

__INLINE static uint8_t timx1_timx_cr2_mms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void timx1_timx_cr2_mms_setf(uint8_t mms)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)mms << 4));
}

__INLINE static uint8_t timx1_timx_cr2_ccds_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_cr2_ccds_setf(uint8_t ccds)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)ccds << 3));
}

__INLINE static uint8_t timx1_timx_cr2_ccus_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_cr2_ccus_setf(uint8_t ccus)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)ccus << 2));
}

__INLINE static uint8_t timx1_timx_cr2_ccpc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void timx1_timx_cr2_ccpc_setf(uint8_t ccpc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)ccpc << 0));
}

 /**
 * @brief TIMX_SMCR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15                  etp   0
 *     14                  ece   0
 *  13:12                 etps   0b0
 *  11:08                  etf   0b0
 *     07                  msm   0
 *  06:04                   ts   0b0
 *  02:00                  sms   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET 0x00000008


__INLINE static uint32_t timx1_timx_smcr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_smcr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_SMCR_ETP_BIT                               ((uint32_t)0x00008000)
#define TIMX1_TIMX_SMCR_ETP_POS                               15
#define TIMX1_TIMX_SMCR_ECE_BIT                               ((uint32_t)0x00004000)
#define TIMX1_TIMX_SMCR_ECE_POS                               14
#define TIMX1_TIMX_SMCR_ETPS_MASK                             ((uint32_t)0x00003000)
#define TIMX1_TIMX_SMCR_ETPS_LSB                              12
#define TIMX1_TIMX_SMCR_ETPS_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_SMCR_ETF_MASK                              ((uint32_t)0x00000F00)
#define TIMX1_TIMX_SMCR_ETF_LSB                               8
#define TIMX1_TIMX_SMCR_ETF_WIDTH                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_SMCR_MSM_BIT                               ((uint32_t)0x00000080)
#define TIMX1_TIMX_SMCR_MSM_POS                               7
#define TIMX1_TIMX_SMCR_TS_MASK                               ((uint32_t)0x00000070)
#define TIMX1_TIMX_SMCR_TS_LSB                                4
#define TIMX1_TIMX_SMCR_TS_WIDTH                              ((uint32_t)0x00000003)
#define TIMX1_TIMX_SMCR_SMS_MASK                              ((uint32_t)0x00000007)
#define TIMX1_TIMX_SMCR_SMS_LSB                               0
#define TIMX1_TIMX_SMCR_SMS_WIDTH                             ((uint32_t)0x00000003)

#define TIMX1_TIMX_SMCR_ETP_RST                               0x0
#define TIMX1_TIMX_SMCR_ECE_RST                               0x0
#define TIMX1_TIMX_SMCR_ETPS_RST                              0x0
#define TIMX1_TIMX_SMCR_ETF_RST                               0x0
#define TIMX1_TIMX_SMCR_MSM_RST                               0x0
#define TIMX1_TIMX_SMCR_TS_RST                                0x0
#define TIMX1_TIMX_SMCR_SMS_RST                               0x0

__INLINE static void timx1_timx_smcr_pack(uint8_t etp, uint8_t ece, uint8_t etps, uint8_t etf, uint8_t msm, uint8_t ts, uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)etp << 15) | ((uint32_t)ece << 14) | ((uint32_t)etps << 12) | ((uint32_t)etf << 8) | ((uint32_t)msm << 7) | ((uint32_t)ts << 4) | ((uint32_t)sms << 0));
}

__INLINE static void timx1_timx_smcr_unpack(uint8_t* etp, uint8_t* ece, uint8_t* etps, uint8_t* etf, uint8_t* msm, uint8_t* ts, uint8_t* sms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *etp = (localVal & ((uint32_t)0x00008000)) >> 15;
    *ece = (localVal & ((uint32_t)0x00004000)) >> 14;
    *etps = (localVal & ((uint32_t)0x00003000)) >> 12;
    *etf = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *msm = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ts = (localVal & ((uint32_t)0x00000070)) >> 4;
    *sms = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t timx1_timx_smcr_etp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void timx1_timx_smcr_etp_setf(uint8_t etp)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)etp << 15));
}

__INLINE static uint8_t timx1_timx_smcr_ece_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void timx1_timx_smcr_ece_setf(uint8_t ece)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)ece << 14));
}

__INLINE static uint8_t timx1_timx_smcr_etps_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void timx1_timx_smcr_etps_setf(uint8_t etps)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)etps << 12));
}

__INLINE static uint8_t timx1_timx_smcr_etf_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static void timx1_timx_smcr_etf_setf(uint8_t etf)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)etf << 8));
}

__INLINE static uint8_t timx1_timx_smcr_msm_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_smcr_msm_setf(uint8_t msm)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)msm << 7));
}

__INLINE static uint8_t timx1_timx_smcr_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void timx1_timx_smcr_ts_setf(uint8_t ts)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)ts << 4));
}

__INLINE static uint8_t timx1_timx_smcr_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

__INLINE static void timx1_timx_smcr_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SMCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000007)) | ((uint32_t)sms << 0));
}

 /**
 * @brief TIMX_DIER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     14                  tde   0
 *     13                comde   0
 *     12                cc4de   0
 *     11                cc3de   0
 *     10                cc2de   0
 *     09                cc1de   0
 *     08                  ude   0
 *     07                  bie   0
 *     06                  tie   0
 *     05                comie   0
 *     04                cc4ie   0
 *     03                cc3ie   0
 *     02                cc2ie   0
 *     01                cc1ie   0
 *     00                  uie   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_DIER_OFFSET 0x0000000C


__INLINE static uint32_t timx1_timx_dier_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_dier_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_DIER_TDE_BIT                               ((uint32_t)0x00004000)
#define TIMX1_TIMX_DIER_TDE_POS                               14
#define TIMX1_TIMX_DIER_COMDE_BIT                             ((uint32_t)0x00002000)
#define TIMX1_TIMX_DIER_COMDE_POS                             13
#define TIMX1_TIMX_DIER_CC4DE_BIT                             ((uint32_t)0x00001000)
#define TIMX1_TIMX_DIER_CC4DE_POS                             12
#define TIMX1_TIMX_DIER_CC3DE_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_DIER_CC3DE_POS                             11
#define TIMX1_TIMX_DIER_CC2DE_BIT                             ((uint32_t)0x00000400)
#define TIMX1_TIMX_DIER_CC2DE_POS                             10
#define TIMX1_TIMX_DIER_CC1DE_BIT                             ((uint32_t)0x00000200)
#define TIMX1_TIMX_DIER_CC1DE_POS                             9
#define TIMX1_TIMX_DIER_UDE_BIT                               ((uint32_t)0x00000100)
#define TIMX1_TIMX_DIER_UDE_POS                               8
#define TIMX1_TIMX_DIER_BIE_BIT                               ((uint32_t)0x00000080)
#define TIMX1_TIMX_DIER_BIE_POS                               7
#define TIMX1_TIMX_DIER_TIE_BIT                               ((uint32_t)0x00000040)
#define TIMX1_TIMX_DIER_TIE_POS                               6
#define TIMX1_TIMX_DIER_COMIE_BIT                             ((uint32_t)0x00000020)
#define TIMX1_TIMX_DIER_COMIE_POS                             5
#define TIMX1_TIMX_DIER_CC4IE_BIT                             ((uint32_t)0x00000010)
#define TIMX1_TIMX_DIER_CC4IE_POS                             4
#define TIMX1_TIMX_DIER_CC3IE_BIT                             ((uint32_t)0x00000008)
#define TIMX1_TIMX_DIER_CC3IE_POS                             3
#define TIMX1_TIMX_DIER_CC2IE_BIT                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_DIER_CC2IE_POS                             2
#define TIMX1_TIMX_DIER_CC1IE_BIT                             ((uint32_t)0x00000002)
#define TIMX1_TIMX_DIER_CC1IE_POS                             1
#define TIMX1_TIMX_DIER_UIE_BIT                               ((uint32_t)0x00000001)
#define TIMX1_TIMX_DIER_UIE_POS                               0

#define TIMX1_TIMX_DIER_TDE_RST                               0x0
#define TIMX1_TIMX_DIER_COMDE_RST                             0x0
#define TIMX1_TIMX_DIER_CC4DE_RST                             0x0
#define TIMX1_TIMX_DIER_CC3DE_RST                             0x0
#define TIMX1_TIMX_DIER_CC2DE_RST                             0x0
#define TIMX1_TIMX_DIER_CC1DE_RST                             0x0
#define TIMX1_TIMX_DIER_UDE_RST                               0x0
#define TIMX1_TIMX_DIER_BIE_RST                               0x0
#define TIMX1_TIMX_DIER_TIE_RST                               0x0
#define TIMX1_TIMX_DIER_COMIE_RST                             0x0
#define TIMX1_TIMX_DIER_CC4IE_RST                             0x0
#define TIMX1_TIMX_DIER_CC3IE_RST                             0x0
#define TIMX1_TIMX_DIER_CC2IE_RST                             0x0
#define TIMX1_TIMX_DIER_CC1IE_RST                             0x0
#define TIMX1_TIMX_DIER_UIE_RST                               0x0

__INLINE static void timx1_timx_dier_pack(uint8_t tde, uint8_t comde, uint8_t cc4de, uint8_t cc3de, uint8_t cc2de, uint8_t cc1de, uint8_t ude, uint8_t bie, uint8_t tie, uint8_t comie, uint8_t cc4ie, uint8_t cc3ie, uint8_t cc2ie, uint8_t cc1ie, uint8_t uie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)tde << 14) | ((uint32_t)comde << 13) | ((uint32_t)cc4de << 12) | ((uint32_t)cc3de << 11) | ((uint32_t)cc2de << 10) | ((uint32_t)cc1de << 9) | ((uint32_t)ude << 8) | ((uint32_t)bie << 7) | ((uint32_t)tie << 6) | ((uint32_t)comie << 5) | ((uint32_t)cc4ie << 4) | ((uint32_t)cc3ie << 3) | ((uint32_t)cc2ie << 2) | ((uint32_t)cc1ie << 1) | ((uint32_t)uie << 0));
}

__INLINE static void timx1_timx_dier_unpack(uint8_t* tde, uint8_t* comde, uint8_t* cc4de, uint8_t* cc3de, uint8_t* cc2de, uint8_t* cc1de, uint8_t* ude, uint8_t* bie, uint8_t* tie, uint8_t* comie, uint8_t* cc4ie, uint8_t* cc3ie, uint8_t* cc2ie, uint8_t* cc1ie, uint8_t* uie)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *tde = (localVal & ((uint32_t)0x00004000)) >> 14;
    *comde = (localVal & ((uint32_t)0x00002000)) >> 13;
    *cc4de = (localVal & ((uint32_t)0x00001000)) >> 12;
    *cc3de = (localVal & ((uint32_t)0x00000800)) >> 11;
    *cc2de = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cc1de = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ude = (localVal & ((uint32_t)0x00000100)) >> 8;
    *bie = (localVal & ((uint32_t)0x00000080)) >> 7;
    *tie = (localVal & ((uint32_t)0x00000040)) >> 6;
    *comie = (localVal & ((uint32_t)0x00000020)) >> 5;
    *cc4ie = (localVal & ((uint32_t)0x00000010)) >> 4;
    *cc3ie = (localVal & ((uint32_t)0x00000008)) >> 3;
    *cc2ie = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cc1ie = (localVal & ((uint32_t)0x00000002)) >> 1;
    *uie = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t timx1_timx_dier_tde_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void timx1_timx_dier_tde_setf(uint8_t tde)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)tde << 14));
}

__INLINE static uint8_t timx1_timx_dier_comde_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void timx1_timx_dier_comde_setf(uint8_t comde)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)comde << 13));
}

__INLINE static uint8_t timx1_timx_dier_cc4de_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void timx1_timx_dier_cc4de_setf(uint8_t cc4de)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)cc4de << 12));
}

__INLINE static uint8_t timx1_timx_dier_cc3de_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_dier_cc3de_setf(uint8_t cc3de)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)cc3de << 11));
}

__INLINE static uint8_t timx1_timx_dier_cc2de_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_dier_cc2de_setf(uint8_t cc2de)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)cc2de << 10));
}

__INLINE static uint8_t timx1_timx_dier_cc1de_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void timx1_timx_dier_cc1de_setf(uint8_t cc1de)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)cc1de << 9));
}

__INLINE static uint8_t timx1_timx_dier_ude_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void timx1_timx_dier_ude_setf(uint8_t ude)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)ude << 8));
}

__INLINE static uint8_t timx1_timx_dier_bie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_dier_bie_setf(uint8_t bie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)bie << 7));
}

__INLINE static uint8_t timx1_timx_dier_tie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void timx1_timx_dier_tie_setf(uint8_t tie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)tie << 6));
}

__INLINE static uint8_t timx1_timx_dier_comie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void timx1_timx_dier_comie_setf(uint8_t comie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)comie << 5));
}

__INLINE static uint8_t timx1_timx_dier_cc4ie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void timx1_timx_dier_cc4ie_setf(uint8_t cc4ie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)cc4ie << 4));
}

__INLINE static uint8_t timx1_timx_dier_cc3ie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_dier_cc3ie_setf(uint8_t cc3ie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)cc3ie << 3));
}

__INLINE static uint8_t timx1_timx_dier_cc2ie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_dier_cc2ie_setf(uint8_t cc2ie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)cc2ie << 2));
}

__INLINE static uint8_t timx1_timx_dier_cc1ie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void timx1_timx_dier_cc1ie_setf(uint8_t cc1ie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)cc1ie << 1));
}

__INLINE static uint8_t timx1_timx_dier_uie_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void timx1_timx_dier_uie_setf(uint8_t uie)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DIER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)uie << 0));
}

 /**
 * @brief TIMX_SR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                cc4of   0
 *     11                cc3of   0
 *     10                cc2of   0
 *     09                cc1of   0
 *     07                  bif   0
 *     06                  tif   0
 *     05                comif   0
 *     04                cc4if   0
 *     03                cc3if   0
 *     02                cc2if   0
 *     01                cc1if   0
 *     00                  uif   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_SR_OFFSET 0x00000010


__INLINE static uint32_t timx1_timx_sr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_sr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_SR_CC4OF_BIT                             ((uint32_t)0x00001000)
#define TIMX1_TIMX_SR_CC4OF_POS                             12
#define TIMX1_TIMX_SR_CC3OF_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_SR_CC3OF_POS                             11
#define TIMX1_TIMX_SR_CC2OF_BIT                             ((uint32_t)0x00000400)
#define TIMX1_TIMX_SR_CC2OF_POS                             10
#define TIMX1_TIMX_SR_CC1OF_BIT                             ((uint32_t)0x00000200)
#define TIMX1_TIMX_SR_CC1OF_POS                             9
#define TIMX1_TIMX_SR_BIF_BIT                               ((uint32_t)0x00000080)
#define TIMX1_TIMX_SR_BIF_POS                               7
#define TIMX1_TIMX_SR_TIF_BIT                               ((uint32_t)0x00000040)
#define TIMX1_TIMX_SR_TIF_POS                               6
#define TIMX1_TIMX_SR_COMIF_BIT                             ((uint32_t)0x00000020)
#define TIMX1_TIMX_SR_COMIF_POS                             5
#define TIMX1_TIMX_SR_CC4IF_BIT                             ((uint32_t)0x00000010)
#define TIMX1_TIMX_SR_CC4IF_POS                             4
#define TIMX1_TIMX_SR_CC3IF_BIT                             ((uint32_t)0x00000008)
#define TIMX1_TIMX_SR_CC3IF_POS                             3
#define TIMX1_TIMX_SR_CC2IF_BIT                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_SR_CC2IF_POS                             2
#define TIMX1_TIMX_SR_CC1IF_BIT                             ((uint32_t)0x00000002)
#define TIMX1_TIMX_SR_CC1IF_POS                             1
#define TIMX1_TIMX_SR_UIF_BIT                               ((uint32_t)0x00000001)
#define TIMX1_TIMX_SR_UIF_POS                               0

#define TIMX1_TIMX_SR_CC4OF_RST                             0x0
#define TIMX1_TIMX_SR_CC3OF_RST                             0x0
#define TIMX1_TIMX_SR_CC2OF_RST                             0x0
#define TIMX1_TIMX_SR_CC1OF_RST                             0x0
#define TIMX1_TIMX_SR_BIF_RST                               0x0
#define TIMX1_TIMX_SR_TIF_RST                               0x0
#define TIMX1_TIMX_SR_COMIF_RST                             0x0
#define TIMX1_TIMX_SR_CC4IF_RST                             0x0
#define TIMX1_TIMX_SR_CC3IF_RST                             0x0
#define TIMX1_TIMX_SR_CC2IF_RST                             0x0
#define TIMX1_TIMX_SR_CC1IF_RST                             0x0
#define TIMX1_TIMX_SR_UIF_RST                               0x0

__INLINE static void timx1_timx_sr_pack(uint8_t cc4of, uint8_t cc3of, uint8_t cc2of, uint8_t cc1of, uint8_t bif, uint8_t tif, uint8_t comif, uint8_t cc4if, uint8_t cc3if, uint8_t cc2if, uint8_t cc1if, uint8_t uif)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)cc4of << 12) | ((uint32_t)cc3of << 11) | ((uint32_t)cc2of << 10) | ((uint32_t)cc1of << 9) | ((uint32_t)bif << 7) | ((uint32_t)tif << 6) | ((uint32_t)comif << 5) | ((uint32_t)cc4if << 4) | ((uint32_t)cc3if << 3) | ((uint32_t)cc2if << 2) | ((uint32_t)cc1if << 1) | ((uint32_t)uif << 0));
}

__INLINE static void timx1_timx_sr_unpack(uint8_t* cc4of, uint8_t* cc3of, uint8_t* cc2of, uint8_t* cc1of, uint8_t* bif, uint8_t* tif, uint8_t* comif, uint8_t* cc4if, uint8_t* cc3if, uint8_t* cc2if, uint8_t* cc1if, uint8_t* uif)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *cc4of = (localVal & ((uint32_t)0x00001000)) >> 12;
    *cc3of = (localVal & ((uint32_t)0x00000800)) >> 11;
    *cc2of = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cc1of = (localVal & ((uint32_t)0x00000200)) >> 9;
    *bif = (localVal & ((uint32_t)0x00000080)) >> 7;
    *tif = (localVal & ((uint32_t)0x00000040)) >> 6;
    *comif = (localVal & ((uint32_t)0x00000020)) >> 5;
    *cc4if = (localVal & ((uint32_t)0x00000010)) >> 4;
    *cc3if = (localVal & ((uint32_t)0x00000008)) >> 3;
    *cc2if = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cc1if = (localVal & ((uint32_t)0x00000002)) >> 1;
    *uif = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t timx1_timx_sr_cc4of_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void timx1_timx_sr_cc4of_setf(uint8_t cc4of)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)cc4of << 12));
}

__INLINE static uint8_t timx1_timx_sr_cc3of_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_sr_cc3of_setf(uint8_t cc3of)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)cc3of << 11));
}

__INLINE static uint8_t timx1_timx_sr_cc2of_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_sr_cc2of_setf(uint8_t cc2of)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)cc2of << 10));
}

__INLINE static uint8_t timx1_timx_sr_cc1of_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void timx1_timx_sr_cc1of_setf(uint8_t cc1of)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)cc1of << 9));
}

__INLINE static uint8_t timx1_timx_sr_bif_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_sr_bif_setf(uint8_t bif)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)bif << 7));
}

__INLINE static uint8_t timx1_timx_sr_tif_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void timx1_timx_sr_tif_setf(uint8_t tif)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)tif << 6));
}

__INLINE static uint8_t timx1_timx_sr_comif_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void timx1_timx_sr_comif_setf(uint8_t comif)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)comif << 5));
}

__INLINE static uint8_t timx1_timx_sr_cc4if_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void timx1_timx_sr_cc4if_setf(uint8_t cc4if)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)cc4if << 4));
}

__INLINE static uint8_t timx1_timx_sr_cc3if_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_sr_cc3if_setf(uint8_t cc3if)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)cc3if << 3));
}

__INLINE static uint8_t timx1_timx_sr_cc2if_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_sr_cc2if_setf(uint8_t cc2if)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)cc2if << 2));
}

__INLINE static uint8_t timx1_timx_sr_cc1if_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void timx1_timx_sr_cc1if_setf(uint8_t cc1if)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)cc1if << 1));
}

__INLINE static uint8_t timx1_timx_sr_uif_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void timx1_timx_sr_uif_setf(uint8_t uif)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_SR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_SR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)uif << 0));
}

 /**
 * @brief TIMX_EGR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     07                   bg   0
 *     06                   tg   0
 *     05                 comg   0
 *     04                 cc4g   0
 *     03                 cc3g   0
 *     02                 cc2g   0
 *     01                 cc1g   0
 *     00                   ug   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_EGR_OFFSET 0x00000014


__INLINE static uint32_t timx1_timx_egr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_egr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_EGR_BG_BIT                                ((uint32_t)0x00000080)
#define TIMX1_TIMX_EGR_BG_POS                                7
#define TIMX1_TIMX_EGR_TG_BIT                                ((uint32_t)0x00000040)
#define TIMX1_TIMX_EGR_TG_POS                                6
#define TIMX1_TIMX_EGR_COMG_BIT                              ((uint32_t)0x00000020)
#define TIMX1_TIMX_EGR_COMG_POS                              5
#define TIMX1_TIMX_EGR_CC4G_BIT                              ((uint32_t)0x00000010)
#define TIMX1_TIMX_EGR_CC4G_POS                              4
#define TIMX1_TIMX_EGR_CC3G_BIT                              ((uint32_t)0x00000008)
#define TIMX1_TIMX_EGR_CC3G_POS                              3
#define TIMX1_TIMX_EGR_CC2G_BIT                              ((uint32_t)0x00000004)
#define TIMX1_TIMX_EGR_CC2G_POS                              2
#define TIMX1_TIMX_EGR_CC1G_BIT                              ((uint32_t)0x00000002)
#define TIMX1_TIMX_EGR_CC1G_POS                              1
#define TIMX1_TIMX_EGR_UG_BIT                                ((uint32_t)0x00000001)
#define TIMX1_TIMX_EGR_UG_POS                                0

#define TIMX1_TIMX_EGR_BG_RST                                0x0
#define TIMX1_TIMX_EGR_TG_RST                                0x0
#define TIMX1_TIMX_EGR_COMG_RST                              0x0
#define TIMX1_TIMX_EGR_CC4G_RST                              0x0
#define TIMX1_TIMX_EGR_CC3G_RST                              0x0
#define TIMX1_TIMX_EGR_CC2G_RST                              0x0
#define TIMX1_TIMX_EGR_CC1G_RST                              0x0
#define TIMX1_TIMX_EGR_UG_RST                                0x0

__INLINE static void timx1_timx_egr_pack(uint8_t bg, uint8_t tg, uint8_t comg, uint8_t cc4g, uint8_t cc3g, uint8_t cc2g, uint8_t cc1g, uint8_t ug)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)bg << 7) | ((uint32_t)tg << 6) | ((uint32_t)comg << 5) | ((uint32_t)cc4g << 4) | ((uint32_t)cc3g << 3) | ((uint32_t)cc2g << 2) | ((uint32_t)cc1g << 1) | ((uint32_t)ug << 0));
}

__INLINE static void timx1_timx_egr_bg_setf(uint8_t bg)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)bg << 7));
}

__INLINE static void timx1_timx_egr_tg_setf(uint8_t tg)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)tg << 6));
}

__INLINE static void timx1_timx_egr_comg_setf(uint8_t comg)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)comg << 5));
}

__INLINE static void timx1_timx_egr_cc4g_setf(uint8_t cc4g)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)cc4g << 4));
}

__INLINE static void timx1_timx_egr_cc3g_setf(uint8_t cc3g)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)cc3g << 3));
}

__INLINE static void timx1_timx_egr_cc2g_setf(uint8_t cc2g)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)cc2g << 2));
}

__INLINE static void timx1_timx_egr_cc1g_setf(uint8_t cc1g)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)cc1g << 1));
}

__INLINE static void timx1_timx_egr_ug_setf(uint8_t ug)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_EGR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)ug << 0));
}

 /**
 * @brief TIMX_CCMR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15                oc2ce   0
 *  14:12                 oc2m   0b0
 *     11                oc2pe   0
 *     10                oc2fe   0
 *  09:08                 cc2s   0b0
 *     07                oc1ce   0
 *  06:04                 oc1m   0b0
 *     03                oc1pe   0
 *     02                oc1fe   0
 *  01:00                 cc1s   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET 0x00000018


__INLINE static uint32_t timx1_timx_ccmr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccmr1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCMR1_OC2CE_BIT                             ((uint32_t)0x00008000)
#define TIMX1_TIMX_CCMR1_OC2CE_POS                             15
#define TIMX1_TIMX_CCMR1_OC2M_MASK                             ((uint32_t)0x00007000)
#define TIMX1_TIMX_CCMR1_OC2M_LSB                              12
#define TIMX1_TIMX_CCMR1_OC2M_WIDTH                            ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR1_OC2PE_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_CCMR1_OC2PE_POS                             11
#define TIMX1_TIMX_CCMR1_OC2FE_BIT                             ((uint32_t)0x00000400)
#define TIMX1_TIMX_CCMR1_OC2FE_POS                             10
#define TIMX1_TIMX_CCMR1_CC2S_MASK                             ((uint32_t)0x00000300)
#define TIMX1_TIMX_CCMR1_CC2S_LSB                              8
#define TIMX1_TIMX_CCMR1_CC2S_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR1_OC1CE_BIT                             ((uint32_t)0x00000080)
#define TIMX1_TIMX_CCMR1_OC1CE_POS                             7
#define TIMX1_TIMX_CCMR1_OC1M_MASK                             ((uint32_t)0x00000070)
#define TIMX1_TIMX_CCMR1_OC1M_LSB                              4
#define TIMX1_TIMX_CCMR1_OC1M_WIDTH                            ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR1_OC1PE_BIT                             ((uint32_t)0x00000008)
#define TIMX1_TIMX_CCMR1_OC1PE_POS                             3
#define TIMX1_TIMX_CCMR1_OC1FE_BIT                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR1_OC1FE_POS                             2
#define TIMX1_TIMX_CCMR1_CC1S_MASK                             ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR1_CC1S_LSB                              0
#define TIMX1_TIMX_CCMR1_CC1S_WIDTH                            ((uint32_t)0x00000002)

#define TIMX1_TIMX_CCMR1_OC2CE_RST                             0x0
#define TIMX1_TIMX_CCMR1_OC2M_RST                              0x0
#define TIMX1_TIMX_CCMR1_OC2PE_RST                             0x0
#define TIMX1_TIMX_CCMR1_OC2FE_RST                             0x0
#define TIMX1_TIMX_CCMR1_CC2S_RST                              0x0
#define TIMX1_TIMX_CCMR1_OC1CE_RST                             0x0
#define TIMX1_TIMX_CCMR1_OC1M_RST                              0x0
#define TIMX1_TIMX_CCMR1_OC1PE_RST                             0x0
#define TIMX1_TIMX_CCMR1_OC1FE_RST                             0x0
#define TIMX1_TIMX_CCMR1_CC1S_RST                              0x0

__INLINE static void timx1_timx_ccmr1_pack(uint8_t oc2ce, uint8_t oc2m, uint8_t oc2pe, uint8_t oc2fe, uint8_t cc2s, uint8_t oc1ce, uint8_t oc1m, uint8_t oc1pe, uint8_t oc1fe, uint8_t cc1s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)oc2ce << 15) | ((uint32_t)oc2m << 12) | ((uint32_t)oc2pe << 11) | ((uint32_t)oc2fe << 10) | ((uint32_t)cc2s << 8) | ((uint32_t)oc1ce << 7) | ((uint32_t)oc1m << 4) | ((uint32_t)oc1pe << 3) | ((uint32_t)oc1fe << 2) | ((uint32_t)cc1s << 0));
}

__INLINE static void timx1_timx_ccmr1_unpack(uint8_t* oc2ce, uint8_t* oc2m, uint8_t* oc2pe, uint8_t* oc2fe, uint8_t* cc2s, uint8_t* oc1ce, uint8_t* oc1m, uint8_t* oc1pe, uint8_t* oc1fe, uint8_t* cc1s)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *oc2ce = (localVal & ((uint32_t)0x00008000)) >> 15;
    *oc2m = (localVal & ((uint32_t)0x00007000)) >> 12;
    *oc2pe = (localVal & ((uint32_t)0x00000800)) >> 11;
    *oc2fe = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cc2s = (localVal & ((uint32_t)0x00000300)) >> 8;
    *oc1ce = (localVal & ((uint32_t)0x00000080)) >> 7;
    *oc1m = (localVal & ((uint32_t)0x00000070)) >> 4;
    *oc1pe = (localVal & ((uint32_t)0x00000008)) >> 3;
    *oc1fe = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cc1s = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t timx1_timx_ccmr1_oc2ce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void timx1_timx_ccmr1_oc2ce_setf(uint8_t oc2ce)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)oc2ce << 15));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc2m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007000)) >> 12);
}

__INLINE static void timx1_timx_ccmr1_oc2m_setf(uint8_t oc2m)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00007000)) | ((uint32_t)oc2m << 12));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc2pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_ccmr1_oc2pe_setf(uint8_t oc2pe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)oc2pe << 11));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc2fe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_ccmr1_oc2fe_setf(uint8_t oc2fe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)oc2fe << 10));
}

__INLINE static uint8_t timx1_timx_ccmr1_cc2s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_ccmr1_cc2s_setf(uint8_t cc2s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)cc2s << 8));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc1ce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_ccmr1_oc1ce_setf(uint8_t oc1ce)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)oc1ce << 7));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc1m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void timx1_timx_ccmr1_oc1m_setf(uint8_t oc1m)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)oc1m << 4));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc1pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_ccmr1_oc1pe_setf(uint8_t oc1pe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)oc1pe << 3));
}

__INLINE static uint8_t timx1_timx_ccmr1_oc1fe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_ccmr1_oc1fe_setf(uint8_t oc1fe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)oc1fe << 2));
}

__INLINE static uint8_t timx1_timx_ccmr1_cc1s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void timx1_timx_ccmr1_cc1s_setf(uint8_t cc1s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)cc1s << 0));
}

 /**
 * @brief TIMX_CCMR1_IC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:12                 ic2f   0b0
 *  11:10               ic2psc   0b0
 *  09:08                 cc2s   0b0
 *  07:04                 ic1f   0b0
 *  03:02               ic1psc   0b0
 *  01:00                 cc1s   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET 0x00000018


__INLINE static uint32_t timx1_timx_ccmr1_ic_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccmr1_ic_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCMR1_IC_IC2F_MASK                             ((uint32_t)0x0000F000)
#define TIMX1_TIMX_CCMR1_IC_IC2F_LSB                              12
#define TIMX1_TIMX_CCMR1_IC_IC2F_WIDTH                            ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR1_IC_IC2PSC_MASK                           ((uint32_t)0x00000C00)
#define TIMX1_TIMX_CCMR1_IC_IC2PSC_LSB                            10
#define TIMX1_TIMX_CCMR1_IC_IC2PSC_WIDTH                          ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR1_IC_CC2S_MASK                             ((uint32_t)0x00000300)
#define TIMX1_TIMX_CCMR1_IC_CC2S_LSB                              8
#define TIMX1_TIMX_CCMR1_IC_CC2S_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR1_IC_IC1F_MASK                             ((uint32_t)0x000000F0)
#define TIMX1_TIMX_CCMR1_IC_IC1F_LSB                              4
#define TIMX1_TIMX_CCMR1_IC_IC1F_WIDTH                            ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR1_IC_IC1PSC_MASK                           ((uint32_t)0x0000000C)
#define TIMX1_TIMX_CCMR1_IC_IC1PSC_LSB                            2
#define TIMX1_TIMX_CCMR1_IC_IC1PSC_WIDTH                          ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR1_IC_CC1S_MASK                             ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR1_IC_CC1S_LSB                              0
#define TIMX1_TIMX_CCMR1_IC_CC1S_WIDTH                            ((uint32_t)0x00000002)

#define TIMX1_TIMX_CCMR1_IC_IC2F_RST                              0x0
#define TIMX1_TIMX_CCMR1_IC_IC2PSC_RST                            0x0
#define TIMX1_TIMX_CCMR1_IC_CC2S_RST                              0x0
#define TIMX1_TIMX_CCMR1_IC_IC1F_RST                              0x0
#define TIMX1_TIMX_CCMR1_IC_IC1PSC_RST                            0x0
#define TIMX1_TIMX_CCMR1_IC_CC1S_RST                              0x0

__INLINE static void timx1_timx_ccmr1_ic_pack(uint8_t ic2f, uint8_t ic2psc, uint8_t cc2s, uint8_t ic1f, uint8_t ic1psc, uint8_t cc1s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ic2f << 12) | ((uint32_t)ic2psc << 10) | ((uint32_t)cc2s << 8) | ((uint32_t)ic1f << 4) | ((uint32_t)ic1psc << 2) | ((uint32_t)cc1s << 0));
}

__INLINE static void timx1_timx_ccmr1_ic_unpack(uint8_t* ic2f, uint8_t* ic2psc, uint8_t* cc2s, uint8_t* ic1f, uint8_t* ic1psc, uint8_t* cc1s)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ic2f = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *ic2psc = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *cc2s = (localVal & ((uint32_t)0x00000300)) >> 8;
    *ic1f = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ic1psc = (localVal & ((uint32_t)0x0000000C)) >> 2;
    *cc1s = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_ic2f_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void timx1_timx_ccmr1_ic_ic2f_setf(uint8_t ic2f)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)ic2f << 12));
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_ic2psc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void timx1_timx_ccmr1_ic_ic2psc_setf(uint8_t ic2psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)ic2psc << 10));
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_cc2s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_ccmr1_ic_cc2s_setf(uint8_t cc2s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)cc2s << 8));
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_ic1f_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void timx1_timx_ccmr1_ic_ic1f_setf(uint8_t ic1f)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)ic1f << 4));
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_ic1psc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000C)) >> 2);
}

__INLINE static void timx1_timx_ccmr1_ic_ic1psc_setf(uint8_t ic1psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x0000000C)) | ((uint32_t)ic1psc << 2));
}

__INLINE static uint8_t timx1_timx_ccmr1_ic_cc1s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void timx1_timx_ccmr1_ic_cc1s_setf(uint8_t cc1s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR1_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)cc1s << 0));
}

 /**
 * @brief TIMX_CCMR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15                oc4ce   0
 *  14:12                 oc4m   0b0
 *     11                oc4pe   0
 *     10                oc4fe   0
 *  09:08                 cc4s   0b0
 *     07                oc3ce   0
 *  06:04                 oc3m   0b0
 *     03                oc3pe   0
 *     02                oc3fe   0
 *  01:00                 cc3s   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET 0x0000001C


__INLINE static uint32_t timx1_timx_ccmr2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccmr2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCMR2_OC4CE_BIT                             ((uint32_t)0x00008000)
#define TIMX1_TIMX_CCMR2_OC4CE_POS                             15
#define TIMX1_TIMX_CCMR2_OC4M_MASK                             ((uint32_t)0x00007000)
#define TIMX1_TIMX_CCMR2_OC4M_LSB                              12
#define TIMX1_TIMX_CCMR2_OC4M_WIDTH                            ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR2_OC4PE_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_CCMR2_OC4PE_POS                             11
#define TIMX1_TIMX_CCMR2_OC4FE_BIT                             ((uint32_t)0x00000400)
#define TIMX1_TIMX_CCMR2_OC4FE_POS                             10
#define TIMX1_TIMX_CCMR2_CC4S_MASK                             ((uint32_t)0x00000300)
#define TIMX1_TIMX_CCMR2_CC4S_LSB                              8
#define TIMX1_TIMX_CCMR2_CC4S_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR2_OC3CE_BIT                             ((uint32_t)0x00000080)
#define TIMX1_TIMX_CCMR2_OC3CE_POS                             7
#define TIMX1_TIMX_CCMR2_OC3M_MASK                             ((uint32_t)0x00000070)
#define TIMX1_TIMX_CCMR2_OC3M_LSB                              4
#define TIMX1_TIMX_CCMR2_OC3M_WIDTH                            ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR2_OC3PE_BIT                             ((uint32_t)0x00000008)
#define TIMX1_TIMX_CCMR2_OC3PE_POS                             3
#define TIMX1_TIMX_CCMR2_OC3FE_BIT                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR2_OC3FE_POS                             2
#define TIMX1_TIMX_CCMR2_CC3S_MASK                             ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR2_CC3S_LSB                              0
#define TIMX1_TIMX_CCMR2_CC3S_WIDTH                            ((uint32_t)0x00000002)

#define TIMX1_TIMX_CCMR2_OC4CE_RST                             0x0
#define TIMX1_TIMX_CCMR2_OC4M_RST                              0x0
#define TIMX1_TIMX_CCMR2_OC4PE_RST                             0x0
#define TIMX1_TIMX_CCMR2_OC4FE_RST                             0x0
#define TIMX1_TIMX_CCMR2_CC4S_RST                              0x0
#define TIMX1_TIMX_CCMR2_OC3CE_RST                             0x0
#define TIMX1_TIMX_CCMR2_OC3M_RST                              0x0
#define TIMX1_TIMX_CCMR2_OC3PE_RST                             0x0
#define TIMX1_TIMX_CCMR2_OC3FE_RST                             0x0
#define TIMX1_TIMX_CCMR2_CC3S_RST                              0x0

__INLINE static void timx1_timx_ccmr2_pack(uint8_t oc4ce, uint8_t oc4m, uint8_t oc4pe, uint8_t oc4fe, uint8_t cc4s, uint8_t oc3ce, uint8_t oc3m, uint8_t oc3pe, uint8_t oc3fe, uint8_t cc3s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)oc4ce << 15) | ((uint32_t)oc4m << 12) | ((uint32_t)oc4pe << 11) | ((uint32_t)oc4fe << 10) | ((uint32_t)cc4s << 8) | ((uint32_t)oc3ce << 7) | ((uint32_t)oc3m << 4) | ((uint32_t)oc3pe << 3) | ((uint32_t)oc3fe << 2) | ((uint32_t)cc3s << 0));
}

__INLINE static void timx1_timx_ccmr2_unpack(uint8_t* oc4ce, uint8_t* oc4m, uint8_t* oc4pe, uint8_t* oc4fe, uint8_t* cc4s, uint8_t* oc3ce, uint8_t* oc3m, uint8_t* oc3pe, uint8_t* oc3fe, uint8_t* cc3s)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *oc4ce = (localVal & ((uint32_t)0x00008000)) >> 15;
    *oc4m = (localVal & ((uint32_t)0x00007000)) >> 12;
    *oc4pe = (localVal & ((uint32_t)0x00000800)) >> 11;
    *oc4fe = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cc4s = (localVal & ((uint32_t)0x00000300)) >> 8;
    *oc3ce = (localVal & ((uint32_t)0x00000080)) >> 7;
    *oc3m = (localVal & ((uint32_t)0x00000070)) >> 4;
    *oc3pe = (localVal & ((uint32_t)0x00000008)) >> 3;
    *oc3fe = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cc3s = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t timx1_timx_ccmr2_oc4ce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void timx1_timx_ccmr2_oc4ce_setf(uint8_t oc4ce)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)oc4ce << 15));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc4m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007000)) >> 12);
}

__INLINE static void timx1_timx_ccmr2_oc4m_setf(uint8_t oc4m)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00007000)) | ((uint32_t)oc4m << 12));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc4pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_ccmr2_oc4pe_setf(uint8_t oc4pe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)oc4pe << 11));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc4fe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_ccmr2_oc4fe_setf(uint8_t oc4fe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)oc4fe << 10));
}

__INLINE static uint8_t timx1_timx_ccmr2_cc4s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_ccmr2_cc4s_setf(uint8_t cc4s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)cc4s << 8));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc3ce_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_ccmr2_oc3ce_setf(uint8_t oc3ce)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)oc3ce << 7));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc3m_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void timx1_timx_ccmr2_oc3m_setf(uint8_t oc3m)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)oc3m << 4));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc3pe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_ccmr2_oc3pe_setf(uint8_t oc3pe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)oc3pe << 3));
}

__INLINE static uint8_t timx1_timx_ccmr2_oc3fe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_ccmr2_oc3fe_setf(uint8_t oc3fe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)oc3fe << 2));
}

__INLINE static uint8_t timx1_timx_ccmr2_cc3s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void timx1_timx_ccmr2_cc3s_setf(uint8_t cc3s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)cc3s << 0));
}

 /**
 * @brief TIMX_CCMR2_IC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:12                 ic4f   0b0
 *  11:10               ic4psc   0b0
 *  09:08                 cc4s   0b0
 *  07:04                 ic3f   0b0
 *  03:02               ic3psc   0b0
 *  01:00                 cc3s   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET 0x0000001C


__INLINE static uint32_t timx1_timx_ccmr2_ic_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccmr2_ic_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCMR2_IC_IC4F_MASK                             ((uint32_t)0x0000F000)
#define TIMX1_TIMX_CCMR2_IC_IC4F_LSB                              12
#define TIMX1_TIMX_CCMR2_IC_IC4F_WIDTH                            ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR2_IC_IC4PSC_MASK                           ((uint32_t)0x00000C00)
#define TIMX1_TIMX_CCMR2_IC_IC4PSC_LSB                            10
#define TIMX1_TIMX_CCMR2_IC_IC4PSC_WIDTH                          ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR2_IC_CC4S_MASK                             ((uint32_t)0x00000300)
#define TIMX1_TIMX_CCMR2_IC_CC4S_LSB                              8
#define TIMX1_TIMX_CCMR2_IC_CC4S_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR2_IC_IC3F_MASK                             ((uint32_t)0x000000F0)
#define TIMX1_TIMX_CCMR2_IC_IC3F_LSB                              4
#define TIMX1_TIMX_CCMR2_IC_IC3F_WIDTH                            ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCMR2_IC_IC3PSC_MASK                           ((uint32_t)0x0000000C)
#define TIMX1_TIMX_CCMR2_IC_IC3PSC_LSB                            2
#define TIMX1_TIMX_CCMR2_IC_IC3PSC_WIDTH                          ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCMR2_IC_CC3S_MASK                             ((uint32_t)0x00000003)
#define TIMX1_TIMX_CCMR2_IC_CC3S_LSB                              0
#define TIMX1_TIMX_CCMR2_IC_CC3S_WIDTH                            ((uint32_t)0x00000002)

#define TIMX1_TIMX_CCMR2_IC_IC4F_RST                              0x0
#define TIMX1_TIMX_CCMR2_IC_IC4PSC_RST                            0x0
#define TIMX1_TIMX_CCMR2_IC_CC4S_RST                              0x0
#define TIMX1_TIMX_CCMR2_IC_IC3F_RST                              0x0
#define TIMX1_TIMX_CCMR2_IC_IC3PSC_RST                            0x0
#define TIMX1_TIMX_CCMR2_IC_CC3S_RST                              0x0

__INLINE static void timx1_timx_ccmr2_ic_pack(uint8_t ic4f, uint8_t ic4psc, uint8_t cc4s, uint8_t ic3f, uint8_t ic3psc, uint8_t cc3s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ic4f << 12) | ((uint32_t)ic4psc << 10) | ((uint32_t)cc4s << 8) | ((uint32_t)ic3f << 4) | ((uint32_t)ic3psc << 2) | ((uint32_t)cc3s << 0));
}

__INLINE static void timx1_timx_ccmr2_ic_unpack(uint8_t* ic4f, uint8_t* ic4psc, uint8_t* cc4s, uint8_t* ic3f, uint8_t* ic3psc, uint8_t* cc3s)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ic4f = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *ic4psc = (localVal & ((uint32_t)0x00000C00)) >> 10;
    *cc4s = (localVal & ((uint32_t)0x00000300)) >> 8;
    *ic3f = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ic3psc = (localVal & ((uint32_t)0x0000000C)) >> 2;
    *cc3s = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_ic4f_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static void timx1_timx_ccmr2_ic_ic4f_setf(uint8_t ic4f)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x0000F000)) | ((uint32_t)ic4f << 12));
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_ic4psc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000C00)) >> 10);
}

__INLINE static void timx1_timx_ccmr2_ic_ic4psc_setf(uint8_t ic4psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000C00)) | ((uint32_t)ic4psc << 10));
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_cc4s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_ccmr2_ic_cc4s_setf(uint8_t cc4s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)cc4s << 8));
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_ic3f_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static void timx1_timx_ccmr2_ic_ic3f_setf(uint8_t ic3f)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x000000F0)) | ((uint32_t)ic3f << 4));
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_ic3psc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000C)) >> 2);
}

__INLINE static void timx1_timx_ccmr2_ic_ic3psc_setf(uint8_t ic3psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x0000000C)) | ((uint32_t)ic3psc << 2));
}

__INLINE static uint8_t timx1_timx_ccmr2_ic_cc3s_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void timx1_timx_ccmr2_ic_cc3s_setf(uint8_t cc3s)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCMR2_IC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)cc3s << 0));
}

 /**
 * @brief TIMX_CCER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15                cc4np   0
 *     14                cc4ne   0
 *     13                 cc4p   0
 *     12                 cc4e   0
 *     11                cc3np   0
 *     10                cc3ne   0
 *     09                 cc3p   0
 *     08                 cc3e   0
 *     07                cc2np   0
 *     06                cc2ne   0
 *     05                 cc2p   0
 *     04                 cc2e   0
 *     03                cc1np   0
 *     02                cc1ne   0
 *     01                 cc1p   0
 *     00                 cc1e   0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCER_OFFSET 0x00000020


__INLINE static uint32_t timx1_timx_ccer_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccer_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCER_CC4NP_BIT                             ((uint32_t)0x00008000)
#define TIMX1_TIMX_CCER_CC4NP_POS                             15
#define TIMX1_TIMX_CCER_CC4NE_BIT                             ((uint32_t)0x00004000)
#define TIMX1_TIMX_CCER_CC4NE_POS                             14
#define TIMX1_TIMX_CCER_CC4P_BIT                              ((uint32_t)0x00002000)
#define TIMX1_TIMX_CCER_CC4P_POS                              13
#define TIMX1_TIMX_CCER_CC4E_BIT                              ((uint32_t)0x00001000)
#define TIMX1_TIMX_CCER_CC4E_POS                              12
#define TIMX1_TIMX_CCER_CC3NP_BIT                             ((uint32_t)0x00000800)
#define TIMX1_TIMX_CCER_CC3NP_POS                             11
#define TIMX1_TIMX_CCER_CC3NE_BIT                             ((uint32_t)0x00000400)
#define TIMX1_TIMX_CCER_CC3NE_POS                             10
#define TIMX1_TIMX_CCER_CC3P_BIT                              ((uint32_t)0x00000200)
#define TIMX1_TIMX_CCER_CC3P_POS                              9
#define TIMX1_TIMX_CCER_CC3E_BIT                              ((uint32_t)0x00000100)
#define TIMX1_TIMX_CCER_CC3E_POS                              8
#define TIMX1_TIMX_CCER_CC2NP_BIT                             ((uint32_t)0x00000080)
#define TIMX1_TIMX_CCER_CC2NP_POS                             7
#define TIMX1_TIMX_CCER_CC2NE_BIT                             ((uint32_t)0x00000040)
#define TIMX1_TIMX_CCER_CC2NE_POS                             6
#define TIMX1_TIMX_CCER_CC2P_BIT                              ((uint32_t)0x00000020)
#define TIMX1_TIMX_CCER_CC2P_POS                              5
#define TIMX1_TIMX_CCER_CC2E_BIT                              ((uint32_t)0x00000010)
#define TIMX1_TIMX_CCER_CC2E_POS                              4
#define TIMX1_TIMX_CCER_CC1NP_BIT                             ((uint32_t)0x00000008)
#define TIMX1_TIMX_CCER_CC1NP_POS                             3
#define TIMX1_TIMX_CCER_CC1NE_BIT                             ((uint32_t)0x00000004)
#define TIMX1_TIMX_CCER_CC1NE_POS                             2
#define TIMX1_TIMX_CCER_CC1P_BIT                              ((uint32_t)0x00000002)
#define TIMX1_TIMX_CCER_CC1P_POS                              1
#define TIMX1_TIMX_CCER_CC1E_BIT                              ((uint32_t)0x00000001)
#define TIMX1_TIMX_CCER_CC1E_POS                              0

#define TIMX1_TIMX_CCER_CC4NP_RST                             0x0
#define TIMX1_TIMX_CCER_CC4NE_RST                             0x0
#define TIMX1_TIMX_CCER_CC4P_RST                              0x0
#define TIMX1_TIMX_CCER_CC4E_RST                              0x0
#define TIMX1_TIMX_CCER_CC3NP_RST                             0x0
#define TIMX1_TIMX_CCER_CC3NE_RST                             0x0
#define TIMX1_TIMX_CCER_CC3P_RST                              0x0
#define TIMX1_TIMX_CCER_CC3E_RST                              0x0
#define TIMX1_TIMX_CCER_CC2NP_RST                             0x0
#define TIMX1_TIMX_CCER_CC2NE_RST                             0x0
#define TIMX1_TIMX_CCER_CC2P_RST                              0x0
#define TIMX1_TIMX_CCER_CC2E_RST                              0x0
#define TIMX1_TIMX_CCER_CC1NP_RST                             0x0
#define TIMX1_TIMX_CCER_CC1NE_RST                             0x0
#define TIMX1_TIMX_CCER_CC1P_RST                              0x0
#define TIMX1_TIMX_CCER_CC1E_RST                              0x0

__INLINE static void timx1_timx_ccer_pack(uint8_t cc4np, uint8_t cc4ne, uint8_t cc4p, uint8_t cc4e, uint8_t cc3np, uint8_t cc3ne, uint8_t cc3p, uint8_t cc3e, uint8_t cc2np, uint8_t cc2ne, uint8_t cc2p, uint8_t cc2e, uint8_t cc1np, uint8_t cc1ne, uint8_t cc1p, uint8_t cc1e)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)cc4np << 15) | ((uint32_t)cc4ne << 14) | ((uint32_t)cc4p << 13) | ((uint32_t)cc4e << 12) | ((uint32_t)cc3np << 11) | ((uint32_t)cc3ne << 10) | ((uint32_t)cc3p << 9) | ((uint32_t)cc3e << 8) | ((uint32_t)cc2np << 7) | ((uint32_t)cc2ne << 6) | ((uint32_t)cc2p << 5) | ((uint32_t)cc2e << 4) | ((uint32_t)cc1np << 3) | ((uint32_t)cc1ne << 2) | ((uint32_t)cc1p << 1) | ((uint32_t)cc1e << 0));
}

__INLINE static void timx1_timx_ccer_unpack(uint8_t* cc4np, uint8_t* cc4ne, uint8_t* cc4p, uint8_t* cc4e, uint8_t* cc3np, uint8_t* cc3ne, uint8_t* cc3p, uint8_t* cc3e, uint8_t* cc2np, uint8_t* cc2ne, uint8_t* cc2p, uint8_t* cc2e, uint8_t* cc1np, uint8_t* cc1ne, uint8_t* cc1p, uint8_t* cc1e)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *cc4np = (localVal & ((uint32_t)0x00008000)) >> 15;
    *cc4ne = (localVal & ((uint32_t)0x00004000)) >> 14;
    *cc4p = (localVal & ((uint32_t)0x00002000)) >> 13;
    *cc4e = (localVal & ((uint32_t)0x00001000)) >> 12;
    *cc3np = (localVal & ((uint32_t)0x00000800)) >> 11;
    *cc3ne = (localVal & ((uint32_t)0x00000400)) >> 10;
    *cc3p = (localVal & ((uint32_t)0x00000200)) >> 9;
    *cc3e = (localVal & ((uint32_t)0x00000100)) >> 8;
    *cc2np = (localVal & ((uint32_t)0x00000080)) >> 7;
    *cc2ne = (localVal & ((uint32_t)0x00000040)) >> 6;
    *cc2p = (localVal & ((uint32_t)0x00000020)) >> 5;
    *cc2e = (localVal & ((uint32_t)0x00000010)) >> 4;
    *cc1np = (localVal & ((uint32_t)0x00000008)) >> 3;
    *cc1ne = (localVal & ((uint32_t)0x00000004)) >> 2;
    *cc1p = (localVal & ((uint32_t)0x00000002)) >> 1;
    *cc1e = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t timx1_timx_ccer_cc4np_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void timx1_timx_ccer_cc4np_setf(uint8_t cc4np)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)cc4np << 15));
}

__INLINE static uint8_t timx1_timx_ccer_cc4ne_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void timx1_timx_ccer_cc4ne_setf(uint8_t cc4ne)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)cc4ne << 14));
}

__INLINE static uint8_t timx1_timx_ccer_cc4p_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void timx1_timx_ccer_cc4p_setf(uint8_t cc4p)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)cc4p << 13));
}

__INLINE static uint8_t timx1_timx_ccer_cc4e_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void timx1_timx_ccer_cc4e_setf(uint8_t cc4e)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)cc4e << 12));
}

__INLINE static uint8_t timx1_timx_ccer_cc3np_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_ccer_cc3np_setf(uint8_t cc3np)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)cc3np << 11));
}

__INLINE static uint8_t timx1_timx_ccer_cc3ne_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_ccer_cc3ne_setf(uint8_t cc3ne)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)cc3ne << 10));
}

__INLINE static uint8_t timx1_timx_ccer_cc3p_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void timx1_timx_ccer_cc3p_setf(uint8_t cc3p)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)cc3p << 9));
}

__INLINE static uint8_t timx1_timx_ccer_cc3e_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void timx1_timx_ccer_cc3e_setf(uint8_t cc3e)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)cc3e << 8));
}

__INLINE static uint8_t timx1_timx_ccer_cc2np_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void timx1_timx_ccer_cc2np_setf(uint8_t cc2np)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)cc2np << 7));
}

__INLINE static uint8_t timx1_timx_ccer_cc2ne_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void timx1_timx_ccer_cc2ne_setf(uint8_t cc2ne)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)cc2ne << 6));
}

__INLINE static uint8_t timx1_timx_ccer_cc2p_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void timx1_timx_ccer_cc2p_setf(uint8_t cc2p)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)cc2p << 5));
}

__INLINE static uint8_t timx1_timx_ccer_cc2e_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void timx1_timx_ccer_cc2e_setf(uint8_t cc2e)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)cc2e << 4));
}

__INLINE static uint8_t timx1_timx_ccer_cc1np_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void timx1_timx_ccer_cc1np_setf(uint8_t cc1np)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)cc1np << 3));
}

__INLINE static uint8_t timx1_timx_ccer_cc1ne_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void timx1_timx_ccer_cc1ne_setf(uint8_t cc1ne)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)cc1ne << 2));
}

__INLINE static uint8_t timx1_timx_ccer_cc1p_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void timx1_timx_ccer_cc1p_setf(uint8_t cc1p)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)cc1p << 1));
}

__INLINE static uint8_t timx1_timx_ccer_cc1e_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void timx1_timx_ccer_cc1e_setf(uint8_t cc1e)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCER_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)cc1e << 0));
}

 /**
 * @brief TIMX_CNT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  cnt   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CNT_OFFSET 0x00000024


__INLINE static uint32_t timx1_timx_cnt_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_cnt_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CNT_CNT_MASK                              ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_CNT_CNT_LSB                               0
#define TIMX1_TIMX_CNT_CNT_WIDTH                             ((uint32_t)0x00000020)

#define TIMX1_TIMX_CNT_CNT_RST                               0x0

__INLINE static void timx1_timx_cnt_pack(uint32_t cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)cnt << 0));
}

__INLINE static void timx1_timx_cnt_unpack(uint8_t* cnt)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *cnt = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_cnt_cnt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_cnt_cnt_setf(uint32_t cnt)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CNT_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)cnt << 0);
}

 /**
 * @brief TIMX_PSC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  15:00                  psc   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_PSC_OFFSET 0x00000028


__INLINE static uint32_t timx1_timx_psc_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_psc_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_PSC_PSC_MASK                              ((uint32_t)0x0000FFFF)
#define TIMX1_TIMX_PSC_PSC_LSB                               0
#define TIMX1_TIMX_PSC_PSC_WIDTH                             ((uint32_t)0x00000010)

#define TIMX1_TIMX_PSC_PSC_RST                               0x0

__INLINE static void timx1_timx_psc_pack(uint16_t psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)psc << 0));
}

__INLINE static void timx1_timx_psc_unpack(uint8_t* psc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *psc = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint16_t timx1_timx_psc_psc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void timx1_timx_psc_psc_setf(uint16_t psc)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_PSC_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)psc << 0);
}

 /**
 * @brief TIMX_ARR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  arr   0bFFFFFFFF
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_ARR_OFFSET 0x0000002C


__INLINE static uint32_t timx1_timx_arr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_arr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_ARR_ARR_MASK                              ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_ARR_ARR_LSB                               0
#define TIMX1_TIMX_ARR_ARR_WIDTH                             ((uint32_t)0x00000020)

#define TIMX1_TIMX_ARR_ARR_RST                               0xFFFFFFFF

__INLINE static void timx1_timx_arr_pack(uint32_t arr)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)arr << 0));
}

__INLINE static void timx1_timx_arr_unpack(uint8_t* arr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *arr = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_arr_arr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_arr_arr_setf(uint32_t arr)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_ARR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)arr << 0);
}

 /**
 * @brief TIMX_RCR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  07:00                  rep   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_RCR_OFFSET 0x00000030


__INLINE static uint32_t timx1_timx_rcr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_rcr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_RCR_REP_MASK                              ((uint32_t)0x000000FF)
#define TIMX1_TIMX_RCR_REP_LSB                               0
#define TIMX1_TIMX_RCR_REP_WIDTH                             ((uint32_t)0x00000008)

#define TIMX1_TIMX_RCR_REP_RST                               0x0

__INLINE static void timx1_timx_rcr_pack(uint8_t rep)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)rep << 0));
}

__INLINE static void timx1_timx_rcr_unpack(uint8_t* rep)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *rep = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t timx1_timx_rcr_rep_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void timx1_timx_rcr_rep_setf(uint8_t rep)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_RCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)rep << 0);
}

 /**
 * @brief TIMX_CCR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 CCR1   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET 0x00000034


__INLINE static uint32_t timx1_timx_ccr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccr1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCR1_CCR1_MASK                             ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_CCR1_CCR1_LSB                              0
#define TIMX1_TIMX_CCR1_CCR1_WIDTH                            ((uint32_t)0x00000020)

#define TIMX1_TIMX_CCR1_CCR1_RST                              0x0

__INLINE static void timx1_timx_ccr1_pack(uint32_t ccr1)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ccr1 << 0));
}

__INLINE static void timx1_timx_ccr1_unpack(uint8_t* ccr1)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ccr1 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_ccr1_ccr1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_ccr1_ccr1_setf(uint32_t ccr1)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR1_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)ccr1 << 0);
}

 /**
 * @brief TIMX_CCR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 CCR2   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET 0x00000038


__INLINE static uint32_t timx1_timx_ccr2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccr2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCR2_CCR2_MASK                             ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_CCR2_CCR2_LSB                              0
#define TIMX1_TIMX_CCR2_CCR2_WIDTH                            ((uint32_t)0x00000020)

#define TIMX1_TIMX_CCR2_CCR2_RST                              0x0

__INLINE static void timx1_timx_ccr2_pack(uint32_t ccr2)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ccr2 << 0));
}

__INLINE static void timx1_timx_ccr2_unpack(uint8_t* ccr2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ccr2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_ccr2_ccr2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_ccr2_ccr2_setf(uint32_t ccr2)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR2_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)ccr2 << 0);
}

 /**
 * @brief TIMX_CCR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 CCR3   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET 0x0000003C


__INLINE static uint32_t timx1_timx_ccr3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccr3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCR3_CCR3_MASK                             ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_CCR3_CCR3_LSB                              0
#define TIMX1_TIMX_CCR3_CCR3_WIDTH                            ((uint32_t)0x00000020)

#define TIMX1_TIMX_CCR3_CCR3_RST                              0x0

__INLINE static void timx1_timx_ccr3_pack(uint32_t ccr3)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ccr3 << 0));
}

__INLINE static void timx1_timx_ccr3_unpack(uint8_t* ccr3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ccr3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_ccr3_ccr3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_ccr3_ccr3_setf(uint32_t ccr3)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR3_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)ccr3 << 0);
}

 /**
 * @brief TIMX_CCR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 CCR4   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET 0x00000040


__INLINE static uint32_t timx1_timx_ccr4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_ccr4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_CCR4_CCR4_MASK                             ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_CCR4_CCR4_LSB                              0
#define TIMX1_TIMX_CCR4_CCR4_WIDTH                            ((uint32_t)0x00000020)

#define TIMX1_TIMX_CCR4_CCR4_RST                              0x0

__INLINE static void timx1_timx_ccr4_pack(uint32_t ccr4)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)ccr4 << 0));
}

__INLINE static void timx1_timx_ccr4_unpack(uint8_t* ccr4)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *ccr4 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_ccr4_ccr4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_ccr4_ccr4_setf(uint32_t ccr4)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_CCR4_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)ccr4 << 0);
}

 /**
 * @brief TIMX_BDTR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     15                  MOE   0
 *     14                  AOE   0
 *     13                  BKP   0
 *     12                  BKE   0
 *     11                 OSSR   0
 *     10                 ossi   0
 *  09:08                 lock   0b0
 *  07:00                  dtg   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET 0x00000044


__INLINE static uint32_t timx1_timx_bdtr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_bdtr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_BDTR_MOE_BIT                               ((uint32_t)0x00008000)
#define TIMX1_TIMX_BDTR_MOE_POS                               15
#define TIMX1_TIMX_BDTR_AOE_BIT                               ((uint32_t)0x00004000)
#define TIMX1_TIMX_BDTR_AOE_POS                               14
#define TIMX1_TIMX_BDTR_BKP_BIT                               ((uint32_t)0x00002000)
#define TIMX1_TIMX_BDTR_BKP_POS                               13
#define TIMX1_TIMX_BDTR_BKE_BIT                               ((uint32_t)0x00001000)
#define TIMX1_TIMX_BDTR_BKE_POS                               12
#define TIMX1_TIMX_BDTR_OSSR_BIT                              ((uint32_t)0x00000800)
#define TIMX1_TIMX_BDTR_OSSR_POS                              11
#define TIMX1_TIMX_BDTR_OSSI_BIT                              ((uint32_t)0x00000400)
#define TIMX1_TIMX_BDTR_OSSI_POS                              10
#define TIMX1_TIMX_BDTR_LOCK_MASK                             ((uint32_t)0x00000300)
#define TIMX1_TIMX_BDTR_LOCK_LSB                              8
#define TIMX1_TIMX_BDTR_LOCK_WIDTH                            ((uint32_t)0x00000002)
#define TIMX1_TIMX_BDTR_DTG_MASK                              ((uint32_t)0x000000FF)
#define TIMX1_TIMX_BDTR_DTG_LSB                               0
#define TIMX1_TIMX_BDTR_DTG_WIDTH                             ((uint32_t)0x00000008)

#define TIMX1_TIMX_BDTR_MOE_RST                               0x0
#define TIMX1_TIMX_BDTR_AOE_RST                               0x0
#define TIMX1_TIMX_BDTR_BKP_RST                               0x0
#define TIMX1_TIMX_BDTR_BKE_RST                               0x0
#define TIMX1_TIMX_BDTR_OSSR_RST                              0x0
#define TIMX1_TIMX_BDTR_OSSI_RST                              0x0
#define TIMX1_TIMX_BDTR_LOCK_RST                              0x0
#define TIMX1_TIMX_BDTR_DTG_RST                               0x0

__INLINE static void timx1_timx_bdtr_pack(uint8_t moe, uint8_t aoe, uint8_t bkp, uint8_t bke, uint8_t ossr, uint8_t ossi, uint8_t lock, uint8_t dtg)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)moe << 15) | ((uint32_t)aoe << 14) | ((uint32_t)bkp << 13) | ((uint32_t)bke << 12) | ((uint32_t)ossr << 11) | ((uint32_t)ossi << 10) | ((uint32_t)lock << 8) | ((uint32_t)dtg << 0));
}

__INLINE static void timx1_timx_bdtr_unpack(uint8_t* moe, uint8_t* aoe, uint8_t* bkp, uint8_t* bke, uint8_t* ossr, uint8_t* ossi, uint8_t* lock, uint8_t* dtg)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *moe = (localVal & ((uint32_t)0x00008000)) >> 15;
    *aoe = (localVal & ((uint32_t)0x00004000)) >> 14;
    *bkp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *bke = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ossr = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ossi = (localVal & ((uint32_t)0x00000400)) >> 10;
    *lock = (localVal & ((uint32_t)0x00000300)) >> 8;
    *dtg = (localVal & ((uint32_t)0x000000FF)) >> 0;
}

__INLINE static uint8_t timx1_timx_bdtr_moe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void timx1_timx_bdtr_moe_setf(uint8_t moe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)moe << 15));
}

__INLINE static uint8_t timx1_timx_bdtr_aoe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void timx1_timx_bdtr_aoe_setf(uint8_t aoe)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)aoe << 14));
}

__INLINE static uint8_t timx1_timx_bdtr_bkp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void timx1_timx_bdtr_bkp_setf(uint8_t bkp)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)bkp << 13));
}

__INLINE static uint8_t timx1_timx_bdtr_bke_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void timx1_timx_bdtr_bke_setf(uint8_t bke)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)bke << 12));
}

__INLINE static uint8_t timx1_timx_bdtr_ossr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void timx1_timx_bdtr_ossr_setf(uint8_t ossr)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)ossr << 11));
}

__INLINE static uint8_t timx1_timx_bdtr_ossi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void timx1_timx_bdtr_ossi_setf(uint8_t ossi)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)ossi << 10));
}

__INLINE static uint8_t timx1_timx_bdtr_lock_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000300)) >> 8);
}

__INLINE static void timx1_timx_bdtr_lock_setf(uint8_t lock)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00000300)) | ((uint32_t)lock << 8));
}

__INLINE static uint8_t timx1_timx_bdtr_dtg_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000FF)) >> 0);
}

__INLINE static void timx1_timx_bdtr_dtg_setf(uint8_t dtg)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_BDTR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x000000FF)) | ((uint32_t)dtg << 0));
}

 /**
 * @brief TIMX_DCR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  12:08                  dbl   0b0
 *  04:00                  dba   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_DCR_OFFSET 0x00000048


__INLINE static uint32_t timx1_timx_dcr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_dcr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_DCR_DBL_MASK                              ((uint32_t)0x00001F00)
#define TIMX1_TIMX_DCR_DBL_LSB                               8
#define TIMX1_TIMX_DCR_DBL_WIDTH                             ((uint32_t)0x00000005)
#define TIMX1_TIMX_DCR_DBA_MASK                              ((uint32_t)0x0000001F)
#define TIMX1_TIMX_DCR_DBA_LSB                               0
#define TIMX1_TIMX_DCR_DBA_WIDTH                             ((uint32_t)0x00000005)

#define TIMX1_TIMX_DCR_DBL_RST                               0x0
#define TIMX1_TIMX_DCR_DBA_RST                               0x0

__INLINE static void timx1_timx_dcr_pack(uint8_t dbl, uint8_t dba)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)dbl << 8) | ((uint32_t)dba << 0));
}

__INLINE static void timx1_timx_dcr_unpack(uint8_t* dbl, uint8_t* dba)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *dbl = (localVal & ((uint32_t)0x00001F00)) >> 8;
    *dba = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t timx1_timx_dcr_dbl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001F00)) >> 8);
}

__INLINE static void timx1_timx_dcr_dbl_setf(uint8_t dbl)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x00001F00)) | ((uint32_t)dbl << 8));
}

__INLINE static uint8_t timx1_timx_dcr_dba_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001F)) >> 0);
}

__INLINE static void timx1_timx_dcr_dba_setf(uint8_t dba)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DCR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR) & ~((uint32_t)0x0000001F)) | ((uint32_t)dba << 0));
}

 /**
 * @brief TIMX_DMAR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                 dmab   0b0
 * </pre>
 */
#define FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET 0x0000004C


__INLINE static uint32_t timx1_timx_dmar_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
}

__INLINE static void timx1_timx_dmar_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, value);
}

// field definitions
#define TIMX1_TIMX_DMAR_DMAB_MASK                             ((uint32_t)0xFFFFFFFF)
#define TIMX1_TIMX_DMAR_DMAB_LSB                              0
#define TIMX1_TIMX_DMAR_DMAB_WIDTH                            ((uint32_t)0x00000020)

#define TIMX1_TIMX_DMAR_DMAB_RST                              0x0

__INLINE static void timx1_timx_dmar_pack(uint32_t dmab)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR,  ((uint32_t)dmab << 0));
}

__INLINE static void timx1_timx_dmar_unpack(uint8_t* dmab)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);

    *dmab = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t timx1_timx_dmar_dmab_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET + FEMTO_REG_TIMX1_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void timx1_timx_dmar_dmab_setf(uint32_t dmab)
{
    _FEMTO_REG_WR(FEMTO_REG_TIMX1_TIMX_DMAR_OFFSET+ FEMTO_REG_TIMX1_BASE_ADDR, (uint32_t)dmab << 0);
}


#endif // _FEMTO_REG_TIMX1_H_

