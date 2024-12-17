#ifndef _FEMTO_REG_COM_H_
#define _FEMTO_REG_COM_H_

#define FEMTO_REG_COM_COUNT 22

#define FEMTO_REG_COM_BASE_ADDR 0x40003000

#define FEMTO_REG_COM_SIZE 0x0000005C


 /**
 * @brief COM_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          CH0_AP_MBOX   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG0_OFFSET 0x00000000


__INLINE static uint32_t com_com_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG0_CH0_AP_MBOX_MASK                      ((uint32_t)0xFFFFFFFF)
#define COM_COM_REG0_CH0_AP_MBOX_LSB                       0
#define COM_COM_REG0_CH0_AP_MBOX_WIDTH                     ((uint32_t)0x00000020)

#define COM_COM_REG0_CH0_AP_MBOX_RST                       0x0

__INLINE static void com_com_reg0_pack(uint32_t ch0apmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)ch0apmbox << 0));
}

__INLINE static void com_com_reg0_unpack(uint8_t* ch0apmbox)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *ch0apmbox = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_com_reg0_ch0_ap_mbox_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_com_reg0_ch0_ap_mbox_setf(uint32_t ch0apmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)ch0apmbox << 0);
}

 /**
 * @brief COM_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          CH0_CP_MBOX   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG1_OFFSET 0x00000004


__INLINE static uint32_t com_com_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG1_CH0_CP_MBOX_MASK                      ((uint32_t)0xFFFFFFFF)
#define COM_COM_REG1_CH0_CP_MBOX_LSB                       0
#define COM_COM_REG1_CH0_CP_MBOX_WIDTH                     ((uint32_t)0x00000020)

#define COM_COM_REG1_CH0_CP_MBOX_RST                       0x0

__INLINE static void com_com_reg1_pack(uint32_t ch0cpmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)ch0cpmbox << 0));
}

__INLINE static void com_com_reg1_unpack(uint8_t* ch0cpmbox)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *ch0cpmbox = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_com_reg1_ch0_cp_mbox_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_com_reg1_ch0_cp_mbox_setf(uint32_t ch0cpmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)ch0cpmbox << 0);
}

 /**
 * @brief COM_REG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          CH1_AP_MBOX   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG2_OFFSET 0x00000008


__INLINE static uint32_t com_com_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG2_CH1_AP_MBOX_MASK                      ((uint32_t)0xFFFFFFFF)
#define COM_COM_REG2_CH1_AP_MBOX_LSB                       0
#define COM_COM_REG2_CH1_AP_MBOX_WIDTH                     ((uint32_t)0x00000020)

#define COM_COM_REG2_CH1_AP_MBOX_RST                       0x0

__INLINE static void com_com_reg2_pack(uint32_t ch1apmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)ch1apmbox << 0));
}

__INLINE static void com_com_reg2_unpack(uint8_t* ch1apmbox)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *ch1apmbox = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_com_reg2_ch1_ap_mbox_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_com_reg2_ch1_ap_mbox_setf(uint32_t ch1apmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)ch1apmbox << 0);
}

 /**
 * @brief COM_REG3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00          CH1_CP_MBOX   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG3_OFFSET 0x0000000C


__INLINE static uint32_t com_com_reg3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG3_CH1_CP_MBOX_MASK                      ((uint32_t)0xFFFFFFFF)
#define COM_COM_REG3_CH1_CP_MBOX_LSB                       0
#define COM_COM_REG3_CH1_CP_MBOX_WIDTH                     ((uint32_t)0x00000020)

#define COM_COM_REG3_CH1_CP_MBOX_RST                       0x0

__INLINE static void com_com_reg3_pack(uint32_t ch1cpmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)ch1cpmbox << 0));
}

__INLINE static void com_com_reg3_unpack(uint8_t* ch1cpmbox)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *ch1cpmbox = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_com_reg3_ch1_cp_mbox_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_com_reg3_ch1_cp_mbox_setf(uint32_t ch1cpmbox)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)ch1cpmbox << 0);
}

 /**
 * @brief COM_REG4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00            ap_status   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG4_OFFSET 0x00000010


__INLINE static uint32_t com_com_reg4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG4_AP_STATUS_MASK                        ((uint32_t)0x0000000F)
#define COM_COM_REG4_AP_STATUS_LSB                         0
#define COM_COM_REG4_AP_STATUS_WIDTH                       ((uint32_t)0x00000004)

#define COM_COM_REG4_AP_STATUS_RST                         0x0

__INLINE static void com_com_reg4_pack(uint8_t apstatus)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)apstatus << 0));
}

__INLINE static void com_com_reg4_unpack(uint8_t* apstatus)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *apstatus = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t com_com_reg4_ap_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void com_com_reg4_ap_status_setf(uint8_t apstatus)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)apstatus << 0);
}

 /**
 * @brief COM_REG5 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00            cp_status   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG5_OFFSET 0x00000014


__INLINE static uint32_t com_com_reg5_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG5_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg5_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG5_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG5_CP_STATUS_MASK                        ((uint32_t)0x0000000F)
#define COM_COM_REG5_CP_STATUS_LSB                         0
#define COM_COM_REG5_CP_STATUS_WIDTH                       ((uint32_t)0x00000004)

#define COM_COM_REG5_CP_STATUS_RST                         0x0

__INLINE static void com_com_reg5_pack(uint8_t cpstatus)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG5_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)cpstatus << 0));
}

__INLINE static void com_com_reg5_unpack(uint8_t* cpstatus)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG5_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *cpstatus = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t com_com_reg5_cp_status_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG5_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void com_com_reg5_cp_status_setf(uint8_t cpstatus)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG5_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)cpstatus << 0);
}

 /**
 * @brief COM_REG6 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00             ap_inten   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG6_OFFSET 0x00000018


__INLINE static uint32_t com_com_reg6_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG6_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg6_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG6_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG6_AP_INTEN_MASK                         ((uint32_t)0x0000000F)
#define COM_COM_REG6_AP_INTEN_LSB                          0
#define COM_COM_REG6_AP_INTEN_WIDTH                        ((uint32_t)0x00000004)

#define COM_COM_REG6_AP_INTEN_RST                          0x0

__INLINE static void com_com_reg6_pack(uint8_t apinten)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG6_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)apinten << 0));
}

__INLINE static void com_com_reg6_unpack(uint8_t* apinten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG6_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *apinten = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t com_com_reg6_ap_inten_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG6_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void com_com_reg6_ap_inten_setf(uint8_t apinten)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG6_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)apinten << 0);
}

 /**
 * @brief COM_REG7 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  03:00             cp_inten   0b0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG7_OFFSET 0x0000001C


__INLINE static uint32_t com_com_reg7_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG7_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg7_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG7_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG7_CP_INTEN_MASK                         ((uint32_t)0x0000000F)
#define COM_COM_REG7_CP_INTEN_LSB                          0
#define COM_COM_REG7_CP_INTEN_WIDTH                        ((uint32_t)0x00000004)

#define COM_COM_REG7_CP_INTEN_RST                          0x0

__INLINE static void com_com_reg7_pack(uint8_t cpinten)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG7_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)cpinten << 0));
}

__INLINE static void com_com_reg7_unpack(uint8_t* cpinten)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG7_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *cpinten = (localVal & ((uint32_t)0x0000000F)) >> 0;
}

__INLINE static uint8_t com_com_reg7_cp_inten_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG7_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000000F)) >> 0);
}

__INLINE static void com_com_reg7_cp_inten_setf(uint8_t cpinten)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG7_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)cpinten << 0);
}

 /**
 * @brief CLK_DIV register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  01:00                remap   0b0
 * </pre>
 */
