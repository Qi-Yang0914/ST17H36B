#ifndef _FEMTO_REG_DMAC_H_
#define _FEMTO_REG_DMAC_H_

#define FEMTO_REG_DMAC_COUNT 203

#define FEMTO_REG_DMAC_BASE_ADDR 0x40010000

#define FEMTO_REG_DMAC_SIZE 0x000003FC


 /**
 * @brief SAR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR0_OFFSET 0x00000000


__INLINE static uint32_t dmac_sar0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR0_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR0_SAR_LSB                               0
#define DMAC_SAR0_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR0_SAR_RST                               0x0

__INLINE static void dmac_sar0_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar0_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar0_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar0_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR01 register definition
 */
#define FEMTO_REG_DMAC_SAR01_OFFSET 0x00000004


__INLINE static uint32_t dmac_sar01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR01_RESERVED_LSB                          0
#define DMAC_SAR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR01_RESERVED_RST                          0x0

__INLINE static void dmac_sar01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR0_OFFSET 0x00000008


__INLINE static uint32_t dmac_dar0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR0_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR0_DAR_LSB                               0
#define DMAC_DAR0_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR0_DAR_RST                               0x0

__INLINE static void dmac_dar0_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar0_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar0_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar0_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR01 register definition
 */
#define FEMTO_REG_DMAC_DAR01_OFFSET 0x0000000C


__INLINE static uint32_t dmac_dar01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR01_RESERVED_LSB                          0
#define DMAC_DAR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR01_RESERVED_RST                          0x0

__INLINE static void dmac_dar01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP0_OFFSET 0x00000010


__INLINE static uint32_t dmac_llp0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP0_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP0_LOC_LSB                               2
#define DMAC_LLP0_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP0_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP0_LMS_LSB                               0
#define DMAC_LLP0_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP0_LOC_RST                               0x0
#define DMAC_LLP0_LMS_RST                               0x0

__INLINE static void dmac_llp0_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp0_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp0_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp0_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp0_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp0_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP01 register definition
 */
#define FEMTO_REG_DMAC_LLP01_OFFSET 0x00000014


__INLINE static uint32_t dmac_llp01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP01_RESERVED_LSB                          0
#define DMAC_LLP01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP01_RESERVED_RST                          0x0

__INLINE static void dmac_llp01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL0_OFFSET 0x00000018


__INLINE static uint32_t dmac_ctl0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL0_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL0_LLP_SRC_EN_POS                        28
#define DMAC_CTL0_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL0_LLP_DST_EN_POS                        27
#define DMAC_CTL0_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL0_SMS_LSB                               25
#define DMAC_CTL0_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL0_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL0_DMS_LSB                               23
#define DMAC_CTL0_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL0_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL0_TT_FC_LSB                             20
#define DMAC_CTL0_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL0_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL0_DST_SCATTER_EN_POS                    18
#define DMAC_CTL0_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL0_SRC_GATHER_EN_POS                     17
#define DMAC_CTL0_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL0_SRC_MSIZE_LSB                         14
#define DMAC_CTL0_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL0_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL0_DEST_MSIZE_LSB                        11
#define DMAC_CTL0_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL0_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL0_SINC_LSB                              9
#define DMAC_CTL0_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL0_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL0_DINC_LSB                              7
#define DMAC_CTL0_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL0_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL0_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL0_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL0_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL0_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL0_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL0_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL0_INT_EN_POS                            0

#define DMAC_CTL0_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL0_LLP_DST_EN_RST                        0x0
#define DMAC_CTL0_SMS_RST                               0x0
#define DMAC_CTL0_DMS_RST                               0x0
#define DMAC_CTL0_TT_FC_RST                             0x3
#define DMAC_CTL0_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL0_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL0_SRC_MSIZE_RST                         0x1
#define DMAC_CTL0_DEST_MSIZE_RST                        0x1
#define DMAC_CTL0_SINC_RST                              0x0
#define DMAC_CTL0_DINC_RST                              0x0
#define DMAC_CTL0_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL0_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL0_INT_EN_RST                            0x1

__INLINE static void dmac_ctl0_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl0_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl0_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl0_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl0_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl0_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl0_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl0_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl0_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl0_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl0_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl0_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl0_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl0_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl0_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl0_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl0_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl0_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl0_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl0_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl0_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl0_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl0_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl0_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl0_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl0_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl0_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl0_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl0_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl0_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL01 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  11:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL01_OFFSET 0x0000001C


__INLINE static uint32_t dmac_ctl01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl01_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL01_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL01_DONE_POS                              12
#define DMAC_CTL01_BLOCK_TS_MASK                         ((uint32_t)0x00000FFF)
#define DMAC_CTL01_BLOCK_TS_LSB                          0
#define DMAC_CTL01_BLOCK_TS_WIDTH                        ((uint32_t)0x0000000C)

#define DMAC_CTL01_DONE_RST                              0x0
#define DMAC_CTL01_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl01_pack(uint8_t done, uint16_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl01_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x00000FFF)) >> 0;
}

__INLINE static uint8_t dmac_ctl01_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl01_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint16_t dmac_ctl01_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000FFF)) >> 0);
}

__INLINE static void dmac_ctl01_block_ts_setf(uint16_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000FFF)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT0_OFFSET 0x00000020


__INLINE static uint32_t dmac_sstat0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT0_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT0_SSTAT_LSB                             0
#define DMAC_SSTAT0_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT0_SSTAT_RST                             0x0

__INLINE static void dmac_sstat0_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat0_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat0_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat0_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT01 register definition
 */
#define FEMTO_REG_DMAC_SSTAT01_OFFSET 0x00000024


__INLINE static uint32_t dmac_sstat01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT01_RESERVED_LSB                          0
#define DMAC_SSTAT01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT01_RESERVED_RST                          0x0

__INLINE static void dmac_sstat01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT0_OFFSET 0x00000028


__INLINE static uint32_t dmac_dstat0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT0_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT0_DSTAT_LSB                             0
#define DMAC_DSTAT0_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT0_DSTAT_RST                             0x0

__INLINE static void dmac_dstat0_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat0_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat0_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat0_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT01 register definition
 */
#define FEMTO_REG_DMAC_DSTAT01_OFFSET 0x0000002C


__INLINE static uint32_t dmac_dstat01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT01_RESERVED_LSB                          0
#define DMAC_DSTAT01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT01_RESERVED_RST                          0x0

__INLINE static void dmac_dstat01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR0_OFFSET 0x00000030


__INLINE static uint32_t dmac_sstatar0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR0_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR0_SSTATAR_LSB                           0
#define DMAC_SSTATAR0_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR0_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar0_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar0_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar0_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar0_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR01 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR01_OFFSET 0x00000034


__INLINE static uint32_t dmac_sstatar01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR01_RESERVED_LSB                          0
#define DMAC_SSTATAR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR01_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR0_OFFSET 0x00000038


__INLINE static uint32_t dmac_dstatar0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR0_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR0_DSTATAR_LSB                           0
#define DMAC_DSTATAR0_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR0_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar0_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar0_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar0_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar0_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR01 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR01_OFFSET 0x0000003C


__INLINE static uint32_t dmac_dstatar01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR01_RESERVED_LSB                          0
#define DMAC_DSTATAR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR01_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b0
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG0_OFFSET 0x00000040


__INLINE static uint32_t dmac_cfg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG0_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG0_RELOAD_DST_POS                        31
#define DMAC_CFG0_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG0_RELOAD_SRC_POS                        30
#define DMAC_CFG0_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG0_MAX_ABRST_LSB                         20
#define DMAC_CFG0_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG0_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG0_SRC_HS_POL_POS                        19
#define DMAC_CFG0_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG0_DST_HS_POL_POS                        18
#define DMAC_CFG0_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG0_LOCK_B_POS                            17
#define DMAC_CFG0_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG0_LOCK_CH_POS                           16
#define DMAC_CFG0_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG0_LOCK_B_L_LSB                          14
#define DMAC_CFG0_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG0_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG0_LOCK_CH_L_LSB                         12
#define DMAC_CFG0_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG0_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG0_HS_SEL_SRC_POS                        11
#define DMAC_CFG0_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG0_HS_SEL_DST_POS                        10
#define DMAC_CFG0_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG0_FIFO_EMPTY_POS                        9
#define DMAC_CFG0_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG0_CH_SUSP_POS                           8
#define DMAC_CFG0_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG0_CH_PRIOR_LSB                          5
#define DMAC_CFG0_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG0_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG0_RESERVED_LSB                          0
#define DMAC_CFG0_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG0_RELOAD_DST_RST                        0x0
#define DMAC_CFG0_RELOAD_SRC_RST                        0x0
#define DMAC_CFG0_MAX_ABRST_RST                         0x0
#define DMAC_CFG0_SRC_HS_POL_RST                        0x0
#define DMAC_CFG0_DST_HS_POL_RST                        0x0
#define DMAC_CFG0_LOCK_B_RST                            0x0
#define DMAC_CFG0_LOCK_CH_RST                           0x0
#define DMAC_CFG0_LOCK_B_L_RST                          0x0
#define DMAC_CFG0_LOCK_CH_L_RST                         0x0
#define DMAC_CFG0_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG0_HS_SEL_DST_RST                        0x1
#define DMAC_CFG0_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG0_CH_SUSP_RST                           0x0
#define DMAC_CFG0_CH_PRIOR_RST                          0x0
#define DMAC_CFG0_RESERVED_RST                          0x0

__INLINE static void dmac_cfg0_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg0_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg0_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg0_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg0_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg0_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg0_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg0_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg0_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg0_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg0_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg0_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg0_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg0_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg0_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg0_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg0_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg0_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg0_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg0_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg0_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg0_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg0_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg0_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg0_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg0_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg0_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg0_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg0_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG01 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG01_OFFSET 0x00000044


__INLINE static uint32_t dmac_cfg01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg01_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG01_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG01_DEST_PER_LSB                          11
#define DMAC_CFG01_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG01_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG01_SRC_PER_LSB                           7
#define DMAC_CFG01_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG01_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG01_SS_UPD_EN_POS                         6
#define DMAC_CFG01_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG01_DS_UPD_EN_POS                         5
#define DMAC_CFG01_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG01_PROTCTL_LSB                           2
#define DMAC_CFG01_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG01_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG01_FIFO_MODE_POS                         1
#define DMAC_CFG01_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG01_FCMODE_POS                            0

#define DMAC_CFG01_DEST_PER_RST                          0x0
#define DMAC_CFG01_SRC_PER_RST                           0x0
#define DMAC_CFG01_SS_UPD_EN_RST                         0x0
#define DMAC_CFG01_DS_UPD_EN_RST                         0x0
#define DMAC_CFG01_PROTCTL_RST                           0x1
#define DMAC_CFG01_FIFO_MODE_RST                         0x0
#define DMAC_CFG01_FCMODE_RST                            0x0

__INLINE static void dmac_cfg01_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg01_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg01_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg01_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg01_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg01_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg01_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg01_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg01_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg01_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg01_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg01_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg01_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg01_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg01_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg01_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG01_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR0_OFFSET 0x00000048


__INLINE static uint32_t dmac_sgr0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR0_SGC_MASK                              ((uint32_t)0x1FF00000)
#define DMAC_SGR0_SGC_LSB                               20
#define DMAC_SGR0_SGC_WIDTH                             ((uint32_t)0x00000009)
#define DMAC_SGR0_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR0_SGI_LSB                               0
#define DMAC_SGR0_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR0_SGC_RST                               0x0
#define DMAC_SGR0_SGI_RST                               0x0

__INLINE static void dmac_sgr0_pack(uint16_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr0_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x1FF00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint16_t dmac_sgr0_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF00000)) >> 20);
}

__INLINE static void dmac_sgr0_sgc_setf(uint16_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x1FF00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr0_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr0_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR01 register definition
 */
#define FEMTO_REG_DMAC_SGR01_OFFSET 0x0000004C


__INLINE static uint32_t dmac_sgr01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR01_RESERVED_LSB                          0
#define DMAC_SGR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR01_RESERVED_RST                          0x0

__INLINE static void dmac_sgr01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR0_OFFSET 0x00000050


__INLINE static uint32_t dmac_dsr0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR0_DSC_MASK                              ((uint32_t)0x1FF00000)
#define DMAC_DSR0_DSC_LSB                               20
#define DMAC_DSR0_DSC_WIDTH                             ((uint32_t)0x00000009)
#define DMAC_DSR0_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR0_DSI_LSB                               0
#define DMAC_DSR0_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR0_DSC_RST                               0x0
#define DMAC_DSR0_DSI_RST                               0x0

__INLINE static void dmac_dsr0_pack(uint16_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr0_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x1FF00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint16_t dmac_dsr0_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF00000)) >> 20);
}

__INLINE static void dmac_dsr0_dsc_setf(uint16_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x1FF00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr0_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr0_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR0_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR01 register definition
 */
#define FEMTO_REG_DMAC_DSR01_OFFSET 0x00000054


__INLINE static uint32_t dmac_dsr01_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR01_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR01_RESERVED_LSB                          0
#define DMAC_DSR01_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR01_RESERVED_RST                          0x0

__INLINE static void dmac_dsr01_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR01_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SAR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR1_OFFSET 0x00000058


__INLINE static uint32_t dmac_sar1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR1_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR1_SAR_LSB                               0
#define DMAC_SAR1_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR1_SAR_RST                               0x0

__INLINE static void dmac_sar1_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar1_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar1_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar1_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR11 register definition
 */
#define FEMTO_REG_DMAC_SAR11_OFFSET 0x0000005C


__INLINE static uint32_t dmac_sar11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR11_RESERVED_LSB                          0
#define DMAC_SAR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR11_RESERVED_RST                          0x0

__INLINE static void dmac_sar11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR1_OFFSET 0x00000060


__INLINE static uint32_t dmac_dar1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR1_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR1_DAR_LSB                               0
#define DMAC_DAR1_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR1_DAR_RST                               0x0

__INLINE static void dmac_dar1_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar1_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar1_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar1_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR11 register definition
 */
#define FEMTO_REG_DMAC_DAR11_OFFSET 0x00000064


__INLINE static uint32_t dmac_dar11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR11_RESERVED_LSB                          0
#define DMAC_DAR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR11_RESERVED_RST                          0x0

__INLINE static void dmac_dar11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP1_OFFSET 0x00000068


__INLINE static uint32_t dmac_llp1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP1_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP1_LOC_LSB                               2
#define DMAC_LLP1_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP1_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP1_LMS_LSB                               0
#define DMAC_LLP1_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP1_LOC_RST                               0x0
#define DMAC_LLP1_LMS_RST                               0x0

__INLINE static void dmac_llp1_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp1_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp1_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp1_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp1_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp1_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP11 register definition
 */
#define FEMTO_REG_DMAC_LLP11_OFFSET 0x0000006C


__INLINE static uint32_t dmac_llp11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP11_RESERVED_LSB                          0
#define DMAC_LLP11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP11_RESERVED_RST                          0x0

__INLINE static void dmac_llp11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL1_OFFSET 0x00000070


__INLINE static uint32_t dmac_ctl1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL1_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL1_LLP_SRC_EN_POS                        28
#define DMAC_CTL1_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL1_LLP_DST_EN_POS                        27
#define DMAC_CTL1_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL1_SMS_LSB                               25
#define DMAC_CTL1_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL1_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL1_DMS_LSB                               23
#define DMAC_CTL1_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL1_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL1_TT_FC_LSB                             20
#define DMAC_CTL1_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL1_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL1_DST_SCATTER_EN_POS                    18
#define DMAC_CTL1_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL1_SRC_GATHER_EN_POS                     17
#define DMAC_CTL1_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL1_SRC_MSIZE_LSB                         14
#define DMAC_CTL1_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL1_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL1_DEST_MSIZE_LSB                        11
#define DMAC_CTL1_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL1_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL1_SINC_LSB                              9
#define DMAC_CTL1_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL1_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL1_DINC_LSB                              7
#define DMAC_CTL1_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL1_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL1_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL1_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL1_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL1_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL1_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL1_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL1_INT_EN_POS                            0

#define DMAC_CTL1_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL1_LLP_DST_EN_RST                        0x0
#define DMAC_CTL1_SMS_RST                               0x0
#define DMAC_CTL1_DMS_RST                               0x0
#define DMAC_CTL1_TT_FC_RST                             0x3
#define DMAC_CTL1_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL1_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL1_SRC_MSIZE_RST                         0x1
#define DMAC_CTL1_DEST_MSIZE_RST                        0x1
#define DMAC_CTL1_SINC_RST                              0x0
#define DMAC_CTL1_DINC_RST                              0x0
#define DMAC_CTL1_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL1_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL1_INT_EN_RST                            0x1

__INLINE static void dmac_ctl1_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl1_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl1_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl1_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl1_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl1_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl1_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl1_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl1_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl1_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl1_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl1_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl1_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl1_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl1_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl1_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl1_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl1_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl1_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl1_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl1_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl1_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl1_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl1_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl1_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl1_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl1_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl1_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl1_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl1_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  08:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL11_OFFSET 0x00000074


__INLINE static uint32_t dmac_ctl11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL11_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL11_DONE_POS                              12
#define DMAC_CTL11_BLOCK_TS_MASK                         ((uint32_t)0x000001FF)
#define DMAC_CTL11_BLOCK_TS_LSB                          0
#define DMAC_CTL11_BLOCK_TS_WIDTH                        ((uint32_t)0x00000009)

#define DMAC_CTL11_DONE_RST                              0x0
#define DMAC_CTL11_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl11_pack(uint8_t done, uint16_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl11_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x000001FF)) >> 0;
}

__INLINE static uint8_t dmac_ctl11_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl11_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint16_t dmac_ctl11_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000001FF)) >> 0);
}

__INLINE static void dmac_ctl11_block_ts_setf(uint16_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000001FF)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT1_OFFSET 0x00000078


__INLINE static uint32_t dmac_sstat1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT1_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT1_SSTAT_LSB                             0
#define DMAC_SSTAT1_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT1_SSTAT_RST                             0x0

__INLINE static void dmac_sstat1_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat1_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat1_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat1_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT11 register definition
 */
#define FEMTO_REG_DMAC_SSTAT11_OFFSET 0x0000007C


__INLINE static uint32_t dmac_sstat11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT11_RESERVED_LSB                          0
#define DMAC_SSTAT11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT11_RESERVED_RST                          0x0

__INLINE static void dmac_sstat11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT1_OFFSET 0x00000080


__INLINE static uint32_t dmac_dstat1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT1_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT1_DSTAT_LSB                             0
#define DMAC_DSTAT1_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT1_DSTAT_RST                             0x0

__INLINE static void dmac_dstat1_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat1_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat1_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat1_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT11 register definition
 */
#define FEMTO_REG_DMAC_DSTAT11_OFFSET 0x00000084


__INLINE static uint32_t dmac_dstat11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT11_RESERVED_LSB                          0
#define DMAC_DSTAT11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT11_RESERVED_RST                          0x0

__INLINE static void dmac_dstat11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR1_OFFSET 0x00000088


__INLINE static uint32_t dmac_sstatar1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR1_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR1_SSTATAR_LSB                           0
#define DMAC_SSTATAR1_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR1_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar1_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar1_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar1_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar1_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR11 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR11_OFFSET 0x0000008C


__INLINE static uint32_t dmac_sstatar11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR11_RESERVED_LSB                          0
#define DMAC_SSTATAR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR11_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR1_OFFSET 0x00000090


__INLINE static uint32_t dmac_dstatar1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR1_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR1_DSTATAR_LSB                           0
#define DMAC_DSTATAR1_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR1_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar1_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar1_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar1_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar1_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR11 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR11_OFFSET 0x00000094


__INLINE static uint32_t dmac_dstatar11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR11_RESERVED_LSB                          0
#define DMAC_DSTATAR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR11_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b1
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG1_OFFSET 0x00000098


__INLINE static uint32_t dmac_cfg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG1_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG1_RELOAD_DST_POS                        31
#define DMAC_CFG1_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG1_RELOAD_SRC_POS                        30
#define DMAC_CFG1_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG1_MAX_ABRST_LSB                         20
#define DMAC_CFG1_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG1_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG1_SRC_HS_POL_POS                        19
#define DMAC_CFG1_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG1_DST_HS_POL_POS                        18
#define DMAC_CFG1_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG1_LOCK_B_POS                            17
#define DMAC_CFG1_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG1_LOCK_CH_POS                           16
#define DMAC_CFG1_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG1_LOCK_B_L_LSB                          14
#define DMAC_CFG1_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG1_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG1_LOCK_CH_L_LSB                         12
#define DMAC_CFG1_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG1_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG1_HS_SEL_SRC_POS                        11
#define DMAC_CFG1_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG1_HS_SEL_DST_POS                        10
#define DMAC_CFG1_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG1_FIFO_EMPTY_POS                        9
#define DMAC_CFG1_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG1_CH_SUSP_POS                           8
#define DMAC_CFG1_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG1_CH_PRIOR_LSB                          5
#define DMAC_CFG1_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG1_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG1_RESERVED_LSB                          0
#define DMAC_CFG1_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG1_RELOAD_DST_RST                        0x0
#define DMAC_CFG1_RELOAD_SRC_RST                        0x0
#define DMAC_CFG1_MAX_ABRST_RST                         0x0
#define DMAC_CFG1_SRC_HS_POL_RST                        0x0
#define DMAC_CFG1_DST_HS_POL_RST                        0x0
#define DMAC_CFG1_LOCK_B_RST                            0x0
#define DMAC_CFG1_LOCK_CH_RST                           0x0
#define DMAC_CFG1_LOCK_B_L_RST                          0x0
#define DMAC_CFG1_LOCK_CH_L_RST                         0x0
#define DMAC_CFG1_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG1_HS_SEL_DST_RST                        0x1
#define DMAC_CFG1_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG1_CH_SUSP_RST                           0x0
#define DMAC_CFG1_CH_PRIOR_RST                          0x1
#define DMAC_CFG1_RESERVED_RST                          0x0

__INLINE static void dmac_cfg1_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg1_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg1_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg1_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg1_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg1_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg1_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg1_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg1_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg1_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg1_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg1_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg1_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg1_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg1_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg1_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg1_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg1_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg1_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg1_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg1_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg1_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg1_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg1_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg1_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg1_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg1_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg1_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg1_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG11_OFFSET 0x0000009C


__INLINE static uint32_t dmac_cfg11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG11_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG11_DEST_PER_LSB                          11
#define DMAC_CFG11_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG11_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG11_SRC_PER_LSB                           7
#define DMAC_CFG11_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG11_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG11_SS_UPD_EN_POS                         6
#define DMAC_CFG11_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG11_DS_UPD_EN_POS                         5
#define DMAC_CFG11_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG11_PROTCTL_LSB                           2
#define DMAC_CFG11_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG11_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG11_FIFO_MODE_POS                         1
#define DMAC_CFG11_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG11_FCMODE_POS                            0

