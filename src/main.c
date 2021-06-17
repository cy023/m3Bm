#include "stm32f107xc.h"

int global_uninit_var;
int global_init0_var = 0;
int global_init_var = 66;

static int global_static_uninit_var;
static int global_static_init0_var = 0;
static int global_static_init_var = 99;

int main(void)
{
    int local_uninit_var;
    int local_init0_var = 0;
    int local_init_var = 100;

    static int local_static_uninit_var;
    static int local_static_init0_var = 0;
    static int local_static_init_var = 77;

    return 0;
}
