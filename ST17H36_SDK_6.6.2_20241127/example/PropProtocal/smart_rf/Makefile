TARGET = srf

NOGC = 0
#STDCLIB = newlib_nosys
COMMON_FLAGS := -Os
COMMON_FLAGS += -DADV_NCONN_CFG=0x01  -DADV_CONN_CFG=0x02  -DSCAN_CFG=0x04   -DINIT_CFG=0x08   -DBROADCASTER_CFG=0x01 -DOBSERVER_CFG=0x02  -DPERIPHERAL_CFG=0x04  -DCENTRAL_CFG=0x08 
COMMON_FLAGS += -DOSAL_CBTIMER_NUM_TASKS=1 -DHCI_TL_NONE=1 -DOSALMEM_METRICS=0 -DDEBUG_LEVEL=3 -DDEF_PPP_AUTOACK_SUPPORT=0
COMMON_FLAGS += -DUSE_ROMSYM_ALIAS
COMMON_FLAGS += -msave-restore -fno-unroll-loops
#COMMON_FLAGS += -DHOST_CONFIG=PERIPHERAL_CFG
COMMON_FLAGS += -DCFG_WDT_ENABLE=0
COMMON_FLAGS += -DCFG_SLEEP_MODE=PWR_MODE_SLEEP
COMMON_FLAGS += -DLARGE_HEAP_SIZE=256
COMMON_FLAGS += -DPMU_HIGH_LDO_DISABLE=1
COMMON_FLAGS += -DDEF_HAS_FLASH


NUCLEI_SDK_ROOT = ../../..

SRCDIRS = ./source 
C_INCDIRS = ./source
INCDIRS = $(NUCLEI_SDK_ROOT)/misc/

#not use gp in application
LINK_NO_RELAX = 1

COMPON_BLE = 1
COMPON_DRIVER = 1
COMPON_DRIVER_PWRMGR = 1
COMPON_DRIVER_GPIO = 1
COMPON_DRIVER_TICK = 1
COMPON_DRIVER_LOG = 1

#COMMON_FLAGS += -DBLE_ENABLE
#COMMON_FLAGS += -DBLE_SIG
#COMMON_FLAGS += -DBLE_MAX_ALLOW_CONNECTION=1
#COMMON_FLAGS += -DBLE_MAX_ALLOW_PKT_PER_EVENT_TX=2
#COMMON_FLAGS += -DBLE_MAX_ALLOW_PKT_PER_EVENT_RX=1
#COMMON_FLAGS += -DBLE_TX_PKT_LEN=31
#COMMON_FLAGS += -DBLE_RX_PKT_LEN=31



APP_ASM_ENTRY = $(NUCLEI_SDK_ROOT)/SoC/femto_iot/Common/Source/GCC/startup_femto_app.S
LINKER_SCRIPT = $(NUCLEI_SDK_ROOT)/example/PropProtocal/smart_rf/smart_rf_otp.ld
#LINKER_SCRIPT = $(NUCLEI_SDK_ROOT)/example/PropProtocal/smart_rf/smart_rf_ramrun.ld
#LINKER_SCRIPT = $(NUCLEI_SDK_ROOT)/example/PropProtocal/smart_rf/smart_rf_flash.ld

LDFLAGS += $(NUCLEI_SDK_ROOT)/misc/femto_rom.elf.riscvsym

# profile 
#C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/Roles
#C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/DevInfo
#C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/profiles/SimpleProfile
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/DevInfo/devinfoservice.c
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/SimpleProfile/simpleGATTprofile.c
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/Roles/peripheral.c
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/profiles/Roles/gapgattserver.c

# driver
# C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/log.c
# C_SRCS += $(NUCLEI_SDK_ROOT)/components/driver/source/gpio.c

include $(NUCLEI_SDK_ROOT)/components/build.mk

ifeq ($(OLD) , )
include $(NUCLEI_SDK_ROOT)/Build2/Makefile.base
else
include $(NUCLEI_SDK_ROOT)/Build/Makefile.base
endif