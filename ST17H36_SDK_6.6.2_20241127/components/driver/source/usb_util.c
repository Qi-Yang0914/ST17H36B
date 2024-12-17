#include "rom_sym_def.h"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include "log.h"
#include "usb_usr_cfg.h"
#include "usb_util.h"
// #include "usb_hid.h"
#include "OSAL.h"


typedef struct usb_qdata
{
	union{
		uint32_t wdata[USB_MAX_PKG_SIZE/4];
		uint8_t  bdata[USB_MAX_PKG_SIZE];
	};
	uint8_t  size;
}usb_qdata_t;


typedef struct{
    uint8_t         num;            //queued data package number
    usb_qdata_t     qdat[USB_HIDQ_DEEPTH];
}usb_hid_q_t;

usb_hid_q_t usb_ep_tx_q[USB_MAX_EP_NUM-1];
#define __gpio_write(a,b)

extern void usb_user_process_set_interface(void);
extern void usb_user_process_rx_data(uint8_t* data, uint8_t len, uint8_t ep_num);


uint32_t usb_ep_tx_push(usb_hid_q_t* q, uint8_t *buf, uint32_t len)
{
    int32_t ret = HAL_OK;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();

    if(q->num >= USB_HIDQ_DEEPTH){
        ret =  HAL_BUSY;
    }
    else
    {
        int i;
        for(i = q->num; i>0 ; i--){
            osal_memcpy(&(q->qdat[i].bdata[0]), &(q->qdat[i-1].bdata[0]), sizeof(usb_qdata_t));
        }
        osal_memcpy(&(q->qdat[0].bdata[0]), buf, len);
        q->num++;
		q->qdat[0].size =len;
    }

    HAL_EXIT_CRITICAL_SECTION();
    return ret;
}


//usb_qdata_t** usb_ep_tx_pop(usb_hid_q_t* q)
usb_qdata_t* usb_ep_tx_pop(usb_hid_q_t* q)
{
    usb_qdata_t* qdat = NULL;
    _HAL_CS_ALLOC_();
    HAL_ENTER_CRITICAL_SECTION();
    if(q->num){
        q->num --;
        qdat = &(q->qdat[q->num]);
    }
    HAL_EXIT_CRITICAL_SECTION();
    return qdat;
}

extern usb_hal_pcd_t* pcd_handle;

int usb_irq_cb_comm(comm_evt_t* pev, uint32_t param)
{
    extern uint8_t application_TaskID;
    int ret = PPlus_SUCCESS;
    switch(pev->type){
    case USB_CB_SOF:
        osal_set_event(application_TaskID, usbDeviceTx_EVT);
        break;
    case USB_CB_OUT:
        /*data, size ,epnum*/
        usb_user_process_rx_data(pev->data,pev->len, param);
        break;
    case USB_CB_SI:  //set interface
        usb_user_process_set_interface();
        break;
    case USB_CB_US:  //usb suspend
        if(param)//SUSP bit is 1
        {
            hid_remote_wakeup_rdy = HID_REMOTE_WAKEUP_READY;
        }
        else
        {
            hid_remote_wakeup_rdy = HID_REMOTE_WAKEUP_IDLE;
        }
        break;
    case USB_CB_TXQ: //tx queue for app
        ret = usb_ep_tx_push(&usb_ep_tx_q[param-1], pev->data, pev->len);
        break;
    case USB_CB_TXDQ: //tx dqueue for app
    {
        usb_hid_pkg_t* pkt = (usb_hid_pkg_t*)(pev->data);
        usb_qdata_t* qdat;
        pkt->len = 0;
        //check if data_sent is ready
        ep_in_sts_t ep_in_st;
        ep_in_st.d32 = pcd_handle->in_ep_regs[param]->in.EP_IN_STS;

        ep_in_st.b.DATA_SENT = 1;
        //pcd_handle->in_ep_regs[param]->in.EP_IN_STS = ep_in_st.d32;

        qdat = usb_ep_tx_pop(&usb_ep_tx_q[param-1]);
        if(qdat){
            pkt->len = qdat->size;
            pkt->wdata = &(qdat->wdata[0]);
        }
        break;
    }
    default:
        ret = PPlus_ERR_INVALID_PARAM;
        break;

    }
    return ret;
}
