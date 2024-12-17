##### Put your SoC build configurations below #####

BOARD = femto_eval
CORE := n205
BOOT_HARTID = 0

NUCLEI_SDK_SOC_BOARD := $(NUCLEI_SDK_SOC)/Board/$(BOARD)
NUCLEI_SDK_SOC_COMMON := $(NUCLEI_SDK_SOC)/Common

override RISCV_ARCH = rv32imac
override RISCV_ABI = ilp32

COMMON_FLAGS += -DBOOT_HARTID=0


INCDIRS += $(NUCLEI_SDK_SOC_COMMON)/Include


LINKER_SCRIPT ?= $(NUCLEI_SDK_SOC_BOARD)/Source/GCC/gcc_femto_iot_rom.ld

ifeq ($(APP_ASM_ENTRY),)

C_SRCDIRS += $(NUCLEI_SDK_SOC_COMMON)/Source

ASM_SRCS += $(NUCLEI_SDK_SOC_COMMON)/Source/GCC/intexc_femto_iot.S \
		$(NUCLEI_SDK_SOC_COMMON)/Source/GCC/startup_femto_iot.S
else

ASM_SRCS += $(APP_ASM_ENTRY)

endif

# Add extra board related source files and header files
VALID_NUCLEI_SDK_SOC_BOARD := $(wildcard $(NUCLEI_SDK_SOC_BOARD))
ifneq ($(VALID_NUCLEI_SDK_SOC_BOARD),)
INCDIRS += $(VALID_NUCLEI_SDK_SOC_BOARD)/Include
C_SRCDIRS += $(VALID_NUCLEI_SDK_SOC_BOARD)/Source
endif
