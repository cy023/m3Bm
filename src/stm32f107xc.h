/**
 * @file   stm32f107xc.h
 * @author cy023/**
 * @file   stm32f107xc.h
 * @author cy023
 * @brief  STM32F107xC Register Definitions
 * @ref    RM0008 Reference manual
 *         (https://www.st.com/en/microcontrollers-microprocessors/
 *          stm32f107rc.html#documentation)
 * @date   2021.05.31
 */

#ifndef __STM32F107xC_H
#define __STM32F107xC_H

#include <stdint.h>

#define __R      volatile const  /* Defines 'read only' permissions      */
#define __W      volatile        /* Defines 'write only' permissions     */
#define __RW     volatile        /* Defines 'read / write' permissions   */



/** 
  * @brief 8. Connectivity line devices: reset and clock control (RCC)
  * @ref   RM0008 Reference manual : 8.3.13 RCC register map
  *         Table 19. RCC register map and reset values
  */
typedef struct
{
    __RW uint32_t CR;
    __RW uint32_t CFGR;
    __RW uint32_t CIR;
    __RW uint32_t APB2RSTR;
    __RW uint32_t APB1RSTR;
    __RW uint32_t AHBENR;
    __RW uint32_t APB2ENR;
    __RW uint32_t APB1ENR;
    __RW uint32_t BDCR;
    __RW uint32_t CSR;
    __RW uint32_t AHBRSTR;
    __RW uint32_t CFGR2;
} RCC_TypeDef;

/** 
  * @brief  14. Advanced-control timers (TIM1 and TIM8)
  *         15. General-purpose timers (TIM2 to TIM5)
  *         16. General-purpose timers (TIM9 to TIM14)
  *         17. Basic timers (TIM6 and TIM7)
  * 
  * @ref    1. RM0008 Reference manual : 14.4.21 TIM1 and TIM8 register map
  *             Table 84. TIM1 and TIM8 register map and reset values
  *         2. RM0008 Reference manual : 15.4.19 TIMx register map
  *             Table 88. TIMx register map and reset values (continued)
  *         3. RM0008 Reference manual : 16.5.11 TIM10/11/13/14 register map
  *             Table 93. TIM10/11/13/14 register map and reset values
  *         4. RM0008 Reference manual : 17.4.9 TIM6 and TIM7 register map
  *             Table 94. TIM6 and TIM7 register map and reset values
  */
typedef struct
{
    __RW uint32_t CR1;
    __RW uint32_t CR2;
    __RW uint32_t SMCR;
    __RW uint32_t DIER;
    __RW uint32_t SR;
    __RW uint32_t EGR;
    __RW uint32_t CCMR1;
    __RW uint32_t CCMR2;
    __RW uint32_t CCER;
    __RW uint32_t CNT;
    __RW uint32_t PSC;
    __RW uint32_t ARR;
    __RW uint32_t RCR;
    __RW uint32_t CCR1;
    __RW uint32_t CCR2;
    __RW uint32_t CCR3;
    __RW uint32_t CCR4;
    __RW uint32_t BDTR;
    __RW uint32_t DCR;
    __RW uint32_t DMAR;
    __RW uint32_t OR;
} TIM_TypeDef;

/** 
  * @brief  18. Real-time clock (RTC)
  * @ref    1. RM0008 Reference manual : 18.4.7 RTC register map
  *             Table 95. RTC register map and reset values
  */
typedef struct
{
    __RW uint32_t CRH;
    __RW uint32_t CRL;
    __RW uint32_t PRLH;
    __RW uint32_t PRLL;
    __RW uint32_t DIVH;
    __RW uint32_t DIVL;
    __RW uint32_t CNTH;
    __RW uint32_t CNTL;
    __RW uint32_t ALRH;
    __RW uint32_t ALRL;
} RTC_TypeDef;

/** 
  * @brief  20. Window watchdog (WWDG)
  * @ref    1. RM0008 Reference manual : 20.6.4 WWDG register map
  *             Table 99. WWDG register map and reset values
  */
typedef struct
{
    __RW uint32_t CR;
    __RW uint32_t CFR;
    __RW uint32_t SR;
} WWDG_TypeDef;

