#ifndef TASK__H__
#define TASK__H__

#include "tm4c123gh6pm.h"
#include <stdint.h>

typedef struct task_t
{
   void (*code)(void);
   uint32_t period;
    
}task_t;

extern const uint8_t tasksNo;
extern task_t task[];



extern  void T1(void);
extern  void T2(void);
extern  void T3(void);


#endif