#define FEMTO_REG_COM_CLK_DIV_OFFSET 0x00000020


__INLINE static uint32_t com_clk_div_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_CLK_DIV_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_clk_div_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_CLK_DIV_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_CLK_DIV_REMAP_MASK                            ((uint32_t)0x00000003)
#define COM_CLK_DIV_REMAP_LSB                             0
#define COM_CLK_DIV_REMAP_WIDTH                           ((uint32_t)0x00000002)

#define COM_CLK_DIV_REMAP_RST                             0x0

__INLINE static void com_clk_div_pack(uint8_t remap)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_CLK_DIV_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)remap << 0));
}

__INLINE static void com_clk_div_unpack(uint8_t* remap)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_CLK_DIV_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *remap = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t com_clk_div_remap_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_CLK_DIV_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000003)) >> 0);
}

__INLINE static void com_clk_div_remap_setf(uint8_t remap)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_CLK_DIV_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)remap << 0);
}

 /**
 * @brief COM_REG11 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     02     flash_errint_clr   0
 *     01     flash_cmderr_int   0
 *     00        flash_cs_prot   0
 * </pre>
 */
#define FEMTO_REG_COM_COM_REG11_OFFSET 0x0000002C


__INLINE static uint32_t com_com_reg11_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_com_reg11_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG11_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_COM_REG11_FLASH_ERRINT_CLR_BIT                  ((uint32_t)0x00000004)
#define COM_COM_REG11_FLASH_ERRINT_CLR_POS                  2
#define COM_COM_REG11_FLASH_CMDERR_INT_BIT                  ((uint32_t)0x00000002)
#define COM_COM_REG11_FLASH_CMDERR_INT_POS                  1
#define COM_COM_REG11_FLASH_CS_PROT_BIT                     ((uint32_t)0x00000001)
#define COM_COM_REG11_FLASH_CS_PROT_POS                     0

#define COM_COM_REG11_FLASH_ERRINT_CLR_RST                  0x0
#define COM_COM_REG11_FLASH_CMDERR_INT_RST                  0x0
#define COM_COM_REG11_FLASH_CS_PROT_RST                     0x0

__INLINE static void com_com_reg11_pack(uint8_t flasherrintclr, uint8_t flashcsprot)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG11_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)flasherrintclr << 2) | ((uint32_t)flashcsprot << 0));
}

__INLINE static void com_com_reg11_unpack(uint8_t* flasherrintclr, uint8_t* flashcmderrint, uint8_t* flashcsprot)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *flasherrintclr = (localVal & ((uint32_t)0x00000004)) >> 2;
    *flashcmderrint = (localVal & ((uint32_t)0x00000002)) >> 1;
    *flashcsprot = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t com_com_reg11_flash_errint_clr_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void com_com_reg11_flash_errint_clr_setf(uint8_t flasherrintclr)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG11_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)flasherrintclr << 2));
}

__INLINE static uint8_t com_com_reg11_flash_cmderr_int_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static uint8_t com_com_reg11_flash_cs_prot_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void com_com_reg11_flash_cs_prot_setf(uint8_t flashcsprot)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_COM_REG11_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_COM_REG11_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)flashcsprot << 0));
}

 /**
 * @brief NEW_ADD_REG0 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        new_add_reg_0   0b0
 * </pre>
 */
#define FEMTO_REG_COM_NEW_ADD_REG0_OFFSET 0x00000030


__INLINE static uint32_t com_new_add_reg0_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_new_add_reg0_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_NEW_ADD_REG0_NEW_ADD_REG_0_MASK                    ((uint32_t)0xFFFFFFFF)
#define COM_NEW_ADD_REG0_NEW_ADD_REG_0_LSB                     0
#define COM_NEW_ADD_REG0_NEW_ADD_REG_0_WIDTH                   ((uint32_t)0x00000020)