/** 
  * @brief  19. Independent watchdog (IWDG)
  * @ref    1. RM0008 Reference manual : 19.4.5 IWDG register map
  *             Table 97. IWDG register map and reset values
  */
typedef struct
{
    __RW uint32_t KR;
    __RW uint32_t PR;
    __RW uint32_t RLR;
    __RW uint32_t SR;
} IWDG_TypeDef;

/** 
  * @brief  25. Serial peripheral interface (SPI)
  * @ref    1. RM0008 Reference manual : 25.5.10 SPI register map
  *             Table 187. SPI register map and reset values
  */
typedef struct
{
    __RW uint32_t CR1;
    __RW uint32_t CR2;
    __RW uint32_t SR;
    __RW uint32_t DR;
    __RW uint32_t CRCPR;
    __RW uint32_t RXCRCR;
    __RW uint32_t TXCRCR;
    __RW uint32_t I2SCFGR;
    __RW uint32_t I2SPR;
} SPI_TypeDef;

/** 
  * @brief 27. Universal synchronous asynchronous receiver transmitter (USART)
  * @ref   RM0008 Reference manual : 27.6.8 USART register map
  *         Table 198. USART register map and reset values
  */
typedef struct
{
    __RW uint32_t SR;
    __RW uint32_t DR;
    __RW uint32_t BRR;
    __RW uint32_t CR1;
    __RW uint32_t CR2;
    __RW uint32_t CR3;
    __RW uint32_t GTPR;
} USART_TypeDef;

/** 
  * @brief  26. Inter-integrated circuit (I2C) interface
  * @ref    1. RM0008 Reference manual : 26.6.10 I2C register map
  *             Table 190. I2C register map and reset values
  */
typedef struct
{
    __RW uint32_t CR1;
    __RW uint32_t CR2;
    __RW uint32_t OAR1;
    __RW uint32_t OAR2;
    __RW uint32_t DR;
    __RW uint32_t SR1;
    __RW uint32_t SR2;
    __RW uint32_t CCR;
    __RW uint32_t TRISE;
} I2C_TypeDef;


// typedef struct
// {
//     __RW uint32_t TIR;
//     __RW uint32_t TDTR;
//     __RW uint32_t TDLR;
//     __RW uint32_t TDHR;
// } CAN_TxMailBox_TypeDef;
  
// typedef struct
// {
//     __RW uint32_t RIR;
//     __RW uint32_t RDTR;
//     __RW uint32_t RDLR;
//     __RW uint32_t RDHR;
// } CAN_FIFOMailBox_TypeDef;
  
// typedef struct
// {
//     __RW uint32_t FR1;
//     __RW uint32_t FR2;
// } CAN_FilterRegister_TypeDef;
  
// typedef struct
// {
//     __RW uint32_t MCR;
//     __RW uint32_t MSR;
//     __RW uint32_t TSR;
//     __RW uint32_t RF0R;
//     __RW uint32_t RF1R;
//     __RW uint32_t IER;
//     __RW uint32_t ESR;
//     __RW uint32_t BTR;
//     uint32_t RESERVED0[88];
//     CAN_TxMailBox_TypeDef sTxMailBox[3];
//     CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
//     uint32_t RESERVED1[12];
//     __RW uint32_t FMR;
//     __RW uint32_t FM1R;
//     uint32_t RESERVED2;
//     __RW uint32_t FS1R;
//     uint32_t RESERVED3;
//     __RW uint32_t FFA1R;
//     uint32_t RESERVED4;
//     __RW uint32_t FA1R;
//     uint32_t RESERVED5[8];
//     CAN_FilterRegister_TypeDef sFilterRegister[28];
// } CAN_TypeDef;

/** 
  * @brief  6. Backup registers (BKP)
  * @ref    1. RM0008 Reference manual : 6.4.5 BKP register map
  *             Table 17. BKP register map and reset values
  */