#define DMAC_CFG11_DEST_PER_RST                          0x0
#define DMAC_CFG11_SRC_PER_RST                           0x0
#define DMAC_CFG11_SS_UPD_EN_RST                         0x0
#define DMAC_CFG11_DS_UPD_EN_RST                         0x0
#define DMAC_CFG11_PROTCTL_RST                           0x1
#define DMAC_CFG11_FIFO_MODE_RST                         0x0
#define DMAC_CFG11_FCMODE_RST                            0x0

__INLINE static void dmac_cfg11_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg11_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg11_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg11_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg11_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg11_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg11_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg11_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg11_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg11_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg11_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg11_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg11_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg11_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg11_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg11_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG11_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR1_OFFSET 0x000000A0


__INLINE static uint32_t dmac_sgr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR1_SGC_MASK                              ((uint32_t)0x1FF00000)
#define DMAC_SGR1_SGC_LSB                               20
#define DMAC_SGR1_SGC_WIDTH                             ((uint32_t)0x00000009)
#define DMAC_SGR1_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR1_SGI_LSB                               0
#define DMAC_SGR1_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR1_SGC_RST                               0x0
#define DMAC_SGR1_SGI_RST                               0x0

__INLINE static void dmac_sgr1_pack(uint16_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr1_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x1FF00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint16_t dmac_sgr1_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF00000)) >> 20);
}

__INLINE static void dmac_sgr1_sgc_setf(uint16_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x1FF00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr1_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr1_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR11 register definition
 */
#define FEMTO_REG_DMAC_SGR11_OFFSET 0x000000A4


__INLINE static uint32_t dmac_sgr11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR11_RESERVED_LSB                          0
#define DMAC_SGR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR11_RESERVED_RST                          0x0

__INLINE static void dmac_sgr11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  28:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR1_OFFSET 0x000000A8


__INLINE static uint32_t dmac_dsr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR1_DSC_MASK                              ((uint32_t)0x1FF00000)
#define DMAC_DSR1_DSC_LSB                               20
#define DMAC_DSR1_DSC_WIDTH                             ((uint32_t)0x00000009)
#define DMAC_DSR1_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR1_DSI_LSB                               0
#define DMAC_DSR1_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR1_DSC_RST                               0x0
#define DMAC_DSR1_DSI_RST                               0x0

__INLINE static void dmac_dsr1_pack(uint16_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr1_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x1FF00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint16_t dmac_dsr1_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x1FF00000)) >> 20);
}

__INLINE static void dmac_dsr1_dsc_setf(uint16_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x1FF00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr1_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr1_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR1_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR11 register definition
 */
#define FEMTO_REG_DMAC_DSR11_OFFSET 0x000000AC


__INLINE static uint32_t dmac_dsr11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR11_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR11_RESERVED_LSB                          0
#define DMAC_DSR11_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR11_RESERVED_RST                          0x0

__INLINE static void dmac_dsr11_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR11_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SAR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR2_OFFSET 0x000000B0


__INLINE static uint32_t dmac_sar2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR2_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR2_SAR_LSB                               0
#define DMAC_SAR2_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR2_SAR_RST                               0x0

__INLINE static void dmac_sar2_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar2_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar2_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar2_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR21 register definition
 */
#define FEMTO_REG_DMAC_SAR21_OFFSET 0x000000B4


__INLINE static uint32_t dmac_sar21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR21_RESERVED_LSB                          0
#define DMAC_SAR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR21_RESERVED_RST                          0x0

__INLINE static void dmac_sar21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR2_OFFSET 0x000000B8


__INLINE static uint32_t dmac_dar2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR2_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR2_DAR_LSB                               0
#define DMAC_DAR2_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR2_DAR_RST                               0x0

__INLINE static void dmac_dar2_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar2_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar2_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar2_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR21 register definition
 */
#define FEMTO_REG_DMAC_DAR21_OFFSET 0x000000BC


__INLINE static uint32_t dmac_dar21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR21_RESERVED_LSB                          0
#define DMAC_DAR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR21_RESERVED_RST                          0x0

__INLINE static void dmac_dar21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP2_OFFSET 0x000000C0


__INLINE static uint32_t dmac_llp2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP2_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP2_LOC_LSB                               2
#define DMAC_LLP2_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP2_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP2_LMS_LSB                               0
#define DMAC_LLP2_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP2_LOC_RST                               0x0
#define DMAC_LLP2_LMS_RST                               0x0

__INLINE static void dmac_llp2_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp2_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp2_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp2_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp2_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp2_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP21 register definition
 */
#define FEMTO_REG_DMAC_LLP21_OFFSET 0x000000C4


__INLINE static uint32_t dmac_llp21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP21_RESERVED_LSB                          0
#define DMAC_LLP21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP21_RESERVED_RST                          0x0

__INLINE static void dmac_llp21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL2_OFFSET 0x000000C8


__INLINE static uint32_t dmac_ctl2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL2_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL2_LLP_SRC_EN_POS                        28
#define DMAC_CTL2_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL2_LLP_DST_EN_POS                        27
#define DMAC_CTL2_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL2_SMS_LSB                               25
#define DMAC_CTL2_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL2_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL2_DMS_LSB                               23
#define DMAC_CTL2_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL2_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL2_TT_FC_LSB                             20
#define DMAC_CTL2_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL2_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL2_DST_SCATTER_EN_POS                    18
#define DMAC_CTL2_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL2_SRC_GATHER_EN_POS                     17
#define DMAC_CTL2_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL2_SRC_MSIZE_LSB                         14
#define DMAC_CTL2_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL2_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL2_DEST_MSIZE_LSB                        11
#define DMAC_CTL2_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL2_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL2_SINC_LSB                              9
#define DMAC_CTL2_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL2_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL2_DINC_LSB                              7
#define DMAC_CTL2_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL2_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL2_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL2_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL2_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL2_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL2_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL2_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL2_INT_EN_POS                            0

#define DMAC_CTL2_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL2_LLP_DST_EN_RST                        0x0
#define DMAC_CTL2_SMS_RST                               0x0
#define DMAC_CTL2_DMS_RST                               0x0
#define DMAC_CTL2_TT_FC_RST                             0x3
#define DMAC_CTL2_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL2_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL2_SRC_MSIZE_RST                         0x1
#define DMAC_CTL2_DEST_MSIZE_RST                        0x1
#define DMAC_CTL2_SINC_RST                              0x0
#define DMAC_CTL2_DINC_RST                              0x0
#define DMAC_CTL2_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL2_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL2_INT_EN_RST                            0x1

__INLINE static void dmac_ctl2_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl2_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl2_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl2_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl2_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl2_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl2_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl2_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl2_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl2_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl2_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl2_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl2_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl2_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl2_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl2_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl2_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl2_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl2_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl2_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl2_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl2_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl2_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl2_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl2_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl2_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl2_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl2_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl2_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl2_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL21 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  06:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL21_OFFSET 0x000000CC


__INLINE static uint32_t dmac_ctl21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl21_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL21_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL21_DONE_POS                              12
#define DMAC_CTL21_BLOCK_TS_MASK                         ((uint32_t)0x0000007F)
#define DMAC_CTL21_BLOCK_TS_LSB                          0
#define DMAC_CTL21_BLOCK_TS_WIDTH                        ((uint32_t)0x00000007)

#define DMAC_CTL21_DONE_RST                              0x0
#define DMAC_CTL21_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl21_pack(uint8_t done, uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl21_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t dmac_ctl21_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl21_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint8_t dmac_ctl21_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void dmac_ctl21_block_ts_setf(uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT2_OFFSET 0x000000D0


__INLINE static uint32_t dmac_sstat2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT2_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT2_SSTAT_LSB                             0
#define DMAC_SSTAT2_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT2_SSTAT_RST                             0x0

__INLINE static void dmac_sstat2_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat2_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat2_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat2_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT21 register definition
 */
#define FEMTO_REG_DMAC_SSTAT21_OFFSET 0x000000D4


__INLINE static uint32_t dmac_sstat21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT21_RESERVED_LSB                          0
#define DMAC_SSTAT21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT21_RESERVED_RST                          0x0

__INLINE static void dmac_sstat21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT2_OFFSET 0x000000D8


__INLINE static uint32_t dmac_dstat2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT2_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT2_DSTAT_LSB                             0
#define DMAC_DSTAT2_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT2_DSTAT_RST                             0x0

__INLINE static void dmac_dstat2_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat2_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat2_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat2_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT21 register definition
 */
#define FEMTO_REG_DMAC_DSTAT21_OFFSET 0x000000DC


__INLINE static uint32_t dmac_dstat21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT21_RESERVED_LSB                          0
#define DMAC_DSTAT21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT21_RESERVED_RST                          0x0

__INLINE static void dmac_dstat21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR2_OFFSET 0x000000E0


__INLINE static uint32_t dmac_sstatar2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR2_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR2_SSTATAR_LSB                           0
#define DMAC_SSTATAR2_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR2_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar2_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar2_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar2_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar2_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR21 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR21_OFFSET 0x000000E4


__INLINE static uint32_t dmac_sstatar21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR21_RESERVED_LSB                          0
#define DMAC_SSTATAR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR21_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR2_OFFSET 0x000000E8


__INLINE static uint32_t dmac_dstatar2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR2_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR2_DSTATAR_LSB                           0
#define DMAC_DSTATAR2_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR2_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar2_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar2_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar2_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar2_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR21 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR21_OFFSET 0x000000EC


__INLINE static uint32_t dmac_dstatar21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR21_RESERVED_LSB                          0
#define DMAC_DSTATAR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR21_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b2
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG2_OFFSET 0x000000F0


__INLINE static uint32_t dmac_cfg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG2_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG2_RELOAD_DST_POS                        31
#define DMAC_CFG2_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG2_RELOAD_SRC_POS                        30
#define DMAC_CFG2_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG2_MAX_ABRST_LSB                         20
#define DMAC_CFG2_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG2_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG2_SRC_HS_POL_POS                        19
#define DMAC_CFG2_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG2_DST_HS_POL_POS                        18
#define DMAC_CFG2_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG2_LOCK_B_POS                            17
#define DMAC_CFG2_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG2_LOCK_CH_POS                           16
#define DMAC_CFG2_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG2_LOCK_B_L_LSB                          14
#define DMAC_CFG2_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG2_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG2_LOCK_CH_L_LSB                         12
#define DMAC_CFG2_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG2_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG2_HS_SEL_SRC_POS                        11
#define DMAC_CFG2_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG2_HS_SEL_DST_POS                        10
#define DMAC_CFG2_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG2_FIFO_EMPTY_POS                        9
#define DMAC_CFG2_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG2_CH_SUSP_POS                           8
#define DMAC_CFG2_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG2_CH_PRIOR_LSB                          5
#define DMAC_CFG2_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG2_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG2_RESERVED_LSB                          0
#define DMAC_CFG2_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG2_RELOAD_DST_RST                        0x0
#define DMAC_CFG2_RELOAD_SRC_RST                        0x0
#define DMAC_CFG2_MAX_ABRST_RST                         0x0
#define DMAC_CFG2_SRC_HS_POL_RST                        0x0
#define DMAC_CFG2_DST_HS_POL_RST                        0x0
#define DMAC_CFG2_LOCK_B_RST                            0x0
#define DMAC_CFG2_LOCK_CH_RST                           0x0
#define DMAC_CFG2_LOCK_B_L_RST                          0x0
#define DMAC_CFG2_LOCK_CH_L_RST                         0x0
#define DMAC_CFG2_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG2_HS_SEL_DST_RST                        0x1
#define DMAC_CFG2_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG2_CH_SUSP_RST                           0x0
#define DMAC_CFG2_CH_PRIOR_RST                          0x2
#define DMAC_CFG2_RESERVED_RST                          0x0

__INLINE static void dmac_cfg2_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg2_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg2_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg2_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg2_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg2_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg2_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg2_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg2_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg2_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg2_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg2_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg2_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg2_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg2_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg2_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg2_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg2_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg2_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg2_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg2_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg2_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg2_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg2_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg2_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg2_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg2_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg2_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg2_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG21 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG21_OFFSET 0x000000F4


__INLINE static uint32_t dmac_cfg21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg21_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG21_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG21_DEST_PER_LSB                          11
#define DMAC_CFG21_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG21_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG21_SRC_PER_LSB                           7
#define DMAC_CFG21_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG21_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG21_SS_UPD_EN_POS                         6
#define DMAC_CFG21_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG21_DS_UPD_EN_POS                         5
#define DMAC_CFG21_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG21_PROTCTL_LSB                           2
#define DMAC_CFG21_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG21_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG21_FIFO_MODE_POS                         1
#define DMAC_CFG21_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG21_FCMODE_POS                            0

#define DMAC_CFG21_DEST_PER_RST                          0x0
#define DMAC_CFG21_SRC_PER_RST                           0x0
#define DMAC_CFG21_SS_UPD_EN_RST                         0x0
#define DMAC_CFG21_DS_UPD_EN_RST                         0x0
#define DMAC_CFG21_PROTCTL_RST                           0x1
#define DMAC_CFG21_FIFO_MODE_RST                         0x0
#define DMAC_CFG21_FCMODE_RST                            0x0

__INLINE static void dmac_cfg21_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg21_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg21_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg21_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg21_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg21_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg21_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg21_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg21_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg21_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg21_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg21_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg21_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg21_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg21_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg21_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG21_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR2_OFFSET 0x000000F8


__INLINE static uint32_t dmac_sgr2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR2_SGC_MASK                              ((uint32_t)0x07F00000)
#define DMAC_SGR2_SGC_LSB                               20
#define DMAC_SGR2_SGC_WIDTH                             ((uint32_t)0x00000007)
#define DMAC_SGR2_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR2_SGI_LSB                               0
#define DMAC_SGR2_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR2_SGC_RST                               0x0
#define DMAC_SGR2_SGI_RST                               0x0

__INLINE static void dmac_sgr2_pack(uint8_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr2_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x07F00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_sgr2_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07F00000)) >> 20);
}

__INLINE static void dmac_sgr2_sgc_setf(uint8_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x07F00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr2_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr2_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR21 register definition
 */
#define FEMTO_REG_DMAC_SGR21_OFFSET 0x000000FC


__INLINE static uint32_t dmac_sgr21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR21_RESERVED_LSB                          0
#define DMAC_SGR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR21_RESERVED_RST                          0x0

__INLINE static void dmac_sgr21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR2_OFFSET 0x00000100


__INLINE static uint32_t dmac_dsr2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR2_DSC_MASK                              ((uint32_t)0x07F00000)
#define DMAC_DSR2_DSC_LSB                               20
#define DMAC_DSR2_DSC_WIDTH                             ((uint32_t)0x00000007)
#define DMAC_DSR2_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR2_DSI_LSB                               0
#define DMAC_DSR2_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR2_DSC_RST                               0x0
#define DMAC_DSR2_DSI_RST                               0x0

__INLINE static void dmac_dsr2_pack(uint8_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr2_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x07F00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_dsr2_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07F00000)) >> 20);
}

__INLINE static void dmac_dsr2_dsc_setf(uint8_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x07F00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr2_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr2_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR2_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR21 register definition
 */
#define FEMTO_REG_DMAC_DSR21_OFFSET 0x00000104


__INLINE static uint32_t dmac_dsr21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR21_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR21_RESERVED_LSB                          0
#define DMAC_DSR21_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR21_RESERVED_RST                          0x0

__INLINE static void dmac_dsr21_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SAR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR3_OFFSET 0x00000108


__INLINE static uint32_t dmac_sar3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR3_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR3_SAR_LSB                               0
#define DMAC_SAR3_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR3_SAR_RST                               0x0

__INLINE static void dmac_sar3_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar3_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar3_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar3_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR31 register definition
 */
#define FEMTO_REG_DMAC_SAR31_OFFSET 0x0000010C


__INLINE static uint32_t dmac_sar31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR31_RESERVED_LSB                          0
#define DMAC_SAR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR31_RESERVED_RST                          0x0

__INLINE static void dmac_sar31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR3_OFFSET 0x00000110


__INLINE static uint32_t dmac_dar3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR3_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR3_DAR_LSB                               0
#define DMAC_DAR3_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR3_DAR_RST                               0x0

__INLINE static void dmac_dar3_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar3_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar3_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar3_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR31 register definition
 */
#define FEMTO_REG_DMAC_DAR31_OFFSET 0x00000114


__INLINE static uint32_t dmac_dar31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR31_RESERVED_LSB                          0
#define DMAC_DAR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR31_RESERVED_RST                          0x0

__INLINE static void dmac_dar31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP3_OFFSET 0x00000118


__INLINE static uint32_t dmac_llp3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP3_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP3_LOC_LSB                               2
#define DMAC_LLP3_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP3_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP3_LMS_LSB                               0
#define DMAC_LLP3_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP3_LOC_RST                               0x0
#define DMAC_LLP3_LMS_RST                               0x0

__INLINE static void dmac_llp3_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp3_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp3_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp3_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp3_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp3_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP31 register definition
 */
#define FEMTO_REG_DMAC_LLP31_OFFSET 0x0000011C


__INLINE static uint32_t dmac_llp31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP31_RESERVED_LSB                          0
#define DMAC_LLP31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP31_RESERVED_RST                          0x0

__INLINE static void dmac_llp31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL3_OFFSET 0x00000120


__INLINE static uint32_t dmac_ctl3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL3_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL3_LLP_SRC_EN_POS                        28
#define DMAC_CTL3_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL3_LLP_DST_EN_POS                        27
#define DMAC_CTL3_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL3_SMS_LSB                               25
#define DMAC_CTL3_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL3_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL3_DMS_LSB                               23
#define DMAC_CTL3_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL3_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL3_TT_FC_LSB                             20
#define DMAC_CTL3_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL3_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL3_DST_SCATTER_EN_POS                    18
#define DMAC_CTL3_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL3_SRC_GATHER_EN_POS                     17
#define DMAC_CTL3_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL3_SRC_MSIZE_LSB                         14
#define DMAC_CTL3_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL3_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL3_DEST_MSIZE_LSB                        11
#define DMAC_CTL3_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL3_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL3_SINC_LSB                              9
#define DMAC_CTL3_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL3_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL3_DINC_LSB                              7
#define DMAC_CTL3_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL3_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL3_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL3_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL3_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL3_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL3_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL3_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL3_INT_EN_POS                            0

#define DMAC_CTL3_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL3_LLP_DST_EN_RST                        0x0
#define DMAC_CTL3_SMS_RST                               0x0
#define DMAC_CTL3_DMS_RST                               0x0
#define DMAC_CTL3_TT_FC_RST                             0x3
#define DMAC_CTL3_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL3_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL3_SRC_MSIZE_RST                         0x1
#define DMAC_CTL3_DEST_MSIZE_RST                        0x1
#define DMAC_CTL3_SINC_RST                              0x0
#define DMAC_CTL3_DINC_RST                              0x0
#define DMAC_CTL3_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL3_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL3_INT_EN_RST                            0x1

__INLINE static void dmac_ctl3_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl3_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl3_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl3_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl3_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl3_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl3_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl3_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl3_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl3_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl3_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl3_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl3_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl3_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl3_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl3_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl3_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl3_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl3_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl3_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl3_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl3_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl3_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl3_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl3_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl3_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl3_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl3_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl3_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl3_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL31 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  06:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL31_OFFSET 0x00000124


__INLINE static uint32_t dmac_ctl31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl31_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL31_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL31_DONE_POS                              12
#define DMAC_CTL31_BLOCK_TS_MASK                         ((uint32_t)0x0000007F)
#define DMAC_CTL31_BLOCK_TS_LSB                          0
#define DMAC_CTL31_BLOCK_TS_WIDTH                        ((uint32_t)0x00000007)

#define DMAC_CTL31_DONE_RST                              0x0
#define DMAC_CTL31_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl31_pack(uint8_t done, uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl31_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x0000007F)) >> 0;
}

__INLINE static uint8_t dmac_ctl31_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl31_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint8_t dmac_ctl31_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000007F)) >> 0);
}

__INLINE static void dmac_ctl31_block_ts_setf(uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000007F)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT3_OFFSET 0x00000128


__INLINE static uint32_t dmac_sstat3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT3_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT3_SSTAT_LSB                             0
#define DMAC_SSTAT3_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT3_SSTAT_RST                             0x0

__INLINE static void dmac_sstat3_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat3_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat3_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat3_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT31 register definition
 */
#define FEMTO_REG_DMAC_SSTAT31_OFFSET 0x0000012C


__INLINE static uint32_t dmac_sstat31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT31_RESERVED_LSB                          0
#define DMAC_SSTAT31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT31_RESERVED_RST                          0x0

__INLINE static void dmac_sstat31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT3_OFFSET 0x00000130


__INLINE static uint32_t dmac_dstat3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT3_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT3_DSTAT_LSB                             0
#define DMAC_DSTAT3_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT3_DSTAT_RST                             0x0

__INLINE static void dmac_dstat3_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat3_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat3_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat3_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT31 register definition
 */
#define FEMTO_REG_DMAC_DSTAT31_OFFSET 0x00000134


__INLINE static uint32_t dmac_dstat31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT31_RESERVED_LSB                          0
#define DMAC_DSTAT31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT31_RESERVED_RST                          0x0

__INLINE static void dmac_dstat31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR3_OFFSET 0x00000138


__INLINE static uint32_t dmac_sstatar3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR3_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR3_SSTATAR_LSB                           0
#define DMAC_SSTATAR3_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR3_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar3_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar3_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar3_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar3_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR31 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR31_OFFSET 0x0000013C


__INLINE static uint32_t dmac_sstatar31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR31_RESERVED_LSB                          0
#define DMAC_SSTATAR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR31_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR3_OFFSET 0x00000140


__INLINE static uint32_t dmac_dstatar3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR3_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR3_DSTATAR_LSB                           0
#define DMAC_DSTATAR3_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR3_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar3_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar3_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar3_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar3_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR31 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR31_OFFSET 0x00000144


__INLINE static uint32_t dmac_dstatar31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR31_RESERVED_LSB                          0
#define DMAC_DSTATAR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR31_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b3
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG3_OFFSET 0x00000148


