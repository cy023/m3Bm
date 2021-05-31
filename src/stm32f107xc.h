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
  * @brief 9. General-purpose and alternate-function I/Os (GPIOs and AFIOs)
  * @ref   RM0008 Reference manual : 9.5 GPIO and AFIO register maps 
  *         Table 59. GPIO register map and reset values
  * 
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

#endif /* __STM32F107xC_H */