typedef struct
{
  uint32_t RESERVED0;
    __RW uint32_t DR1;
    __RW uint32_t DR2;
    __RW uint32_t DR3;
    __RW uint32_t DR4;
    __RW uint32_t DR5;
    __RW uint32_t DR6;
    __RW uint32_t DR7;
    __RW uint32_t DR8;
    __RW uint32_t DR9;
    __RW uint32_t DR10;
    __RW uint32_t RTCCR;
    __RW uint32_t CR;
    __RW uint32_t CSR;
  uint32_t RESERVED1[2];
    __RW uint32_t DR11;
    __RW uint32_t DR12;
    __RW uint32_t DR13;
    __RW uint32_t DR14;
    __RW uint32_t DR15;
    __RW uint32_t DR16;
    __RW uint32_t DR17;
    __RW uint32_t DR18;
    __RW uint32_t DR19;
    __RW uint32_t DR20;
    __RW uint32_t DR21;
    __RW uint32_t DR22;
    __RW uint32_t DR23;
    __RW uint32_t DR24;
    __RW uint32_t DR25;
    __RW uint32_t DR26;
    __RW uint32_t DR27;
    __RW uint32_t DR28;
    __RW uint32_t DR29;
    __RW uint32_t DR30;
    __RW uint32_t DR31;
    __RW uint32_t DR32;
    __RW uint32_t DR33;
    __RW uint32_t DR34;
    __RW uint32_t DR35;
    __RW uint32_t DR36;
    __RW uint32_t DR37;
    __RW uint32_t DR38;
    __RW uint32_t DR39;
    __RW uint32_t DR40;
    __RW uint32_t DR41;
    __RW uint32_t DR42;
} BKP_TypeDef;

/** 
  * @brief  5. Power control (PWR)
  * @ref    1. RM0008 Reference manual : 5.4.3 PWR register map
  *             Table 16. PWR register map and reset values
  */
typedef struct
{
    __RW uint32_t CR;
    __RW uint32_t CSR;
} PWR_TypeDef;

/** 
  * @brief  12. Digital-to-analog converter (DAC)
  * @ref    1. RM0008 Reference manual : 12.5.14 DAC register map
  *             Table 75. DAC register map
  */
typedef struct
{
    __RW uint32_t CR;
    __RW uint32_t SWTRIGR;
    __RW uint32_t DHR12R1;
    __RW uint32_t DHR12L1;
    __RW uint32_t DHR8R1;
    __RW uint32_t DHR12R2;
    __RW uint32_t DHR12L2;
    __RW uint32_t DHR8R2;
    __RW uint32_t DHR12RD;
    __RW uint32_t DHR12LD;
    __RW uint32_t DHR8RD;
    __RW uint32_t DOR1;
    __RW uint32_t DOR2;
} DAC_TypeDef;

/** 
  * @brief  10. Interrupts and events
  * @ref    1. RM0008 Reference manual : 10.3.7 EXTI register map
  *             Table 64. External interrupt/event controller register map and reset values
  */
typedef struct
{
    __RW uint32_t IMR;
    __RW uint32_t EMR;
    __RW uint32_t RTSR;
    __RW uint32_t FTSR;
    __RW uint32_t SWIER;
    __RW uint32_t PR;
} EXTI_TypeDef;

/** 
  * @brief  9. General-purpose and alternate-function I/Os (GPIOs and AFIOs)
  * @ref    RM0008 Reference manual : 9.5 GPIO and AFIO register maps 
  *             Table 59. GPIO register map and reset values
  *             Table 60. AFIO register map and reset values
  */
typedef struct
{
    __RW uint32_t CRL;
    __RW uint32_t CRH;
    __RW uint32_t IDR;
    __RW uint32_t ODR;
    __RW uint32_t BSRR;
    __RW uint32_t BRR;
    __RW uint32_t LCKR;
} GPIO_TypeDef;

typedef struct
{
    __RW uint32_t EVCR;
    __RW uint32_t MAPR;
    __RW uint32_t EXTICR[4];
    uint32_t RESERVED0;
    __RW uint32_t MAPR2;  
} AFIO_TypeDef;

/** 
  * @brief  11. Analog-to-digital converter (ADC)
  * @ref    RM0008 Reference manual : 11.12.15 ADC register map 
  *             Table 72. ADC register map and reset values
  */
typedef struct
{
    __RW uint32_t SR;
    __RW uint32_t CR1;
    __RW uint32_t CR2;
    __RW uint32_t SMPR1;
    __RW uint32_t SMPR2;
    __RW uint32_t JOFR1;
    __RW uint32_t JOFR2;
    __RW uint32_t JOFR3;
    __RW uint32_t JOFR4;
    __RW uint32_t HTR;
    __RW uint32_t LTR;
    __RW uint32_t SQR1;
    __RW uint32_t SQR2;
    __RW uint32_t SQR3;
    __RW uint32_t JSQR;
    __RW uint32_t JDR1;
    __RW uint32_t JDR2;
    __RW uint32_t JDR3;
    __RW uint32_t JDR4;
    __RW uint32_t DR;
} ADC_TypeDef;

