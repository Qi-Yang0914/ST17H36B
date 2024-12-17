#ifndef _USB_HAL_PCD_H_
#define _USB_HAL_PCD_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "usb_def.h"
#include "usb_hw_def.h"

#define PCD_IN_EP_TX_FIFO_DEPTH      (16)   /*! 256x4 = 1024 */
#define PCD_OUT_EP_RX_FIFO_DEPTH      (16)   /*! 256x4 = 1024 */

#define USB_HW_EP_NUM 5


enum{
    USB_CB_SOF = 0,
    USB_CB_IN,  //need not processing
    USB_CB_OUT,
    USB_CB_SI,  //set interface
    USB_CB_UR,  //usb reset
    USB_CB_US,  //usb suspend

    USB_CB_TXQ, //tx queue for app
    USB_CB_TXDQ, //tx dqueue for app


};


typedef enum
{
	USB_CONTROL_TRANSFER   = 0x0,
	USB_ISO_TRANSFER       = 0x1,
	USB_BULK_TRANSFER      = 0x2,
	USB_INTR_TRANSFER      = 0x3
}usb_transfer_type_t;

typedef enum
{
	USB_DMA_BURST_SZ_4     = 0x2,
	USB_DMA_BURST_SZ_16    = 0x4,
	USB_DMA_BURST_SZ_32    = 0x5,
	USB_DMA_BURST_SZ_64    = 0x6,
	USB_DMA_BURST_SZ_128   = 0x7,
	USB_DMA_BURST_SZ_256   = 0x8,
	USB_DMA_BURST_SZ_512   = 0x9,
	USB_DMA_BURST_SZ_1024  = 0xA,
}dma_burst_sz_t;

/**
 *
 ** @brief  HAL Status structures definition
 *
 **/

typedef enum
{
	HAL_OK       = 0x00U,
	HAL_ERROR    = 0x01U,
	HAL_BUSY     = 0x02U,
	HAL_TIMEOUT  = 0x03U
}hal_status_t;

typedef enum
{
	HAL_UNLOCKED = 0x00U,
	HAL_LOCKED   = 0x01U
}hal_lock_t;

typedef enum
{
	HAL_PCD_EP_DIR_OUT = 0,
	HAL_PCD_EP_DIR_IN  = 1
}hal_ep_dir_t;

typedef enum
{
	HAL_PCD_EP_TYPE_CTRL = 0,
	HAL_PCD_EP_TYPE_ISOC = 1,
	HAL_PCD_EP_TYPE_BULK = 2,
	HAL_PCD_EP_TYPE_INTR = 3
}hal_ep_type_t;

typedef enum
{
	HAL_PCD_EP0_DISCONNECT       = 0,
	HAL_PCD_EP0_IDLE             = 1,
	HAL_PCD_EP0_IN_DATA_PHASE    = 2,
	HAL_PCD_EP0_OUT_DATA_PHASE   = 3,
	HAL_PCD_EP0_IN_STATUS_PHASE  = 4,
	HAL_PCD_EP0_OUT_STATUS_PHASE = 5,
	HAL_PCD_EP0_STALL            = 6
}hal_pcd_ep0_status_t;

typedef struct usb_hid_pkg
{
    uint32_t     len;
    uint32_t*    wdata;
}usb_hid_pkg_t;


/*FS OTG-TLI CSR IN Endpoint(Device Mode)*/
typedef struct{
	__IO uint32_t    EP_IN_CTL;
	__IO uint32_t    EP_IN_STS;
	__IO uint32_t    EP_IN_FIFO_SZ;
	__IO uint32_t    EP_IN_TRANS_SZ;
}AP_USB_EP_IN_TypeDef;

/*FS OTG-TLI CSR OUT Endpoint(Device Mode)*/
typedef struct{
	__IO uint32_t    EP_OUT_CTL;		//0x44100 + x*16
	__IO uint32_t    RSVD[3];
}AP_USB_EP_OUT_TypeDef;

typedef struct{
    union{
        AP_USB_EP_IN_TypeDef in;
        AP_USB_EP_OUT_TypeDef out;
    };
}AP_USB_EP_TypeDef;

