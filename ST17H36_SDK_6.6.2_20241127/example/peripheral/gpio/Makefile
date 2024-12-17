TARGET = gpio

NOGC = 0
#STDCLIB = newlib_nosys
COMMON_FLAGS := -Os
COMMON_FLAGS += -DADV_NCONN_CFG=0x01  -DADV_CONN_CFG=0x02  -DSCAN_CFG=0x04   -DINIT_CFG=0x08 -DBROADCASTER_CFG=0x01 -DOBSERVER_CFG=0x02  -DPERIPHERAL_CFG=0x04  -DCENTRAL_CFG=0x08 
COMMON_FLAGS += -DOSAL_CBTIMER_NUM_TASKS=1 -DHCI_TL_NONE=1 -DOSALMEM_METRICS=0 -DDEBUG_LEVEL=3
COMMON_FLAGS += -DUSE_ROMSYM_ALIAS
COMMON_FLAGS += -msave-restore -fno-unroll-loops
COMMON_FLAGS += -DHOST_CONFIG=PERIPHERAL_CFG
COMMON_FLAGS += -DCFG_SLEEP_MODE=PWR_MODE_SLEEP
COMMON_FLAGS += -DLARGE_HEAP_SIZE=1024
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
COMPON_DRIVER_FLASH = 1
#COMPON_DRIVER_ROM = 1
COMPON_DRIVER_PWRMGR = 1
COMPON_DRIVER_GPIO = 1
COMPON_DRIVER_TICK = 1
COMPON_DRIVER_LOG = 1

APP_ASM_ENTRY = $(NUCLEI_SDK_ROOT)/SoC/femto_iot/Common/Source/GCC/startup_femto_app.S

LDTMODE = 0
ifeq ($(LDTMODE),0)
COMMON_FLAGS += -DCFG_EVEVT=0
else ifeq ($(LDTMODE),1)
COMMON_FLAGS += -DTEST_MODE=1
else ifeq ($(LDTMODE),2)
COMMON_FLAGS += -DTEST_MODE=2
else ifeq ($(LDTMODE),3)
COMMON_FLAGS += -DTEST_MODE=3
else ifeq ($(LDTMODE),4)
COMMON_FLAGS += -DCFG_EVEVT=1
endif

LDCFG = 2
ifeq ($(LDCFG),1)
LINKER_SCRIPT = gpio_otp.ld
#LINKER_SCRIPT = $(NUCLEI_SDK_ROOT)/SoC/femto_iot/Board/femto_eval/Source/GCC/gcc_femto_iot_otp.ld
else ifeq ($(LDCFG),2)
#LINKER_SCRIPT = gpio_ram.ld
LINKER_SCRIPT = gpio_ram.ld
else ifeq ($(LDCFG),3)
LINKER_SCRIPT = gpio_flash.ld
endif

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
#C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/driver_rom/include

# board init
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/board/board_init.c
#COMMON_FLAGS += -DLARGE_HEAP_SIZE=512

include $(NUCLEI_SDK_ROOT)/components/build.mk

ifeq ($(OLD) , )
include $(NUCLEI_SDK_ROOT)/Build2/Makefile.base
else
include $(NUCLEI_SDK_ROOT)/Build/Makefile.base
endif