#define COM_NEW_ADD_REG0_NEW_ADD_REG_0_RST                     0x0

__INLINE static void com_new_add_reg0_pack(uint32_t newaddreg0)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)newaddreg0 << 0));
}

__INLINE static void com_new_add_reg0_unpack(uint8_t* newaddreg0)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *newaddreg0 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_new_add_reg0_new_add_reg_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_new_add_reg0_new_add_reg_0_setf(uint32_t newaddreg0)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG0_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)newaddreg0 << 0);
}

 /**
 * @brief NEW_ADD_REG1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00      new_add_reg_1_1   0b0
 *     16    uart0_rx_tie_high   0
 *  15:00      new_add_reg_1_0   0b0
 * </pre>
 */
#define FEMTO_REG_COM_NEW_ADD_REG1_OFFSET 0x00000034


__INLINE static uint32_t com_new_add_reg1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_new_add_reg1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_1_MASK                  ((uint32_t)0xFFFFFFFF)
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_1_LSB                   0
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_1_WIDTH                 ((uint32_t)0x00000020)
#define COM_NEW_ADD_REG1_UART0_RX_TIE_HIGH_BIT                 ((uint32_t)0x00010000)
#define COM_NEW_ADD_REG1_UART0_RX_TIE_HIGH_POS                 16
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_0_MASK                  ((uint32_t)0x0000FFFF)
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_0_LSB                   0
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_0_WIDTH                 ((uint32_t)0x00000010)

#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_1_RST                   0x0
#define COM_NEW_ADD_REG1_UART0_RX_TIE_HIGH_RST                 0x0
#define COM_NEW_ADD_REG1_NEW_ADD_REG_1_0_RST                   0x0

__INLINE static void com_new_add_reg1_pack(uint32_t newaddreg11, uint8_t uart0rxtiehigh, uint16_t newaddreg10)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)newaddreg11 << 0) | ((uint32_t)uart0rxtiehigh << 16) | ((uint32_t)newaddreg10 << 0));
}

__INLINE static void com_new_add_reg1_unpack(uint8_t* newaddreg11, uint8_t* uart0rxtiehigh, uint8_t* newaddreg10)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *newaddreg11 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
    *uart0rxtiehigh = (localVal & ((uint32_t)0x00010000)) >> 16;
    *newaddreg10 = (localVal & ((uint32_t)0x0000FFFF)) >> 0;
}

__INLINE static uint32_t com_new_add_reg1_new_add_reg_1_1_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_new_add_reg1_new_add_reg_1_1_setf(uint32_t newaddreg11)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0xFFFFFFFF)) | ((uint32_t)newaddreg11 << 0));
}

__INLINE static uint8_t com_new_add_reg1_uart0_rx_tie_high_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void com_new_add_reg1_uart0_rx_tie_high_setf(uint8_t uart0rxtiehigh)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)uart0rxtiehigh << 16));
}

__INLINE static uint16_t com_new_add_reg1_new_add_reg_1_0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x0000FFFF)) >> 0);
}

__INLINE static void com_new_add_reg1_new_add_reg_1_0_setf(uint16_t newaddreg10)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG1_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x0000FFFF)) | ((uint32_t)newaddreg10 << 0));
}

 /**
 * @brief NEW_ADD_REG2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        new_add_reg_2   0b0
 * </pre>
 */
#define FEMTO_REG_COM_NEW_ADD_REG2_OFFSET 0x00000038


__INLINE static uint32_t com_new_add_reg2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_new_add_reg2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_NEW_ADD_REG2_NEW_ADD_REG_2_MASK                    ((uint32_t)0xFFFFFFFF)
#define COM_NEW_ADD_REG2_NEW_ADD_REG_2_LSB                     0
#define COM_NEW_ADD_REG2_NEW_ADD_REG_2_WIDTH                   ((uint32_t)0x00000020)

#define COM_NEW_ADD_REG2_NEW_ADD_REG_2_RST                     0x0

__INLINE static void com_new_add_reg2_pack(uint32_t newaddreg2)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)newaddreg2 << 0));
}

__INLINE static void com_new_add_reg2_unpack(uint8_t* newaddreg2)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *newaddreg2 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_new_add_reg2_new_add_reg_2_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_new_add_reg2_new_add_reg_2_setf(uint32_t newaddreg2)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)newaddreg2 << 0);
}

 /**
 * @brief NEW_ADD_REG3 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        new_add_reg_3   0b0
 * </pre>
 */
#define FEMTO_REG_COM_NEW_ADD_REG3_OFFSET 0x0000003C


__INLINE static uint32_t com_new_add_reg3_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_new_add_reg3_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_NEW_ADD_REG3_NEW_ADD_REG_3_MASK                    ((uint32_t)0xFFFFFFFF)
#define COM_NEW_ADD_REG3_NEW_ADD_REG_3_LSB                     0
#define COM_NEW_ADD_REG3_NEW_ADD_REG_3_WIDTH                   ((uint32_t)0x00000020)

#define COM_NEW_ADD_REG3_NEW_ADD_REG_3_RST                     0x0

__INLINE static void com_new_add_reg3_pack(uint32_t newaddreg3)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)newaddreg3 << 0));
}

__INLINE static void com_new_add_reg3_unpack(uint8_t* newaddreg3)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *newaddreg3 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_new_add_reg3_new_add_reg_3_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_new_add_reg3_new_add_reg_3_setf(uint32_t newaddreg3)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG3_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)newaddreg3 << 0);
}

 /**
 * @brief SPI_FUNCTION register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     02            spi_three   0
 *     00             spi_dual   0
 * </pre>
 */
#define FEMTO_REG_COM_SPI_FUNCTION_OFFSET 0x00000040