__INLINE static uint32_t dmac_cfg3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG3_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG3_RELOAD_DST_POS                        31
#define DMAC_CFG3_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG3_RELOAD_SRC_POS                        30
#define DMAC_CFG3_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG3_MAX_ABRST_LSB                         20
#define DMAC_CFG3_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG3_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG3_SRC_HS_POL_POS                        19
#define DMAC_CFG3_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG3_DST_HS_POL_POS                        18
#define DMAC_CFG3_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG3_LOCK_B_POS                            17
#define DMAC_CFG3_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG3_LOCK_CH_POS                           16
#define DMAC_CFG3_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG3_LOCK_B_L_LSB                          14
#define DMAC_CFG3_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG3_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG3_LOCK_CH_L_LSB                         12
#define DMAC_CFG3_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG3_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG3_HS_SEL_SRC_POS                        11
#define DMAC_CFG3_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG3_HS_SEL_DST_POS                        10
#define DMAC_CFG3_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG3_FIFO_EMPTY_POS                        9
#define DMAC_CFG3_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG3_CH_SUSP_POS                           8
#define DMAC_CFG3_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG3_CH_PRIOR_LSB                          5
#define DMAC_CFG3_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG3_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG3_RESERVED_LSB                          0
#define DMAC_CFG3_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG3_RELOAD_DST_RST                        0x0
#define DMAC_CFG3_RELOAD_SRC_RST                        0x0
#define DMAC_CFG3_MAX_ABRST_RST                         0x0
#define DMAC_CFG3_SRC_HS_POL_RST                        0x0
#define DMAC_CFG3_DST_HS_POL_RST                        0x0
#define DMAC_CFG3_LOCK_B_RST                            0x0
#define DMAC_CFG3_LOCK_CH_RST                           0x0
#define DMAC_CFG3_LOCK_B_L_RST                          0x0
#define DMAC_CFG3_LOCK_CH_L_RST                         0x0
#define DMAC_CFG3_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG3_HS_SEL_DST_RST                        0x1
#define DMAC_CFG3_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG3_CH_SUSP_RST                           0x0
#define DMAC_CFG3_CH_PRIOR_RST                          0x3
#define DMAC_CFG3_RESERVED_RST                          0x0

__INLINE static void dmac_cfg3_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg3_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg3_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg3_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg3_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg3_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg3_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg3_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg3_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg3_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg3_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg3_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg3_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg3_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg3_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg3_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg3_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg3_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg3_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg3_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg3_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg3_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg3_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg3_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg3_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg3_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg3_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg3_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg3_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG31 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG31_OFFSET 0x0000014C


__INLINE static uint32_t dmac_cfg31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg31_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG31_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG31_DEST_PER_LSB                          11
#define DMAC_CFG31_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG31_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG31_SRC_PER_LSB                           7
#define DMAC_CFG31_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG31_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG31_SS_UPD_EN_POS                         6
#define DMAC_CFG31_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG31_DS_UPD_EN_POS                         5
#define DMAC_CFG31_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG31_PROTCTL_LSB                           2
#define DMAC_CFG31_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG31_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG31_FIFO_MODE_POS                         1
#define DMAC_CFG31_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG31_FCMODE_POS                            0

#define DMAC_CFG31_DEST_PER_RST                          0x0
#define DMAC_CFG31_SRC_PER_RST                           0x0
#define DMAC_CFG31_SS_UPD_EN_RST                         0x0
#define DMAC_CFG31_DS_UPD_EN_RST                         0x0
#define DMAC_CFG31_PROTCTL_RST                           0x1
#define DMAC_CFG31_FIFO_MODE_RST                         0x0
#define DMAC_CFG31_FCMODE_RST                            0x0

__INLINE static void dmac_cfg31_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg31_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg31_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg31_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg31_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg31_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg31_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg31_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg31_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg31_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg31_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg31_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg31_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg31_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg31_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg31_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG31_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR3_OFFSET 0x00000150


__INLINE static uint32_t dmac_sgr3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR3_SGC_MASK                              ((uint32_t)0x07F00000)
#define DMAC_SGR3_SGC_LSB                               20
#define DMAC_SGR3_SGC_WIDTH                             ((uint32_t)0x00000007)
#define DMAC_SGR3_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR3_SGI_LSB                               0
#define DMAC_SGR3_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR3_SGC_RST                               0x0
#define DMAC_SGR3_SGI_RST                               0x0

__INLINE static void dmac_sgr3_pack(uint8_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr3_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x07F00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_sgr3_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07F00000)) >> 20);
}

__INLINE static void dmac_sgr3_sgc_setf(uint8_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x07F00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr3_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr3_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR31 register definition
 */
#define FEMTO_REG_DMAC_SGR31_OFFSET 0x00000154


__INLINE static uint32_t dmac_sgr31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR31_RESERVED_LSB                          0
#define DMAC_SGR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR31_RESERVED_RST                          0x0

__INLINE static void dmac_sgr31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  26:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR3_OFFSET 0x00000158


__INLINE static uint32_t dmac_dsr3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR3_DSC_MASK                              ((uint32_t)0x07F00000)
#define DMAC_DSR3_DSC_LSB                               20
#define DMAC_DSR3_DSC_WIDTH                             ((uint32_t)0x00000007)
#define DMAC_DSR3_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR3_DSI_LSB                               0
#define DMAC_DSR3_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR3_DSC_RST                               0x0
#define DMAC_DSR3_DSI_RST                               0x0

__INLINE static void dmac_dsr3_pack(uint8_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr3_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x07F00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_dsr3_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x07F00000)) >> 20);
}

__INLINE static void dmac_dsr3_dsc_setf(uint8_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x07F00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr3_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr3_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR3_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR31 register definition
 */
#define FEMTO_REG_DMAC_DSR31_OFFSET 0x0000015C


__INLINE static uint32_t dmac_dsr31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR31_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR31_RESERVED_LSB                          0
#define DMAC_DSR31_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR31_RESERVED_RST                          0x0

__INLINE static void dmac_dsr31_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SAR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR4_OFFSET 0x00000160


__INLINE static uint32_t dmac_sar4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR4_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR4_SAR_LSB                               0
#define DMAC_SAR4_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR4_SAR_RST                               0x0

__INLINE static void dmac_sar4_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar4_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar4_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar4_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR41 register definition
 */
#define FEMTO_REG_DMAC_SAR41_OFFSET 0x00000164


__INLINE static uint32_t dmac_sar41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR41_RESERVED_LSB                          0
#define DMAC_SAR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR41_RESERVED_RST                          0x0

__INLINE static void dmac_sar41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR4_OFFSET 0x00000168


__INLINE static uint32_t dmac_dar4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR4_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR4_DAR_LSB                               0
#define DMAC_DAR4_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR4_DAR_RST                               0x0

__INLINE static void dmac_dar4_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar4_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar4_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar4_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR41 register definition
 */
#define FEMTO_REG_DMAC_DAR41_OFFSET 0x0000016C


__INLINE static uint32_t dmac_dar41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR41_RESERVED_LSB                          0
#define DMAC_DAR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR41_RESERVED_RST                          0x0

__INLINE static void dmac_dar41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP4_OFFSET 0x00000170


__INLINE static uint32_t dmac_llp4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP4_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP4_LOC_LSB                               2
#define DMAC_LLP4_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP4_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP4_LMS_LSB                               0
#define DMAC_LLP4_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP4_LOC_RST                               0x0
#define DMAC_LLP4_LMS_RST                               0x0

__INLINE static void dmac_llp4_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp4_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp4_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp4_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp4_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp4_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP41 register definition
 */
#define FEMTO_REG_DMAC_LLP41_OFFSET 0x00000174


__INLINE static uint32_t dmac_llp41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP41_RESERVED_LSB                          0
#define DMAC_LLP41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP41_RESERVED_RST                          0x0

__INLINE static void dmac_llp41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL4_OFFSET 0x00000178


__INLINE static uint32_t dmac_ctl4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL4_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL4_LLP_SRC_EN_POS                        28
#define DMAC_CTL4_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL4_LLP_DST_EN_POS                        27
#define DMAC_CTL4_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL4_SMS_LSB                               25
#define DMAC_CTL4_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL4_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL4_DMS_LSB                               23
#define DMAC_CTL4_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL4_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL4_TT_FC_LSB                             20
#define DMAC_CTL4_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL4_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL4_DST_SCATTER_EN_POS                    18
#define DMAC_CTL4_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL4_SRC_GATHER_EN_POS                     17
#define DMAC_CTL4_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL4_SRC_MSIZE_LSB                         14
#define DMAC_CTL4_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL4_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL4_DEST_MSIZE_LSB                        11
#define DMAC_CTL4_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL4_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL4_SINC_LSB                              9
#define DMAC_CTL4_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL4_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL4_DINC_LSB                              7
#define DMAC_CTL4_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL4_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL4_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL4_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL4_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL4_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL4_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL4_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL4_INT_EN_POS                            0

#define DMAC_CTL4_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL4_LLP_DST_EN_RST                        0x0
#define DMAC_CTL4_SMS_RST                               0x0
#define DMAC_CTL4_DMS_RST                               0x0
#define DMAC_CTL4_TT_FC_RST                             0x3
#define DMAC_CTL4_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL4_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL4_SRC_MSIZE_RST                         0x1
#define DMAC_CTL4_DEST_MSIZE_RST                        0x1
#define DMAC_CTL4_SINC_RST                              0x0
#define DMAC_CTL4_DINC_RST                              0x0
#define DMAC_CTL4_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL4_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL4_INT_EN_RST                            0x1

__INLINE static void dmac_ctl4_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl4_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl4_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl4_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl4_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl4_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl4_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl4_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl4_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl4_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl4_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl4_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl4_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl4_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl4_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl4_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl4_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl4_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl4_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl4_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl4_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl4_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl4_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl4_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl4_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl4_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl4_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl4_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl4_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl4_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL41 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  05:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL41_OFFSET 0x0000017C


__INLINE static uint32_t dmac_ctl41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl41_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL41_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL41_DONE_POS                              12
#define DMAC_CTL41_BLOCK_TS_MASK                         ((uint32_t)0x0000003F)
#define DMAC_CTL41_BLOCK_TS_LSB                          0
#define DMAC_CTL41_BLOCK_TS_WIDTH                        ((uint32_t)0x00000006)

#define DMAC_CTL41_DONE_RST                              0x0
#define DMAC_CTL41_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl41_pack(uint8_t done, uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl41_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t dmac_ctl41_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl41_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint8_t dmac_ctl41_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void dmac_ctl41_block_ts_setf(uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT4_OFFSET 0x00000180


__INLINE static uint32_t dmac_sstat4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT4_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT4_SSTAT_LSB                             0
#define DMAC_SSTAT4_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT4_SSTAT_RST                             0x0

__INLINE static void dmac_sstat4_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat4_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat4_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat4_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT41 register definition
 */
#define FEMTO_REG_DMAC_SSTAT41_OFFSET 0x00000184


__INLINE static uint32_t dmac_sstat41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT41_RESERVED_LSB                          0
#define DMAC_SSTAT41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT41_RESERVED_RST                          0x0

__INLINE static void dmac_sstat41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT4_OFFSET 0x00000188


__INLINE static uint32_t dmac_dstat4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT4_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT4_DSTAT_LSB                             0
#define DMAC_DSTAT4_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT4_DSTAT_RST                             0x0

__INLINE static void dmac_dstat4_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat4_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat4_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat4_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT41 register definition
 */
#define FEMTO_REG_DMAC_DSTAT41_OFFSET 0x0000018C


__INLINE static uint32_t dmac_dstat41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT41_RESERVED_LSB                          0
#define DMAC_DSTAT41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT41_RESERVED_RST                          0x0

__INLINE static void dmac_dstat41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR4_OFFSET 0x00000190


__INLINE static uint32_t dmac_sstatar4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR4_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR4_SSTATAR_LSB                           0
#define DMAC_SSTATAR4_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR4_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar4_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar4_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar4_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar4_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR41 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR41_OFFSET 0x00000194


__INLINE static uint32_t dmac_sstatar41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR41_RESERVED_LSB                          0
#define DMAC_SSTATAR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR41_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR4_OFFSET 0x00000198


__INLINE static uint32_t dmac_dstatar4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR4_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR4_DSTATAR_LSB                           0
#define DMAC_DSTATAR4_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR4_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar4_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar4_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar4_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar4_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR41 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR41_OFFSET 0x0000019C


__INLINE static uint32_t dmac_dstatar41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR41_RESERVED_LSB                          0
#define DMAC_DSTATAR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR41_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b4
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG4_OFFSET 0x000001A0


__INLINE static uint32_t dmac_cfg4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG4_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG4_RELOAD_DST_POS                        31
#define DMAC_CFG4_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG4_RELOAD_SRC_POS                        30
#define DMAC_CFG4_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG4_MAX_ABRST_LSB                         20
#define DMAC_CFG4_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG4_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG4_SRC_HS_POL_POS                        19
#define DMAC_CFG4_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG4_DST_HS_POL_POS                        18
#define DMAC_CFG4_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG4_LOCK_B_POS                            17
#define DMAC_CFG4_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG4_LOCK_CH_POS                           16
#define DMAC_CFG4_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG4_LOCK_B_L_LSB                          14
#define DMAC_CFG4_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG4_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG4_LOCK_CH_L_LSB                         12
#define DMAC_CFG4_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG4_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG4_HS_SEL_SRC_POS                        11
#define DMAC_CFG4_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG4_HS_SEL_DST_POS                        10
#define DMAC_CFG4_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG4_FIFO_EMPTY_POS                        9
#define DMAC_CFG4_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG4_CH_SUSP_POS                           8
#define DMAC_CFG4_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG4_CH_PRIOR_LSB                          5
#define DMAC_CFG4_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG4_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG4_RESERVED_LSB                          0
#define DMAC_CFG4_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG4_RELOAD_DST_RST                        0x0
#define DMAC_CFG4_RELOAD_SRC_RST                        0x0
#define DMAC_CFG4_MAX_ABRST_RST                         0x0
#define DMAC_CFG4_SRC_HS_POL_RST                        0x0
#define DMAC_CFG4_DST_HS_POL_RST                        0x0
#define DMAC_CFG4_LOCK_B_RST                            0x0
#define DMAC_CFG4_LOCK_CH_RST                           0x0
#define DMAC_CFG4_LOCK_B_L_RST                          0x0
#define DMAC_CFG4_LOCK_CH_L_RST                         0x0
#define DMAC_CFG4_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG4_HS_SEL_DST_RST                        0x1
#define DMAC_CFG4_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG4_CH_SUSP_RST                           0x0
#define DMAC_CFG4_CH_PRIOR_RST                          0x4
#define DMAC_CFG4_RESERVED_RST                          0x0

__INLINE static void dmac_cfg4_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg4_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg4_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg4_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg4_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg4_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg4_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg4_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg4_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg4_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg4_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg4_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg4_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg4_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg4_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg4_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg4_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg4_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg4_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg4_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg4_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg4_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg4_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg4_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg4_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg4_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg4_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg4_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg4_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG41 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG41_OFFSET 0x000001A4


__INLINE static uint32_t dmac_cfg41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg41_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG41_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG41_DEST_PER_LSB                          11
#define DMAC_CFG41_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG41_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG41_SRC_PER_LSB                           7
#define DMAC_CFG41_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG41_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG41_SS_UPD_EN_POS                         6
#define DMAC_CFG41_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG41_DS_UPD_EN_POS                         5
#define DMAC_CFG41_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG41_PROTCTL_LSB                           2
#define DMAC_CFG41_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG41_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG41_FIFO_MODE_POS                         1
#define DMAC_CFG41_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG41_FCMODE_POS                            0

#define DMAC_CFG41_DEST_PER_RST                          0x0
#define DMAC_CFG41_SRC_PER_RST                           0x0
#define DMAC_CFG41_SS_UPD_EN_RST                         0x0
#define DMAC_CFG41_DS_UPD_EN_RST                         0x0
#define DMAC_CFG41_PROTCTL_RST                           0x1
#define DMAC_CFG41_FIFO_MODE_RST                         0x0
#define DMAC_CFG41_FCMODE_RST                            0x0

__INLINE static void dmac_cfg41_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg41_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg41_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg41_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg41_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg41_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg41_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg41_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg41_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg41_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg41_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg41_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg41_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg41_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg41_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg41_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG41_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR4_OFFSET 0x000001A8


__INLINE static uint32_t dmac_sgr4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR4_SGC_MASK                              ((uint32_t)0x03F00000)
#define DMAC_SGR4_SGC_LSB                               20
#define DMAC_SGR4_SGC_WIDTH                             ((uint32_t)0x00000006)
#define DMAC_SGR4_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR4_SGI_LSB                               0
#define DMAC_SGR4_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR4_SGC_RST                               0x0
#define DMAC_SGR4_SGI_RST                               0x0

__INLINE static void dmac_sgr4_pack(uint8_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr4_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x03F00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_sgr4_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03F00000)) >> 20);
}

__INLINE static void dmac_sgr4_sgc_setf(uint8_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x03F00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr4_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr4_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR41 register definition
 */
#define FEMTO_REG_DMAC_SGR41_OFFSET 0x000001AC


__INLINE static uint32_t dmac_sgr41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR41_RESERVED_LSB                          0
#define DMAC_SGR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR41_RESERVED_RST                          0x0

__INLINE static void dmac_sgr41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR4_OFFSET 0x000001B0


__INLINE static uint32_t dmac_dsr4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR4_DSC_MASK                              ((uint32_t)0x03F00000)
#define DMAC_DSR4_DSC_LSB                               20
#define DMAC_DSR4_DSC_WIDTH                             ((uint32_t)0x00000006)
#define DMAC_DSR4_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR4_DSI_LSB                               0
#define DMAC_DSR4_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR4_DSC_RST                               0x0
#define DMAC_DSR4_DSI_RST                               0x0

__INLINE static void dmac_dsr4_pack(uint8_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr4_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x03F00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_dsr4_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03F00000)) >> 20);
}

__INLINE static void dmac_dsr4_dsc_setf(uint8_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x03F00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr4_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr4_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR4_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR4_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR41 register definition
 */
#define FEMTO_REG_DMAC_DSR41_OFFSET 0x000001B4


__INLINE static uint32_t dmac_dsr41_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR41_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR41_RESERVED_LSB                          0
#define DMAC_DSR41_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR41_RESERVED_RST                          0x0

__INLINE static void dmac_dsr41_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR41_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SAR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  SAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SAR5_OFFSET 0x000001B8


__INLINE static uint32_t dmac_sar5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sar5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SAR5_SAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR5_SAR_LSB                               0
#define DMAC_SAR5_SAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_SAR5_SAR_RST                               0x0

__INLINE static void dmac_sar5_pack(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sar << 0));
}

__INLINE static void dmac_sar5_unpack(uint8_t* sar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sar5_sar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sar5_sar_setf(uint32_t sar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sar << 0);
}

 /**
 * @brief SAR51 register definition
 */
#define FEMTO_REG_DMAC_SAR51_OFFSET 0x000001BC


__INLINE static uint32_t dmac_sar51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SAR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SAR51_RESERVED_LSB                          0
#define DMAC_SAR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SAR51_RESERVED_RST                          0x0

__INLINE static void dmac_sar51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DAR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                  DAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DAR5_OFFSET 0x000001C0


__INLINE static uint32_t dmac_dar5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dar5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DAR5_DAR_MASK                              ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR5_DAR_LSB                               0
#define DMAC_DAR5_DAR_WIDTH                             ((uint32_t)0x00000020)

#define DMAC_DAR5_DAR_RST                               0x0

__INLINE static void dmac_dar5_pack(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dar << 0));
}

__INLINE static void dmac_dar5_unpack(uint8_t* dar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dar5_dar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dar5_dar_setf(uint32_t dar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dar << 0);
}

 /**
 * @brief DAR51 register definition
 */
#define FEMTO_REG_DMAC_DAR51_OFFSET 0x000001C4


__INLINE static uint32_t dmac_dar51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DAR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DAR51_RESERVED_LSB                          0
#define DMAC_DAR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DAR51_RESERVED_RST                          0x0

__INLINE static void dmac_dar51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LLP5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:02                  LOC   0b0
 *  01:00                  LMS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LLP5_OFFSET 0x000001C8


__INLINE static uint32_t dmac_llp5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_llp5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LLP5_LOC_MASK                              ((uint32_t)0xFFFFFFFC)
#define DMAC_LLP5_LOC_LSB                               2
#define DMAC_LLP5_LOC_WIDTH                             ((uint32_t)0x0000001E)
#define DMAC_LLP5_LMS_MASK                              ((uint32_t)0x00000003)
#define DMAC_LLP5_LMS_LSB                               0
#define DMAC_LLP5_LMS_WIDTH                             ((uint32_t)0x00000002)

#define DMAC_LLP5_LOC_RST                               0x0
#define DMAC_LLP5_LMS_RST                               0x0

__INLINE static void dmac_llp5_pack(uint32_t loc, uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)loc << 2) | ((uint32_t)lms << 0));
}

__INLINE static void dmac_llp5_unpack(uint8_t* loc, uint8_t* lms)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *loc = (localVal & ((uint32_t)0xFFFFFFFC)) >> 2;
    *lms = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint32_t dmac_llp5_loc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFC)) >> 2);
}

__INLINE static void dmac_llp5_loc_setf(uint32_t loc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0xFFFFFFFC)) | ((uint32_t)loc << 2));
}

__INLINE static uint8_t dmac_llp5_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void dmac_llp5_lms_setf(uint8_t lms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LLP5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LLP5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000003)) | ((uint32_t)lms << 0));
}

 /**
 * @brief LLP51 register definition
 */
#define FEMTO_REG_DMAC_LLP51_OFFSET 0x000001CC


__INLINE static uint32_t dmac_llp51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LLP51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LLP51_RESERVED_LSB                          0
#define DMAC_LLP51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LLP51_RESERVED_RST                          0x0

__INLINE static void dmac_llp51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LLP51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CTL5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     28           LLP_SRC_EN   0
 *     27           LLP_DST_EN   0
 *  26:25                  SMS   0b0
 *  24:23                  DMS   0b0
 *  22:20                TT_FC   0b3
 *     18       DST_SCATTER_EN   0
 *     17        SRC_GATHER_EN   0
 *  16:14            SRC_MSIZE   0b1
 *  13:11           DEST_MSIZE   0b1
 *  10:09                 SINC   0b0
 *  08:07                 DINC   0b0
 *  06:04         SRC_TR_WIDTH   0b0
 *  03:01         DST_TR_WIDTH   0b0
 *     00               INT_EN   1
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL5_OFFSET 0x000001D0


