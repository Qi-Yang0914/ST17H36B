#ifndef DMA_H
#define DMA_H

#include "types.h"

#ifdef __cplusplus
extern "C"
{
#endif

/** Burst size in Source and Destination definitions */
#define DMA_BSIZE_1 ((0UL))   /**< Burst size = 1 */
#define DMA_BSIZE_4 ((1UL))   /**< Burst size = 4 */
#define DMA_BSIZE_8 ((2UL))   /**< Burst size = 8 */
#define DMA_BSIZE_16 ((3UL))  /**< Burst size = 16 */
#define DMA_BSIZE_32 ((4UL))  /**< Burst size = 32 */
#define DMA_BSIZE_64 ((5UL))  /**< Burst size = 64 */
#define DMA_BSIZE_128 ((6UL)) /**< Burst size = 128 */
#define DMA_BSIZE_256 ((7UL)) /**< Burst size = 256 */

/** Width in Source transfer width and Destination transfer width definitions */
#define DMA_WIDTH_BYTE ((0UL))     /**< Width = 1 byte */
#define DMA_WIDTH_HALFWORD ((1UL)) /**< Width = 2 bytes */
#define DMA_WIDTH_WORD ((2UL))     /**< Width = 4 bytes */
#define DMA_WIDTH_2WORD ((3UL))    /**< Width = 8 bytes */
#define DMA_WIDTH_4WORD ((4UL))    /**< Width = 16 bytes */
#define DMA_WIDTH_8WORD ((5UL))    /**< Width = 32 bytes */

/** DMAC Address Increment definitions */
#define DMA_INC_INC ((0UL))  /**< Increment */
#define DMA_INC_DEC ((1UL))  /**< Decrement */
#define DMA_INC_NCHG ((2UL)) /**< No change */

/**
    @}
*/


/* Private Macros ------------------------------------------------------------- */
/** @defgroup GPDMA_Private_Macros GPDMA Private Macros
    @{
*/

/* --------------------- BIT DEFINITIONS -------------------------------------- */
/*********************************************************************//**
    Macro defines for DMA Interrupt Tfr Clear register
 **********************************************************************/
#define DMA_DMACIntTfrClr_Ch(n)     (((1UL<<n)&0xFF))

/*********************************************************************//**
    Macro defines for DMA Enabled Channel register
 **********************************************************************/
#define DMA_DMACEnbldChns_Ch(n)     (((1UL<<n)&0xFF))

/*********************************************************************/ /**
     Macro defines for DMA Configuration register
  **********************************************************************/
#define DMA_DMAC_E ((0x01))                                             /**< DMA Controller enable*/
#define DMA_DMAC_D ((0x00))                                             /**< DMA Controller disable*/
#define DMA_DMAC_INT_E ((0x01))                                         /**< DMA Controller Interrupt enable*/

/*********************************************************************//**
    Macro defines for DMA channel control registers
 **********************************************************************/
/** Transfer size*/
#define DMA_DMACCxControl_TransferSize(n) (n & 0xFFF)
/** Source burst size*/
#define DMA_DMACCxControl_SMSize(n) (((n & 0x07) << 14))
/** Destination burst size*/
#define DMA_DMACCxControl_DMSize(n) (((n & 0x07) << 11))
/** Source transfer width*/
#define DMA_DMACCxControl_SWidth(n) (((n & 0x07) << 4))
/** Destination transfer width*/
#define DMA_DMACCxControl_DWidth(n) (((n & 0x07) << 1))
/** Source increment*/
#define DMA_DMACCxControl_SInc(n) (((n & 0x03) << 9))
/** Destination increment*/
#define DMA_DMACCxControl_DInc(n) (((n & 0x03) << 7))

/*********************************************************************/ /**
     Macro defines for DMA Interrupt Tfr Clear register
  **********************************************************************/
/** DMAC channel write bit enable*/
#define DMA_DMACCxConfig_E(n) ((0x100UL << n))
/** DMAC channel int mask bit enable*/
#define DMA_DMACCxIntMask_E(n) ((0x100UL << n))

/** Source peripheral*/
#define DMA_DMACCxConfig_SrcPeripheral(n)       (((n&0x1F)))
/** Destination peripheral*/
#define DMA_DMACCxConfig_DestPeripheral(n)      (((n&0x1F)<<4))
/** This value indicates the type of transfer*/
#define DMA_DMACCxConfig_TransferType(n)        (((n&0x7)<<20))
/** Source Master Select*/
#define DMA_DMACCxSMS_Master(n)                 ((n<<25))
/** Destination Master Select*/
#define DMA_DMACCxDMS_Master(n)                 ((n<<23))
/** Autoreload mode enable (DST and SRC)*/
#define DMA_DMACCxReloadDST_E(DST)              ((BIT(31)))
#define DMA_DMACCxReloadSRC_E(SRC)              ((BIT(30)))

/**
    @}
*/
#define DMA_TRANSFERTYPE_M2M ((0UL))
/** DMAC Transfer type definitions: Memory to peripheral - DMA control */
#define DMA_TRANSFERTYPE_M2P ((1UL))
/** DMAC Transfer type definitions: Peripheral to memory - DMA control */
#define DMA_TRANSFERTYPE_P2M ((2UL))
/** DMAC Source peripheral to destination peripheral - DMA control */
#define DMA_TRANSFERTYPE_P2P ((3UL))

#define DMA_GET_MAX_TRANSPORT_SIZE(ch)      (0xfff)


typedef enum
{
    DMA_AHB_MASTER_1 = 0,//               ((0UL))           /*MASTER NUM:1*/
    DMA_AHB_MASTER_2 = 1,//               ((1UL))           /*MASTER NUM:2*/
} DMA_NUM_MASTER_e;

typedef enum
{
    DMA_CONN_MEM = 0,             //  ((0))           /*memory*/
    DMA_CONN_NRZ1_Tx = 1,         //  ((0UL))         /** NRZ1 Tx */
    DMA_CONN_SPIF_Rx = 3,         //  ((2UL))         /** SPIF Rx */
    DMA_CONN_SPI0_Tx = 5,         //  ((4UL))         /** SPI0 Tx */
    DMA_CONN_SPI0_Rx = 6,         //  ((5UL))         /** SPI0 Rx */
    DMA_CONN_TIMx1_TRx = 7,       //  ((6UL))         /** TIMx1 TRx */
    DMA_CONN_ADCC_VOICE_Rx = 8,   //  ((7UL))         /** ADCC or VOICE Rx */
    DMA_CONN_UART0_Tx = 9,        //  ((8UL))         /** UART0 Tx */
    DMA_CONN_UART0_Rx = 10,       //  ((9UL))         /** UART0 Rx */
} DMA_CONN_e;

typedef enum
{
    DMA_CH_0 = 0,
    DMA_CH_NUM,
} DMA_CH_t;
typedef void (*DMA_Hdl_t)(DMA_CH_t);
typedef struct
{
    DMA_CH_t    dma_channel;
    DMA_Hdl_t   evt_handler;
} HAL_DMA_t;
/**
    @brief DMAC callback definition
*/
typedef struct
{
    uint8_t init_ch;
    uint8_t xmit_busy;
    uint8_t interrupt;
    DMA_Hdl_t evt_handler;
} DMA_CH_Ctx_t;

/**
    @brief DMAC Channel configuration structure type definition
*/
typedef struct
{
    uint32_t transf_size; /**< Length/Size of transfer */

    uint8_t sinc;
    uint8_t src_tr_width;
    uint8_t src_msize;
    uint8_t src_reload_en;
    uint32_t src_addr;

    uint8_t dinc;
    uint8_t dst_tr_width;
    uint8_t dst_msize;
    uint8_t dst_reload_en;
    uint32_t dst_addr;

    uint8_t transfertype;
    uint8_t handshaking;
    bool enable_int;
} DMA_CH_CFG_t;

int hal_dma_init_channel(HAL_DMA_t cfg);
int hal_dma_init(void);
int hal_dma_config_channel(DMA_CH_t ch, DMA_CH_CFG_t *cfg);
int hal_dma_deinit(void);
int hal_dma_start_channel(DMA_CH_t ch);
int hal_dma_stop_channel(DMA_CH_t ch);

extern void* memset(void *, int,  size_t);
#ifdef __cplusplus
}
#endif

#endif
/**
    @}
*/

/* --------------------------------- End Of File ------------------------------ */
