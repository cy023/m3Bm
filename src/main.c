#include "core_cm3.h"
#include "stm32f107xc.h"
#include "gpio.h"

uint32_t global_init_var = 6666;
uint32_t global_unin_var;

int main()
{
    int local_var;
    gpio_init();
    gpio_off();
    while (1) {
        gpio_off();
        delay_();
        gpio_on();
        delay_();
    }
    return 0;
}
