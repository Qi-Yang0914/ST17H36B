TARGET = fs

NOGC = 0
#STDCLIB = newlib_nosys
COMMON_FLAGS := -Os
COMMON_FLAGS += -DADV_NCONN_CFG=0x01  -DADV_CONN_CFG=0x02  -DSCAN_CFG=0x04   -DINIT_CFG=0x08 -DBROADCASTER_CFG=0x01 -DOBSERVER_CFG=0x02  -DPERIPHERAL_CFG=0x04  -DCENTRAL_CFG=0x08 
COMMON_FLAGS += -DOSAL_CBTIMER_NUM_TASKS=1 -DHCI_TL_NONE=1 -DOSALMEM_METRICS=0 -DDEBUG_LEVEL=3
COMMON_FLAGS += -DUSE_ROMSYM_ALIAS
COMMON_FLAGS += -msave-restore -fno-unroll-loops
COMMON_FLAGS += -DHOST_CONFIG=PERIPHERAL_CFG
COMMON_FLAGS += -DCFG_SLEEP_MODE=PWR_MODE_NO_SLEEP
COMMON_FLAGS += -DLARGE_HEAP_SIZE=256


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
COMPON_FS = 1
COMPON_LIB_CRC16 = 1
COMPON_DRIVER_LOG = 1

APP_ASM_ENTRY = $(NUCLEI_SDK_ROOT)/SoC/femto_iot/Common/Source/GCC/startup_femto_app.S


LINKER_SCRIPT = fs_flash.ld

LDFLAGS += $(NUCLEI_SDK_ROOT)/misc/femto_rom.elf.riscvsym

# profile 
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/fs/fs.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/fs/fs_autotest.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/fs/fs_shadow.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/fs/fs_test.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/fs/fsr_raid.c
C_SRCS += $(NUCLEI_SDK_ROOT)/components/libraries/cli/cliface.c

# driver
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/libraries/cli
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ethermind/osal/src/phyos
C_INCDIRS += $(NUCLEI_SDK_ROOT)/components/ethermind/platforms/phy6200

# board init
#C_SRCS += $(NUCLEI_SDK_ROOT)/components/board/board_init.c
#COMMON_FLAGS += -DLARGE_HEAP_SIZE=512

include $(NUCLEI_SDK_ROOT)/components/build.mk

ifeq ($(OLD) , )
include $(NUCLEI_SDK_ROOT)/Build2/Makefile.base
else
include $(NUCLEI_SDK_ROOT)/Build/Makefile.base
endif

