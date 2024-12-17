

/**************************************************************************************************
  Filename:       lightbar_color_paint.h
  Revised:
  Revision:

  Description:    This file contains the Simple BLE Peripheral sample application
                  definitions and prototypes.


**************************************************************************************************/

#ifndef _LIGHTBAR_COLOR_PAINT_H_
#define _LIGHTBAR_COLOR_PAINT_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include "bcomdef.h"
#include "LightBar_hw_platform.h"

  typedef struct
  {
    uint8 pixel[LED_MAX_NUMBER][3]; // RGB原始数据
  } LightPixel_St;
  extern LightPixel_St LightBar_pixel;

  typedef struct
  {
    uint8 mode_finish_flag; // 模式运行完
    uint8 clear_mode_data;
    uint8 rgb_get_once_data; // 模式开始  获取一次颜色
    uint8 temp_speed_cnt;    // 速度累计

    uint8 temp_delay_flag;
    uint8 temp_delay_time;
    uint8 chioce_color;
    // uint8 rgb_segment_bulb_pixle[500][3];
    uint8 rgb_segment_bulb_pixle[SEGMENT_BULB_MAX_NUM][3];
    uint8 get_pwm_data[3];
    uint16 temp_count11111;
    uint16 temp_count22222;
    uint16 temp_count33333;
    uint16 temp_count44444;
    uint16 temp_subsec_num; // 分段个数

    // 参数设置
    uint16 colorPanelList[8][2];    // 设置颜色
    uint16 segment_backColor[2][2]; // 背景色设置
    union
    {
      uint8 segment_param[5]; // 参数设置
      struct
      {
        uint8 segment_color_num;      // 颜色的个数
        uint8 segment_bulb_num;       // 灯珠个数
        uint8 segment_split_en;       // 是否分段
        uint8 segment_split_num;      // 分段个数
        uint8 segment_split_color_en; // 分段颜色
      };
    };
    // uint8  segment_param[8];         //参数设置
    uint16 segment_number; // 灯珠赋值数

    //
    uint16 SPI_LED_NUMABLE_TICK; // 灯珠设置
    uint16 RGB_hue;              // RGB色度
    uint16 RGB_satur;            // 饱和度
    uint16 RGB_brightness;       // RGB亮度

  } struct_rgb_mode;
  extern struct_rgb_mode RGB_data;

  enum DEVIE_ONOFF_STATUS
  {
    DEVICE_POWEROFF = 0,
    DEVICE_POWERON = 1,

  };

  typedef struct
  {

    uint8 app_data[40]; // APP data
    uint8 app_data_len;
    uint8 ble_connect_state; // 蓝牙连接状态

    uint8 time_week;
    uint8 time_hour;
    uint8 time_minute;
    uint8 time_second;
    uint8 device_time_onoff[2][7]; // 0:定时开  1:定时关
    uint8 rgb_chioce_color;
    uint8 light_onoff_flag; // 开关灯状态
    uint8 rgb_pwm_value[3];

    uint8 onoff_status;     // 设备开关
    uint8 light_linear;     // 灯线序
    uint8 line_0;           // 灯线0
    uint8 line_1;           // 灯线1
    uint8 line_2;           // 灯线2
    uint8 light_mode_state; // 灯控模式  0:固定幻彩效果  1:声控模式   2:色盘调色
    uint8 light_state;      // 灯控状态  0:固定幻彩效果  1:声控模式   2:色盘调色

    uint8 light_music_mode;  // 声控模式
    uint8 light_music_level; // 声控能量值
    uint8 light_music_speed; // 速度定义
    uint8 app_increase_set;  // 声控灵敏度

    uint8 phone_mic_flag;       // 手机麦切换  0:外麦 1:手机麦
    uint8 phone_energy_data[5]; // 保存手机的5个能量点

    uint8 light_speed; // 速度
    uint8 light_mode;  // 模式

    uint8 rgb_brightness;
    uint8 rgb_color_level;
    uint8 app_run_id; // 当前运行ID

  } struct_device_all;
  extern struct_device_all device_all_data; // 当前设备的全部状态标志位

  extern const uint8 lightBar_line[6][3];

#define RED_COLOR 0
#define ORA_COLOR 12
#define YEL_COLOR 60
#define GRE_COLOR 120
#define CYA_COLOR 150
#define BLU_COLOR 240
#define PUR_COLOR 300

#endif
