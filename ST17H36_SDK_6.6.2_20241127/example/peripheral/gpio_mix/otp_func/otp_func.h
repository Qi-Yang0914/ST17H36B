#ifndef OTP_FUNC_H_
#define OTP_FUNC_H_
#include "bus_dev.h"

typedef int (*otp_Hdl_t) (uint32_t *valu);

typedef struct
{
	uint32_t  para0;
	uint32_t  *para1;
	uint32_t  *para2;
	uint32_t  *glab_val;
	otp_Hdl_t otp_handler;
	
} otp_cfg_p;

void otp_func1(void);
void otp_func2(void);

// typedef struct _otp_cb_para_t{
//   unsigned int   valu;
// }otp_cb_para_t;

// typedef void (*otp_cb_t)(otp_cb_para_t* para);
// void otp_0(uint32_t valu);
// typedef void (* hdl) (uint32_t value0);
// void *otp_0_cb(uint32_t value0);
extern void* memset(void *, int,  size_t);

#endif