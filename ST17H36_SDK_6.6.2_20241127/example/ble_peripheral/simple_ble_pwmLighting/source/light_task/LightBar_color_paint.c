#include "rom_sym_def.h"
#include "bcomdef.h"
#include "lightBar_color_paint.h"
#include "clock.h"
#include "osal.h"


LightPixel_St LightBar_pixel;

struct_rgb_mode  RGB_data={

.SPI_LED_NUMABLE_TICK=LED_REAL_LINE_NUM, //实际灯珠个数
.RGB_brightness= 500, //50% 

};

struct_device_all device_all_data =
{
    .app_data               = {0},   //APP data
    .app_data_len           = 0,
    .ble_connect_state      = 0,   //蓝牙连接状态
    .onoff_status           = DEVICE_POWERON,    //设备开关
    .light_linear           = 2,
    .light_state            = 0,      //灯控状态  0:固定幻彩效果  1:声控模式   2:色盘调色
    .light_music_mode       = 1,  //声控模式
    .light_music_level      = 0,
    .light_music_speed      = 1,  //速度定义
    .app_increase_set       = 0,  //声控灵敏度
    .light_speed            = 5,     //速度
    .light_mode             = 24,     //模式
    .app_run_id             = 0,               //当前运行ID
};

const  uint16 led_hue_color[8] = {RED_COLOR,ORA_COLOR,YEL_COLOR,GRE_COLOR,CYA_COLOR,BLU_COLOR,PUR_COLOR,0};
const  uint16 led_hue_staur[8] = {1000,1000,1000,1000,1000,1000,1000,0};

// RGB, RBG, GRB, GBR, BRG, BGR  
const uint8 lightBar_line[6][3] =    {{0,1,2} /*RGB*/,  \
	                                  {0,2,1} /*RBG*/,  \
									  {1,0,2} /*GRB*/,  \
	                                  {1,2,0} /*GBR*/,  \
									  {2,0,1} /*BRG*/,  \
									  {2,1,0} /*BGR*/};



#define DISK_WIRTE  40   //色盘白光亮度
//-------------------------HSV 转RGB-----------------------------//
void hsv_to_rgb(uint16 h,uint16 s,uint16 v,uint8* R,uint8* G,uint8* B)  //HSV 转RGB
{
    uint32 H,C,V;
    uint32 X,Y,Z;
    uint32 temp_r,temp_g,temp_b;

    if(h>=360)
    {
        h = 0;
    }

    if(s == 0)
    {
        *R = 102 * v/1000;
        *G = 102 * v/1000;
        *B = 102 * v/1000;;
    }
    else
    {
        H = h*1000/60;
        //C = H%1000;
        C = H- (H/1000)*1000;
        X = v*(1000 - s);
        Y = v * (1000 - (s*C/1000));
        Z = v * (1000 - (s*(1000-C))/1000);
        h = h/60;
        V = v*1000;

        switch(h)
        {
        case 0 :
            temp_r = V;
            temp_g = Z;
            temp_b = X;
            break;

        case 1 :
            temp_r = Y;
            temp_g = V;
            temp_b = X;
            break;

        case 2 :
            temp_r = X;
            temp_g = V;
            temp_b = Z;
            break;

        case 3 :
            temp_r = X;
            temp_g = Y;
            temp_b = V;
            break;

        case 4 :
            temp_r = Z;
            temp_g = X;
            temp_b = V;
            break;

        case 5 :
            temp_r = V;
            temp_g = X;
            temp_b = Y;
            break;

        default:
            break;
        }

        *R = (uint8)((temp_r *255)/1000000);
        *G = (uint8)((temp_g *255)/1000000);
        *B = (uint8)((temp_b *255)/1000000);
    }
}