__INLINE static uint32_t dmac_ctl5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL5_LLP_SRC_EN_BIT                        ((uint32_t)0x10000000)
#define DMAC_CTL5_LLP_SRC_EN_POS                        28
#define DMAC_CTL5_LLP_DST_EN_BIT                        ((uint32_t)0x08000000)
#define DMAC_CTL5_LLP_DST_EN_POS                        27
#define DMAC_CTL5_SMS_MASK                              ((uint32_t)0x06000000)
#define DMAC_CTL5_SMS_LSB                               25
#define DMAC_CTL5_SMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL5_DMS_MASK                              ((uint32_t)0x01800000)
#define DMAC_CTL5_DMS_LSB                               23
#define DMAC_CTL5_DMS_WIDTH                             ((uint32_t)0x00000002)
#define DMAC_CTL5_TT_FC_MASK                            ((uint32_t)0x00700000)
#define DMAC_CTL5_TT_FC_LSB                             20
#define DMAC_CTL5_TT_FC_WIDTH                           ((uint32_t)0x00000003)
#define DMAC_CTL5_DST_SCATTER_EN_BIT                    ((uint32_t)0x00040000)
#define DMAC_CTL5_DST_SCATTER_EN_POS                    18
#define DMAC_CTL5_SRC_GATHER_EN_BIT                     ((uint32_t)0x00020000)
#define DMAC_CTL5_SRC_GATHER_EN_POS                     17
#define DMAC_CTL5_SRC_MSIZE_MASK                        ((uint32_t)0x0001C000)
#define DMAC_CTL5_SRC_MSIZE_LSB                         14
#define DMAC_CTL5_SRC_MSIZE_WIDTH                       ((uint32_t)0x00000003)
#define DMAC_CTL5_DEST_MSIZE_MASK                       ((uint32_t)0x00003800)
#define DMAC_CTL5_DEST_MSIZE_LSB                        11
#define DMAC_CTL5_DEST_MSIZE_WIDTH                      ((uint32_t)0x00000003)
#define DMAC_CTL5_SINC_MASK                             ((uint32_t)0x00000600)
#define DMAC_CTL5_SINC_LSB                              9
#define DMAC_CTL5_SINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL5_DINC_MASK                             ((uint32_t)0x00000180)
#define DMAC_CTL5_DINC_LSB                              7
#define DMAC_CTL5_DINC_WIDTH                            ((uint32_t)0x00000002)
#define DMAC_CTL5_SRC_TR_WIDTH_MASK                     ((uint32_t)0x00000070)
#define DMAC_CTL5_SRC_TR_WIDTH_LSB                      4
#define DMAC_CTL5_SRC_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL5_DST_TR_WIDTH_MASK                     ((uint32_t)0x0000000E)
#define DMAC_CTL5_DST_TR_WIDTH_LSB                      1
#define DMAC_CTL5_DST_TR_WIDTH_WIDTH                    ((uint32_t)0x00000003)
#define DMAC_CTL5_INT_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_CTL5_INT_EN_POS                            0

#define DMAC_CTL5_LLP_SRC_EN_RST                        0x0
#define DMAC_CTL5_LLP_DST_EN_RST                        0x0
#define DMAC_CTL5_SMS_RST                               0x0
#define DMAC_CTL5_DMS_RST                               0x0
#define DMAC_CTL5_TT_FC_RST                             0x3
#define DMAC_CTL5_DST_SCATTER_EN_RST                    0x0
#define DMAC_CTL5_SRC_GATHER_EN_RST                     0x0
#define DMAC_CTL5_SRC_MSIZE_RST                         0x1
#define DMAC_CTL5_DEST_MSIZE_RST                        0x1
#define DMAC_CTL5_SINC_RST                              0x0
#define DMAC_CTL5_DINC_RST                              0x0
#define DMAC_CTL5_SRC_TR_WIDTH_RST                      0x0
#define DMAC_CTL5_DST_TR_WIDTH_RST                      0x0
#define DMAC_CTL5_INT_EN_RST                            0x1

__INLINE static void dmac_ctl5_pack(uint8_t llpsrcen, uint8_t llpdsten, uint8_t sms, uint8_t dms, uint8_t ttfc, uint8_t dstscatteren, uint8_t srcgatheren, uint8_t srcmsize, uint8_t destmsize, uint8_t sinc, uint8_t dinc, uint8_t srctrwidth, uint8_t dsttrwidth, uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)llpsrcen << 28) | ((uint32_t)llpdsten << 27) | ((uint32_t)sms << 25) | ((uint32_t)dms << 23) | ((uint32_t)ttfc << 20) | ((uint32_t)dstscatteren << 18) | ((uint32_t)srcgatheren << 17) | ((uint32_t)srcmsize << 14) | ((uint32_t)destmsize << 11) | ((uint32_t)sinc << 9) | ((uint32_t)dinc << 7) | ((uint32_t)srctrwidth << 4) | ((uint32_t)dsttrwidth << 1) | ((uint32_t)inten << 0));
}

__INLINE static void dmac_ctl5_unpack(uint8_t* llpsrcen, uint8_t* llpdsten, uint8_t* sms, uint8_t* dms, uint8_t* ttfc, uint8_t* dstscatteren, uint8_t* srcgatheren, uint8_t* srcmsize, uint8_t* destmsize, uint8_t* sinc, uint8_t* dinc, uint8_t* srctrwidth, uint8_t* dsttrwidth, uint8_t* inten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *llpsrcen = (localVal & ((uint32_t)0x10000000)) >> 28;
    *llpdsten = (localVal & ((uint32_t)0x08000000)) >> 27;
    *sms = (localVal & ((uint32_t)0x06000000)) >> 25;
    *dms = (localVal & ((uint32_t)0x01800000)) >> 23;
    *ttfc = (localVal & ((uint32_t)0x00700000)) >> 20;
    *dstscatteren = (localVal & ((uint32_t)0x00040000)) >> 18;
    *srcgatheren = (localVal & ((uint32_t)0x00020000)) >> 17;
    *srcmsize = (localVal & ((uint32_t)0x0001C000)) >> 14;
    *destmsize = (localVal & ((uint32_t)0x00003800)) >> 11;
    *sinc = (localVal & ((uint32_t)0x00000600)) >> 9;
    *dinc = (localVal & ((uint32_t)0x00000180)) >> 7;
    *srctrwidth = (localVal & ((uint32_t)0x00000070)) >> 4;
    *dsttrwidth = (localVal & ((uint32_t)0x0000000E)) >> 1;
    *inten = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_ctl5_llp_src_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x10000000)) >> 28);
}

__INLINE static void dmac_ctl5_llp_src_en_setf(uint8_t llpsrcen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x10000000)) | ((uint32_t)llpsrcen << 28));
}

__INLINE static uint8_t dmac_ctl5_llp_dst_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x08000000)) >> 27);
}

__INLINE static void dmac_ctl5_llp_dst_en_setf(uint8_t llpdsten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x08000000)) | ((uint32_t)llpdsten << 27));
}

__INLINE static uint8_t dmac_ctl5_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x06000000)) >> 25);
}

__INLINE static void dmac_ctl5_sms_setf(uint8_t sms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x06000000)) | ((uint32_t)sms << 25));
}

__INLINE static uint8_t dmac_ctl5_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01800000)) >> 23);
}

__INLINE static void dmac_ctl5_dms_setf(uint8_t dms)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x01800000)) | ((uint32_t)dms << 23));
}

__INLINE static uint8_t dmac_ctl5_tt_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00700000)) >> 20);
}

__INLINE static void dmac_ctl5_tt_fc_setf(uint8_t ttfc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00700000)) | ((uint32_t)ttfc << 20));
}

__INLINE static uint8_t dmac_ctl5_dst_scatter_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_ctl5_dst_scatter_en_setf(uint8_t dstscatteren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dstscatteren << 18));
}

__INLINE static uint8_t dmac_ctl5_src_gather_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_ctl5_src_gather_en_setf(uint8_t srcgatheren)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)srcgatheren << 17));
}

__INLINE static uint8_t dmac_ctl5_src_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0001C000)) >> 14);
}

__INLINE static void dmac_ctl5_src_msize_setf(uint8_t srcmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0001C000)) | ((uint32_t)srcmsize << 14));
}

__INLINE static uint8_t dmac_ctl5_dest_msize_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003800)) >> 11);
}

__INLINE static void dmac_ctl5_dest_msize_setf(uint8_t destmsize)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003800)) | ((uint32_t)destmsize << 11));
}

__INLINE static uint8_t dmac_ctl5_sinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000600)) >> 9);
}

__INLINE static void dmac_ctl5_sinc_setf(uint8_t sinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000600)) | ((uint32_t)sinc << 9));
}

__INLINE static uint8_t dmac_ctl5_dinc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000180)) >> 7);
}

__INLINE static void dmac_ctl5_dinc_setf(uint8_t dinc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000180)) | ((uint32_t)dinc << 7));
}

__INLINE static uint8_t dmac_ctl5_src_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000070)) >> 4);
}

__INLINE static void dmac_ctl5_src_tr_width_setf(uint8_t srctrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000070)) | ((uint32_t)srctrwidth << 4));
}

__INLINE static uint8_t dmac_ctl5_dst_tr_width_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000E)) >> 1);
}

__INLINE static void dmac_ctl5_dst_tr_width_setf(uint8_t dsttrwidth)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000E)) | ((uint32_t)dsttrwidth << 1));
}

__INLINE static uint8_t dmac_ctl5_int_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_ctl5_int_en_setf(uint8_t inten)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)inten << 0));
}

 /**
 * @brief CTL51 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     12                 DONE   0
 *  05:00             BLOCK_TS   0b2
 * </pre>
 */
#define FEMTO_REG_DMAC_CTL51_OFFSET 0x000001D4


__INLINE static uint32_t dmac_ctl51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_ctl51_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CTL51_DONE_BIT                              ((uint32_t)0x00001000)
#define DMAC_CTL51_DONE_POS                              12
#define DMAC_CTL51_BLOCK_TS_MASK                         ((uint32_t)0x0000003F)
#define DMAC_CTL51_BLOCK_TS_LSB                          0
#define DMAC_CTL51_BLOCK_TS_WIDTH                        ((uint32_t)0x00000006)

#define DMAC_CTL51_DONE_RST                              0x0
#define DMAC_CTL51_BLOCK_TS_RST                          0x2

__INLINE static void dmac_ctl51_pack(uint8_t done, uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)done << 12) | ((uint32_t)blockts << 0));
}

__INLINE static void dmac_ctl51_unpack(uint8_t* done, uint8_t* blockts)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *done = (localVal & ((uint32_t)0x00001000)) >> 12;
    *blockts = (localVal & ((uint32_t)0x0000003F)) >> 0;
}

__INLINE static uint8_t dmac_ctl51_done_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void dmac_ctl51_done_setf(uint8_t done)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)done << 12));
}

__INLINE static uint8_t dmac_ctl51_block_ts_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000003F)) >> 0);
}

__INLINE static void dmac_ctl51_block_ts_setf(uint8_t blockts)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CTL51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CTL51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000003F)) | ((uint32_t)blockts << 0));
}

 /**
 * @brief SSTAT5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                SSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTAT5_OFFSET 0x000001D8


__INLINE static uint32_t dmac_sstat5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstat5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTAT5_SSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT5_SSTAT_LSB                             0
#define DMAC_SSTAT5_SSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_SSTAT5_SSTAT_RST                             0x0

__INLINE static void dmac_sstat5_pack(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstat << 0));
}

__INLINE static void dmac_sstat5_unpack(uint8_t* sstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstat5_sstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstat5_sstat_setf(uint32_t sstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstat << 0);
}

 /**
 * @brief SSTAT51 register definition
 */
#define FEMTO_REG_DMAC_SSTAT51_OFFSET 0x000001DC


__INLINE static uint32_t dmac_sstat51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTAT51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTAT51_RESERVED_LSB                          0
#define DMAC_SSTAT51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTAT51_RESERVED_RST                          0x0

__INLINE static void dmac_sstat51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTAT51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTAT5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00                DSTAT   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTAT5_OFFSET 0x000001E0


__INLINE static uint32_t dmac_dstat5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstat5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTAT5_DSTAT_MASK                            ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT5_DSTAT_LSB                             0
#define DMAC_DSTAT5_DSTAT_WIDTH                           ((uint32_t)0x00000020)

#define DMAC_DSTAT5_DSTAT_RST                             0x0

__INLINE static void dmac_dstat5_pack(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstat << 0));
}

__INLINE static void dmac_dstat5_unpack(uint8_t* dstat)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstat = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstat5_dstat_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstat5_dstat_setf(uint32_t dstat)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTAT5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstat << 0);
}

 /**
 * @brief DSTAT51 register definition
 */
#define FEMTO_REG_DMAC_DSTAT51_OFFSET 0x000001E4


__INLINE static uint32_t dmac_dstat51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTAT51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTAT51_RESERVED_LSB                          0
#define DMAC_DSTAT51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTAT51_RESERVED_RST                          0x0

__INLINE static void dmac_dstat51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTAT51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SSTATAR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              SSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SSTATAR5_OFFSET 0x000001E8


__INLINE static uint32_t dmac_sstatar5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sstatar5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SSTATAR5_SSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR5_SSTATAR_LSB                           0
#define DMAC_SSTATAR5_SSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_SSTATAR5_SSTATAR_RST                           0x0

__INLINE static void dmac_sstatar5_pack(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sstatar << 0));
}

__INLINE static void dmac_sstatar5_unpack(uint8_t* sstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_sstatar5_sstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_sstatar5_sstatar_setf(uint32_t sstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)sstatar << 0);
}

 /**
 * @brief SSTATAR51 register definition
 */
#define FEMTO_REG_DMAC_SSTATAR51_OFFSET 0x000001EC


__INLINE static uint32_t dmac_sstatar51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SSTATAR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SSTATAR51_RESERVED_LSB                          0
#define DMAC_SSTATAR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SSTATAR51_RESERVED_RST                          0x0

__INLINE static void dmac_sstatar51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SSTATAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSTATAR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00              DSTATAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSTATAR5_OFFSET 0x000001F0


__INLINE static uint32_t dmac_dstatar5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dstatar5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSTATAR5_DSTATAR_MASK                          ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR5_DSTATAR_LSB                           0
#define DMAC_DSTATAR5_DSTATAR_WIDTH                         ((uint32_t)0x00000020)

#define DMAC_DSTATAR5_DSTATAR_RST                           0x0

__INLINE static void dmac_dstatar5_pack(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstatar << 0));
}

__INLINE static void dmac_dstatar5_unpack(uint8_t* dstatar)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstatar = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dstatar5_dstatar_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void dmac_dstatar5_dstatar_setf(uint32_t dstatar)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSTATAR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dstatar << 0);
}

 /**
 * @brief DSTATAR51 register definition
 */
#define FEMTO_REG_DMAC_DSTATAR51_OFFSET 0x000001F4


__INLINE static uint32_t dmac_dstatar51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSTATAR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSTATAR51_RESERVED_LSB                          0
#define DMAC_DSTATAR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSTATAR51_RESERVED_RST                          0x0

__INLINE static void dmac_dstatar51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSTATAR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CFG5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31           RELOAD_DST   0
 *     30           RELOAD_SRC   0
 *  29:20            MAX_ABRST   0b0
 *     19           SRC_HS_POL   0
 *     18           DST_HS_POL   0
 *     17               LOCK_B   0
 *     16              LOCK_CH   0
 *  15:14             LOCK_B_L   0b0
 *  13:12            LOCK_CH_L   0b0
 *     11           HS_SEL_SRC   1
 *     10           HS_SEL_DST   1
 *     09           FIFO_EMPTY   1
 *     08              CH_SUSP   0
 *  07:05             CH_PRIOR   0b5
 *  04:00             Reserved   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG5_OFFSET 0x000001F8


__INLINE static uint32_t dmac_cfg5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG5_RELOAD_DST_BIT                        ((uint32_t)0x80000000)
#define DMAC_CFG5_RELOAD_DST_POS                        31
#define DMAC_CFG5_RELOAD_SRC_BIT                        ((uint32_t)0x40000000)
#define DMAC_CFG5_RELOAD_SRC_POS                        30
#define DMAC_CFG5_MAX_ABRST_MASK                        ((uint32_t)0x3FF00000)
#define DMAC_CFG5_MAX_ABRST_LSB                         20
#define DMAC_CFG5_MAX_ABRST_WIDTH                       ((uint32_t)0x0000000A)
#define DMAC_CFG5_SRC_HS_POL_BIT                        ((uint32_t)0x00080000)
#define DMAC_CFG5_SRC_HS_POL_POS                        19
#define DMAC_CFG5_DST_HS_POL_BIT                        ((uint32_t)0x00040000)
#define DMAC_CFG5_DST_HS_POL_POS                        18
#define DMAC_CFG5_LOCK_B_BIT                            ((uint32_t)0x00020000)
#define DMAC_CFG5_LOCK_B_POS                            17
#define DMAC_CFG5_LOCK_CH_BIT                           ((uint32_t)0x00010000)
#define DMAC_CFG5_LOCK_CH_POS                           16
#define DMAC_CFG5_LOCK_B_L_MASK                         ((uint32_t)0x0000C000)
#define DMAC_CFG5_LOCK_B_L_LSB                          14
#define DMAC_CFG5_LOCK_B_L_WIDTH                        ((uint32_t)0x00000002)
#define DMAC_CFG5_LOCK_CH_L_MASK                        ((uint32_t)0x00003000)
#define DMAC_CFG5_LOCK_CH_L_LSB                         12
#define DMAC_CFG5_LOCK_CH_L_WIDTH                       ((uint32_t)0x00000002)
#define DMAC_CFG5_HS_SEL_SRC_BIT                        ((uint32_t)0x00000800)
#define DMAC_CFG5_HS_SEL_SRC_POS                        11
#define DMAC_CFG5_HS_SEL_DST_BIT                        ((uint32_t)0x00000400)
#define DMAC_CFG5_HS_SEL_DST_POS                        10
#define DMAC_CFG5_FIFO_EMPTY_BIT                        ((uint32_t)0x00000200)
#define DMAC_CFG5_FIFO_EMPTY_POS                        9
#define DMAC_CFG5_CH_SUSP_BIT                           ((uint32_t)0x00000100)
#define DMAC_CFG5_CH_SUSP_POS                           8
#define DMAC_CFG5_CH_PRIOR_MASK                         ((uint32_t)0x000000E0)
#define DMAC_CFG5_CH_PRIOR_LSB                          5
#define DMAC_CFG5_CH_PRIOR_WIDTH                        ((uint32_t)0x00000003)
#define DMAC_CFG5_RESERVED_MASK                         ((uint32_t)0x0000001F)
#define DMAC_CFG5_RESERVED_LSB                          0
#define DMAC_CFG5_RESERVED_WIDTH                        ((uint32_t)0x00000005)

#define DMAC_CFG5_RELOAD_DST_RST                        0x0
#define DMAC_CFG5_RELOAD_SRC_RST                        0x0
#define DMAC_CFG5_MAX_ABRST_RST                         0x0
#define DMAC_CFG5_SRC_HS_POL_RST                        0x0
#define DMAC_CFG5_DST_HS_POL_RST                        0x0
#define DMAC_CFG5_LOCK_B_RST                            0x0
#define DMAC_CFG5_LOCK_CH_RST                           0x0
#define DMAC_CFG5_LOCK_B_L_RST                          0x0
#define DMAC_CFG5_LOCK_CH_L_RST                         0x0
#define DMAC_CFG5_HS_SEL_SRC_RST                        0x1
#define DMAC_CFG5_HS_SEL_DST_RST                        0x1
#define DMAC_CFG5_FIFO_EMPTY_RST                        0x1
#define DMAC_CFG5_CH_SUSP_RST                           0x0
#define DMAC_CFG5_CH_PRIOR_RST                          0x5
#define DMAC_CFG5_RESERVED_RST                          0x0

__INLINE static void dmac_cfg5_pack(uint8_t reloaddst, uint8_t reloadsrc, uint16_t maxabrst, uint8_t srchspol, uint8_t dsthspol, uint8_t lockb, uint8_t lockch, uint8_t lockbl, uint8_t lockchl, uint8_t hsselsrc, uint8_t hsseldst, uint8_t chsusp, uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)reloaddst << 31) | ((uint32_t)reloadsrc << 30) | ((uint32_t)maxabrst << 20) | ((uint32_t)srchspol << 19) | ((uint32_t)dsthspol << 18) | ((uint32_t)lockb << 17) | ((uint32_t)lockch << 16) | ((uint32_t)lockbl << 14) | ((uint32_t)lockchl << 12) | ((uint32_t)hsselsrc << 11) | ((uint32_t)hsseldst << 10) | ((uint32_t)chsusp << 8) | ((uint32_t)chprior << 5));
}

__INLINE static void dmac_cfg5_unpack(uint8_t* reloaddst, uint8_t* reloadsrc, uint8_t* maxabrst, uint8_t* srchspol, uint8_t* dsthspol, uint8_t* lockb, uint8_t* lockch, uint8_t* lockbl, uint8_t* lockchl, uint8_t* hsselsrc, uint8_t* hsseldst, uint8_t* fifoempty, uint8_t* chsusp, uint8_t* chprior, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reloaddst = (localVal & ((uint32_t)0x80000000)) >> 31;
    *reloadsrc = (localVal & ((uint32_t)0x40000000)) >> 30;
    *maxabrst = (localVal & ((uint32_t)0x3FF00000)) >> 20;
    *srchspol = (localVal & ((uint32_t)0x00080000)) >> 19;
    *dsthspol = (localVal & ((uint32_t)0x00040000)) >> 18;
    *lockb = (localVal & ((uint32_t)0x00020000)) >> 17;
    *lockch = (localVal & ((uint32_t)0x00010000)) >> 16;
    *lockbl = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *lockchl = (localVal & ((uint32_t)0x00003000)) >> 12;
    *hsselsrc = (localVal & ((uint32_t)0x00000800)) >> 11;
    *hsseldst = (localVal & ((uint32_t)0x00000400)) >> 10;
    *fifoempty = (localVal & ((uint32_t)0x00000200)) >> 9;
    *chsusp = (localVal & ((uint32_t)0x00000100)) >> 8;
    *chprior = (localVal & ((uint32_t)0x000000E0)) >> 5;
    *reserved = (localVal & ((uint32_t)0x0000001F)) >> 0;
}

__INLINE static uint8_t dmac_cfg5_reload_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static void dmac_cfg5_reload_dst_setf(uint8_t reloaddst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x80000000)) | ((uint32_t)reloaddst << 31));
}

__INLINE static uint8_t dmac_cfg5_reload_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static void dmac_cfg5_reload_src_setf(uint8_t reloadsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x40000000)) | ((uint32_t)reloadsrc << 30));
}

__INLINE static uint16_t dmac_cfg5_max_abrst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x3FF00000)) >> 20);
}

__INLINE static void dmac_cfg5_max_abrst_setf(uint16_t maxabrst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x3FF00000)) | ((uint32_t)maxabrst << 20));
}

__INLINE static uint8_t dmac_cfg5_src_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00080000)) >> 19);
}

__INLINE static void dmac_cfg5_src_hs_pol_setf(uint8_t srchspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00080000)) | ((uint32_t)srchspol << 19));
}

__INLINE static uint8_t dmac_cfg5_dst_hs_pol_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void dmac_cfg5_dst_hs_pol_setf(uint8_t dsthspol)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)dsthspol << 18));
}

__INLINE static uint8_t dmac_cfg5_lock_b_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void dmac_cfg5_lock_b_setf(uint8_t lockb)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)lockb << 17));
}

__INLINE static uint8_t dmac_cfg5_lock_ch_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void dmac_cfg5_lock_ch_setf(uint8_t lockch)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)lockch << 16));
}

__INLINE static uint8_t dmac_cfg5_lock_b_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static void dmac_cfg5_lock_b_l_setf(uint8_t lockbl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000C000)) | ((uint32_t)lockbl << 14));
}

__INLINE static uint8_t dmac_cfg5_lock_ch_l_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00003000)) >> 12);
}

__INLINE static void dmac_cfg5_lock_ch_l_setf(uint8_t lockchl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00003000)) | ((uint32_t)lockchl << 12));
}

__INLINE static uint8_t dmac_cfg5_hs_sel_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void dmac_cfg5_hs_sel_src_setf(uint8_t hsselsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)hsselsrc << 11));
}

