/**
 * @file   stm32f107xc.ld
 * @author cy023
 * @brief  stm32f107xc Linker Script
 * @date   2021.05.31
 */

ENTRY(Reset_Handler)

MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 256K
    SRAM (rwx) : ORIGIN = 0x08000000, LENGTH = 64K
}

SECTIONS
{
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.text.*)
        *(.init)
        *(.fini)
        *(.rodata)
        *(.rodata.*)
        . = ALIGN(4);
        _etext = .;
    } >FLASH

    _la_data = LOADADDR(.data);

    .data :
    {
        _sdata = .;
        *(.data)
        *(.data.*)
        . = ALIGN(4);
        _edata = .;
    } >SRAM AT> FLASH

    .bss : 
    {
        _sbss = .;
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN(4);
        _ebss = .;
    } >SRAM
}