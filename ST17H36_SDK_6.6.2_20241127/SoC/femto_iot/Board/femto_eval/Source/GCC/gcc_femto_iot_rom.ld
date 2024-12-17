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
 * @file     gcc_femto_iot_ilm.ld
 * @brief    GNU Linker Script for Nuclei N/NX based device in ilm Download Mode
 * @version  V1.0.0
 * @date     17. Dec 2019
 ******************************************************************************/
OUTPUT_ARCH( "riscv" )

ENTRY( _start )

__sbssaddr = 0x00028200;
__stackaddr = 0x00028100;
__StackBottom = __stackaddr;
__StackTop = __stackaddr + 0x0200;
_sp = __StackTop;

MEMORY
{
  socrom (rxa!w)   : ORIGIN = 0x00000000, LENGTH = 80K
  romstack         : ORIGIN = __stackaddr , LENGTH = 0x0200   /* SRAM  0x230B */
  sbss             : ORIGIN = __sbssaddr , LENGTH = 0x0100   /* SRAM  0x130B, for BLE stack bss */
  ram              : ORIGIN = 0x00028300, LENGTH = 0x300
}

REGION_ALIAS("ROM", socrom)
REGION_ALIAS("RAM", ram)
REGION_ALIAS("REGION_STACK",   romstack);
REGION_ALIAS("REGION_SBSS",    sbss);

SECTIONS
{
  /* To provide symbol __STACK_SIZE, __HEAP_SIZE and __SMP_CPU_CNT */
  PROVIDE(__STACK_SIZE = 512);
  PROVIDE(__HEAP_SIZE = 0);
  PROVIDE(__SMP_CPU_CNT = 1);
  __TOT_STACK_SIZE = __STACK_SIZE * __SMP_CPU_CNT;
  .init           :
  {
    *(.vtable)
	*(.vtable_s)
    KEEP (*(SORT_NONE(.init)))
    . = ALIGN(4);
  } >ROM AT>ROM

  .text           :
  {
    *(.text.unlikely .text.unlikely.*)
    *(.text.startup .text.startup.*)
	KEEP (*components*(.text .text.*))
	KEEP (*main*(.text .text.*))
	KEEP (*lib_srand*(.text .text.*))
    *(.text .text.*)
    *(.gnu.linkonce.t.*)
  } >ROM

  .fini           :
  {
    KEEP (*(SORT_NONE(.fini)))
  } >ROM

  .rodata           :
  {
    . = ALIGN(8);
    *(.srodata.cst16)
    *(.srodata.cst8)
    *(.srodata.cst4)
    *(.srodata.cst2)
    *(.srodata .srodata.*)
    *(.rdata)
    *(.rodata .rodata.*)
    *(.gnu.linkonce.r.*)
	KEEP (*components*(.rodata .rodata.* .srodata .srodata.*))
  /*KEEP (*components*(.data .data.* .sdata .sdata.*))*/
	KEEP (*main*(.txt .text.*))
  } >ROM

 .stackbss __sbssaddr (NOLOAD) : {
    __s_stackbss = .;
    *ll_hwItf.c.o(.stackbss)
    *l2cap_task.c.o(.stackbss)
    *ll.c.o(.stackbss)
    *ll_enc.c.o(.stackbss)
    *att_util.c.o(.stackbss)
    *mskb_fw.c.o(.stackbss)
     /**gatt_server.c.o(.stackbss)
    *gapgattserver.c.o(.stackbss)
    *gapbondmgr.c.o(.stackbss)   */
    __e_stackbss = .;

 } > REGION_SBSS AT>ROM

  .data            : ALIGN(8)
  {
    KEEP(*(.data.ctest*))
    *(.data .data.*)
    *(.gnu.linkonce.d.*)
    . = ALIGN(8);
    PROVIDE( __global_pointer$ = . + 0x800 );
    *(.sdata .sdata.* .sdata*)
    *(.gnu.linkonce.s.*)
    /* below sections are used for rt-thread */
    . = ALIGN(4);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(4);
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(4);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);
 	KEEP (*components*(.data .data.* .sdata .sdata.*))
 } >RAM AT>ROM

  .tdata           : ALIGN(8)
  {
    PROVIDE( __tls_base = . );
    *(.tdata .tdata.* .gnu.linkonce.td.*)
  } >RAM AT>ROM

  PROVIDE( _data_lma = LOADADDR(.data) );
  PROVIDE( _data = ADDR(.data) );
  PROVIDE( _edata = . );
  PROVIDE( edata = . );

  PROVIDE( _fbss = . );
  PROVIDE( __bss_start = . );

  .tbss (NOLOAD)   : ALIGN(8)
  {
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
    PROVIDE( __rom_ram_used_end = . );
  } >RAM

  /* .stack __stackaddr (NOLOAD)   : ALIGN(16) */
  /* { */
    /* . = ALIGN(16); */
    /* PROVIDE( _heap_end = . );*/
    /* PROVIDE( __heap_end = . );*/
    /* PROVIDE( __StackLimit = . ); */
    /* PROVIDE( __StackBottom = . ); */
    /* . += __TOT_STACK_SIZE; */
    /* . = ALIGN(16); */
    /* PROVIDE( __StackTop = . ); */
    /* PROVIDE( _sp = . ); */
  /* } > REGION_STACK */
}
