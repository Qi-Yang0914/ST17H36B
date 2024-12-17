

C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/arch/register
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/inc

LIB_PATH := $(NUCLEI_SDK_ROOT)/lib
LIB_NAME ?= rf
LDFLAGS += -L$(LIB_PATH) -l$(LIB_NAME)



#ble and sub modules
COMPON_BLE ?= 0
ifeq ($(COMPON_BLE),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/include
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/controller
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/hci
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/host

COMPON_BLE_CONTROLLER ?= 0
ifeq ($(COMPON_BLE_CONTROLLER),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/controller
endif

COMPON_BLE_HCI ?= 0
ifeq ($(COMPON_BLE_HCI),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/hci
endif

COMPON_BLE_HOST ?= 0
ifeq ($(COMPON_BLE_HOST),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/ble/host
endif

#endif COMPON_BLE
endif

#coremark lib
COMPON_COREMARK ?= 0
ifeq ($(COMPON_COREMARK),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/coremark
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/coremark
endif


#femto rom driver
COMPON_DRIVER_ROM ?= 0
ifeq ($(COMPON_DRIVER_ROM),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/driver_rom/include

COMPON_DRIVER_UART ?= 0
ifeq ($(COMPON_DRIVER_UART),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/uart_rom.c
endif

COMPON_DRIVER_CLOCK ?= 0
ifeq ($(COMPON_DRIVER_CLOCK),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/clock_rom.c
endif

COMPON_DRIVER_EFUSE ?= 0
ifeq ($(COMPON_DRIVER_EFUSE),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/efuse_rom.c
endif

COMPON_DRIVER_GPIO ?= 0
ifeq ($(COMPON_DRIVER_GPIO),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/gpio_rom.c
endif

COMPON_DRIVER_INTERRUPT ?= 0
ifeq ($(COMPON_DRIVER_INTERRUPT),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/interr_rom.c
endif

COMPON_DRIVER_IRQ ?= 0
ifeq ($(COMPON_DRIVER_IRQ),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/irq_rom.c
endif

COMPON_DRIVER_JUMP_FUN ?= 0
ifeq ($(COMPON_DRIVER_JUMP_FUN),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/jump_function_rom.c
endif

COMPON_DRIVER_LOG ?= 0
ifeq ($(COMPON_DRIVER_LOG),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/log_rom.c
endif

COMPON_DRIVER_I2C ?= 0
ifeq ($(COMPON_DRIVER_I2C),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/i2c_rom.c
endif

COMPON_DRIVER_OTP ?= 0
ifeq ($(COMPON_DRIVER_OTP),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/otp_rom.c
endif

COMPON_DRIVER_PWM ?= 0
ifeq ($(COMPON_DRIVER_PWM),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/pwm_rom.c
endif

COMPON_DRIVER_PWRMGR ?= 0
ifeq ($(COMPON_DRIVER_PWRMGR),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/pwrmgr_rom.c
endif

COMPON_DRIVER_SPI ?= 0
ifeq ($(COMPON_DRIVER_SPI),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/spi_lite.c
endif

COMPON_DRIVER_TIMER ?= 0
ifeq ($(COMPON_DRIVER_TIMER),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/timer_rom.c
endif

COMPON_DRIVER_EEPROM ?= 0
ifeq ($(COMPON_DRIVER_EEPROM),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/eeprom.c
endif

COMPON_DRIVER_USB ?= 0
ifeq ($(COMPON_DRIVER_USB),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/usb_hal_pcd.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/usb_pcd.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/usb_setup_req.c
endif

COMPON_DRIVER_WDT ?= 0
ifeq ($(COMPON_DRIVER_WDT),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/watchdog_rom.c
endif

COMPON_DRIVER_EFUSE ?= 0
ifeq ($(COMPON_DRIVER_EFUSE),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/efuse_rom.c
endif

COMPON_DRIVER_SPIF ?= 0
ifeq ($(COMPON_DRIVER_SPIF),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/spif_rom.c
endif

# ms moti hub driv
COMPON_DRIVER_MSKB ?= 0
ifeq ($(COMPON_DRIVER_MSKB),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/mskb_fw.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/fct3065.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/fct3065_xyd.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/mx8650a.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/motion_sensor.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/whls.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/mskb_advt_scan_data.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver_rom/source/mskb_usb_dev_data.c
endif

#endif COMPON_DRIVER_ROM
endif

COMPON_BLE_SLBOTA ?= 0
ifeq ($(COMPON_BLE_SLBOTA),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/slb/slb_app.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/ppsp/ppsp_serv.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/ppsp/ppsp_impl.c
endif

COMPON_BLE_SBKOTA ?= 0
ifeq ($(COMPON_BLE_SBKOTA),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/ota_app
C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/ota_app/ota_app_service.c
endif

#application layer driver
COMPON_DRIVER ?= 0

ifeq ($(COMPON_DRIVER),1)

ifneq ($(LINK_NO_RELAX), 1)
$(error LINK_NO_RELAX should be 1)
endif
ifneq ($(COMPON_DRIVER_ROM), 0)
$(error COMPON_DRIVER_ROM should be 0)
endif

C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/driver/include
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/gpio.c

COMPON_DRIVER_UART ?= 0
ifeq ($(COMPON_DRIVER_UART),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/uart.c
endif

COMPON_DRIVER_TIMX ?= 0
ifeq ($(COMPON_DRIVER_TIMX),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/timx.c
endif

COMPON_DRIVER_DMAC ?= 0
ifeq ($(COMPON_DRIVER_DMAC),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/dma.c
endif

COMPON_DRIVER_LOG ?= 0
ifeq ($(COMPON_DRIVER_LOG),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/log.c
endif

COMPON_DRIVER_I2C ?= 0
ifeq ($(COMPON_DRIVER_I2C),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/i2c.c
endif

COMPON_DRIVER_PWM ?= 0
ifeq ($(COMPON_DRIVER_PWM),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/pwm.c
endif

COMPON_DRIVER_PWRMGR ?= 0
ifeq ($(COMPON_DRIVER_PWRMGR),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/pwrmgr.c
endif

COMPON_DRIVER_NRZ ?= 0
ifeq ($(COMPON_DRIVER_NRZ),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/nrz.c
endif

COMPON_DRIVER_SPI ?= 0
ifeq ($(COMPON_DRIVER_SPI),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/spi.c
endif

COMPON_DRIVER_WDT ?= 0
ifeq ($(COMPON_DRIVER_WDT),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/watchdog.c
endif

COMPON_DRIVER_USB ?= 0
ifeq ($(COMPON_DRIVER_USB),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/usb_util.c
endif

COMPON_DRIVER_TICK ?= 0
ifeq ($(COMPON_DRIVER_TICK),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/systick.c
endif

COMPON_DRIVER_FLASH ?= 0
ifeq ($(COMPON_DRIVER_FLASH),1)
C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/flash.c
endif

C_SRCS += $(NUCLEI_SDK_ROOT)/components/board/board_init.c

C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/ota/ota_version.c

#endif COMPON_DRIVER
endif


COMPON_LIB_DWC ?= 0
ifeq ($(COMPON_LIB_DWC),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/dwc
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/dwc
endif

C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/secure
COMPON_LIB_SECURE ?= 0
ifeq ($(COMPON_LIB_DWC),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/secure
endif

COMPON_LIB_CRC16 ?= 0
ifeq ($(COMPON_LIB_CRC16),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/crc16
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/crc16
endif

#default include OSAL h file
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/osal/include
COMPON_OSAL ?= 0
ifeq ($(COMPON_OSAL),1)
C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components/osal/source
endif

COMPON_BLE_SLBOTA ?= 0
ifeq ($(COMPON_BLE_SLBOTA),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/slb
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/ppsp
endif

COMPON_FS ?= 0
ifeq ($(COMPON_FS),1)
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/fs
endif
#profile can be imported by specified application
#COMPON_ ?= 0
#ifeq ($(COMPON_),1)
#C_SRCDIRS += $(NUCLEI_SDK_ROOT)/components
#endif