__INLINE static uint8_t dmac_cfg5_hs_sel_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void dmac_cfg5_hs_sel_dst_setf(uint8_t hsseldst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)hsseldst << 10));
}

__INLINE static uint8_t dmac_cfg5_fifo_empty_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_cfg5_ch_susp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void dmac_cfg5_ch_susp_setf(uint8_t chsusp)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)chsusp << 8));
}

__INLINE static uint8_t dmac_cfg5_ch_prior_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000E0)) >> 5);
}

__INLINE static void dmac_cfg5_ch_prior_setf(uint8_t chprior)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000000E0)) | ((uint32_t)chprior << 5));
}

 /**
 * @brief CFG51 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  14:11             DEST_PER   0b0
 *  10:07              SRC_PER   0b0
 *     06            SS_UPD_EN   0
 *     05            DS_UPD_EN   0
 *  04:02              PROTCTL   0b1
 *     01            FIFO_MODE   0
 *     00               FCMODE   0
 * </pre>
 */
#define FEMTO_REG_DMAC_CFG51_OFFSET 0x000001FC


__INLINE static uint32_t dmac_cfg51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cfg51_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CFG51_DEST_PER_MASK                         ((uint32_t)0x00007800)
#define DMAC_CFG51_DEST_PER_LSB                          11
#define DMAC_CFG51_DEST_PER_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CFG51_SRC_PER_MASK                          ((uint32_t)0x00000780)
#define DMAC_CFG51_SRC_PER_LSB                           7
#define DMAC_CFG51_SRC_PER_WIDTH                         ((uint32_t)0x00000004)
#define DMAC_CFG51_SS_UPD_EN_BIT                         ((uint32_t)0x00000040)
#define DMAC_CFG51_SS_UPD_EN_POS                         6
#define DMAC_CFG51_DS_UPD_EN_BIT                         ((uint32_t)0x00000020)
#define DMAC_CFG51_DS_UPD_EN_POS                         5
#define DMAC_CFG51_PROTCTL_MASK                          ((uint32_t)0x0000001C)
#define DMAC_CFG51_PROTCTL_LSB                           2
#define DMAC_CFG51_PROTCTL_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_CFG51_FIFO_MODE_BIT                         ((uint32_t)0x00000002)
#define DMAC_CFG51_FIFO_MODE_POS                         1
#define DMAC_CFG51_FCMODE_BIT                            ((uint32_t)0x00000001)
#define DMAC_CFG51_FCMODE_POS                            0

#define DMAC_CFG51_DEST_PER_RST                          0x0
#define DMAC_CFG51_SRC_PER_RST                           0x0
#define DMAC_CFG51_SS_UPD_EN_RST                         0x0
#define DMAC_CFG51_DS_UPD_EN_RST                         0x0
#define DMAC_CFG51_PROTCTL_RST                           0x1
#define DMAC_CFG51_FIFO_MODE_RST                         0x0
#define DMAC_CFG51_FCMODE_RST                            0x0

__INLINE static void dmac_cfg51_pack(uint8_t destper, uint8_t srcper, uint8_t ssupden, uint8_t dsupden, uint8_t protctl, uint8_t fifomode, uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)destper << 11) | ((uint32_t)srcper << 7) | ((uint32_t)ssupden << 6) | ((uint32_t)dsupden << 5) | ((uint32_t)protctl << 2) | ((uint32_t)fifomode << 1) | ((uint32_t)fcmode << 0));
}

__INLINE static void dmac_cfg51_unpack(uint8_t* destper, uint8_t* srcper, uint8_t* ssupden, uint8_t* dsupden, uint8_t* protctl, uint8_t* fifomode, uint8_t* fcmode)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *destper = (localVal & ((uint32_t)0x00007800)) >> 11;
    *srcper = (localVal & ((uint32_t)0x00000780)) >> 7;
    *ssupden = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dsupden = (localVal & ((uint32_t)0x00000020)) >> 5;
    *protctl = (localVal & ((uint32_t)0x0000001C)) >> 2;
    *fifomode = (localVal & ((uint32_t)0x00000002)) >> 1;
    *fcmode = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_cfg51_dest_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00007800)) >> 11);
}

__INLINE static void dmac_cfg51_dest_per_setf(uint8_t destper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00007800)) | ((uint32_t)destper << 11));
}

__INLINE static uint8_t dmac_cfg51_src_per_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000780)) >> 7);
}

__INLINE static void dmac_cfg51_src_per_setf(uint8_t srcper)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000780)) | ((uint32_t)srcper << 7));
}

__INLINE static uint8_t dmac_cfg51_ss_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void dmac_cfg51_ss_upd_en_setf(uint8_t ssupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)ssupden << 6));
}

__INLINE static uint8_t dmac_cfg51_ds_upd_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void dmac_cfg51_ds_upd_en_setf(uint8_t dsupden)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dsupden << 5));
}

__INLINE static uint8_t dmac_cfg51_protctl_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000001C)) >> 2);
}

__INLINE static void dmac_cfg51_protctl_setf(uint8_t protctl)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000001C)) | ((uint32_t)protctl << 2));
}

__INLINE static uint8_t dmac_cfg51_fifo_mode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void dmac_cfg51_fifo_mode_setf(uint8_t fifomode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)fifomode << 1));
}

__INLINE static uint8_t dmac_cfg51_fcmode_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_cfg51_fcmode_setf(uint8_t fcmode)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CFG51_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CFG51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)fcmode << 0));
}

 /**
 * @brief SGR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:20                  SGC   0b0
 *  19:00                  SGI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGR5_OFFSET 0x00000200


__INLINE static uint32_t dmac_sgr5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sgr5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGR5_SGC_MASK                              ((uint32_t)0x03F00000)
#define DMAC_SGR5_SGC_LSB                               20
#define DMAC_SGR5_SGC_WIDTH                             ((uint32_t)0x00000006)
#define DMAC_SGR5_SGI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_SGR5_SGI_LSB                               0
#define DMAC_SGR5_SGI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_SGR5_SGC_RST                               0x0
#define DMAC_SGR5_SGI_RST                               0x0

__INLINE static void dmac_sgr5_pack(uint8_t sgc, uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)sgc << 20) | ((uint32_t)sgi << 0));
}

__INLINE static void dmac_sgr5_unpack(uint8_t* sgc, uint8_t* sgi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *sgc = (localVal & ((uint32_t)0x03F00000)) >> 20;
    *sgi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_sgr5_sgc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03F00000)) >> 20);
}

__INLINE static void dmac_sgr5_sgc_setf(uint8_t sgc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x03F00000)) | ((uint32_t)sgc << 20));
}

__INLINE static uint32_t dmac_sgr5_sgi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_sgr5_sgi_setf(uint32_t sgi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)sgi << 0));
}

 /**
 * @brief SGR51 register definition
 */
#define FEMTO_REG_DMAC_SGR51_OFFSET 0x00000204


__INLINE static uint32_t dmac_sgr51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGR51_RESERVED_LSB                          0
#define DMAC_SGR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGR51_RESERVED_RST                          0x0

__INLINE static void dmac_sgr51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DSR5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  25:20                  DSC   0b0
 *  19:00                  DSI   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DSR5_OFFSET 0x00000208


__INLINE static uint32_t dmac_dsr5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dsr5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DSR5_DSC_MASK                              ((uint32_t)0x03F00000)
#define DMAC_DSR5_DSC_LSB                               20
#define DMAC_DSR5_DSC_WIDTH                             ((uint32_t)0x00000006)
#define DMAC_DSR5_DSI_MASK                              ((uint32_t)0x000FFFFF)
#define DMAC_DSR5_DSI_LSB                               0
#define DMAC_DSR5_DSI_WIDTH                             ((uint32_t)0x00000014)

#define DMAC_DSR5_DSC_RST                               0x0
#define DMAC_DSR5_DSI_RST                               0x0

__INLINE static void dmac_dsr5_pack(uint8_t dsc, uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dsc << 20) | ((uint32_t)dsi << 0));
}

__INLINE static void dmac_dsr5_unpack(uint8_t* dsc, uint8_t* dsi)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dsc = (localVal & ((uint32_t)0x03F00000)) >> 20;
    *dsi = (localVal & ((uint32_t)0x000FFFFF)) >> 0;
}

__INLINE static uint8_t dmac_dsr5_dsc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x03F00000)) >> 20);
}

__INLINE static void dmac_dsr5_dsc_setf(uint8_t dsc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x03F00000)) | ((uint32_t)dsc << 20));
}

__INLINE static uint32_t dmac_dsr5_dsi_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000FFFFF)) >> 0);
}

__INLINE static void dmac_dsr5_dsi_setf(uint32_t dsi)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DSR5_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_DSR5_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x000FFFFF)) | ((uint32_t)dsi << 0));
}

 /**
 * @brief DSR51 register definition
 */
#define FEMTO_REG_DMAC_DSR51_OFFSET 0x0000020C


__INLINE static uint32_t dmac_dsr51_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DSR51_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DSR51_RESERVED_LSB                          0
#define DMAC_DSR51_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DSR51_RESERVED_RST                          0x0

__INLINE static void dmac_dsr51_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DSR51_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief RAW_TFR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  RAW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_RAW_TFR_OFFSET 0x000002C0


__INLINE static uint32_t dmac_rawtfr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_rawtfr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_RAWTFR_RAW_MASK                              ((uint32_t)0x0000000F)
#define DMAC_RAWTFR_RAW_LSB                               0
#define DMAC_RAWTFR_RAW_WIDTH                             ((uint32_t)0x00000004)

#define DMAC_RAWTFR_RAW_RST                               0x0

__INLINE static void dmac_rawtfr_pack(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)raw << 0));
}

__INLINE static void dmac_rawtfr_unpack(uint8_t* raw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *raw = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_rawtfr_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_rawtfr_raw_setf(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)raw << 0);
}

 /**
 * @brief RAW_TFR1 register definition
 */
#define FEMTO_REG_DMAC_RAW_TFR1_OFFSET 0x000002C4


__INLINE static uint32_t dmac_rawtfr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_RAWTFR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_RAWTFR1_RESERVED_LSB                          0
#define DMAC_RAWTFR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_RAWTFR1_RESERVED_RST                          0x0

__INLINE static void dmac_rawtfr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief RAW_BLOCK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  RAW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_RAW_BLOCK_OFFSET 0x000002C8


__INLINE static uint32_t dmac_rawblock_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_rawblock_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_RAWBLOCK_RAW_MASK                              ((uint32_t)0x0000000F)
#define DMAC_RAWBLOCK_RAW_LSB                               0
#define DMAC_RAWBLOCK_RAW_WIDTH                             ((uint32_t)0x00000004)

#define DMAC_RAWBLOCK_RAW_RST                               0x0

__INLINE static void dmac_rawblock_pack(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)raw << 0));
}

__INLINE static void dmac_rawblock_unpack(uint8_t* raw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *raw = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_rawblock_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_rawblock_raw_setf(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)raw << 0);
}

 /**
 * @brief RAW_BLOCK1 register definition
 */
#define FEMTO_REG_DMAC_RAW_BLOCK1_OFFSET 0x000002CC


__INLINE static uint32_t dmac_rawblock1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_RAWBLOCK1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_RAWBLOCK1_RESERVED_LSB                          0
#define DMAC_RAWBLOCK1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_RAWBLOCK1_RESERVED_RST                          0x0

__INLINE static void dmac_rawblock1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief RAW_SRC_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  RAW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET 0x000002D0


__INLINE static uint32_t dmac_rawsrctran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_rawsrctran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_RAWSRCTRAN_RAW_MASK                              ((uint32_t)0x0000000F)
#define DMAC_RAWSRCTRAN_RAW_LSB                               0
#define DMAC_RAWSRCTRAN_RAW_WIDTH                             ((uint32_t)0x00000004)

#define DMAC_RAWSRCTRAN_RAW_RST                               0x0

__INLINE static void dmac_rawsrctran_pack(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)raw << 0));
}

__INLINE static void dmac_rawsrctran_unpack(uint8_t* raw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *raw = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_rawsrctran_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_rawsrctran_raw_setf(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)raw << 0);
}

 /**
 * @brief RAW_SRC_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_RAW_SRC_TRAN1_OFFSET 0x000002D4


__INLINE static uint32_t dmac_rawsrctran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_RAWSRCTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_RAWSRCTRAN1_RESERVED_LSB                          0
#define DMAC_RAWSRCTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_RAWSRCTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_rawsrctran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief RAW_DST_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  RAW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET 0x000002D8


__INLINE static uint32_t dmac_rawdsttran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_rawdsttran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_RAWDSTTRAN_RAW_MASK                              ((uint32_t)0x0000000F)
#define DMAC_RAWDSTTRAN_RAW_LSB                               0
#define DMAC_RAWDSTTRAN_RAW_WIDTH                             ((uint32_t)0x00000004)

#define DMAC_RAWDSTTRAN_RAW_RST                               0x0

__INLINE static void dmac_rawdsttran_pack(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)raw << 0));
}

__INLINE static void dmac_rawdsttran_unpack(uint8_t* raw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *raw = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_rawdsttran_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_rawdsttran_raw_setf(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)raw << 0);
}

 /**
 * @brief RAW_DST_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_RAW_DST_TRAN1_OFFSET 0x000002DC


__INLINE static uint32_t dmac_rawdsttran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_RAWDSTTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_RAWDSTTRAN1_RESERVED_LSB                          0
#define DMAC_RAWDSTTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_RAWDSTTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_rawdsttran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief RAW_ERR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                  RAW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_RAW_ERR_OFFSET 0x000002E0


__INLINE static uint32_t dmac_rawerr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_rawerr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_RAWERR_RAW_MASK                              ((uint32_t)0x0000000F)
#define DMAC_RAWERR_RAW_LSB                               0
#define DMAC_RAWERR_RAW_WIDTH                             ((uint32_t)0x00000004)

#define DMAC_RAWERR_RAW_RST                               0x0

__INLINE static void dmac_rawerr_pack(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)raw << 0));
}

__INLINE static void dmac_rawerr_unpack(uint8_t* raw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *raw = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_rawerr_raw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_rawerr_raw_setf(uint8_t raw)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_RAW_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)raw << 0);
}

 /**
 * @brief RAW_ERR1 register definition
 */
#define FEMTO_REG_DMAC_RAW_ERR1_OFFSET 0x000002E4


__INLINE static uint32_t dmac_rawerr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_RAWERR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_RAWERR1_RESERVED_LSB                          0
#define DMAC_RAWERR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_RAWERR1_RESERVED_RST                          0x0

__INLINE static void dmac_rawerr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_RAW_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_TFR0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00               STATUS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_TFR0_OFFSET 0x000002E8


__INLINE static uint32_t dmac_statustfr0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_TFR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSTFR0_STATUS_MASK                           ((uint32_t)0x0000000F)
#define DMAC_STATUSTFR0_STATUS_LSB                            0
#define DMAC_STATUSTFR0_STATUS_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_STATUSTFR0_STATUS_RST                            0x0

__INLINE static void dmac_statustfr0_unpack(uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_TFR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *status = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_statustfr0_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_TFR0_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief STATUS_TFR1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_TFR1_OFFSET 0x000002EC


__INLINE static uint32_t dmac_statustfr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSTFR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSTFR1_RESERVED_LSB                          0
#define DMAC_STATUSTFR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSTFR1_RESERVED_RST                          0x0

__INLINE static void dmac_statustfr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_BLOCK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00               STATUS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_BLOCK_OFFSET 0x000002F0


__INLINE static uint32_t dmac_statusblock_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSBLOCK_STATUS_MASK                           ((uint32_t)0x0000000F)
#define DMAC_STATUSBLOCK_STATUS_LSB                            0
#define DMAC_STATUSBLOCK_STATUS_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_STATUSBLOCK_STATUS_RST                            0x0

__INLINE static void dmac_statusblock_unpack(uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *status = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_statusblock_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief STATUS_BLOCK1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_BLOCK1_OFFSET 0x000002F4


__INLINE static uint32_t dmac_statusblock1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSBLOCK1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSBLOCK1_RESERVED_LSB                          0
#define DMAC_STATUSBLOCK1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSBLOCK1_RESERVED_RST                          0x0

__INLINE static void dmac_statusblock1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_SRC_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00               STATUS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_SRC_TRAN_OFFSET 0x000002F8


__INLINE static uint32_t dmac_statussrctran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSSRCTRAN_STATUS_MASK                           ((uint32_t)0x0000000F)
#define DMAC_STATUSSRCTRAN_STATUS_LSB                            0
#define DMAC_STATUSSRCTRAN_STATUS_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_STATUSSRCTRAN_STATUS_RST                            0x0

__INLINE static void dmac_statussrctran_unpack(uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *status = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_statussrctran_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief STATUS_SRC_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_SRC_TRAN1_OFFSET 0x000002FC


__INLINE static uint32_t dmac_statussrctran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSSRCTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSSRCTRAN1_RESERVED_LSB                          0
#define DMAC_STATUSSRCTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSSRCTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_statussrctran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_DST_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00               STATUS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_DST_TRAN_OFFSET 0x00000300


__INLINE static uint32_t dmac_statusdsttran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSDSTTRAN_STATUS_MASK                           ((uint32_t)0x0000000F)
#define DMAC_STATUSDSTTRAN_STATUS_LSB                            0
#define DMAC_STATUSDSTTRAN_STATUS_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_STATUSDSTTRAN_STATUS_RST                            0x0

__INLINE static void dmac_statusdsttran_unpack(uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *status = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_statusdsttran_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief STATUS_DST_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_DST_TRAN1_OFFSET 0x00000304


__INLINE static uint32_t dmac_statusdsttran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSDSTTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSDSTTRAN1_RESERVED_LSB                          0
#define DMAC_STATUSDSTTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSDSTTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_statusdsttran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_ERR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00               STATUS   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_ERR_OFFSET 0x00000308


__INLINE static uint32_t dmac_statuserr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSERR_STATUS_MASK                           ((uint32_t)0x0000000F)
#define DMAC_STATUSERR_STATUS_LSB                            0
#define DMAC_STATUSERR_STATUS_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_STATUSERR_STATUS_RST                            0x0

__INLINE static void dmac_statuserr_unpack(uint8_t* status)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *status = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_statuserr_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief STATUS_ERR1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_ERR1_OFFSET 0x0000030C


__INLINE static uint32_t dmac_statuserr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSERR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSERR1_RESERVED_LSB                          0
#define DMAC_STATUSERR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSERR1_RESERVED_RST                          0x0

__INLINE static void dmac_statuserr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief MASK_TFR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08          INT_MASK_WE   0b0
 *  03:00             INT_MASK   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_MASK_TFR_OFFSET 0x00000310


__INLINE static uint32_t dmac_masktfr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_masktfr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_MASKTFR_INT_MASK_WE_MASK                      ((uint32_t)0x00000F00)
#define DMAC_MASKTFR_INT_MASK_WE_LSB                       8
#define DMAC_MASKTFR_INT_MASK_WE_WIDTH                     ((uint32_t)0x00000004)
#define DMAC_MASKTFR_INT_MASK_MASK                         ((uint32_t)0x0000000F)
#define DMAC_MASKTFR_INT_MASK_LSB                          0
#define DMAC_MASKTFR_INT_MASK_WIDTH                        ((uint32_t)0x00000004)

#define DMAC_MASKTFR_INT_MASK_WE_RST                       0x0
#define DMAC_MASKTFR_INT_MASK_RST                          0x0

__INLINE static void dmac_masktfr_pack(uint8_t intmaskwe, uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)intmaskwe << 8) | ((uint32_t)intmask << 0));
}

__INLINE static void dmac_masktfr_unpack(uint8_t* intmaskwe, uint8_t* intmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *intmaskwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intmask = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_masktfr_int_mask_we_setf(uint8_t intmaskwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)intmaskwe << 8));
}

__INLINE static uint8_t dmac_masktfr_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_masktfr_int_mask_setf(uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)intmask << 0));
}

 /**
 * @brief MASK_TFR1 register definition
 */
#define FEMTO_REG_DMAC_MASK_TFR1_OFFSET 0x00000314


__INLINE static uint32_t dmac_masktfr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_MASKTFR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_MASKTFR1_RESERVED_LSB                          0
#define DMAC_MASKTFR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_MASKTFR1_RESERVED_RST                          0x0

__INLINE static void dmac_masktfr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief MASK_BLOCK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08          INT_MASK_WE   0b0
 *  03:00             INT_MASK   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_MASK_BLOCK_OFFSET 0x00000318


__INLINE static uint32_t dmac_maskblock_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_maskblock_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_MASKBLOCK_INT_MASK_WE_MASK                      ((uint32_t)0x00000F00)
#define DMAC_MASKBLOCK_INT_MASK_WE_LSB                       8
#define DMAC_MASKBLOCK_INT_MASK_WE_WIDTH                     ((uint32_t)0x00000004)
#define DMAC_MASKBLOCK_INT_MASK_MASK                         ((uint32_t)0x0000000F)
#define DMAC_MASKBLOCK_INT_MASK_LSB                          0
#define DMAC_MASKBLOCK_INT_MASK_WIDTH                        ((uint32_t)0x00000004)

#define DMAC_MASKBLOCK_INT_MASK_WE_RST                       0x0
#define DMAC_MASKBLOCK_INT_MASK_RST                          0x0

__INLINE static void dmac_maskblock_pack(uint8_t intmaskwe, uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)intmaskwe << 8) | ((uint32_t)intmask << 0));
}

__INLINE static void dmac_maskblock_unpack(uint8_t* intmaskwe, uint8_t* intmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *intmaskwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intmask = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_maskblock_int_mask_we_setf(uint8_t intmaskwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)intmaskwe << 8));
}

__INLINE static uint8_t dmac_maskblock_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_maskblock_int_mask_setf(uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)intmask << 0));
}

 /**
 * @brief MASK_BLOCK1 register definition
 */
#define FEMTO_REG_DMAC_MASK_BLOCK1_OFFSET 0x0000031C


__INLINE static uint32_t dmac_maskblock1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_MASKBLOCK1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_MASKBLOCK1_RESERVED_LSB                          0
#define DMAC_MASKBLOCK1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_MASKBLOCK1_RESERVED_RST                          0x0

__INLINE static void dmac_maskblock1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief MASK_SRC_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08          INT_MASK_WE   0b0
 *  03:00             INT_MASK   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET 0x00000320


__INLINE static uint32_t dmac_masksrctran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_masksrctran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_MASKSRCTRAN_INT_MASK_WE_MASK                      ((uint32_t)0x00000F00)
#define DMAC_MASKSRCTRAN_INT_MASK_WE_LSB                       8
#define DMAC_MASKSRCTRAN_INT_MASK_WE_WIDTH                     ((uint32_t)0x00000004)
#define DMAC_MASKSRCTRAN_INT_MASK_MASK                         ((uint32_t)0x0000000F)
#define DMAC_MASKSRCTRAN_INT_MASK_LSB                          0
#define DMAC_MASKSRCTRAN_INT_MASK_WIDTH                        ((uint32_t)0x00000004)

