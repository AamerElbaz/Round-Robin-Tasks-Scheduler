#include "systick.h"
#include "stdbool.h"
#include "stdint.h"

#include "tm4c123gh6pm.h"


void systick_init(void)
{
  NVIC_ST_CTRL_R=0;
  NVIC_ST_CTRL_R=0x05;
  
  NVIC_ST_RELOAD_R=(SYSTEM_CLK_SPEED_KHZ*SYSTEM_TICK_MS);

}

bool Systick_Is_Time_Out(void)
{
  if(NVIC_ST_CTRL_R&0x10000)
    return 1;
  else
    return 0;
}








