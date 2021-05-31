/**
 * @file   startup_stm32f107xc.c
 * @author cy023
 * @brief  Startup Module for STM32F107xC Microcontrollers
 * @date   2021.05.28
 *
 * @brief 
 *      1. Create Vector table
 *      2. Copy .data section to SRAM
 *      3. Init the .bss section to zero in SRAM
 *      4. call main()
 */

#include "../src/core_cm3.h"

#define SRAM_START  0x20000000
#define SRAM_SIZE   (64 * 1024)
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))
#define STACK_START SRAM_END


/* Section address defined in linker script */
extern uint32_t _etext;
extern uint32_t _la_data;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;
extern uint32_t _estack;

extern int main(void);

/* Cortex-M3 processor system handlers */
void Reset_Handler          (void) __attribute__((weak, alias("Default_Reset_Handler")));
void NMI_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void MemManage_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void BusFault_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler     (void) __attribute__((weak, alias("Default_Handler")));
void SVCall_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler        (void) __attribute__((weak, alias("Default_Handler")));

/* Interrupt (IRQ) */
void WWDG_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void PVD_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void TAMPER_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void RTC_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void FLASH_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void RCC_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void EXTI0_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void EXTI1_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void EXTI2_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void EXTI3_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void EXTI4_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel1_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel2_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel3_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel4_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel5_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel6_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA1_Channel7_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void ADC1_2_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_TX_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX0_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_RX1_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void CAN1_SCE_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void EXTI9_5_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_UP_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_Handler   (void) __attribute__((weak, alias("Default_Handler")));
void TIM1_CC_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void TIM2_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void TIM3_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void TIM4_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void I2C1_EV_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void I2C1_ER_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void I2C2_EV_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void I2C2_ER_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void SPI1_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void SPI2_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void USART1_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void USART2_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void USART3_Handler         (void) __attribute__((weak, alias("Default_Handler")));
void EXTI15_10_Handler      (void) __attribute__((weak, alias("Default_Handler")));
void RTCAlarm_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void OTG_FS_WKUP_Handler    (void) __attribute__((weak, alias("Default_Handler")));
void TIM5_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void SPI3_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void UART4_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void UART5_Handler          (void) __attribute__((weak, alias("Default_Handler")));
void TIM6_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void TIM7_Handler           (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Channel1_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Channel2_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Channel3_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Channel4_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void DMA2_Channel5_Handler  (void) __attribute__((weak, alias("Default_Handler")));
void ETH_Handler            (void) __attribute__((weak, alias("Default_Handler")));
void ETH_WKUP_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_TX_Handler        (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_RX0_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_RX1_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void CAN2_SCE_Handler       (void) __attribute__((weak, alias("Default_Handler")));
void OTG_FS_Handler         (void) __attribute__((weak, alias("Default_Handler")));

/**
 * @brief Exception Vector Table
 * see below info:
 * 
 *   RM0008 p.198
 *   Table 61. Vector table for connectivity line devices
 *   Note : Connectivity line devices are STM32F105xx and STM32F107xx microcontrollers.
 * 
 *   DUI0552A_cortex_m3_dgug 2-22
 *   Table 2-16 Properties of the different exception types   
 */
static void *const vector[] __attribute__((section(".isr_vector"))) = {
    /* Initial SP value */
    (void *) STACK_START,   // 0x00000000
    /* Cortex-M3 processor system handlers */
    Reset_Handler,          // 0x00000004
    NMI_Handler,            // 0x00000008
    HardFault_Handler,      // 0x0000000C
    MemManage_Handler,      // 0x00000010
    BusFault_Handler,       // 0x00000014
    UsageFault_Handler,     // 0x00000018
    0,                      // 0x0000001C
    0,                      // 0x00000020
    0,                      // 0x00000024
    0,                      // 0x00000028
    SVCall_Handler,         // 0x0000002C
    0,                      // 0x00000030
    0,                      // 0x00000034
    PendSV_Handler,         // 0x00000038
    SysTick_Handler,        // 0x0000003C
    /* Interrupt (IRQ) */
    WWDG_Handler,           // 0x00000040
    PVD_Handler,            // 0x00000044
    TAMPER_Handler,         // 0x00000048
    RTC_Handler,            // 0x0000004C
    FLASH_Handler,          // 0x00000050
    RCC_Handler,            // 0x00000054
    EXTI0_Handler,          // 0x00000058
    EXTI1_Handler,          // 0x0000005C
    EXTI2_Handler,          // 0x00000060
    EXTI3_Handler,          // 0x00000064
    EXTI4_Handler,          // 0x00000068
    DMA1_Channel1_Handler,  // 0x0000006C
    DMA1_Channel2_Handler,  // 0x00000070
    DMA1_Channel3_Handler,  // 0x00000074
    DMA1_Channel4_Handler,  // 0x00000078
    DMA1_Channel5_Handler,  // 0x0000007C
    DMA1_Channel6_Handler,  // 0x00000080
    DMA1_Channel7_Handler,  // 0x00000084
    ADC1_2_Handler,         // 0x00000088
    CAN1_TX_Handler,        // 0x0000008C
    CAN1_RX0_Handler,       // 0x00000090
    CAN1_RX1_Handler,       // 0x00000094
    CAN1_SCE_Handler,       // 0x00000098
    EXTI9_5_Handler,        // 0x0000009C
    TIM1_BRK_Handler,       // 0x000000A0
    TIM1_UP_Handler,        // 0x000000A4
    TIM1_TRG_COM_Handler,   // 0x000000A8
    TIM1_CC_Handler,        // 0x000000AC
    TIM2_Handler,           // 0x000000B0
    TIM3_Handler,           // 0x000000B4
    TIM4_Handler,           // 0x000000B8
    I2C1_EV_Handler,        // 0x000000BC
    I2C1_ER_Handler,        // 0x000000C0
    I2C2_EV_Handler,        // 0x000000C4
    I2C2_ER_Handler,        // 0x000000C8
    SPI1_Handler,           // 0x000000CC
    SPI2_Handler,           // 0x000000D0
    USART1_Handler,         // 0x000000D4
    USART2_Handler,         // 0x000000D8
    USART3_Handler,         // 0x000000DC
    EXTI15_10_Handler,      // 0x000000E0
    RTCAlarm_Handler,       // 0x000000E4
    OTG_FS_WKUP_Handler,    // 0x000000E8
    0,                      // 0x000000EC
    0,                      // 0x000000F0
    0,                      // 0x000000F4
    0,                      // 0x000000F8
    0,                      // 0x000000FC
    0,                      // 0x00000100
    0,                      // 0x00000104
    TIM5_Handler,           // 0x00000108
    SPI3_Handler,           // 0x0000010C
    UART4_Handler,          // 0x00000110
    UART5_Handler,          // 0x00000114
    TIM6_Handler,           // 0x00000118
    TIM7_Handler,           // 0x0000011C
    DMA2_Channel1_Handler,  // 0x00000120
    DMA2_Channel2_Handler,  // 0x00000124
    DMA2_Channel3_Handler,  // 0x00000128
    DMA2_Channel4_Handler,  // 0x0000012C
    DMA2_Channel5_Handler,  // 0x00000130
    ETH_Handler,            // 0x00000134
    ETH_WKUP_Handler,       // 0x00000138
    CAN2_TX_Handler,        // 0x0000013C
    CAN2_RX0_Handler,       // 0x00000140
    CAN2_RX1_Handler,       // 0x00000144
    CAN2_SCE_Handler,       // 0x00000148
    OTG_FS_Handler,         // 0x0000014C
};

/**
 * @brief Initialize .data section.
 */
static void copy_data_section()
{
    uint8_t *src = (uint8_t *) &_la_data;
    uint8_t *des = (uint8_t *) &_sdata;
    while (src < des) {
        *des++ = *src++;
    }
}

/**
 * @brief Initialize .bss section.
 */
static void clear_bss_section()
{
    uint8_t *src = (uint8_t *) &_sbss;
    while (src < (uint8_t *) &_ebss) {
        *src++ = 0;
    }
}

/**
 * @brief The entry point after HW reset.
 *
 * Initialize .data and .bss sections and then start main().
 */
void Default_Reset_Handler(void)
{
    copy_data_section();
    clear_bss_section();
    main();
    while (1) ;
}

/**
 * @brief Default Exception Handler
 */
void Default_Handler(void)
{
    while (1) ;
}