__INLINE static uint32_t com_spi_function_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_spi_function_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_SPI_FUNCTION_SPI_THREE_BIT                         ((uint32_t)0x00000004)
#define COM_SPI_FUNCTION_SPI_THREE_POS                         2
#define COM_SPI_FUNCTION_SPI_DUAL_BIT                          ((uint32_t)0x00000001)
#define COM_SPI_FUNCTION_SPI_DUAL_POS                          0

#define COM_SPI_FUNCTION_SPI_THREE_RST                         0x0
#define COM_SPI_FUNCTION_SPI_DUAL_RST                          0x0

__INLINE static void com_spi_function_pack(uint8_t spithree, uint8_t spidual)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)spithree << 2) | ((uint32_t)spidual << 0));
}

__INLINE static void com_spi_function_unpack(uint8_t* spithree, uint8_t* spidual)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *spithree = (localVal & ((uint32_t)0x00000004)) >> 2;
    *spidual = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t com_spi_function_spi_three_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void com_spi_function_spi_three_setf(uint8_t spithree)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)spithree << 2));
}

__INLINE static uint8_t com_spi_function_spi_dual_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void com_spi_function_spi_dual_setf(uint8_t spidual)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)spidual << 0));
}

 /**
 * @brief SPI_FUNCTION_1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     02             spi_data   0
 *     00        spi_ss_in_com   0
 * </pre>
 */
#define FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET 0x00000044


__INLINE static uint32_t com_spi_function_1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_spi_function_1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_SPI_FUNCTION_1_SPI_DATA_BIT                          ((uint32_t)0x00000004)
#define COM_SPI_FUNCTION_1_SPI_DATA_POS                          2
#define COM_SPI_FUNCTION_1_SPI_SS_IN_COM_BIT                     ((uint32_t)0x00000001)
#define COM_SPI_FUNCTION_1_SPI_SS_IN_COM_POS                     0

#define COM_SPI_FUNCTION_1_SPI_DATA_RST                          0x0
#define COM_SPI_FUNCTION_1_SPI_SS_IN_COM_RST                     0x0

__INLINE static void com_spi_function_1_pack(uint8_t spidata, uint8_t spissincom)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)spidata << 2) | ((uint32_t)spissincom << 0));
}

__INLINE static void com_spi_function_1_unpack(uint8_t* spidata, uint8_t* spissincom)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *spidata = (localVal & ((uint32_t)0x00000004)) >> 2;
    *spissincom = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t com_spi_function_1_spi_data_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void com_spi_function_1_spi_data_setf(uint8_t spidata)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)spidata << 2));
}

__INLINE static uint8_t com_spi_function_1_spi_ss_in_com_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void com_spi_function_1_spi_ss_in_com_setf(uint8_t spissincom)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_SPI_FUNCTION_1_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)spissincom << 0));
}

 /**
 * @brief USB_FUNCTION register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     31         otgtop_speed   0
 *     30       otgtop_suspend   0
 *     29         otgtop_txse0   0
 *     18   xver_prt_ovrcurr_i   0
 *     17       xver_sessvld_i   1
 *     16       xver_vbusvld_i   1
 *     15      xver_idstatus_i   1
 *     14           clk_48m_en   0
 *     13               resume   0
 *     12                 dm_o   0
 *     11                 dp_o   0
 *     10                 dm_i   0
 *     09                 dp_i   0
 *     08                dm_oe   0
 *     07                dp_oe   0
 *     06        dm_force_o_en   0
 *     05        dp_force_o_en   0
 *     04        dm_force_i_en   0
 *     03        dp_force_i_en   0
 *     02       dm_force_oe_en   0
 *     01       dp_force_oe_en   0
 *     00           dp_24m_out   0
 * </pre>
 */
#define FEMTO_REG_COM_USB_FUNCTION_OFFSET 0x00000048


