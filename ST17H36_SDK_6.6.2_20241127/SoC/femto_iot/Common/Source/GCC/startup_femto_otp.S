/*
 * Copyright (c) 2019 Nuclei Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/******************************************************************************
 * \file     startup_femto_iot.S
 * \brief    NMSIS Nuclei N/NX Class Core based Core Device Startup File for
 *  Nuclei Demo SoC which support Nuclei N/NX class cores
 * \version  V1.00
 * \date     17. Dec 2019
 *
 ******************************************************************************/

#include "riscv_encoding.h"
#define 	CONFIG_BASE_ADDR 		0x28100
#define   	INITIAL_STACK_PTR       23
#define		STACK_GET				(CONFIG_BASE_ADDR+INITIAL_STACK_PTR*4)

.macro DECLARE_INT_HANDLER  INT_HDL_NAME
#if defined(__riscv_xlen) && (__riscv_xlen == 32)
    .word \INT_HDL_NAME
#else
    .dword \INT_HDL_NAME
#endif
.endm

    .section .vtable

    .weak MSIP_Handler
    .weak MTIP_Handler
    .weak V1_IRQHandler
    .weak V3_IRQHandler
    .weak V4_IRQHandler
    .weak V7_IRQHandler
    .weak V10_IRQHandler
    .weak V11_IRQHandler
    .weak V12_IRQHandler
    .weak V15_IRQHandler
    .weak V16_IRQHandler
    .weak V19_IRQHandler
    .weak V21_IRQHandler
    .weak V24_IRQHandler
    .weak V27_IRQHandler
    .weak V29_IRQHandler
    .weak V31_IRQHandler

    .globl vector_base
    .type vector_base, @object
    .align 8
vector_base:
#ifndef VECTOR_TABLE_REMAPPED
    j _start                                                /* 0: Reserved, Jump to _start when reset for vector table not remapped cases.*/
    .align LOG_REGBYTES                                     /*    Need to align 4 byte for RV32, 8 Byte for RV64 */
#else
    DECLARE_INT_HANDLER     default_intexc_handler          /* 0: Reserved, default handler for vector table remapped cases */
#endif
    DECLARE_INT_HANDLER     default_intexc_handler          /* 1: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 2: Reserved */
    DECLARE_INT_HANDLER     MSIP_Handler              		/* 3: Machine software interrupt */

    DECLARE_INT_HANDLER     default_intexc_handler          /* 4: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 5: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 6: Reserved */
    DECLARE_INT_HANDLER     MTIP_Handler              		/* 7: Machine timer interrupt */

    DECLARE_INT_HANDLER     default_intexc_handler          /* 8: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 9: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 10: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 11: Reserved */

    DECLARE_INT_HANDLER     default_intexc_handler          /* 12: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 13: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 14: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 15: Reserved */

    DECLARE_INT_HANDLER     default_intexc_handler          /* 16: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 17: Reserved */
    DECLARE_INT_HANDLER     default_intexc_handler          /* 18: Reserved */

    
    DECLARE_INT_HANDLER     default_intexc_handler          /*0 19: Interrupt 19 */
    DECLARE_INT_HANDLER     V1_IRQHandler          /*1 20: Interrupt 20 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*2 21: Interrupt 21 */
    DECLARE_INT_HANDLER     V3_IRQHandler          /*3 22: Interrupt 22 */
    DECLARE_INT_HANDLER     V4_IRQHandler          /*4 23: Interrupt 23 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*5 24: Interrupt 24 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*6 25: Interrupt 25 */
    DECLARE_INT_HANDLER     V7_IRQHandler          /*7 26: Interrupt 26 */

    DECLARE_INT_HANDLER     default_intexc_handler          /*8 27: Interrupt 27 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*9 28: Interrupt 28 */
    DECLARE_INT_HANDLER     V10_IRQHandler          /*10 29: Interrupt 29 */
    DECLARE_INT_HANDLER     V11_IRQHandler          /*11 30: Interrupt 30 */
    DECLARE_INT_HANDLER     V12_IRQHandler          /*12 31: Interrupt 31 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*13 32: Interrupt 32 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*14 33: Interrupt 33 */
    DECLARE_INT_HANDLER     V15_IRQHandler          /*15 34: Interrupt 34 */

    DECLARE_INT_HANDLER     V16_IRQHandler          /*16 35: Interrupt 35 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*17 36: Interrupt 36 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*18 37: Interrupt 37 */
    DECLARE_INT_HANDLER     V19_IRQHandler          /*19 38: Interrupt 38 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*20 39: Interrupt 39 */
    DECLARE_INT_HANDLER     V21_IRQHandler          /*21 40: Interrupt 40 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*22 41: Interrupt 41 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*23 42: Interrupt 42 */

    DECLARE_INT_HANDLER     V24_IRQHandler          /*24 43: Interrupt 43 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*25 44: Interrupt 44 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*26 45: Interrupt 45 */
    DECLARE_INT_HANDLER     V27_IRQHandler          /*27 46: Interrupt 46 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*28 47: Interrupt 47 */
    DECLARE_INT_HANDLER     V29_IRQHandler          /*29 48: Interrupt 48 */
    DECLARE_INT_HANDLER     default_intexc_handler          /*30 49: Interrupt 49 */
    DECLARE_INT_HANDLER     V31_IRQHandler          /*31 50: Interrupt 50 */

    .section .init

    .globl _start
    .type _start, @function

