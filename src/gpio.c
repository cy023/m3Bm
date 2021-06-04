/**
 * @file   gpio.c
 * @author cy023
 * @date   2021.06.02
 * @brief  gpio implementation.
 */

#include "stm32f107xc.h"
#include "gpio.h"

void delay_(void)
{
    for (int i = 0; i < 800000; ++i)
        ;
}

void gpio_init(void)
{
    RCC->APB2ENR |= (1 << IOPCEN);
    PORTC->CRH   |= (CNF13_00 | MODE13_10);
    gpio_on();
}

void gpio_on(void)
{
    PORTC->BRR |= (1 << 13);
}

void gpio_off(void)
{
    PORTC->BSRR |= (1 << 13);
}