__INLINE static uint32_t com_usb_function_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_usb_function_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_USB_FUNCTION_OTGTOP_SPEED_BIT                      ((uint32_t)0x80000000)
#define COM_USB_FUNCTION_OTGTOP_SPEED_POS                      31
#define COM_USB_FUNCTION_OTGTOP_SUSPEND_BIT                    ((uint32_t)0x40000000)
#define COM_USB_FUNCTION_OTGTOP_SUSPEND_POS                    30
#define COM_USB_FUNCTION_OTGTOP_TXSE0_BIT                      ((uint32_t)0x20000000)
#define COM_USB_FUNCTION_OTGTOP_TXSE0_POS                      29
#define COM_USB_FUNCTION_XVER_PRT_OVRCURR_I_BIT                ((uint32_t)0x00040000)
#define COM_USB_FUNCTION_XVER_PRT_OVRCURR_I_POS                18
#define COM_USB_FUNCTION_XVER_SESSVLD_I_BIT                    ((uint32_t)0x00020000)
#define COM_USB_FUNCTION_XVER_SESSVLD_I_POS                    17
#define COM_USB_FUNCTION_XVER_VBUSVLD_I_BIT                    ((uint32_t)0x00010000)
#define COM_USB_FUNCTION_XVER_VBUSVLD_I_POS                    16
#define COM_USB_FUNCTION_XVER_IDSTATUS_I_BIT                   ((uint32_t)0x00008000)
#define COM_USB_FUNCTION_XVER_IDSTATUS_I_POS                   15
#define COM_USB_FUNCTION_CLK_48M_EN_BIT                        ((uint32_t)0x00004000)
#define COM_USB_FUNCTION_CLK_48M_EN_POS                        14
#define COM_USB_FUNCTION_RESUME_BIT                            ((uint32_t)0x00002000)
#define COM_USB_FUNCTION_RESUME_POS                            13
#define COM_USB_FUNCTION_DM_O_BIT                              ((uint32_t)0x00001000)
#define COM_USB_FUNCTION_DM_O_POS                              12
#define COM_USB_FUNCTION_DP_O_BIT                              ((uint32_t)0x00000800)
#define COM_USB_FUNCTION_DP_O_POS                              11
#define COM_USB_FUNCTION_DM_I_BIT                              ((uint32_t)0x00000400)
#define COM_USB_FUNCTION_DM_I_POS                              10
#define COM_USB_FUNCTION_DP_I_BIT                              ((uint32_t)0x00000200)
#define COM_USB_FUNCTION_DP_I_POS                              9
#define COM_USB_FUNCTION_DM_OE_BIT                             ((uint32_t)0x00000100)
#define COM_USB_FUNCTION_DM_OE_POS                             8
#define COM_USB_FUNCTION_DP_OE_BIT                             ((uint32_t)0x00000080)
#define COM_USB_FUNCTION_DP_OE_POS                             7
#define COM_USB_FUNCTION_DM_FORCE_O_EN_BIT                     ((uint32_t)0x00000040)
#define COM_USB_FUNCTION_DM_FORCE_O_EN_POS                     6
#define COM_USB_FUNCTION_DP_FORCE_O_EN_BIT                     ((uint32_t)0x00000020)
#define COM_USB_FUNCTION_DP_FORCE_O_EN_POS                     5
#define COM_USB_FUNCTION_DM_FORCE_I_EN_BIT                     ((uint32_t)0x00000010)
#define COM_USB_FUNCTION_DM_FORCE_I_EN_POS                     4
#define COM_USB_FUNCTION_DP_FORCE_I_EN_BIT                     ((uint32_t)0x00000008)
#define COM_USB_FUNCTION_DP_FORCE_I_EN_POS                     3
#define COM_USB_FUNCTION_DM_FORCE_OE_EN_BIT                    ((uint32_t)0x00000004)
#define COM_USB_FUNCTION_DM_FORCE_OE_EN_POS                    2
#define COM_USB_FUNCTION_DP_FORCE_OE_EN_BIT                    ((uint32_t)0x00000002)
#define COM_USB_FUNCTION_DP_FORCE_OE_EN_POS                    1
#define COM_USB_FUNCTION_DP_24M_OUT_BIT                        ((uint32_t)0x00000001)
#define COM_USB_FUNCTION_DP_24M_OUT_POS                        0

#define COM_USB_FUNCTION_OTGTOP_SPEED_RST                      0x0
#define COM_USB_FUNCTION_OTGTOP_SUSPEND_RST                    0x0
#define COM_USB_FUNCTION_OTGTOP_TXSE0_RST                      0x0
#define COM_USB_FUNCTION_XVER_PRT_OVRCURR_I_RST                0x0
#define COM_USB_FUNCTION_XVER_SESSVLD_I_RST                    0x1
#define COM_USB_FUNCTION_XVER_VBUSVLD_I_RST                    0x1
#define COM_USB_FUNCTION_XVER_IDSTATUS_I_RST                   0x1
#define COM_USB_FUNCTION_CLK_48M_EN_RST                        0x0
#define COM_USB_FUNCTION_RESUME_RST                            0x0
#define COM_USB_FUNCTION_DM_O_RST                              0x0
#define COM_USB_FUNCTION_DP_O_RST                              0x0
#define COM_USB_FUNCTION_DM_I_RST                              0x0
#define COM_USB_FUNCTION_DP_I_RST                              0x0
#define COM_USB_FUNCTION_DM_OE_RST                             0x0
#define COM_USB_FUNCTION_DP_OE_RST                             0x0
#define COM_USB_FUNCTION_DM_FORCE_O_EN_RST                     0x0
#define COM_USB_FUNCTION_DP_FORCE_O_EN_RST                     0x0
#define COM_USB_FUNCTION_DM_FORCE_I_EN_RST                     0x0
#define COM_USB_FUNCTION_DP_FORCE_I_EN_RST                     0x0
#define COM_USB_FUNCTION_DM_FORCE_OE_EN_RST                    0x0
#define COM_USB_FUNCTION_DP_FORCE_OE_EN_RST                    0x0
#define COM_USB_FUNCTION_DP_24M_OUT_RST                        0x0

__INLINE static void com_usb_function_pack(uint8_t xverprtovrcurri, uint8_t xversessvldi, uint8_t xvervbusvldi, uint8_t xveridstatusi, uint8_t clk48men, uint8_t resume, uint8_t dmo, uint8_t dpo, uint8_t dmi, uint8_t dpi, uint8_t dmoe, uint8_t dpoe, uint8_t dmforceoen, uint8_t dpforceoen, uint8_t dmforceien, uint8_t dpforceien, uint8_t dmforceoeen, uint8_t dpforceoeen, uint8_t dp24mout)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)xverprtovrcurri << 18) | ((uint32_t)xversessvldi << 17) | ((uint32_t)xvervbusvldi << 16) | ((uint32_t)xveridstatusi << 15) | ((uint32_t)clk48men << 14) | ((uint32_t)resume << 13) | ((uint32_t)dmo << 12) | ((uint32_t)dpo << 11) | ((uint32_t)dmi << 10) | ((uint32_t)dpi << 9) | ((uint32_t)dmoe << 8) | ((uint32_t)dpoe << 7) | ((uint32_t)dmforceoen << 6) | ((uint32_t)dpforceoen << 5) | ((uint32_t)dmforceien << 4) | ((uint32_t)dpforceien << 3) | ((uint32_t)dmforceoeen << 2) | ((uint32_t)dpforceoeen << 1) | ((uint32_t)dp24mout << 0));
}