typedef struct{
	uint8_t  num;
	uint8_t  is_in;
	uint8_t  is_iso;
	uint8_t  is_stall;
	uint8_t  type;
	bool     sent_zlp;
	uint16_t max_packet;
	uint16_t fifo_depth;
	uint8_t  *xfer_buf;
	uint32_t xfer_length;  /*all of data length*/
	uint32_t packet_len;   /*current data packet length*/
	uint32_t xfer_cnt;     /*sended data packet length*/
	uint32_t xfer_tmpcnt;  /*sending data packet length*/
	hal_lock_t lock;
}usb_hal_ep_t;

typedef int (*usb_irq_cb_t)(comm_evt_t* pev, uint32_t param);

typedef struct {
	volatile AP_USB_DEV_GLB_TypeDef   *dev_glb_regs;
	volatile AP_USB_EP_TypeDef        *in_ep_regs[USB_HW_EP_NUM];
	volatile AP_USB_EP_TypeDef        *out_ep_regs[USB_HW_EP_NUM];
	volatile AP_USB_DEV_MAC_TypeDef   *mac_ep_regs;
	volatile AP_USB_DIU_TypeDef       *dev_diu_regs;
	volatile AP_USB_TOP_TypeDef       *usb_top_regs;
	volatile uint32_t       *tx_fifo[USB_HW_EP_NUM];
	volatile uint32_t       *rx_fifo[USB_HW_EP_NUM];
	usb_hal_ep_t            *ep;
	hal_pcd_ep0_status_t    ep0_status;
	volatile uint8_t        setup_data[8];
	volatile bool           rx_thd_en;
	volatile uint16_t       rx_thd;
	volatile bool           tx_thd_en;
	volatile uint16_t       tx_thd;


	//uint8_t                 speed;      //FS:3 ; LS:2  ====USB_FS_SPEED_MODE, USB_LS_SPEED_MODE
	uint8_t                 MAX_EP_NUM;
	uint8_t                 MAX_PKT;    //FS:64; LS:8
    //uint8_t                 SELF_PWR;   //USB_CSR_SELF_POWERED, USB_CSR_BUS_POWERED
    //uint8_t                 RMT_WKUP;   //USB_REMOTE_WAKEUP_UNSUPPORT, USB_REMOTE_WAKEUP_SUPOORT
    //uint8_t                 SYNC_FRAME; //USB_SYNC_FRAME_UNSUPPORT, USB_SYNC_FRAME_SUPPORT
    //uint8_t                 CSR_PRG_SUP;
    //uint8_t                 SET_DESC_SUP;
    //uint8_t                 SCALE_DOWN;
    dev_cfg_t               DEV_CFG;

	usb_irq_cb_t cb; //irq callback


    const uint8_t* dev_desc;
    uint8_t dev_desc_len;
    
    const uint8_t* config_desc;
    uint8_t config_desc_len;
    
    const char** string_desc;
    
    const uint8_t** report_desc;
    uint8_t* report_desc_len;
    
    const uint8_t** hid_desc;
    uint8_t* hid_desc_len;

}usb_hal_pcd_t;



static inline void hal_pcd_set_in_ep_transfer_size(usb_hal_pcd_t *hpcd, uint32_t ep_num, uint32_t size)
{
    hpcd->in_ep_regs[ep_num]->in.EP_IN_TRANS_SZ = size;
}

static inline void hal_pcd_out_ep_fifo_ready_set(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    hpcd->out_ep_regs[ep_num]->out.EP_OUT_CTL |= BIT_FIFO_READY;
}

static inline void hal_pcd_out_ep_fifo_ready_clr(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    hpcd->out_ep_regs[ep_num]->out.EP_OUT_CTL &=  ~BIT_FIFO_READY;
}


static inline void  hal_pcd_in_ep_fifo_ready_set(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    //ep_in_ctl.b.FIFO_READY = 1;
    hpcd->in_ep_regs[ep_num]->in.EP_IN_CTL |= BIT_FIFO_READY;
}
static inline void  hal_pcd_in_ep_fifo_ready_clr(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    //ep_in_ctl.b.FIFO_READY = 0;
    hpcd->in_ep_regs[ep_num]->in.EP_IN_CTL &=  ~BIT_FIFO_READY;
}


