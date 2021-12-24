#ifndef SYSTICK__H__
#define SYSTICK__H__

#define SYSTEM_CLK_SPEED_KHZ        16000
#define SYSTEM_TICK_MS               500
#include <stdbool.h>

extern void systick_init(void);
extern bool Systick_Is_Time_Out(void);

#endif