#define DMAC_MASKSRCTRAN_INT_MASK_WE_RST                       0x0
#define DMAC_MASKSRCTRAN_INT_MASK_RST                          0x0

__INLINE static void dmac_masksrctran_pack(uint8_t intmaskwe, uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)intmaskwe << 8) | ((uint32_t)intmask << 0));
}

__INLINE static void dmac_masksrctran_unpack(uint8_t* intmaskwe, uint8_t* intmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *intmaskwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intmask = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_masksrctran_int_mask_we_setf(uint8_t intmaskwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)intmaskwe << 8));
}

__INLINE static uint8_t dmac_masksrctran_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_masksrctran_int_mask_setf(uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)intmask << 0));
}

 /**
 * @brief MASK_SRC_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_MASK_SRC_TRAN1_OFFSET 0x00000324


__INLINE static uint32_t dmac_masksrctran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_MASKSRCTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_MASKSRCTRAN1_RESERVED_LSB                          0
#define DMAC_MASKSRCTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_MASKSRCTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_masksrctran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief MASK_DST_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08          INT_MASK_WE   0b0
 *  03:00             INT_MASK   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET 0x00000328


__INLINE static uint32_t dmac_maskdsttran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_maskdsttran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_MASKDSTTRAN_INT_MASK_WE_MASK                      ((uint32_t)0x00000F00)
#define DMAC_MASKDSTTRAN_INT_MASK_WE_LSB                       8
#define DMAC_MASKDSTTRAN_INT_MASK_WE_WIDTH                     ((uint32_t)0x00000004)
#define DMAC_MASKDSTTRAN_INT_MASK_MASK                         ((uint32_t)0x0000000F)
#define DMAC_MASKDSTTRAN_INT_MASK_LSB                          0
#define DMAC_MASKDSTTRAN_INT_MASK_WIDTH                        ((uint32_t)0x00000004)

#define DMAC_MASKDSTTRAN_INT_MASK_WE_RST                       0x0
#define DMAC_MASKDSTTRAN_INT_MASK_RST                          0x0

__INLINE static void dmac_maskdsttran_pack(uint8_t intmaskwe, uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)intmaskwe << 8) | ((uint32_t)intmask << 0));
}

__INLINE static void dmac_maskdsttran_unpack(uint8_t* intmaskwe, uint8_t* intmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *intmaskwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intmask = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_maskdsttran_int_mask_we_setf(uint8_t intmaskwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)intmaskwe << 8));
}

__INLINE static uint8_t dmac_maskdsttran_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_maskdsttran_int_mask_setf(uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)intmask << 0));
}

 /**
 * @brief MASK_DST_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_MASK_DST_TRAN1_OFFSET 0x0000032C


__INLINE static uint32_t dmac_maskdsttran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_MASKDSTTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_MASKDSTTRAN1_RESERVED_LSB                          0
#define DMAC_MASKDSTTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_MASKDSTTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_maskdsttran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief MASK_ERR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08          INT_MASK_WE   0b0
 *  03:00             INT_MASK   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_MASK_ERR_OFFSET 0x00000330


__INLINE static uint32_t dmac_maskerr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_maskerr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_MASKERR_INT_MASK_WE_MASK                      ((uint32_t)0x00000F00)
#define DMAC_MASKERR_INT_MASK_WE_LSB                       8
#define DMAC_MASKERR_INT_MASK_WE_WIDTH                     ((uint32_t)0x00000004)
#define DMAC_MASKERR_INT_MASK_MASK                         ((uint32_t)0x0000000F)
#define DMAC_MASKERR_INT_MASK_LSB                          0
#define DMAC_MASKERR_INT_MASK_WIDTH                        ((uint32_t)0x00000004)

#define DMAC_MASKERR_INT_MASK_WE_RST                       0x0
#define DMAC_MASKERR_INT_MASK_RST                          0x0

__INLINE static void dmac_maskerr_pack(uint8_t intmaskwe, uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)intmaskwe << 8) | ((uint32_t)intmask << 0));
}

__INLINE static void dmac_maskerr_unpack(uint8_t* intmaskwe, uint8_t* intmask)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *intmaskwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *intmask = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_maskerr_int_mask_we_setf(uint8_t intmaskwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)intmaskwe << 8));
}

__INLINE static uint8_t dmac_maskerr_int_mask_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_maskerr_int_mask_setf(uint8_t intmask)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_MASK_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)intmask << 0));
}

 /**
 * @brief MASK_ERR1 register definition
 */
#define FEMTO_REG_DMAC_MASK_ERR1_OFFSET 0x00000334


__INLINE static uint32_t dmac_maskerr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_MASKERR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_MASKERR1_RESERVED_LSB                          0
#define DMAC_MASKERR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_MASKERR1_RESERVED_RST                          0x0

__INLINE static void dmac_maskerr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_MASK_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CLEAR_TFR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                CLEAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CLEAR_TFR_OFFSET 0x00000338


__INLINE static uint32_t dmac_cleartfr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_TFR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cleartfr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CLEARTFR_CLEAR_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CLEARTFR_CLEAR_LSB                             0
#define DMAC_CLEARTFR_CLEAR_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CLEARTFR_CLEAR_RST                             0x0

__INLINE static void dmac_cleartfr_pack(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)clear << 0));
}

__INLINE static void dmac_cleartfr_clear_setf(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_TFR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)clear << 0);
}

 /**
 * @brief CLEAR_TFR1 register definition
 */
#define FEMTO_REG_DMAC_CLEAR_TFR1_OFFSET 0x0000033C


__INLINE static uint32_t dmac_cleartfr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CLEARTFR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CLEARTFR1_RESERVED_LSB                          0
#define DMAC_CLEARTFR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CLEARTFR1_RESERVED_RST                          0x0

__INLINE static void dmac_cleartfr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_TFR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CLEAR_BLOCK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                CLEAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CLEAR_BLOCK_OFFSET 0x00000340


__INLINE static uint32_t dmac_clearblock_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_BLOCK_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_clearblock_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CLEARBLOCK_CLEAR_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CLEARBLOCK_CLEAR_LSB                             0
#define DMAC_CLEARBLOCK_CLEAR_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CLEARBLOCK_CLEAR_RST                             0x0

__INLINE static void dmac_clearblock_pack(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)clear << 0));
}

__INLINE static void dmac_clearblock_clear_setf(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_BLOCK_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)clear << 0);
}

 /**
 * @brief CLEAR_BLOCK1 register definition
 */
#define FEMTO_REG_DMAC_CLEAR_BLOCK1_OFFSET 0x00000344


__INLINE static uint32_t dmac_clearblock1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CLEARBLOCK1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CLEARBLOCK1_RESERVED_LSB                          0
#define DMAC_CLEARBLOCK1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CLEARBLOCK1_RESERVED_RST                          0x0

__INLINE static void dmac_clearblock1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_BLOCK1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CLEAR_SRC_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                CLEAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CLEAR_SRC_TRAN_OFFSET 0x00000348


__INLINE static uint32_t dmac_clearsrctran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_SRC_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_clearsrctran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CLEARSRCTRAN_CLEAR_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CLEARSRCTRAN_CLEAR_LSB                             0
#define DMAC_CLEARSRCTRAN_CLEAR_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CLEARSRCTRAN_CLEAR_RST                             0x0

__INLINE static void dmac_clearsrctran_pack(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)clear << 0));
}

__INLINE static void dmac_clearsrctran_clear_setf(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_SRC_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)clear << 0);
}

 /**
 * @brief CLEAR_SRC_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_CLEAR_SRC_TRAN1_OFFSET 0x0000034C


__INLINE static uint32_t dmac_clearsrctran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CLEARSRCTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CLEARSRCTRAN1_RESERVED_LSB                          0
#define DMAC_CLEARSRCTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CLEARSRCTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_clearsrctran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_SRC_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CLEAR_DST_TRAN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                CLEAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CLEAR_DST_TRAN_OFFSET 0x00000350


__INLINE static uint32_t dmac_cleardsttran_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_DST_TRAN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_cleardsttran_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CLEARDSTTRAN_CLEAR_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CLEARDSTTRAN_CLEAR_LSB                             0
#define DMAC_CLEARDSTTRAN_CLEAR_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CLEARDSTTRAN_CLEAR_RST                             0x0

__INLINE static void dmac_cleardsttran_pack(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)clear << 0));
}

__INLINE static void dmac_cleardsttran_clear_setf(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_DST_TRAN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)clear << 0);
}

 /**
 * @brief CLEAR_DST_TRAN1 register definition
 */
#define FEMTO_REG_DMAC_CLEAR_DST_TRAN1_OFFSET 0x00000354


__INLINE static uint32_t dmac_cleardsttran1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CLEARDSTTRAN1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CLEARDSTTRAN1_RESERVED_LSB                          0
#define DMAC_CLEARDSTTRAN1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CLEARDSTTRAN1_RESERVED_RST                          0x0

__INLINE static void dmac_cleardsttran1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_DST_TRAN1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CLEAR_ERR register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00                CLEAR   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CLEAR_ERR_OFFSET 0x00000358


__INLINE static uint32_t dmac_clearerr_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_ERR_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_clearerr_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CLEARERR_CLEAR_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CLEARERR_CLEAR_LSB                             0
#define DMAC_CLEARERR_CLEAR_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CLEARERR_CLEAR_RST                             0x0

__INLINE static void dmac_clearerr_pack(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)clear << 0));
}

__INLINE static void dmac_clearerr_clear_setf(uint8_t clear)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CLEAR_ERR_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)clear << 0);
}

 /**
 * @brief CLEAR_ERR1 register definition
 */
#define FEMTO_REG_DMAC_CLEAR_ERR1_OFFSET 0x0000035C


__INLINE static uint32_t dmac_clearerr1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CLEARERR1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CLEARERR1_RESERVED_LSB                          0
#define DMAC_CLEARERR1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CLEARERR1_RESERVED_RST                          0x0

__INLINE static void dmac_clearerr1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CLEAR_ERR1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief STATUS_INT register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     04                  ERR   0
 *     03                 DSTT   0
 *     02                 SRCT   0
 *     01                BLOCK   0
 *     00                  TFR   0
 * </pre>
 */
#define FEMTO_REG_DMAC_STATUS_INT_OFFSET 0x00000360


__INLINE static uint32_t dmac_statusint_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSINT_ERR_BIT                               ((uint32_t)0x00000010)
#define DMAC_STATUSINT_ERR_POS                               4
#define DMAC_STATUSINT_DSTT_BIT                              ((uint32_t)0x00000008)
#define DMAC_STATUSINT_DSTT_POS                              3
#define DMAC_STATUSINT_SRCT_BIT                              ((uint32_t)0x00000004)
#define DMAC_STATUSINT_SRCT_POS                              2
#define DMAC_STATUSINT_BLOCK_BIT                             ((uint32_t)0x00000002)
#define DMAC_STATUSINT_BLOCK_POS                             1
#define DMAC_STATUSINT_TFR_BIT                               ((uint32_t)0x00000001)
#define DMAC_STATUSINT_TFR_POS                               0

#define DMAC_STATUSINT_ERR_RST                               0x0
#define DMAC_STATUSINT_DSTT_RST                              0x0
#define DMAC_STATUSINT_SRCT_RST                              0x0
#define DMAC_STATUSINT_BLOCK_RST                             0x0
#define DMAC_STATUSINT_TFR_RST                               0x0

__INLINE static void dmac_statusint_unpack(uint8_t* err, uint8_t* dstt, uint8_t* srct, uint8_t* block, uint8_t* tfr)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *err = (localVal & ((uint32_t)0x00000010)) >> 4;
    *dstt = (localVal & ((uint32_t)0x00000008)) >> 3;
    *srct = (localVal & ((uint32_t)0x00000004)) >> 2;
    *block = (localVal & ((uint32_t)0x00000002)) >> 1;
    *tfr = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_statusint_err_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static uint8_t dmac_statusint_dstt_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static uint8_t dmac_statusint_srct_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static uint8_t dmac_statusint_block_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t dmac_statusint_tfr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

 /**
 * @brief STATUS_INT1 register definition
 */
#define FEMTO_REG_DMAC_STATUS_INT1_OFFSET 0x00000364


__INLINE static uint32_t dmac_statusint1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_STATUSINT1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_STATUSINT1_RESERVED_LSB                          0
#define DMAC_STATUSINT1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_STATUSINT1_RESERVED_RST                          0x0

__INLINE static void dmac_statusint1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_STATUS_INT1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief REQ_SRC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08           SRC_REQ_WE   0b0
 *  03:00              SRC_REQ   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_REQ_SRC_OFFSET 0x00000368


__INLINE static uint32_t dmac_reqsrcreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_reqsrcreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_REQSRCREG_SRC_REQ_WE_MASK                       ((uint32_t)0x00000F00)
#define DMAC_REQSRCREG_SRC_REQ_WE_LSB                        8
#define DMAC_REQSRCREG_SRC_REQ_WE_WIDTH                      ((uint32_t)0x00000004)
#define DMAC_REQSRCREG_SRC_REQ_MASK                          ((uint32_t)0x0000000F)
#define DMAC_REQSRCREG_SRC_REQ_LSB                           0
#define DMAC_REQSRCREG_SRC_REQ_WIDTH                         ((uint32_t)0x00000004)

#define DMAC_REQSRCREG_SRC_REQ_WE_RST                        0x0
#define DMAC_REQSRCREG_SRC_REQ_RST                           0x0

__INLINE static void dmac_reqsrcreg_pack(uint8_t srcreqwe, uint8_t srcreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)srcreqwe << 8) | ((uint32_t)srcreq << 0));
}

__INLINE static void dmac_reqsrcreg_unpack(uint8_t* srcreqwe, uint8_t* srcreq)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *srcreqwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *srcreq = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_reqsrcreg_src_req_we_setf(uint8_t srcreqwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)srcreqwe << 8));
}

__INLINE static uint8_t dmac_reqsrcreg_src_req_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_reqsrcreg_src_req_setf(uint8_t srcreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)srcreq << 0));
}

 /**
 * @brief REQ_SRC_REG1 register definition
 */
#define FEMTO_REG_DMAC_REQ_SRC_REG1_OFFSET 0x0000036C


__INLINE static uint32_t dmac_reqsrcreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_REQSRCREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_REQSRCREG1_RESERVED_LSB                          0
#define DMAC_REQSRCREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_REQSRCREG1_RESERVED_RST                          0x0

__INLINE static void dmac_reqsrcreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief REQ_DST register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08           DST_REQ_WE   0b0
 *  03:00              DST_REQ   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_REQ_DST_OFFSET 0x00000370


__INLINE static uint32_t dmac_reqdstreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_reqdstreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_REQDSTREG_DST_REQ_WE_MASK                       ((uint32_t)0x00000F00)
#define DMAC_REQDSTREG_DST_REQ_WE_LSB                        8
#define DMAC_REQDSTREG_DST_REQ_WE_WIDTH                      ((uint32_t)0x00000004)
#define DMAC_REQDSTREG_DST_REQ_MASK                          ((uint32_t)0x0000000F)
#define DMAC_REQDSTREG_DST_REQ_LSB                           0
#define DMAC_REQDSTREG_DST_REQ_WIDTH                         ((uint32_t)0x00000004)

#define DMAC_REQDSTREG_DST_REQ_WE_RST                        0x0
#define DMAC_REQDSTREG_DST_REQ_RST                           0x0

__INLINE static void dmac_reqdstreg_pack(uint8_t dstreqwe, uint8_t dstreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstreqwe << 8) | ((uint32_t)dstreq << 0));
}

__INLINE static void dmac_reqdstreg_unpack(uint8_t* dstreqwe, uint8_t* dstreq)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstreqwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *dstreq = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_reqdstreg_dst_req_we_setf(uint8_t dstreqwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)dstreqwe << 8));
}

__INLINE static uint8_t dmac_reqdstreg_dst_req_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_reqdstreg_dst_req_setf(uint8_t dstreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)dstreq << 0));
}

 /**
 * @brief REQ_DST_REG1 register definition
 */
#define FEMTO_REG_DMAC_REQ_DST_REG1_OFFSET 0x00000374


__INLINE static uint32_t dmac_reqdstreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_REQDSTREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_REQDSTREG1_RESERVED_LSB                          0
#define DMAC_REQDSTREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_REQDSTREG1_RESERVED_RST                          0x0

__INLINE static void dmac_reqdstreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_REQ_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SGL_REQ_SRC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08        SRC_SGLREQ_WE   0b0
 *  03:00           SRC_SGLREQ   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET 0x00000378


__INLINE static uint32_t dmac_sglreqsrcreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sglreqsrcreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_WE_MASK                    ((uint32_t)0x00000F00)
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_WE_LSB                     8
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_WE_WIDTH                   ((uint32_t)0x00000004)
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_MASK                       ((uint32_t)0x0000000F)
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_LSB                        0
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_WIDTH                      ((uint32_t)0x00000004)

#define DMAC_SGLREQSRCREG_SRC_SGLREQ_WE_RST                     0x0
#define DMAC_SGLREQSRCREG_SRC_SGLREQ_RST                        0x0

__INLINE static void dmac_sglreqsrcreg_pack(uint8_t srcsglreqwe, uint8_t srcsglreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)srcsglreqwe << 8) | ((uint32_t)srcsglreq << 0));
}

__INLINE static void dmac_sglreqsrcreg_unpack(uint8_t* srcsglreqwe, uint8_t* srcsglreq)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *srcsglreqwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *srcsglreq = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_sglreqsrcreg_src_sglreq_we_setf(uint8_t srcsglreqwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)srcsglreqwe << 8));
}

__INLINE static uint8_t dmac_sglreqsrcreg_src_sglreq_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_sglreqsrcreg_src_sglreq_setf(uint8_t srcsglreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)srcsglreq << 0));
}

 /**
 * @brief SGL_REQ_SRC_REG1 register definition
 */
#define FEMTO_REG_DMAC_SGL_REQ_SRC_REG1_OFFSET 0x0000037C


__INLINE static uint32_t dmac_sglreqsrcreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGLREQSRCREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGLREQSRCREG1_RESERVED_LSB                          0
#define DMAC_SGLREQSRCREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGLREQSRCREG1_RESERVED_RST                          0x0

__INLINE static void dmac_sglreqsrcreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief SGL_REQ_DST register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08        DST_SGLREQ_WE   0b0
 *  03:00           DST_SGLREQ   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET 0x00000380


__INLINE static uint32_t dmac_sglreqdstreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_sglreqdstreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_SGLREQDSTREG_DST_SGLREQ_WE_MASK                    ((uint32_t)0x00000F00)
#define DMAC_SGLREQDSTREG_DST_SGLREQ_WE_LSB                     8
#define DMAC_SGLREQDSTREG_DST_SGLREQ_WE_WIDTH                   ((uint32_t)0x00000004)
#define DMAC_SGLREQDSTREG_DST_SGLREQ_MASK                       ((uint32_t)0x0000000F)
#define DMAC_SGLREQDSTREG_DST_SGLREQ_LSB                        0
#define DMAC_SGLREQDSTREG_DST_SGLREQ_WIDTH                      ((uint32_t)0x00000004)

#define DMAC_SGLREQDSTREG_DST_SGLREQ_WE_RST                     0x0
#define DMAC_SGLREQDSTREG_DST_SGLREQ_RST                        0x0

__INLINE static void dmac_sglreqdstreg_pack(uint8_t dstsglreqwe, uint8_t dstsglreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dstsglreqwe << 8) | ((uint32_t)dstsglreq << 0));
}

__INLINE static void dmac_sglreqdstreg_unpack(uint8_t* dstsglreqwe, uint8_t* dstsglreq)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dstsglreqwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *dstsglreq = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_sglreqdstreg_dst_sglreq_we_setf(uint8_t dstsglreqwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)dstsglreqwe << 8));
}

__INLINE static uint8_t dmac_sglreqdstreg_dst_sglreq_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_sglreqdstreg_dst_sglreq_setf(uint8_t dstsglreq)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)dstsglreq << 0));
}

 /**
 * @brief SGL_REQ_DST_REG1 register definition
 */
#define FEMTO_REG_DMAC_SGL_REQ_DST_REG1_OFFSET 0x00000384


__INLINE static uint32_t dmac_sglreqdstreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_SGLREQDSTREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_SGLREQDSTREG1_RESERVED_LSB                          0
#define DMAC_SGLREQDSTREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_SGLREQDSTREG1_RESERVED_RST                          0x0

__INLINE static void dmac_sglreqdstreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_SGL_REQ_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LST_SRC register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08            LSTSRC_WE   0b0
 *  03:00               LSTSRC   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LST_SRC_OFFSET 0x00000388


__INLINE static uint32_t dmac_lstsrcreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_lstsrcreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LSTSRCREG_LSTSRC_WE_MASK                        ((uint32_t)0x00000F00)
#define DMAC_LSTSRCREG_LSTSRC_WE_LSB                         8
#define DMAC_LSTSRCREG_LSTSRC_WE_WIDTH                       ((uint32_t)0x00000004)
#define DMAC_LSTSRCREG_LSTSRC_MASK                           ((uint32_t)0x0000000F)
#define DMAC_LSTSRCREG_LSTSRC_LSB                            0
#define DMAC_LSTSRCREG_LSTSRC_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_LSTSRCREG_LSTSRC_WE_RST                         0x0
#define DMAC_LSTSRCREG_LSTSRC_RST                            0x0

__INLINE static void dmac_lstsrcreg_pack(uint8_t lstsrcwe, uint8_t lstsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)lstsrcwe << 8) | ((uint32_t)lstsrc << 0));
}

__INLINE static void dmac_lstsrcreg_unpack(uint8_t* lstsrcwe, uint8_t* lstsrc)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *lstsrcwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *lstsrc = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_lstsrcreg_lstsrc_we_setf(uint8_t lstsrcwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)lstsrcwe << 8));
}

__INLINE static uint8_t dmac_lstsrcreg_lstsrc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_lstsrcreg_lstsrc_setf(uint8_t lstsrc)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_SRC_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)lstsrc << 0));
}

 /**
 * @brief LST_SRC_REG1 register definition
 */
#define FEMTO_REG_DMAC_LST_SRC_REG1_OFFSET 0x0000038C


__INLINE static uint32_t dmac_lstsrcreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LSTSRCREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LSTSRCREG1_RESERVED_LSB                          0
#define DMAC_LSTSRCREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LSTSRCREG1_RESERVED_RST                          0x0

__INLINE static void dmac_lstsrcreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_SRC_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief LST_DST register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08            LSTDST_WE   0b0
 *  03:00               LSTDST   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_LST_DST_OFFSET 0x00000390


__INLINE static uint32_t dmac_lstdstreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_lstdstreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_LSTDSTREG_LSTDST_WE_MASK                        ((uint32_t)0x00000F00)
#define DMAC_LSTDSTREG_LSTDST_WE_LSB                         8
#define DMAC_LSTDSTREG_LSTDST_WE_WIDTH                       ((uint32_t)0x00000004)
#define DMAC_LSTDSTREG_LSTDST_MASK                           ((uint32_t)0x0000000F)
#define DMAC_LSTDSTREG_LSTDST_LSB                            0
#define DMAC_LSTDSTREG_LSTDST_WIDTH                          ((uint32_t)0x00000004)