static inline void  hal_pcd_in_ep_fifo_stall_set(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    //ep_in_ctl.b.FIFO_READY = 1;
    hpcd->in_ep_regs[ep_num]->in.EP_IN_CTL |= BIT_SEND_STALL;
}
static inline void  hal_pcd_in_ep_fifo_stall_clr(usb_hal_pcd_t *hpcd, uint8_t ep_num)
{
    //ep_in_ctl.b.FIFO_READY = 1;
    hpcd->in_ep_regs[ep_num]->in.EP_IN_CTL &= ~BIT_SEND_STALL;
}
static inline void  hal_pcd_enable_in_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num)
{
    dev_glb_ep_int_en_t ep_int_en;

    ep_int_en.d32 = hpcd->dev_glb_regs->DEV_GLB_EP_INT_EN;

    ep_int_en.b.IN_EP_INT_EN |= (1 << ep_num);

    hpcd->dev_glb_regs->DEV_GLB_EP_INT_EN = ep_int_en.d32;

}

static inline void  hal_pcd_disable_in_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num)
{
    dev_glb_ep_int_en_t ep_int_en;

    ep_int_en.d32 = hpcd->dev_glb_regs->DEV_GLB_EP_INT_EN;

    ep_int_en.b.IN_EP_INT_EN &= (~(1 << ep_num));

    hpcd->dev_glb_regs->DEV_GLB_EP_INT_EN = ep_int_en.d32;

}

static inline void clk_set_usb(void)
{
    com_usb_function_clk_48m_en_setf(1);
	pcrm_clkhf_ctl1_en_dig_clk_48m_setf(1);//AP_PCRM->CLKHF_CTL1 |= BIT(14);
	pcrm_clkhf_ctl1_dll_en_setf(1);//AP_PCRM->CLKHF_CTL1 |= BIT(7);
}

//int32_t hal_pcd_enable_in_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num);
//int32_t hal_pcd_disable_in_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num);

//int32_t hal_pcd_enable_out_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num);
//int32_t hal_pcd_disable_out_ep_interrupt(usb_hal_pcd_t *hpcd, uint32_t ep_num);
//int32_t hal_pcd_enable_setup_interrupt(usb_hal_pcd_t *hpcd);
//int32_t hal_pcd_enable_rx_fifo_interrupt(usb_hal_pcd_t *hpcd, uint8_t ep_num);
//int32_t hal_pcd_out_ep_fifo_ready_set(usb_hal_pcd_t *hpcd, uint8_t ep_num);
//int32_t hal_pcd_out_ep_fifo_ready_clr(usb_hal_pcd_t *hpcd, uint8_t ep_num);
//int32_t hal_pcd_in_ep_fifo_ready_set(usb_hal_pcd_t *hpcd, uint8_t ep_num);
//int32_t hal_pcd_in_ep_fifo_ready_clr(usb_hal_pcd_t *hpcd, uint8_t ep_num);
int32_t hal_pcd_ep_dir_set(usb_hal_pcd_t *hpcd, uint8_t ep_num, hal_ep_dir_t dir);
//int32_t hal_pcd_set_in_ep_transfer_size(usb_hal_pcd_t *hpcd, uint32_t ep_num, uint32_t size);
int32_t hal_pcd_ep_info_set(usb_hal_pcd_t *hpcd, uint8_t ep_num, hal_ep_dir_t dir, hal_ep_type_t type, uint16_t max_pkt_sz);
//int32_t  hal_pcd_enable_set_desc_func(usb_hal_pcd_t *hpcd);
//int32_t  hal_pcd_disable_set_desc_func(usb_hal_pcd_t *hpcd);
int32_t hal_pcd_send_data(usb_hal_pcd_t *hpcd, uint8_t ep_num, uint8_t *buf, uint32_t len);
void hal_remote_wakeup(usb_hal_pcd_t *hpcd);
void usb_pin_init(void);
int hal_pcd_init(usb_hal_pcd_t *hpcd);

#ifdef __cplusplus
};
#endif

#endif