/** 
  * @brief Memory Map
  * @ref   STM32F105xx, STM32F107xx (Datasheet) : 4 Memory mapping
  */
#define FLASH_BASE          ((volatile uint32_t)0x08000000)
#define SRAM_BASE           ((volatile uint32_t)0x20000000)
#define PERIPHERAL_BASE     ((volatile uint32_t)0x40000000)
#define APB1_BASE           ((volatile uint32_t)0x40000000)
#define APB2_BASE           ((volatile uint32_t)0x40010000)
#define AHB_BASE            ((volatile uint32_t)0x40020000)

// APB1
#define TIM2_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00000000))
#define TIM3_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00000400))
#define TIM4_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00000800))
#define TIM5_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00000C00))
#define TIM6_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00001000))
#define TIM7_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00001400))

#define RTC_BASE            (*(volatile uint32_t *)(APB1_BASE + 0x00002800))
#define WWDG_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00002C00))
#define IWDG_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00003000))

#define SPI2_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00003800))
#define SPI3_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00003C00))
#define I2S2_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00003800))
#define I2S3_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00003C00))

#define USART2_BASE         (*(volatile uint32_t *)(APB1_BASE + 0x00004400))
#define USART3_BASE         (*(volatile uint32_t *)(APB1_BASE + 0x00004800))
#define UART4_BASE          (*(volatile uint32_t *)(APB1_BASE + 0x00004C00))
#define UART5_BASE          (*(volatile uint32_t *)(APB1_BASE + 0x00005000))
#define I2C1_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00005400))
#define I2C2_BASE           (*(volatile uint32_t *)(APB1_BASE + 0x00005800))

#define bxCAN1_BASE         (*(volatile uint32_t *)(APB1_BASE + 0x00006400))
#define bxCAN2_BASE         (*(volatile uint32_t *)(APB1_BASE + 0x00006800))
#define BKP_BASE            (*(volatile uint32_t *)(APB1_BASE + 0x00006C00))
#define PWR_BASE            (*(volatile uint32_t *)(APB1_BASE + 0x00007000))
#define DAC_BASE            (*(volatile uint32_t *)(APB1_BASE + 0x00007400))



// APB2
#define AFIO_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00000000))
#define EXTI_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00000400))
#define PORTA_BASE          (*(volatile uint32_t *)(APB2_BASE + 0x00000800))
#define PORTB_BASE          (*(volatile uint32_t *)(APB2_BASE + 0x00000C00))
#define PORTC_BASE          (*(volatile uint32_t *)(APB2_BASE + 0x00001000))
#define PORTD_BASE          (*(volatile uint32_t *)(APB2_BASE + 0x00001400))
#define PORTE_BASE          (*(volatile uint32_t *)(APB2_BASE + 0x00001800))

#define ADC1_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00002400))
#define ADC2_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00002800))
#define TIM1_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00002C00))
#define SPI1_BASE           (*(volatile uint32_t *)(APB2_BASE + 0x00003000))

#define USART1_BASE         (*(volatile uint32_t *)(APB2_BASE + 0x00003800))



// AHB
#define DMA1_BASE           (*(volatile uint32_t *)(AHB_BASE + 0x00000000))
#define DMA2_BASE           (*(volatile uint32_t *)(AHB_BASE + 0x00000400))

#define RCC_BASE            (*(volatile uint32_t *)(AHB_BASE + 0x00001000))

#define FLASH_IT_BASE       (*(volatile uint32_t *)(AHB_BASE + 0x00002000))

#define CRC_BASE            (*(volatile uint32_t *)(AHB_BASE + 0x00003000))

#define ETHERNET_BASE       (*(volatile uint32_t *)(AHB_BASE + 0x00008000))

#define USB_OTG_FS_BASE     (*(volatile uint32_t *)(AHB_BASE + 0x0FFE0000))


#endif /* __STM32F107xC_H */