__INLINE static void com_usb_function_unpack(uint8_t* otgtopspeed, uint8_t* otgtopsuspend, uint8_t* otgtoptxse0, uint8_t* xverprtovrcurri, uint8_t* xversessvldi, uint8_t* xvervbusvldi, uint8_t* xveridstatusi, uint8_t* clk48men, uint8_t* resume, uint8_t* dmo, uint8_t* dpo, uint8_t* dmi, uint8_t* dpi, uint8_t* dmoe, uint8_t* dpoe, uint8_t* dmforceoen, uint8_t* dpforceoen, uint8_t* dmforceien, uint8_t* dpforceien, uint8_t* dmforceoeen, uint8_t* dpforceoeen, uint8_t* dp24mout)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *otgtopspeed = (localVal & ((uint32_t)0x80000000)) >> 31;
    *otgtopsuspend = (localVal & ((uint32_t)0x40000000)) >> 30;
    *otgtoptxse0 = (localVal & ((uint32_t)0x20000000)) >> 29;
    *xverprtovrcurri = (localVal & ((uint32_t)0x00040000)) >> 18;
    *xversessvldi = (localVal & ((uint32_t)0x00020000)) >> 17;
    *xvervbusvldi = (localVal & ((uint32_t)0x00010000)) >> 16;
    *xveridstatusi = (localVal & ((uint32_t)0x00008000)) >> 15;
    *clk48men = (localVal & ((uint32_t)0x00004000)) >> 14;
    *resume = (localVal & ((uint32_t)0x00002000)) >> 13;
    *dmo = (localVal & ((uint32_t)0x00001000)) >> 12;
    *dpo = (localVal & ((uint32_t)0x00000800)) >> 11;
    *dmi = (localVal & ((uint32_t)0x00000400)) >> 10;
    *dpi = (localVal & ((uint32_t)0x00000200)) >> 9;
    *dmoe = (localVal & ((uint32_t)0x00000100)) >> 8;
    *dpoe = (localVal & ((uint32_t)0x00000080)) >> 7;
    *dmforceoen = (localVal & ((uint32_t)0x00000040)) >> 6;
    *dpforceoen = (localVal & ((uint32_t)0x00000020)) >> 5;
    *dmforceien = (localVal & ((uint32_t)0x00000010)) >> 4;
    *dpforceien = (localVal & ((uint32_t)0x00000008)) >> 3;
    *dmforceoeen = (localVal & ((uint32_t)0x00000004)) >> 2;
    *dpforceoeen = (localVal & ((uint32_t)0x00000002)) >> 1;
    *dp24mout = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t com_usb_function_otgtop_speed_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x80000000)) >> 31);
}

__INLINE static uint8_t com_usb_function_otgtop_suspend_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x40000000)) >> 30);
}

__INLINE static uint8_t com_usb_function_otgtop_txse0_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x20000000)) >> 29);
}

__INLINE static uint8_t com_usb_function_xver_prt_ovrcurr_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00040000)) >> 18);
}

__INLINE static void com_usb_function_xver_prt_ovrcurr_i_setf(uint8_t xverprtovrcurri)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00040000)) | ((uint32_t)xverprtovrcurri << 18));
}

__INLINE static uint8_t com_usb_function_xver_sessvld_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00020000)) >> 17);
}

__INLINE static void com_usb_function_xver_sessvld_i_setf(uint8_t xversessvldi)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00020000)) | ((uint32_t)xversessvldi << 17));
}

__INLINE static uint8_t com_usb_function_xver_vbusvld_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00010000)) >> 16);
}

__INLINE static void com_usb_function_xver_vbusvld_i_setf(uint8_t xvervbusvldi)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00010000)) | ((uint32_t)xvervbusvldi << 16));
}

__INLINE static uint8_t com_usb_function_xver_idstatus_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00008000)) >> 15);
}

__INLINE static void com_usb_function_xver_idstatus_i_setf(uint8_t xveridstatusi)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00008000)) | ((uint32_t)xveridstatusi << 15));
}

__INLINE static uint8_t com_usb_function_clk_48m_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00004000)) >> 14);
}

__INLINE static void com_usb_function_clk_48m_en_setf(uint8_t clk48men)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00004000)) | ((uint32_t)clk48men << 14));
}

__INLINE static uint8_t com_usb_function_resume_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00002000)) >> 13);
}

__INLINE static void com_usb_function_resume_setf(uint8_t resume)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00002000)) | ((uint32_t)resume << 13));
}

__INLINE static uint8_t com_usb_function_dm_o_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00001000)) >> 12);
}

__INLINE static void com_usb_function_dm_o_setf(uint8_t dmo)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00001000)) | ((uint32_t)dmo << 12));
}

__INLINE static uint8_t com_usb_function_dp_o_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000800)) >> 11);
}

__INLINE static void com_usb_function_dp_o_setf(uint8_t dpo)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000800)) | ((uint32_t)dpo << 11));
}

__INLINE static uint8_t com_usb_function_dm_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000400)) >> 10);
}

__INLINE static void com_usb_function_dm_i_setf(uint8_t dmi)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000400)) | ((uint32_t)dmi << 10));
}

__INLINE static uint8_t com_usb_function_dp_i_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000200)) >> 9);
}

__INLINE static void com_usb_function_dp_i_setf(uint8_t dpi)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000200)) | ((uint32_t)dpi << 9));
}

__INLINE static uint8_t com_usb_function_dm_oe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void com_usb_function_dm_oe_setf(uint8_t dmoe)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)dmoe << 8));
}

__INLINE static uint8_t com_usb_function_dp_oe_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000080)) >> 7);
}

__INLINE static void com_usb_function_dp_oe_setf(uint8_t dpoe)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000080)) | ((uint32_t)dpoe << 7));
}