#define DMAC_LSTDSTREG_LSTDST_WE_RST                         0x0
#define DMAC_LSTDSTREG_LSTDST_RST                            0x0

__INLINE static void dmac_lstdstreg_pack(uint8_t lstdstwe, uint8_t lstdst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)lstdstwe << 8) | ((uint32_t)lstdst << 0));
}

__INLINE static void dmac_lstdstreg_unpack(uint8_t* lstdstwe, uint8_t* lstdst)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *lstdstwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *lstdst = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_lstdstreg_lstdst_we_setf(uint8_t lstdstwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)lstdstwe << 8));
}

__INLINE static uint8_t dmac_lstdstreg_lstdst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_lstdstreg_lstdst_setf(uint8_t lstdst)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_LST_DST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)lstdst << 0));
}

 /**
 * @brief LST_DST_REG1 register definition
 */
#define FEMTO_REG_DMAC_LST_DST_REG1_OFFSET 0x00000394


__INLINE static uint32_t dmac_lstdstreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_LSTDSTREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_LSTDSTREG1_RESERVED_LSB                          0
#define DMAC_LSTDSTREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_LSTDSTREG1_RESERVED_RST                          0x0

__INLINE static void dmac_lstdstreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_LST_DST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DMA_CFG register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00               DMA_EN   0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_CFG_OFFSET 0x00000398


__INLINE static uint32_t dmac_dmacfgreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_CFG_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dmacfgreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_CFG_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DMACFGREG_DMA_EN_BIT                            ((uint32_t)0x00000001)
#define DMAC_DMACFGREG_DMA_EN_POS                            0

#define DMAC_DMACFGREG_DMA_EN_RST                            0x0

__INLINE static void dmac_dmacfgreg_pack(uint8_t dmaen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_CFG_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dmaen << 0));
}

__INLINE static void dmac_dmacfgreg_unpack(uint8_t* dmaen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_CFG_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dmaen = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_dmacfgreg_dma_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_CFG_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_dmacfgreg_dma_en_setf(uint8_t dmaen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_CFG_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dmaen << 0);
}

 /**
 * @brief DMA_CFG_REG1 register definition
 */
#define FEMTO_REG_DMAC_DMA_CFG_REG1_OFFSET 0x0000039C


__INLINE static uint32_t dmac_dmacfgreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_CFG_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMACFGREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DMACFGREG1_RESERVED_LSB                          0
#define DMAC_DMACFGREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DMACFGREG1_RESERVED_RST                          0x0

__INLINE static void dmac_dmacfgreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_CFG_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief CH_EN register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  11:08             CH_EN_WE   0b0
 *  03:00                CH_EN   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_CH_EN_OFFSET 0x000003A0


__INLINE static uint32_t dmac_chenreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_chenreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CH_EN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_CHENREG_CH_EN_WE_MASK                         ((uint32_t)0x00000F00)
#define DMAC_CHENREG_CH_EN_WE_LSB                          8
#define DMAC_CHENREG_CH_EN_WE_WIDTH                        ((uint32_t)0x00000004)
#define DMAC_CHENREG_CH_EN_MASK                            ((uint32_t)0x0000000F)
#define DMAC_CHENREG_CH_EN_LSB                             0
#define DMAC_CHENREG_CH_EN_WIDTH                           ((uint32_t)0x00000004)

#define DMAC_CHENREG_CH_EN_WE_RST                          0x0
#define DMAC_CHENREG_CH_EN_RST                             0x0

__INLINE static void dmac_chenreg_pack(uint8_t chenwe, uint8_t chen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CH_EN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)chenwe << 8) | ((uint32_t)chen << 0));
}

__INLINE static void dmac_chenreg_unpack(uint8_t* chenwe, uint8_t* chen)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *chenwe = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *chen = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static void dmac_chenreg_ch_en_we_setf(uint8_t chenwe)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CH_EN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x00000F00)) | ((uint32_t)chenwe << 8));
}

__INLINE static uint8_t dmac_chenreg_ch_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void dmac_chenreg_ch_en_setf(uint8_t chen)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_CH_EN_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_OFFSET + FEMTO_REG_DMAC_BASE_ADDR) & ~((uint32_t)0x0000000F)) | ((uint32_t)chen << 0));
}

 /**
 * @brief CH_EN_REG1 register definition
 */
#define FEMTO_REG_DMAC_CH_EN_REG1_OFFSET 0x000003A4


__INLINE static uint32_t dmac_chenreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_CHENREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_CHENREG1_RESERVED_LSB                          0
#define DMAC_CHENREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_CHENREG1_RESERVED_RST                          0x0

__INLINE static void dmac_chenreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_CH_EN_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DMA_ID register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00               DMA_ID   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_ID_OFFSET 0x000003A8


__INLINE static uint32_t dmac_dmaidreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_ID_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dmaidreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_ID_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DMAIDREG_DMA_ID_MASK                           ((uint32_t)0xFFFFFFFF)
#define DMAC_DMAIDREG_DMA_ID_LSB                            0
#define DMAC_DMAIDREG_DMA_ID_WIDTH                          ((uint32_t)0x00000020)

#define DMAC_DMAIDREG_DMA_ID_RST                            0x0

__INLINE static void dmac_dmaidreg_pack(uint32_t dmaid)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_ID_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)dmaid << 0));
}

__INLINE static void dmac_dmaidreg_dma_id_setf(uint32_t dmaid)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_ID_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)dmaid << 0);
}

 /**
 * @brief DMA_ID_REG1 register definition
 */
#define FEMTO_REG_DMAC_DMA_ID_REG1_OFFSET 0x000003AC


__INLINE static uint32_t dmac_dmaidreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_ID_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMAIDREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DMAIDREG1_RESERVED_LSB                          0
#define DMAC_DMAIDREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DMAIDREG1_RESERVED_RST                          0x0

__INLINE static void dmac_dmaidreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_ID_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DMA_TEST register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00          TEST_SLV_IF   0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_TEST_OFFSET 0x000003B0


__INLINE static uint32_t dmac_dmatestreg_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_TEST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

__INLINE static void dmac_dmatestreg_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_TEST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, value);
}

// field definitions
#define DMAC_DMATESTREG_TEST_SLV_IF_BIT                       ((uint32_t)0x00000001)
#define DMAC_DMATESTREG_TEST_SLV_IF_POS                       0

#define DMAC_DMATESTREG_TEST_SLV_IF_RST                       0x0

__INLINE static void dmac_dmatestreg_pack(uint8_t testslvif)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_TEST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR,  ((uint32_t)testslvif << 0));
}

__INLINE static void dmac_dmatestreg_unpack(uint8_t* testslvif)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_TEST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *testslvif = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t dmac_dmatestreg_test_slv_if_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_TEST_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void dmac_dmatestreg_test_slv_if_setf(uint8_t testslvif)
{
    _FEMTO_REG_WR(FEMTO_REG_DMAC_DMA_TEST_OFFSET+ FEMTO_REG_DMAC_BASE_ADDR, (uint32_t)testslvif << 0);
}

 /**
 * @brief DMA_TEST_REG1 register definition
 */
#define FEMTO_REG_DMAC_DMA_TEST_REG1_OFFSET 0x000003B4


__INLINE static uint32_t dmac_dmatestreg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_TEST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMATESTREG1_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DMATESTREG1_RESERVED_LSB                          0
#define DMAC_DMATESTREG1_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DMATESTREG1_RESERVED_RST                          0x0

__INLINE static void dmac_dmatestreg1_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_TEST_REG1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DMA_COMP_PARAMS_6 register definition
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_6_OFFSET 0x000003C8


__INLINE static uint32_t dmac_dma_comp_params_6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_6_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_6_RESERVED_MASK                         ((uint32_t)0xFFFFFFFF)
#define DMAC_DMA_COMP_PARAMS_6_RESERVED_LSB                          0
#define DMAC_DMA_COMP_PARAMS_6_RESERVED_WIDTH                        ((uint32_t)0x00000020)

#define DMAC_DMA_COMP_PARAMS_6_RESERVED_RST                          0x0