/**
 * Reset Handler called on controller reset
 */
_start:
    /* ===== Startup Stage 1 ===== */
    /* Disable Global Interrupt */
    csrc CSR_MSTATUS, MSTATUS_MIE

    /* If SMP_CPU_CNT is not defined,
     * assume that only 1 core is allowed to run,
     * the core hartid is defined via BOOT_HARTID.
     * other harts if run to here, just do wfi in __amp_wait
     */
#ifndef SMP_CPU_CNT
    csrr a0, CSR_MHARTID
    /* BOOT_HARTID is configurable in Makefile via BOOT_HARTID variable */
    li a1, BOOT_HARTID
    bne a0, a1, __amp_wait
#endif

    /* Initialize GP and TP */
    .option push
    .option norelax
    la gp, __global_pointer$
    la tp, __tls_base
    .option pop


    /* Set correct sp for current cpu */
    la sp, _sp

    /* ===== Startup Stage 2 ===== */


    /* Enable mcycle and minstret counter */
    csrci CSR_MCOUNTINHIBIT, 0x5


__init_common:
    /* ===== Startup Stage 3 ===== */
    /* Load data section */
    la a0, _data_lma
    la a1, _data
    /* If data vma=lma, no need to copy */
    beq a0, a1, 2f
    la a2, _edata
    bgeu a1, a2, 2f
1:
    lw t0, (a0)
    sw t0, (a1)
    addi a0, a0, 4
    addi a1, a1, 4
    bltu a1, a2, 1b
2:
    /* Clear bss section */
    la a0, __bss_start
    la a1, _end
    bgeu a0, a1, 2f
1:
    sw zero, (a0)
    addi a0, a0, 4
    bltu a0, a1, 1b
2:

.globl _start_premain
.type _start_premain, @function
_start_premain:
    /*
     * Call vendor defined SystemInit to
     * initialize the micro-controller system
     * SystemInit will just be called by boot cpu
     */


    /* Call global constructors */
    //la a0, __libc_fini_array
    //call atexit
    /* Call C/C++ constructor start up code */
    //call __libc_init_array

__skip_init:
    /* Sync all harts at this function */
    //call __sync_harts

    /* do pre-init steps before main */
    /* _premain_init will be called by each cpu
     * please make sure the implementation of __premain_int
     * considered this
     */


    /*
     * When all initialization steps done
     * set exception entry to correct exception
     * entry and jump to main.
     * And set the interrupt processing mode to
     * ECLIC mode
     */


    /* BPU cold bringup need time, so enable BPU before enter to main */
    li t0, MMISC_CTL_BPU
    csrs CSR_MMISC_CTL, t0

    /* ===== Call SMP Main Function  ===== */
    /* argc = argv = 0 */
    li a0, 0
    li a1, 0

    call main


    /* do post-main steps after main
     * this function will be called by each cpu */
    //call _postmain_fini

__amp_wait:
1:
    wfi
    j 1b

#if defined(SMP_CPU_CNT) && (SMP_CPU_CNT > 1)
/*
 * You can re-implement smp_main function in your code
 * to do smp boot process and handle multi harts
 */
.weak smp_main
.type smp_main, @function
smp_main:
    addi sp, sp, -2*REGBYTES
    STORE ra, 0*REGBYTES(sp)
    /* only boot hart goto main, other harts do wfi */
    csrr t0, mhartid
    li t1, BOOT_HARTID
    beq t0, t1, 2f
1:
    wfi
    j 1b
2:
    call main

    LOAD ra, 0*REGBYTES(sp)
    addi sp, sp, 2*REGBYTES
    ret
#endif

/* Early boot exception entry before main */
.align 6
.global early_exc_entry
.type early_exc_entry, @function
early_exc_entry:
    wfi
    j early_exc_entry