__INLINE static uint8_t com_usb_function_dm_force_o_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void com_usb_function_dm_force_o_en_setf(uint8_t dmforceoen)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)dmforceoen << 6));
}

__INLINE static uint8_t com_usb_function_dp_force_o_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000020)) >> 5);
}

__INLINE static void com_usb_function_dp_force_o_en_setf(uint8_t dpforceoen)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000020)) | ((uint32_t)dpforceoen << 5));
}

__INLINE static uint8_t com_usb_function_dm_force_i_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void com_usb_function_dm_force_i_en_setf(uint8_t dmforceien)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)dmforceien << 4));
}

__INLINE static uint8_t com_usb_function_dp_force_i_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000008)) >> 3);
}

__INLINE static void com_usb_function_dp_force_i_en_setf(uint8_t dpforceien)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000008)) | ((uint32_t)dpforceien << 3));
}

__INLINE static uint8_t com_usb_function_dm_force_oe_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void com_usb_function_dm_force_oe_en_setf(uint8_t dmforceoeen)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)dmforceoeen << 2));
}

__INLINE static uint8_t com_usb_function_dp_force_oe_en_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000002)) >> 1);
}

__INLINE static void com_usb_function_dp_force_oe_en_setf(uint8_t dpforceoeen)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000002)) | ((uint32_t)dpforceoeen << 1));
}

__INLINE static uint8_t com_usb_function_dp_24m_out_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void com_usb_function_dp_24m_out_setf(uint8_t dp24mout)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_USB_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_USB_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000001)) | ((uint32_t)dp24mout << 0));
}

 /**
 * @brief N205_FUNCTION register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     08   n205_dbg_stop_on_reset   0
 *     06   n205_override_dm_sleep   0
 *     04   n205_dbg_stop_boot   0
 *     02        n205_dbg_stop   0
 *  01:00             reserved   0b0
 * </pre>
 */
#define FEMTO_REG_COM_N205_FUNCTION_OFFSET 0x0000004C


__INLINE static uint32_t com_n205_function_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_n205_function_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_N205_FUNCTION_N205_DBG_STOP_ON_RESET_BIT            ((uint32_t)0x00000100)
#define COM_N205_FUNCTION_N205_DBG_STOP_ON_RESET_POS            8
#define COM_N205_FUNCTION_N205_OVERRIDE_DM_SLEEP_BIT            ((uint32_t)0x00000040)
#define COM_N205_FUNCTION_N205_OVERRIDE_DM_SLEEP_POS            6
#define COM_N205_FUNCTION_N205_DBG_STOP_BOOT_BIT                ((uint32_t)0x00000010)
#define COM_N205_FUNCTION_N205_DBG_STOP_BOOT_POS                4
#define COM_N205_FUNCTION_N205_DBG_STOP_BIT                     ((uint32_t)0x00000004)
#define COM_N205_FUNCTION_N205_DBG_STOP_POS                     2
#define COM_N205_FUNCTION_RESERVED_MASK                         ((uint32_t)0x00000003)
#define COM_N205_FUNCTION_RESERVED_LSB                          0
#define COM_N205_FUNCTION_RESERVED_WIDTH                        ((uint32_t)0x00000002)

#define COM_N205_FUNCTION_N205_DBG_STOP_ON_RESET_RST            0x0
#define COM_N205_FUNCTION_N205_OVERRIDE_DM_SLEEP_RST            0x0
#define COM_N205_FUNCTION_N205_DBG_STOP_BOOT_RST                0x0
#define COM_N205_FUNCTION_N205_DBG_STOP_RST                     0x0
#define COM_N205_FUNCTION_RESERVED_RST                          0x0

__INLINE static void com_n205_function_pack(uint8_t n205dbgstoponreset, uint8_t n205overridedmsleep, uint8_t n205dbgstopboot, uint8_t n205dbgstop)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)n205dbgstoponreset << 8) | ((uint32_t)n205overridedmsleep << 6) | ((uint32_t)n205dbgstopboot << 4) | ((uint32_t)n205dbgstop << 2));
}

__INLINE static void com_n205_function_unpack(uint8_t* n205dbgstoponreset, uint8_t* n205overridedmsleep, uint8_t* n205dbgstopboot, uint8_t* n205dbgstop, uint8_t* reserved)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *n205dbgstoponreset = (localVal & ((uint32_t)0x00000100)) >> 8;
    *n205overridedmsleep = (localVal & ((uint32_t)0x00000040)) >> 6;
    *n205dbgstopboot = (localVal & ((uint32_t)0x00000010)) >> 4;
    *n205dbgstop = (localVal & ((uint32_t)0x00000004)) >> 2;
    *reserved = (localVal & ((uint32_t)0x00000003)) >> 0;
}

__INLINE static uint8_t com_n205_function_n205_dbg_stop_on_reset_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000100)) >> 8);
}

__INLINE static void com_n205_function_n205_dbg_stop_on_reset_setf(uint8_t n205dbgstoponreset)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000100)) | ((uint32_t)n205dbgstoponreset << 8));
}

__INLINE static uint8_t com_n205_function_n205_override_dm_sleep_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000040)) >> 6);
}

__INLINE static void com_n205_function_n205_override_dm_sleep_setf(uint8_t n205overridedmsleep)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000040)) | ((uint32_t)n205overridedmsleep << 6));
}

__INLINE static uint8_t com_n205_function_n205_dbg_stop_boot_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000010)) >> 4);
}

__INLINE static void com_n205_function_n205_dbg_stop_boot_setf(uint8_t n205dbgstopboot)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000010)) | ((uint32_t)n205dbgstopboot << 4));
}

__INLINE static uint8_t com_n205_function_n205_dbg_stop_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000004)) >> 2);
}

