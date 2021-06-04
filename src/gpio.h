/**
 * @file   gpio.h
 * @author cy023
 * @date   2021.06.02
 * @brief  gpio implementation.
 */

#ifndef __GPIO_H
#define __GPIO_H

#include <stdint.h>

// RCC APB2ENR
#define IOPCEN  4

// GPIOx_CRH
#define CNF13_00    (0x00 << 22) 
#define CNF13_01    (0x01 << 22)
#define CNF13_10    (0x02 << 22)
#define CNF13_11    (0x03 << 22)

#define MODE13_00   (0x00 << 20)
#define MODE13_01   (0x01 << 20)
#define MODE13_10   (0x02 << 20)
#define MODE13_11   (0x03 << 20)


void gpio_init(void);
void gpio_on(void);
void gpio_off(void);

void delay_(void);

#endif /* __GPIO_H */