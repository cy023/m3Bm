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

// TODO : CAN, USB, ...

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
  * @ref    RM0008 Reference manual : 18.4.7 RTC register map
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
  * @ref    RM0008 Reference manual : 20.6.4 WWDG register map
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
  * @ref    RM0008 Reference manual : 19.4.5 IWDG register map
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
  * @ref    RM0008 Reference manual : 25.5.10 SPI register map
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
  * @brief  27. Universal synchronous asynchronous receiver transmitter (USART)
  * @ref    RM0008 Reference manual : 27.6.8 USART register map
  *             Table 198. USART register map and reset values
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
  * @ref    RM0008 Reference manual : 26.6.10 I2C register map
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

/** 
  * @brief  6. Backup registers (BKP)
  * @ref    RM0008 Reference manual : 6.4.5 BKP register map
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
  * @ref    RM0008 Reference manual : 5.4.3 PWR register map
  *             Table 16. PWR register map and reset values
  */
typedef struct
{
    __RW uint32_t CR;
    __RW uint32_t CSR;
} PWR_TypeDef;

/** 
  * @brief  12. Digital-to-analog converter (DAC)
  * @ref    RM0008 Reference manual : 12.5.14 DAC register map
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
  * @ref    RM0008 Reference manual : 10.3.7 EXTI register map
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
  * @brief  13. Direct memory access controller (DMA)
  * @ref    RM0008 Reference manual : 13.4.7 DMA register map
  *             Table 80. DMA register map and reset values
  */
typedef struct
{
    __RW uint32_t CCR;
    __RW uint32_t CNDTR;
    __RW uint32_t CPAR;
    __RW uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
    __RW uint32_t ISR;
    __RW uint32_t IFCR;
} DMA_TypeDef;

/** 
  * @brief  8. Connectivity line devices: reset and clock control (RCC)
  * @ref    RM0008 Reference manual : 8.3.13 RCC register map
  *             Table 19. RCC register map and reset values
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
  * @brief  4. CRC calculation unit
  * @ref    RM0008 Reference manual : 4.4.4 CRC register map
  *             Table 10. CRC calculation unit register map and reset values
  */
typedef struct
{
    __RW uint32_t DR;
    __RW uint32_t IDR;
    __RW uint32_t CR;
} CRC_TypeDef;

/** 
  * @brief  29. Ethernet (ETH): media access control (MAC) with DMA controller
  * @ref    RM0008 Reference manual : 29.8.5 Ethernet register maps
  *             Table 218. Ethernet register map and reset values
  */
typedef struct
{
    __RW uint32_t MACCR;
    __RW uint32_t MACFFR;
    __RW uint32_t MACHTHR;
    __RW uint32_t MACHTLR;
    __RW uint32_t MACMIIAR;
    __RW uint32_t MACMIIDR;
    __RW uint32_t MACFCR;
    __RW uint32_t MACVLANTR;
         uint32_t RESERVED0[2];
    __RW uint32_t MACRWUFFR;
    __RW uint32_t MACPMTCSR;
         uint32_t RESERVED1[2];
    __RW uint32_t MACSR;
    __RW uint32_t MACIMR;
    __RW uint32_t MACA0HR;
    __RW uint32_t MACA0LR;
    __RW uint32_t MACA1HR;
    __RW uint32_t MACA1LR;
    __RW uint32_t MACA2HR;
    __RW uint32_t MACA2LR;
    __RW uint32_t MACA3HR;
    __RW uint32_t MACA3LR;
         uint32_t RESERVED2[40];
    __RW uint32_t MMCCR;
    __RW uint32_t MMCRIR;
    __RW uint32_t MMCTIR;
    __RW uint32_t MMCRIMR;
    __RW uint32_t MMCTIMR;
         uint32_t RESERVED3[14];
    __RW uint32_t MMCTGFSCCR;
    __RW uint32_t MMCTGFMSCCR;
         uint32_t RESERVED4[5];
    __RW uint32_t MMCTGFCR;
         uint32_t RESERVED5[10];
    __RW uint32_t MMCRFCECR;
    __RW uint32_t MMCRFAECR;
         uint32_t RESERVED6[10];
    __RW uint32_t MMCRGUFCR;
         uint32_t RESERVED7[334];
    __RW uint32_t PTPTSCR;
    __RW uint32_t PTPSSIR;
    __RW uint32_t PTPTSHR;
    __RW uint32_t PTPTSLR;
    __RW uint32_t PTPTSHUR;
    __RW uint32_t PTPTSLUR;
    __RW uint32_t PTPTSAR;
    __RW uint32_t PTPTTHR;
    __RW uint32_t PTPTTLR;
         uint32_t RESERVED8[567];
    __RW uint32_t DMABMR;
    __RW uint32_t DMATPDR;
    __RW uint32_t DMARPDR;
    __RW uint32_t DMARDLAR;
    __RW uint32_t DMATDLAR;
    __RW uint32_t DMASR;
    __RW uint32_t DMAOMR;
    __RW uint32_t DMAIER;
    __RW uint32_t DMAMFBOCR;
         uint32_t RESERVED9[9];
    __RW uint32_t DMACHTDR;
    __RW uint32_t DMACHRDR;
    __RW uint32_t DMACHTBAR;
    __RW uint32_t DMACHRBAR;
} ETH_TypeDef;