__INLINE static void com_n205_function_n205_dbg_stop_setf(uint8_t n205dbgstop)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (_FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION_OFFSET + FEMTO_REG_COM_BASE_ADDR) & ~((uint32_t)0x00000004)) | ((uint32_t)n205dbgstop << 2));
}

 /**
 * @brief N205_FUNCTION1 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  09:00         n205_hart_id   0b0
 * </pre>
 */
#define FEMTO_REG_COM_N205_FUNCTION1_OFFSET 0x00000050


__INLINE static uint32_t com_n205_function1_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_n205_function1_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_N205_FUNCTION1_N205_HART_ID_MASK                     ((uint32_t)0x000003FF)
#define COM_N205_FUNCTION1_N205_HART_ID_LSB                      0
#define COM_N205_FUNCTION1_N205_HART_ID_WIDTH                    ((uint32_t)0x0000000A)

#define COM_N205_FUNCTION1_N205_HART_ID_RST                      0x0

__INLINE static void com_n205_function1_pack(uint16_t n205hartid)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION1_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)n205hartid << 0));
}

__INLINE static void com_n205_function1_unpack(uint8_t* n205hartid)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION1_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *n205hartid = (localVal & ((uint32_t)0x000003FF)) >> 0;
}

__INLINE static uint16_t com_n205_function1_n205_hart_id_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION1_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x000003FF)) >> 0);
}

__INLINE static void com_n205_function1_n205_hart_id_setf(uint16_t n205hartid)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION1_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)n205hartid << 0);
}

 /**
 * @brief N205_FUNCTION2 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00    n205_reset_vector   0b0
 * </pre>
 */
#define FEMTO_REG_COM_N205_FUNCTION2_OFFSET 0x00000054


__INLINE static uint32_t com_n205_function2_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_n205_function2_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_N205_FUNCTION2_N205_RESET_VECTOR_MASK                ((uint32_t)0xFFFFFFFF)
#define COM_N205_FUNCTION2_N205_RESET_VECTOR_LSB                 0
#define COM_N205_FUNCTION2_N205_RESET_VECTOR_WIDTH               ((uint32_t)0x00000020)

#define COM_N205_FUNCTION2_N205_RESET_VECTOR_RST                 0x0

__INLINE static void com_n205_function2_pack(uint32_t n205resetvector)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION2_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)n205resetvector << 0));
}

__INLINE static void com_n205_function2_unpack(uint8_t* n205resetvector)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION2_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *n205resetvector = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_n205_function2_n205_reset_vector_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_N205_FUNCTION2_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_n205_function2_n205_reset_vector_setf(uint32_t n205resetvector)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_N205_FUNCTION2_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)n205resetvector << 0);
}

 /**
 * @brief SPI_MARK register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *     00             spi_mark   0
 * </pre>
 */
#define FEMTO_REG_COM_SPI_MARK_OFFSET 0x00000058


__INLINE static uint32_t com_spi_mark_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_SPI_MARK_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_spi_mark_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_MARK_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_SPI_MARK_SPI_MARK_BIT                          ((uint32_t)0x00000001)
#define COM_SPI_MARK_SPI_MARK_POS                          0

#define COM_SPI_MARK_SPI_MARK_RST                          0x0

__INLINE static void com_spi_mark_pack(uint8_t spimark)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_MARK_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)spimark << 0));
}

__INLINE static void com_spi_mark_unpack(uint8_t* spimark)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_MARK_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *spimark = (localVal & ((uint32_t)0x00000001)) >> 0;
}

__INLINE static uint8_t com_spi_mark_spi_mark_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_SPI_MARK_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0x00000001)) >> 0);
}

__INLINE static void com_spi_mark_spi_mark_setf(uint8_t spimark)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_SPI_MARK_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)spimark << 0);
}

 /**
 * @brief NEW_ADD_REG4 register definition
 * <pre>
 *   Bits           Field Name   Reset Value
 *  -----   ------------------   -----------
 *  31:00        new_add_reg_4   0b0
 * </pre>
 */
#define FEMTO_REG_COM_NEW_ADD_REG4_OFFSET 0x0000005C


__INLINE static uint32_t com_new_add_reg4_get(void)
{
    return _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);
}

__INLINE static void com_new_add_reg4_set(uint32_t value)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR, value);
}

// field definitions
#define COM_NEW_ADD_REG4_NEW_ADD_REG_4_MASK                    ((uint32_t)0xFFFFFFFF)
#define COM_NEW_ADD_REG4_NEW_ADD_REG_4_LSB                     0
#define COM_NEW_ADD_REG4_NEW_ADD_REG_4_WIDTH                   ((uint32_t)0x00000020)

#define COM_NEW_ADD_REG4_NEW_ADD_REG_4_RST                     0x0

__INLINE static void com_new_add_reg4_pack(uint32_t newaddreg4)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR,  ((uint32_t)newaddreg4 << 0));
}

__INLINE static void com_new_add_reg4_unpack(uint8_t* newaddreg4)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);

    *newaddreg4 = (localVal & ((uint32_t)0xFFFFFFFF)) >> 0;
}

__INLINE static uint32_t com_new_add_reg4_new_add_reg_4_getf(void)
{
    volatile uint32_t localVal = _FEMTO_REG_RD(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET + FEMTO_REG_COM_BASE_ADDR);
    return ((localVal & ((uint32_t)0xFFFFFFFF)) >> 0);
}

__INLINE static void com_new_add_reg4_new_add_reg_4_setf(uint32_t newaddreg4)
{
    _FEMTO_REG_WR(FEMTO_REG_COM_NEW_ADD_REG4_OFFSET+ FEMTO_REG_COM_BASE_ADDR, (uint32_t)newaddreg4 << 0);
}


#endif // _FEMTO_REG_COM_H_

