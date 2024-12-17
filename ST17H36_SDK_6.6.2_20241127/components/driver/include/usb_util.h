


#ifndef __USB_UTILITY_H_
#define __USB_UTILITY_H_
#include "types.h"
#include "usb_usr_cfg.h"



#define usbDeviceTx_EVT								   0x0100
#define usbDeviceRx_EVT								   0x0200


extern int usb_irq_cb_comm(comm_evt_t* pev, uint32_t param);


#endif /*__USB_UTILITY_H_*/