__INLINE static void dmac_dma_comp_params_6_unpack(uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_6_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *reserved = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

 /**
 * @brief DMA_COMP_PARAMS_61 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  30:28       CH7_FIFO_DEPTH   0b0
 *  27:25              CH7_SMS   0b0
 *  24:22              CH7_LMS   0b0
 *  21:19              CH7_DMS   0b0
 *  18:16    CH7_MAX_MULT_SIZE   0b0
 *  15:14               CH7_FC   0b0
 *     13           CH7_HC_LLP   0
 *     12        CH7_CTL_WB_EN   0
 *     11     CH7_MULTI_BLK_EN   0
 *     10          CH7_LOCK_EN   0
 *     09       CH7_SRC_GAT_EN   0
 *     08       CH7_DST_SCA_EN   0
 *     07         CH7_STAT_SRC   0
 *     06         CH7_STAT_DST   0
 *  05:03              CH7_STW   0b0
 *  02:00              CH7_DTW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET 0x000003CC


__INLINE static uint32_t dmac_dma_comp_params_61_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_61_CH7_FIFO_DEPTH_MASK                   ((uint32_t)0x70000000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_FIFO_DEPTH_LSB                    28
#define DMAC_DMA_COMP_PARAMS_61_CH7_FIFO_DEPTH_WIDTH                  ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_SMS_MASK                          ((uint32_t)0x0E000000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_SMS_LSB                           25
#define DMAC_DMA_COMP_PARAMS_61_CH7_SMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_LMS_MASK                          ((uint32_t)0x01C00000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_LMS_LSB                           22
#define DMAC_DMA_COMP_PARAMS_61_CH7_LMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_DMS_MASK                          ((uint32_t)0x00380000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_DMS_LSB                           19
#define DMAC_DMA_COMP_PARAMS_61_CH7_DMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_MAX_MULT_SIZE_MASK                ((uint32_t)0x00070000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_MAX_MULT_SIZE_LSB                 16
#define DMAC_DMA_COMP_PARAMS_61_CH7_MAX_MULT_SIZE_WIDTH               ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_FC_MASK                           ((uint32_t)0x0000C000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_FC_LSB                            14
#define DMAC_DMA_COMP_PARAMS_61_CH7_FC_WIDTH                          ((uint32_t)0x00000002)
#define DMAC_DMA_COMP_PARAMS_61_CH7_HC_LLP_BIT                        ((uint32_t)0x00002000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_HC_LLP_POS                        13
#define DMAC_DMA_COMP_PARAMS_61_CH7_CTL_WB_EN_BIT                     ((uint32_t)0x00001000)
#define DMAC_DMA_COMP_PARAMS_61_CH7_CTL_WB_EN_POS                     12
#define DMAC_DMA_COMP_PARAMS_61_CH7_MULTI_BLK_EN_BIT                  ((uint32_t)0x00000800)
#define DMAC_DMA_COMP_PARAMS_61_CH7_MULTI_BLK_EN_POS                  11
#define DMAC_DMA_COMP_PARAMS_61_CH7_LOCK_EN_BIT                       ((uint32_t)0x00000400)
#define DMAC_DMA_COMP_PARAMS_61_CH7_LOCK_EN_POS                       10
#define DMAC_DMA_COMP_PARAMS_61_CH7_SRC_GAT_EN_BIT                    ((uint32_t)0x00000200)
#define DMAC_DMA_COMP_PARAMS_61_CH7_SRC_GAT_EN_POS                    9
#define DMAC_DMA_COMP_PARAMS_61_CH7_DST_SCA_EN_BIT                    ((uint32_t)0x00000100)
#define DMAC_DMA_COMP_PARAMS_61_CH7_DST_SCA_EN_POS                    8
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_SRC_BIT                      ((uint32_t)0x00000080)
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_SRC_POS                      7
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_DST_BIT                      ((uint32_t)0x00000040)
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_DST_POS                      6
#define DMAC_DMA_COMP_PARAMS_61_CH7_STW_MASK                          ((uint32_t)0x00000038)
#define DMAC_DMA_COMP_PARAMS_61_CH7_STW_LSB                           3
#define DMAC_DMA_COMP_PARAMS_61_CH7_STW_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_61_CH7_DTW_MASK                          ((uint32_t)0x00000007)
#define DMAC_DMA_COMP_PARAMS_61_CH7_DTW_LSB                           0
#define DMAC_DMA_COMP_PARAMS_61_CH7_DTW_WIDTH                         ((uint32_t)0x00000003)

#define DMAC_DMA_COMP_PARAMS_61_CH7_FIFO_DEPTH_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_SMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_LMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_DMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_MAX_MULT_SIZE_RST                 0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_FC_RST                            0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_HC_LLP_RST                        0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_CTL_WB_EN_RST                     0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_MULTI_BLK_EN_RST                  0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_LOCK_EN_RST                       0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_SRC_GAT_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_DST_SCA_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_SRC_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_STAT_DST_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_STW_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_61_CH7_DTW_RST                           0x0

__INLINE static void dmac_dma_comp_params_61_unpack(uint8_t* ch7fifodepth, uint8_t* ch7sms, uint8_t* ch7lms, uint8_t* ch7dms, uint8_t* ch7maxmultsize, uint8_t* ch7fc, uint8_t* ch7hcllp, uint8_t* ch7ctlwben, uint8_t* ch7multiblken, uint8_t* ch7locken, uint8_t* ch7srcgaten, uint8_t* ch7dstscaen, uint8_t* ch7statsrc, uint8_t* ch7statdst, uint8_t* ch7stw, uint8_t* ch7dtw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch7fifodepth = (localVal & ((uint32_t)0x70000000)) >> 28;
    *ch7sms = (localVal & ((uint32_t)0x0E000000)) >> 25;
    *ch7lms = (localVal & ((uint32_t)0x01C00000)) >> 22;
    *ch7dms = (localVal & ((uint32_t)0x00380000)) >> 19;
    *ch7maxmultsize = (localVal & ((uint32_t)0x00070000)) >> 16;
    *ch7fc = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *ch7hcllp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ch7ctlwben = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ch7multiblken = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ch7locken = (localVal & ((uint32_t)0x00000400)) >> 10;
    *ch7srcgaten = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ch7dstscaen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ch7statsrc = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ch7statdst = (localVal & ((uint32_t)0x00000040)) >> 6;
    *ch7stw = (localVal & ((uint32_t)0x00000038)) >> 3;
    *ch7dtw = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_fifo_depth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x70000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0E000000)) >> 25);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01C00000)) >> 22);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00380000)) >> 19);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_max_mult_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_hc_llp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_ctl_wb_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_multi_blk_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_lock_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_src_gat_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_dst_sca_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_stat_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_stat_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_stw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000038)) >> 3);
}

__INLINE static uint8_t dmac_dma_comp_params_61_ch7_dtw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_61_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

 /**
 * @brief DMA_COMP_PARAMS_3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  30:28       CH2_FIFO_DEPTH   0b0
 *  27:25              CH2_SMS   0b0
 *  24:22              CH2_LMS   0b0
 *  21:19              CH2_DMS   0b0
 *  18:16    CH2_MAX_MULT_SIZE   0b0
 *  15:14               CH2_FC   0b0
 *     13           CH2_HC_LLP   0
 *     12        CH2_CTL_WB_EN   0
 *     11     CH2_MULTI_BLK_EN   0
 *     10          CH2_LOCK_EN   0
 *     09       CH2_SRC_GAT_EN   0
 *     08       CH2_DST_SCA_EN   0
 *     07         CH2_STAT_SRC   0
 *     06         CH2_STAT_DST   0
 *  05:03              CH2_STW   0b0
 *  02:00              CH2_DTW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET 0x000003E0


__INLINE static uint32_t dmac_dma_comp_params_3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_3_CH2_FIFO_DEPTH_MASK                   ((uint32_t)0x70000000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_FIFO_DEPTH_LSB                    28
#define DMAC_DMA_COMP_PARAMS_3_CH2_FIFO_DEPTH_WIDTH                  ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_SMS_MASK                          ((uint32_t)0x0E000000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_SMS_LSB                           25
#define DMAC_DMA_COMP_PARAMS_3_CH2_SMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_LMS_MASK                          ((uint32_t)0x01C00000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_LMS_LSB                           22
#define DMAC_DMA_COMP_PARAMS_3_CH2_LMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_DMS_MASK                          ((uint32_t)0x00380000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_DMS_LSB                           19
#define DMAC_DMA_COMP_PARAMS_3_CH2_DMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_MAX_MULT_SIZE_MASK                ((uint32_t)0x00070000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_MAX_MULT_SIZE_LSB                 16
#define DMAC_DMA_COMP_PARAMS_3_CH2_MAX_MULT_SIZE_WIDTH               ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_FC_MASK                           ((uint32_t)0x0000C000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_FC_LSB                            14
#define DMAC_DMA_COMP_PARAMS_3_CH2_FC_WIDTH                          ((uint32_t)0x00000002)
#define DMAC_DMA_COMP_PARAMS_3_CH2_HC_LLP_BIT                        ((uint32_t)0x00002000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_HC_LLP_POS                        13
#define DMAC_DMA_COMP_PARAMS_3_CH2_CTL_WB_EN_BIT                     ((uint32_t)0x00001000)
#define DMAC_DMA_COMP_PARAMS_3_CH2_CTL_WB_EN_POS                     12
#define DMAC_DMA_COMP_PARAMS_3_CH2_MULTI_BLK_EN_BIT                  ((uint32_t)0x00000800)
#define DMAC_DMA_COMP_PARAMS_3_CH2_MULTI_BLK_EN_POS                  11
#define DMAC_DMA_COMP_PARAMS_3_CH2_LOCK_EN_BIT                       ((uint32_t)0x00000400)
#define DMAC_DMA_COMP_PARAMS_3_CH2_LOCK_EN_POS                       10
#define DMAC_DMA_COMP_PARAMS_3_CH2_SRC_GAT_EN_BIT                    ((uint32_t)0x00000200)
#define DMAC_DMA_COMP_PARAMS_3_CH2_SRC_GAT_EN_POS                    9
#define DMAC_DMA_COMP_PARAMS_3_CH2_DST_SCA_EN_BIT                    ((uint32_t)0x00000100)
#define DMAC_DMA_COMP_PARAMS_3_CH2_DST_SCA_EN_POS                    8
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_SRC_BIT                      ((uint32_t)0x00000080)
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_SRC_POS                      7
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_DST_BIT                      ((uint32_t)0x00000040)
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_DST_POS                      6
#define DMAC_DMA_COMP_PARAMS_3_CH2_STW_MASK                          ((uint32_t)0x00000038)
#define DMAC_DMA_COMP_PARAMS_3_CH2_STW_LSB                           3
#define DMAC_DMA_COMP_PARAMS_3_CH2_STW_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_3_CH2_DTW_MASK                          ((uint32_t)0x00000007)
#define DMAC_DMA_COMP_PARAMS_3_CH2_DTW_LSB                           0
#define DMAC_DMA_COMP_PARAMS_3_CH2_DTW_WIDTH                         ((uint32_t)0x00000003)

#define DMAC_DMA_COMP_PARAMS_3_CH2_FIFO_DEPTH_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_SMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_LMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_DMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_MAX_MULT_SIZE_RST                 0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_FC_RST                            0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_HC_LLP_RST                        0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_CTL_WB_EN_RST                     0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_MULTI_BLK_EN_RST                  0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_LOCK_EN_RST                       0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_SRC_GAT_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_DST_SCA_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_SRC_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_STAT_DST_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_STW_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_3_CH2_DTW_RST                           0x0

__INLINE static void dmac_dma_comp_params_3_unpack(uint8_t* ch2fifodepth, uint8_t* ch2sms, uint8_t* ch2lms, uint8_t* ch2dms, uint8_t* ch2maxmultsize, uint8_t* ch2fc, uint8_t* ch2hcllp, uint8_t* ch2ctlwben, uint8_t* ch2multiblken, uint8_t* ch2locken, uint8_t* ch2srcgaten, uint8_t* ch2dstscaen, uint8_t* ch2statsrc, uint8_t* ch2statdst, uint8_t* ch2stw, uint8_t* ch2dtw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch2fifodepth = (localVal & ((uint32_t)0x70000000)) >> 28;
    *ch2sms = (localVal & ((uint32_t)0x0E000000)) >> 25;
    *ch2lms = (localVal & ((uint32_t)0x01C00000)) >> 22;
    *ch2dms = (localVal & ((uint32_t)0x00380000)) >> 19;
    *ch2maxmultsize = (localVal & ((uint32_t)0x00070000)) >> 16;
    *ch2fc = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *ch2hcllp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ch2ctlwben = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ch2multiblken = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ch2locken = (localVal & ((uint32_t)0x00000400)) >> 10;
    *ch2srcgaten = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ch2dstscaen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ch2statsrc = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ch2statdst = (localVal & ((uint32_t)0x00000040)) >> 6;
    *ch2stw = (localVal & ((uint32_t)0x00000038)) >> 3;
    *ch2dtw = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_fifo_depth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x70000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0E000000)) >> 25);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01C00000)) >> 22);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00380000)) >> 19);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_max_mult_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_hc_llp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_ctl_wb_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_multi_blk_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_lock_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_src_gat_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_dst_sca_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_stat_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_stat_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_stw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000038)) >> 3);
}

__INLINE static uint8_t dmac_dma_comp_params_3_ch2_dtw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_3_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

 /**
 * @brief DMA_COMP_PARAMS_31 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  30:28       CH1_FIFO_DEPTH   0b0
 *  27:25              CH1_SMS   0b0
 *  24:22              CH1_LMS   0b0
 *  21:19              CH1_DMS   0b0
 *  18:16    CH1_MAX_MULT_SIZE   0b0
 *  15:14               CH1_FC   0b0
 *     13           CH1_HC_LLP   0
 *     12        CH1_CTL_WB_EN   0
 *     11     CH1_MULTI_BLK_EN   0
 *     10          CH1_LOCK_EN   0
 *     09       CH1_SRC_GAT_EN   0
 *     08       CH1_DST_SCA_EN   0
 *     07         CH1_STAT_SRC   0
 *     06         CH1_STAT_DST   0
 *  05:03              CH1_STW   0b0
 *  02:00              CH1_DTW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET 0x000003E4


__INLINE static uint32_t dmac_dma_comp_params_31_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_31_CH1_FIFO_DEPTH_MASK                   ((uint32_t)0x70000000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_FIFO_DEPTH_LSB                    28
#define DMAC_DMA_COMP_PARAMS_31_CH1_FIFO_DEPTH_WIDTH                  ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_SMS_MASK                          ((uint32_t)0x0E000000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_SMS_LSB                           25
#define DMAC_DMA_COMP_PARAMS_31_CH1_SMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_LMS_MASK                          ((uint32_t)0x01C00000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_LMS_LSB                           22
#define DMAC_DMA_COMP_PARAMS_31_CH1_LMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_DMS_MASK                          ((uint32_t)0x00380000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_DMS_LSB                           19
#define DMAC_DMA_COMP_PARAMS_31_CH1_DMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_MAX_MULT_SIZE_MASK                ((uint32_t)0x00070000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_MAX_MULT_SIZE_LSB                 16
#define DMAC_DMA_COMP_PARAMS_31_CH1_MAX_MULT_SIZE_WIDTH               ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_FC_MASK                           ((uint32_t)0x0000C000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_FC_LSB                            14
#define DMAC_DMA_COMP_PARAMS_31_CH1_FC_WIDTH                          ((uint32_t)0x00000002)
#define DMAC_DMA_COMP_PARAMS_31_CH1_HC_LLP_BIT                        ((uint32_t)0x00002000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_HC_LLP_POS                        13
#define DMAC_DMA_COMP_PARAMS_31_CH1_CTL_WB_EN_BIT                     ((uint32_t)0x00001000)
#define DMAC_DMA_COMP_PARAMS_31_CH1_CTL_WB_EN_POS                     12
#define DMAC_DMA_COMP_PARAMS_31_CH1_MULTI_BLK_EN_BIT                  ((uint32_t)0x00000800)
#define DMAC_DMA_COMP_PARAMS_31_CH1_MULTI_BLK_EN_POS                  11
#define DMAC_DMA_COMP_PARAMS_31_CH1_LOCK_EN_BIT                       ((uint32_t)0x00000400)
#define DMAC_DMA_COMP_PARAMS_31_CH1_LOCK_EN_POS                       10
#define DMAC_DMA_COMP_PARAMS_31_CH1_SRC_GAT_EN_BIT                    ((uint32_t)0x00000200)
#define DMAC_DMA_COMP_PARAMS_31_CH1_SRC_GAT_EN_POS                    9
#define DMAC_DMA_COMP_PARAMS_31_CH1_DST_SCA_EN_BIT                    ((uint32_t)0x00000100)
#define DMAC_DMA_COMP_PARAMS_31_CH1_DST_SCA_EN_POS                    8
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_SRC_BIT                      ((uint32_t)0x00000080)
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_SRC_POS                      7
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_DST_BIT                      ((uint32_t)0x00000040)
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_DST_POS                      6
#define DMAC_DMA_COMP_PARAMS_31_CH1_STW_MASK                          ((uint32_t)0x00000038)
#define DMAC_DMA_COMP_PARAMS_31_CH1_STW_LSB                           3
#define DMAC_DMA_COMP_PARAMS_31_CH1_STW_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_31_CH1_DTW_MASK                          ((uint32_t)0x00000007)
#define DMAC_DMA_COMP_PARAMS_31_CH1_DTW_LSB                           0
#define DMAC_DMA_COMP_PARAMS_31_CH1_DTW_WIDTH                         ((uint32_t)0x00000003)

#define DMAC_DMA_COMP_PARAMS_31_CH1_FIFO_DEPTH_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_SMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_LMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_DMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_MAX_MULT_SIZE_RST                 0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_FC_RST                            0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_HC_LLP_RST                        0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_CTL_WB_EN_RST                     0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_MULTI_BLK_EN_RST                  0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_LOCK_EN_RST                       0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_SRC_GAT_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_DST_SCA_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_SRC_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_STAT_DST_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_STW_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_31_CH1_DTW_RST                           0x0

__INLINE static void dmac_dma_comp_params_31_unpack(uint8_t* ch1fifodepth, uint8_t* ch1sms, uint8_t* ch1lms, uint8_t* ch1dms, uint8_t* ch1maxmultsize, uint8_t* ch1fc, uint8_t* ch1hcllp, uint8_t* ch1ctlwben, uint8_t* ch1multiblken, uint8_t* ch1locken, uint8_t* ch1srcgaten, uint8_t* ch1dstscaen, uint8_t* ch1statsrc, uint8_t* ch1statdst, uint8_t* ch1stw, uint8_t* ch1dtw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch1fifodepth = (localVal & ((uint32_t)0x70000000)) >> 28;
    *ch1sms = (localVal & ((uint32_t)0x0E000000)) >> 25;
    *ch1lms = (localVal & ((uint32_t)0x01C00000)) >> 22;
    *ch1dms = (localVal & ((uint32_t)0x00380000)) >> 19;
    *ch1maxmultsize = (localVal & ((uint32_t)0x00070000)) >> 16;
    *ch1fc = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *ch1hcllp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ch1ctlwben = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ch1multiblken = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ch1locken = (localVal & ((uint32_t)0x00000400)) >> 10;
    *ch1srcgaten = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ch1dstscaen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ch1statsrc = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ch1statdst = (localVal & ((uint32_t)0x00000040)) >> 6;
    *ch1stw = (localVal & ((uint32_t)0x00000038)) >> 3;
    *ch1dtw = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_fifo_depth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x70000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0E000000)) >> 25);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01C00000)) >> 22);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00380000)) >> 19);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_max_mult_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_hc_llp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_ctl_wb_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_multi_blk_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_lock_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_src_gat_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_dst_sca_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_stat_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_stat_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_stw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000038)) >> 3);
}

__INLINE static uint8_t dmac_dma_comp_params_31_ch1_dtw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_31_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

 /**
 * @brief DMA_COMP_PARAMS_2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  30:28       CH0_FIFO_DEPTH   0b0
 *  27:25              CH0_SMS   0b0
 *  24:22              CH0_LMS   0b0
 *  21:19              CH0_DMS   0b0
 *  18:16    CH0_MAX_MULT_SIZE   0b0
 *  15:14               CH0_FC   0b0
 *     13           CH0_HC_LLP   0
 *     12        CH0_CTL_WB_EN   0
 *     11     CH0_MULTI_BLK_EN   0
 *     10          CH0_LOCK_EN   0
 *     09       CH0_SRC_GAT_EN   0
 *     08       CH0_DST_SCA_EN   0
 *     07         CH0_STAT_SRC   0
 *     06         CH0_STAT_DST   0
 *  05:03              CH0_STW   0b0
 *  02:00              CH0_DTW   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET 0x000003E8


__INLINE static uint32_t dmac_dma_comp_params_2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_2_CH0_FIFO_DEPTH_MASK                   ((uint32_t)0x70000000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_FIFO_DEPTH_LSB                    28
#define DMAC_DMA_COMP_PARAMS_2_CH0_FIFO_DEPTH_WIDTH                  ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_SMS_MASK                          ((uint32_t)0x0E000000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_SMS_LSB                           25
#define DMAC_DMA_COMP_PARAMS_2_CH0_SMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_LMS_MASK                          ((uint32_t)0x01C00000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_LMS_LSB                           22
#define DMAC_DMA_COMP_PARAMS_2_CH0_LMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_DMS_MASK                          ((uint32_t)0x00380000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_DMS_LSB                           19
#define DMAC_DMA_COMP_PARAMS_2_CH0_DMS_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_MAX_MULT_SIZE_MASK                ((uint32_t)0x00070000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_MAX_MULT_SIZE_LSB                 16
#define DMAC_DMA_COMP_PARAMS_2_CH0_MAX_MULT_SIZE_WIDTH               ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_FC_MASK                           ((uint32_t)0x0000C000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_FC_LSB                            14
#define DMAC_DMA_COMP_PARAMS_2_CH0_FC_WIDTH                          ((uint32_t)0x00000002)
#define DMAC_DMA_COMP_PARAMS_2_CH0_HC_LLP_BIT                        ((uint32_t)0x00002000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_HC_LLP_POS                        13
#define DMAC_DMA_COMP_PARAMS_2_CH0_CTL_WB_EN_BIT                     ((uint32_t)0x00001000)
#define DMAC_DMA_COMP_PARAMS_2_CH0_CTL_WB_EN_POS                     12
#define DMAC_DMA_COMP_PARAMS_2_CH0_MULTI_BLK_EN_BIT                  ((uint32_t)0x00000800)
#define DMAC_DMA_COMP_PARAMS_2_CH0_MULTI_BLK_EN_POS                  11
#define DMAC_DMA_COMP_PARAMS_2_CH0_LOCK_EN_BIT                       ((uint32_t)0x00000400)
#define DMAC_DMA_COMP_PARAMS_2_CH0_LOCK_EN_POS                       10
#define DMAC_DMA_COMP_PARAMS_2_CH0_SRC_GAT_EN_BIT                    ((uint32_t)0x00000200)
#define DMAC_DMA_COMP_PARAMS_2_CH0_SRC_GAT_EN_POS                    9
#define DMAC_DMA_COMP_PARAMS_2_CH0_DST_SCA_EN_BIT                    ((uint32_t)0x00000100)
#define DMAC_DMA_COMP_PARAMS_2_CH0_DST_SCA_EN_POS                    8
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_SRC_BIT                      ((uint32_t)0x00000080)
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_SRC_POS                      7
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_DST_BIT                      ((uint32_t)0x00000040)
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_DST_POS                      6
#define DMAC_DMA_COMP_PARAMS_2_CH0_STW_MASK                          ((uint32_t)0x00000038)
#define DMAC_DMA_COMP_PARAMS_2_CH0_STW_LSB                           3
#define DMAC_DMA_COMP_PARAMS_2_CH0_STW_WIDTH                         ((uint32_t)0x00000003)
#define DMAC_DMA_COMP_PARAMS_2_CH0_DTW_MASK                          ((uint32_t)0x00000007)
#define DMAC_DMA_COMP_PARAMS_2_CH0_DTW_LSB                           0
#define DMAC_DMA_COMP_PARAMS_2_CH0_DTW_WIDTH                         ((uint32_t)0x00000003)

#define DMAC_DMA_COMP_PARAMS_2_CH0_FIFO_DEPTH_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_SMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_LMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_DMS_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_MAX_MULT_SIZE_RST                 0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_FC_RST                            0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_HC_LLP_RST                        0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_CTL_WB_EN_RST                     0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_MULTI_BLK_EN_RST                  0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_LOCK_EN_RST                       0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_SRC_GAT_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_DST_SCA_EN_RST                    0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_SRC_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_STAT_DST_RST                      0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_STW_RST                           0x0
#define DMAC_DMA_COMP_PARAMS_2_CH0_DTW_RST                           0x0

__INLINE static void dmac_dma_comp_params_2_unpack(uint8_t* ch0fifodepth, uint8_t* ch0sms, uint8_t* ch0lms, uint8_t* ch0dms, uint8_t* ch0maxmultsize, uint8_t* ch0fc, uint8_t* ch0hcllp, uint8_t* ch0ctlwben, uint8_t* ch0multiblken, uint8_t* ch0locken, uint8_t* ch0srcgaten, uint8_t* ch0dstscaen, uint8_t* ch0statsrc, uint8_t* ch0statdst, uint8_t* ch0stw, uint8_t* ch0dtw)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch0fifodepth = (localVal & ((uint32_t)0x70000000)) >> 28;
    *ch0sms = (localVal & ((uint32_t)0x0E000000)) >> 25;
    *ch0lms = (localVal & ((uint32_t)0x01C00000)) >> 22;
    *ch0dms = (localVal & ((uint32_t)0x00380000)) >> 19;
    *ch0maxmultsize = (localVal & ((uint32_t)0x00070000)) >> 16;
    *ch0fc = (localVal & ((uint32_t)0x0000C000)) >> 14;
    *ch0hcllp = (localVal & ((uint32_t)0x00002000)) >> 13;
    *ch0ctlwben = (localVal & ((uint32_t)0x00001000)) >> 12;
    *ch0multiblken = (localVal & ((uint32_t)0x00000800)) >> 11;
    *ch0locken = (localVal & ((uint32_t)0x00000400)) >> 10;
    *ch0srcgaten = (localVal & ((uint32_t)0x00000200)) >> 9;
    *ch0dstscaen = (localVal & ((uint32_t)0x00000100)) >> 8;
    *ch0statsrc = (localVal & ((uint32_t)0x00000080)) >> 7;
    *ch0statdst = (localVal & ((uint32_t)0x00000040)) >> 6;
    *ch0stw = (localVal & ((uint32_t)0x00000038)) >> 3;
    *ch0dtw = (localVal & ((uint32_t)0x00000007)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_fifo_depth_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x70000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_sms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0E000000)) >> 25);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_lms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x01C00000)) >> 22);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_dms_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00380000)) >> 19);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_max_mult_size_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00070000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_fc_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000C000)) >> 14);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_hc_llp_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_ctl_wb_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_multi_blk_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_lock_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_src_gat_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_dst_sca_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_stat_src_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_stat_dst_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_stw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000038)) >> 3);
}

__INLINE static uint8_t dmac_dma_comp_params_2_ch0_dtw_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_2_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000007)) >> 0);
}

 /**
 * @brief DMA_COMP_PARAMS_21 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:28   CH7_MULTI_BLK_TYPE   0b0
 *  27:24   CH6_MULTI_BLK_TYPE   0b0
 *  23:20   CH5_MULTI_BLK_TYPE   0b0
 *  19:16   CH4_MULTI_BLK_TYPE   0b0
 *  15:12   CH3_MULTI_BLK_TYPE   0b0
 *  11:08   CH2_MULTI_BLK_TYPE   0b0
 *  07:04   CH1_MULTI_BLK_TYPE   0b0
 *  03:00   CH0_MULTI_BLK_TYPE   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET 0x000003EC


__INLINE static uint32_t dmac_dma_comp_params_21_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_21_CH7_MULTI_BLK_TYPE_MASK               ((uint32_t)0xF0000000)
#define DMAC_DMA_COMP_PARAMS_21_CH7_MULTI_BLK_TYPE_LSB                28
#define DMAC_DMA_COMP_PARAMS_21_CH7_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH6_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0F000000)
#define DMAC_DMA_COMP_PARAMS_21_CH6_MULTI_BLK_TYPE_LSB                24
#define DMAC_DMA_COMP_PARAMS_21_CH6_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH5_MULTI_BLK_TYPE_MASK               ((uint32_t)0x00F00000)
#define DMAC_DMA_COMP_PARAMS_21_CH5_MULTI_BLK_TYPE_LSB                20
#define DMAC_DMA_COMP_PARAMS_21_CH5_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH4_MULTI_BLK_TYPE_MASK               ((uint32_t)0x000F0000)
#define DMAC_DMA_COMP_PARAMS_21_CH4_MULTI_BLK_TYPE_LSB                16
#define DMAC_DMA_COMP_PARAMS_21_CH4_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH3_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0000F000)
#define DMAC_DMA_COMP_PARAMS_21_CH3_MULTI_BLK_TYPE_LSB                12
#define DMAC_DMA_COMP_PARAMS_21_CH3_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH2_MULTI_BLK_TYPE_MASK               ((uint32_t)0x00000F00)
#define DMAC_DMA_COMP_PARAMS_21_CH2_MULTI_BLK_TYPE_LSB                8
#define DMAC_DMA_COMP_PARAMS_21_CH2_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH1_MULTI_BLK_TYPE_MASK               ((uint32_t)0x000000F0)
#define DMAC_DMA_COMP_PARAMS_21_CH1_MULTI_BLK_TYPE_LSB                4
#define DMAC_DMA_COMP_PARAMS_21_CH1_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_21_CH0_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0000000F)
#define DMAC_DMA_COMP_PARAMS_21_CH0_MULTI_BLK_TYPE_LSB                0
#define DMAC_DMA_COMP_PARAMS_21_CH0_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)

#define DMAC_DMA_COMP_PARAMS_21_CH7_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH6_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH5_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH4_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH3_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH2_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH1_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_21_CH0_MULTI_BLK_TYPE_RST                0x0

__INLINE static void dmac_dma_comp_params_21_unpack(uint8_t* ch7multiblktype, uint8_t* ch6multiblktype, uint8_t* ch5multiblktype, uint8_t* ch4multiblktype, uint8_t* ch3multiblktype, uint8_t* ch2multiblktype, uint8_t* ch1multiblktype, uint8_t* ch0multiblktype)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch7multiblktype = (localVal & ((uint32_t)0xF0000000)) >> 28;
    *ch6multiblktype = (localVal & ((uint32_t)0x0F000000)) >> 24;
    *ch5multiblktype = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *ch4multiblktype = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *ch3multiblktype = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *ch2multiblktype = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *ch1multiblktype = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ch0multiblktype = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch7_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xF0000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch6_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0F000000)) >> 24);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch5_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch4_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch3_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch2_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch1_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t dmac_dma_comp_params_21_ch0_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_21_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief DMA_COMP_PARAMS_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:28   CH7_MULTI_BLK_TYPE   0b0
 *  27:24   CH6_MULTI_BLK_TYPE   0b0
 *  23:20   CH5_MULTI_BLK_TYPE   0b0
 *  19:16   CH4_MULTI_BLK_TYPE   0b0
 *  15:12   CH3_MULTI_BLK_TYPE   0b0
 *  11:08   CH2_MULTI_BLK_TYPE   0b0
 *  07:04   CH1_MULTI_BLK_TYPE   0b0
 *  03:00   CH0_MULTI_BLK_TYPE   0b0
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET 0x000003F0


__INLINE static uint32_t dmac_dma_comp_params_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMP_PARAMS_1_CH7_MULTI_BLK_TYPE_MASK               ((uint32_t)0xF0000000)
#define DMAC_DMA_COMP_PARAMS_1_CH7_MULTI_BLK_TYPE_LSB                28
#define DMAC_DMA_COMP_PARAMS_1_CH7_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH6_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0F000000)
#define DMAC_DMA_COMP_PARAMS_1_CH6_MULTI_BLK_TYPE_LSB                24
#define DMAC_DMA_COMP_PARAMS_1_CH6_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH5_MULTI_BLK_TYPE_MASK               ((uint32_t)0x00F00000)
#define DMAC_DMA_COMP_PARAMS_1_CH5_MULTI_BLK_TYPE_LSB                20
#define DMAC_DMA_COMP_PARAMS_1_CH5_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH4_MULTI_BLK_TYPE_MASK               ((uint32_t)0x000F0000)
#define DMAC_DMA_COMP_PARAMS_1_CH4_MULTI_BLK_TYPE_LSB                16
#define DMAC_DMA_COMP_PARAMS_1_CH4_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH3_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0000F000)
#define DMAC_DMA_COMP_PARAMS_1_CH3_MULTI_BLK_TYPE_LSB                12
#define DMAC_DMA_COMP_PARAMS_1_CH3_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH2_MULTI_BLK_TYPE_MASK               ((uint32_t)0x00000F00)
#define DMAC_DMA_COMP_PARAMS_1_CH2_MULTI_BLK_TYPE_LSB                8
#define DMAC_DMA_COMP_PARAMS_1_CH2_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH1_MULTI_BLK_TYPE_MASK               ((uint32_t)0x000000F0)
#define DMAC_DMA_COMP_PARAMS_1_CH1_MULTI_BLK_TYPE_LSB                4
#define DMAC_DMA_COMP_PARAMS_1_CH1_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)
#define DMAC_DMA_COMP_PARAMS_1_CH0_MULTI_BLK_TYPE_MASK               ((uint32_t)0x0000000F)
#define DMAC_DMA_COMP_PARAMS_1_CH0_MULTI_BLK_TYPE_LSB                0
#define DMAC_DMA_COMP_PARAMS_1_CH0_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000004)

#define DMAC_DMA_COMP_PARAMS_1_CH7_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH6_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH5_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH4_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH3_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH2_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH1_MULTI_BLK_TYPE_RST                0x0
#define DMAC_DMA_COMP_PARAMS_1_CH0_MULTI_BLK_TYPE_RST                0x0

__INLINE static void dmac_dma_comp_params_1_unpack(uint8_t* ch7multiblktype, uint8_t* ch6multiblktype, uint8_t* ch5multiblktype, uint8_t* ch4multiblktype, uint8_t* ch3multiblktype, uint8_t* ch2multiblktype, uint8_t* ch1multiblktype, uint8_t* ch0multiblktype)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch7multiblktype = (localVal & ((uint32_t)0xF0000000)) >> 28;
    *ch6multiblktype = (localVal & ((uint32_t)0x0F000000)) >> 24;
    *ch5multiblktype = (localVal & ((uint32_t)0x00F00000)) >> 20;
    *ch4multiblktype = (localVal & ((uint32_t)0x000F0000)) >> 16;
    *ch3multiblktype = (localVal & ((uint32_t)0x0000F000)) >> 12;
    *ch2multiblktype = (localVal & ((uint32_t)0x00000F00)) >> 8;
    *ch1multiblktype = (localVal & ((uint32_t)0x000000F0)) >> 4;
    *ch0multiblktype = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch7_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xF0000000)) >> 28);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch6_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0F000000)) >> 24);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch5_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00F00000)) >> 20);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch4_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000F0000)) >> 16);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch3_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000F000)) >> 12);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch2_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000F00)) >> 8);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch1_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000000F0)) >> 4);
}

__INLINE static uint8_t dmac_dma_comp_params_1_ch0_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMP_PARAMS_1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

 /**
 * @brief DMA_COMPONENT_ID_REGISTER register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        DMA_COMP_TYPE   0b44571110
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER_OFFSET 0x000003F8


__INLINE static uint32_t dmac_dma_component_id_register_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMPONENT_ID_REGISTER_DMA_COMP_TYPE_MASK                    ((uint32_t)0xFFFFFFFF)
#define DMAC_DMA_COMPONENT_ID_REGISTER_DMA_COMP_TYPE_LSB                     0
#define DMAC_DMA_COMPONENT_ID_REGISTER_DMA_COMP_TYPE_WIDTH                   ((uint32_t)0x00000020)

#define DMAC_DMA_COMPONENT_ID_REGISTER_DMA_COMP_TYPE_RST                     0x44571110

__INLINE static void dmac_dma_component_id_register_unpack(uint8_t* dmacomptype)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *dmacomptype = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dma_component_id_register_dma_comp_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

 /**
 * @brief DMA_COMPONENT_ID_REGISTER1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00   CH7_MULTI_BLK_TYPE   0b3231372A
 * </pre>
 */
#define FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER1_OFFSET 0x000003FC


__INLINE static uint32_t dmac_dma_component_id_register1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
}

// field definitions
#define DMAC_DMA_COMPONENT_ID_REGISTER1_CH7_MULTI_BLK_TYPE_MASK               ((uint32_t)0xFFFFFFFF)
#define DMAC_DMA_COMPONENT_ID_REGISTER1_CH7_MULTI_BLK_TYPE_LSB                0
#define DMAC_DMA_COMPONENT_ID_REGISTER1_CH7_MULTI_BLK_TYPE_WIDTH              ((uint32_t)0x00000020)

#define DMAC_DMA_COMPONENT_ID_REGISTER1_CH7_MULTI_BLK_TYPE_RST                0x3231372A

__INLINE static void dmac_dma_component_id_register1_unpack(uint8_t* ch7multiblktype)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);

    *ch7multiblktype = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t dmac_dma_component_id_register1_ch7_multi_blk_type_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_DMAC_DMA_COMPONENT_ID_REGISTER1_OFFSET + FEMTO_REG_DMAC_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}


#endif // _FEMTO_REG_DMAC_H_

