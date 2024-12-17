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
#include "rom_sym_def.h"


.macro DECLARE_INT_HANDLER  INT_HDL_NAME
#if defined(__riscv_xlen) && (__riscv_xlen == 32)
    .word \INT_HDL_NAME
#else
    .dword \INT_HDL_NAME
#endif
.endm


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

    /* Initialize GP and TP */
    /*.option push*/
    /*.option norelax*/
    /*la gp, __global_pointer$*/
    la gp, _symrom___global_pointer$
    /*la tp, __tls_base*/
    /*.option pop */


    /* Set correct sp for current cpu */
    la sp, _sp
    la a0, __StackBottom
    la a1, __StackTop

app_stack_bss_init:
    sw zero, (a0)
    addi a0, a0, 4
    bltu a0, a1, app_stack_bss_init

    /*
     * Set the the NMI base mnvec to share
     * with mtvec by setting CSR_MMISC_CTL
     * bit 9 NMI_CAUSE_FFF to 1
     */
    li t0, MMISC_CTL_NMI_CAUSE_FFF
    csrs CSR_MMISC_CTL, t0

    /*
     * Intialize ECLIC vector interrupt
     * base address mtvt to rom vector_base
     */
    la t0, vector_base
    csrw CSR_MTVT, t0

    /*
     * Set ECLIC non-vector entry to be controlled
     * by mtvt2 CSR register.
     * Intialize ECLIC non-vector interrupt
     * base address mtvt2 to irq_entry.
     */
    la t0, irq_entry
    csrw CSR_MTVT2, t0
    csrs CSR_MTVT2, 0x1

    /*
     * Set Exception Entry MTVEC to early_exc_entry
     * Due to settings above, Exception and NMI
     * will share common entry.
     * This early_exc_entry is only used during early
     * boot stage before main
     */
    la t0, exc_entry
    csrw CSR_MTVEC, t0

    /* Set the interrupt processing mode to ECLIC mode */
    li t0, 0x3f
    csrc CSR_MTVEC, t0
    csrs CSR_MTVEC, 0x3


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
    call _premain_init
    call _rst_cause_init
    /*
     * When all initialization steps done
     * set exception entry to correct exception
     * entry and jump to main.
     * And set the interrupt processing mode to
     * ECLIC mode
     */
    /*la t0, exc_entry*/
    /*csrw CSR_MTVEC, t0*/
    /*li t0, 0x3f*/
    /*csrc CSR_MTVEC, t0*/
    /*csrs CSR_MTVEC, 0x3*/

    /* BPU cold bringup need time, so enable BPU before enter to main */
    li t0, MMISC_CTL_BPU
    csrs CSR_MMISC_CTL, t0

    /* ===== Call SMP Main Function  ===== */
    /* argc = argv = 0 */
    li a0, 0
    li a1, 0
    call main

__amp_wait:
1:
    wfi
    j 1b


/* Early boot exception entry before main */
/*.align 6*/
/*.global early_exc_entry*/
/*.type early_exc_entry, @function*/
/*early_exc_entry:*/
/*    wfi*/
/*    j early_exc_entry*/
.section .text.__warmup_start
.globl __warmup_start
.type __warmup_start, @function
__warmup_start:

    /* clk_set_rc32M_div(DIV0_TO_32M);//MUST clr this bit*/
    li a0, 0
    call _symrom_clk_set_rc32M_div
    /*wait_hclk_cycle_us(16) */
    li a0, 16
    call _symrom_wait_hclk_cycle_us
    /* Load data section */
    la a0, _symrom__data_lma
    la a1, _symrom__data
    /* If data vma=lma, no need to copy */
    beq a0, a1, 2f
    la a2, _symrom__edata
    bgeu a1, a2, 2f
1:
    lw t0, (a0)
    sw t0, (a1)
    addi a0, a0, 4
    addi a1, a1, 4
    bltu a1, a2, 1b
2:
    /* Clear bss section */
    la a0, _symrom___bss_start
    la a1, _symrom__end
    bgeu a0, a1, 2f
1:
    sw zero, (a0)
    addi a0, a0, 4
    bltu a0, a1, 1b
2:
    call _symrom_jump_area_init
    call _symrom_rom_board_init
    call _symrom_boot_m0

__warm_wait:
1:
    wfi
    j 1b    