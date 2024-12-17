#ifndef __USB_PCD_H__
#define __USB_PCD_H__

#include "usb_hal_pcd.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HID_REMOTE_WAKEUP_IDLE          0
#define HID_REMOTE_WAKEUP_READY         1
#define HID_REMOTE_WAKEUP_GOING         2


extern uint8_t hid_remote_wakeup_rdy;
extern uint8_t hid_dev_ready;

int pcd_init(usb_hal_pcd_t* handle);
void usb_pcd_svc_rx_endp(usb_hal_pcd_t * hpcd, uint16_t ep_num);
void usb_hid_tx_send(usb_hal_pcd_t *hpcd);
void USB_IRQHandler(void);
#ifdef __cplusplus
}
#endif

#endif    /*  __USB_PCD_H__ */
