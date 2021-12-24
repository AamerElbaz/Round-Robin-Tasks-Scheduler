#include "tm4c123gh6pm.h"
#include <stdint.h>



void ports_init(void)
{
    SYSCTL_RCGCGPIO_R|=0x20;
    while(SYSCTL_PRGPIO_R&0x20==0)
        {     }

    /*port F*/
    
    GPIO_PORTF_LOCK_R=0x4c4f434b;
    GPIO_PORTF_CR_R=0x0e;
    GPIO_PORTF_DEN_R=0x0e;
    GPIO_PORTF_DIR_R=0x0e;
}