/** 
  * @brief Memory Map
  * @ref   STM32F105xx, STM32F107xx (Datasheet) : 4. Memory mapping
  */
#define FLASH_BASE          ((volatile uint32_t)0x08000000)
#define SRAM_BASE           ((volatile uint32_t)0x20000000)
#define PERIPHERAL_BASE     ((volatile uint32_t)0x40000000)
#define APB1_BASE           ((volatile uint32_t)0x40000000)
#define APB2_BASE           ((volatile uint32_t)0x40010000)
#define AHB_BASE            ((volatile uint32_t)0x40020000)

// APB1
#define TIM2                ((TIM_TypeDef *)(APB1_BASE + 0x00000000))
#define TIM3                ((TIM_TypeDef *)(APB1_BASE + 0x00000400))
#define TIM4                ((TIM_TypeDef *)(APB1_BASE + 0x00000800))
#define TIM5                ((TIM_TypeDef *)(APB1_BASE + 0x00000C00))
#define TIM6                ((TIM_TypeDef *)(APB1_BASE + 0x00001000))
#define TIM7                ((TIM_TypeDef *)(APB1_BASE + 0x00001400))
#define RTC                 ((RTC_TypeDef *)(APB1_BASE + 0x00002800))
#define WWDG                ((WWDG_TypeDef *)(APB1_BASE + 0x00002C00))
#define IWDG                ((IWDG_TypeDef *)(APB1_BASE + 0x00003000))
#define SPI2                ((SPI_TypeDef *)(APB1_BASE + 0x00003800))
#define SPI3                ((SPI_TypeDef *)(APB1_BASE + 0x00003C00))
#define I2S2                ((SPI_TypeDef *)(APB1_BASE + 0x00003800))
#define I2S3                ((SPI_TypeDef *)(APB1_BASE + 0x00003C00))
#define USART2              ((USART_TypeDef *)(APB1_BASE + 0x00004400))
#define USART3              ((USART_TypeDef *)(APB1_BASE + 0x00004800))
#define UART4               ((USART_TypeDef *)(APB1_BASE + 0x00004C00))
#define UART5               ((USART_TypeDef *)(APB1_BASE + 0x00005000))
#define I2C1                ((I2C_TypeDef *)(APB1_BASE + 0x00005400))
#define I2C2                ((I2C_TypeDef *)(APB1_BASE + 0x00005800))
// #define bxCAN1              (( *)(APB1_BASE + 0x00006400))
// #define bxCAN2              (( *)(APB1_BASE + 0x00006800))
#define BKP                 ((BKP_TypeDef *)(APB1_BASE + 0x00006C00))
#define PWR                 ((PWR_TypeDef *)(APB1_BASE + 0x00007000))
#define DAC                 ((DAC_TypeDef *)(APB1_BASE + 0x00007400))

// APB2
#define AFIO                ((AFIO_TypeDef *)(APB2_BASE + 0x00000000))
#define EXTI                ((EXTI_TypeDef *)(APB2_BASE + 0x00000400))
#define PORTA               ((GPIO_TypeDef *)(APB2_BASE + 0x00000800))
#define PORTB               ((GPIO_TypeDef *)(APB2_BASE + 0x00000C00))
#define PORTC               ((GPIO_TypeDef *)(APB2_BASE + 0x00001000))
#define PORTD               ((GPIO_TypeDef *)(APB2_BASE + 0x00001400))
#define PORTE               ((GPIO_TypeDef *)(APB2_BASE + 0x00001800))
#define ADC1                ((ADC_TypeDef *)(APB2_BASE + 0x00002400))
#define ADC2                ((ADC_TypeDef *)(APB2_BASE + 0x00002800))
#define TIM1                ((TIM_TypeDef *)(APB2_BASE + 0x00002C00))
#define SPI1                ((SPI_TypeDef *)(APB2_BASE + 0x00003000))
#define USART1              ((USART_TypeDef *)(APB2_BASE + 0x00003800))

// AHB
#define DMA1                ((DMA_TypeDef *)(AHB_BASE + 0x00000000))
#define DMA2                ((DMA_TypeDef *)(AHB_BASE + 0x00000400))
#define RCC                 ((RCC_TypeDef * *)(AHB_BASE + 0x00001000))
// #define FLASH_IT            (( *)(AHB_BASE + 0x00002000))
#define CRC                 ((CRC_TypeDef * *)(AHB_BASE + 0x00003000))
#define ETHERNET            ((ETH_TypeDef * *)(AHB_BASE + 0x00008000))
// #define USB_OTG_FS          (( *)(AHB_BASE + 0x0FFE0000))

#endif /* __STM32F107xC_H */