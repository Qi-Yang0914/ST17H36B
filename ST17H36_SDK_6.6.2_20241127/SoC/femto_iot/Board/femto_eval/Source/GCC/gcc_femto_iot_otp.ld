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
 * @file     gcc_femto_iot_flashxip.ld
 * @brief    GNU Linker Script for Nuclei N/NX based device in flashxip Download Mode
 * @version  V1.0.0
 * @date     17. Dec 2019
 ******************************************************************************/
OUTPUT_ARCH( "riscv" )

ENTRY( _start )

MEMORY
{
  otp (rxa!w) : ORIGIN = 0x00020100, LENGTH = 0x1f00
  ram (wxa!r) : ORIGIN = 0x00028600, LENGTH = 0x1a00
}

REGION_ALIAS("ROM", otp)
REGION_ALIAS("RAM", ram)

SECTIONS
{
  /* To provide symbol __STACK_SIZE, __HEAP_SIZE and __SMP_CPU_CNT */
  PROVIDE(__STACK_SIZE = 1536);
  PROVIDE(__HEAP_SIZE = 8);
  PROVIDE(__SMP_CPU_CNT = 1);
  __TOT_STACK_SIZE = __STACK_SIZE * __SMP_CPU_CNT;
  .init           :
  {
    /* never keep vector table in application, use rom vector substituted */
    KEEP (*(SORT_NONE(.init)))
    . = ALIGN(4);
  } >ROM
  
  .data            : ALIGN(8)
  {
    KEEP(*(.data.ctest*))
	*core_matrix.c.o(.text .text.*)
	*core_portme.c.o(.text .text.*)
	*core_state.c.o(.text .text.*)
	*core_util.c.o(.text .text.*)
	*core_main.c.o(.text.iterate)
	*core_list_join.c.o(.text .text.*)
  *patch.c.o(.text.otp_cache_init)
  *patch.c.o(.text.llWriteTxData1)
  *patch.c.o(.text.ll_scheduler1)
  *patch.c.o(.text.wakeup_init1)
  *patch.c.o(.text.rf_phy_ini1)
  *patch.c.o(.text.ll_schedule_update1) 
  *patch.c.o(.text.LL_conn_event1)
  *patch.c.o(.text.LL_IRQHandler1)
  *patch.c.o(.text.ll_hw_go1)
  *patch.c.o(.text.wakeupProcess1)

    *(.data .data.*)
    *(.gnu.linkonce.d.*)
    . = ALIGN(8);
    PROVIDE( __global_pointer$ = . + 0x800 );
    *(.sdata .sdata.* .sdata*)
    *(.gnu.linkonce.s.*)
    . = ALIGN(8);
  } >RAM AT>ROM
 
  /* Code section located at ROM */
  .text           :
  {
    *(.text.unlikely .text.unlikely.*)
    *(.text.startup .text.startup.*)
    *(.text .text.*)
 	*(.gnu.linkonce.t.*)
    /* readonly data placed in ROM */
    . = ALIGN(8);
    *(.srodata.cst16)
    *(.srodata.cst8)
    *(.srodata.cst4)
    *(.srodata.cst2)
    *(.srodata .srodata.*)
    *(.rdata)
    *(.rodata .rodata.*)
    *(.gnu.linkonce.r.*)
  } >ROM AT>ROM

  .fini           :
  {
    KEEP (*(SORT_NONE(.fini)))
  } >ROM

  .preinit_array  :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } >ROM




  .tdata           : ALIGN(8)
  {
    PROVIDE( __tls_base = . );
    *(.tdata .tdata.* .gnu.linkonce.td.*)
  } >RAM AT>ROM

  PROVIDE( _data_lma = LOADADDR(.data) );


  .tbss (NOLOAD)   : ALIGN(8)
  {
	PROVIDE( _data = ADDR(.data) );
	PROVIDE( _edata = . );
	PROVIDE( edata = . );
	PROVIDE( _fbss = . );
	PROVIDE( __bss_start = . );
    *(.tbss .tbss.* .gnu.linkonce.tb.*)
    *(.tcommon)
    PROVIDE( __tls_end = . );
  } >RAM AT>RAM

  .tbss_space (NOLOAD) : ALIGN(8)
  {
    . = . + SIZEOF(.tbss);
  } >RAM AT>RAM

  .bss (NOLOAD)   : ALIGN(8)
  {
    *(.sbss*)
    *(.gnu.linkonce.sb.*)
    *(.bss .bss.*)
    *(.gnu.linkonce.b.*)
    *(COMMON)
    . = ALIGN(4);
  } >RAM AT>RAM

  PROVIDE( _end = . );
  PROVIDE( end = . );

  /* Nuclei C Runtime Library requirements:
   * 1. heap need to be align at 16 bytes
   * 2. __heap_start and __heap_end symbol need to be defined
   * 3. reserved at least __HEAP_SIZE space for heap
   */
  .heap (NOLOAD)   : ALIGN(16)
  {
    . = ALIGN(16);
    PROVIDE( __heap_start = . );
    . += __HEAP_SIZE;
    . = ALIGN(16);
    PROVIDE( __heap_limit = . );
  } >RAM AT>RAM

  .stack ORIGIN(RAM) + LENGTH(RAM) - __TOT_STACK_SIZE (NOLOAD) :
  {
    . = ALIGN(16);
    PROVIDE( _heap_end = . );
    PROVIDE( __heap_end = . );
    PROVIDE( __StackLimit = . );
    PROVIDE( __StackBottom = . );
    . += __TOT_STACK_SIZE;
    . = ALIGN(16);
    PROVIDE( __StackTop = . );
    PROVIDE( _sp = . );
  } >RAM AT>RAM
}
