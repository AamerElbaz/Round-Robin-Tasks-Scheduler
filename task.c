#include <stdint.h>
#include "task.h"

#include "tm4c123gh6pm.h"

task_t task[]=
{
    { .code=T1,
      .period=1
    },
    { .code=T2,
      .period=2
    },
    { .code=T3,
      .period=3
    }
   
};

const uint8_t tasksNo=sizeof(task)/sizeof(task_t);


static void T1(void)
{
   GPIO_PORTF_DATA_R^=0x02;
}

static void T2(void)
{
   GPIO_PORTF_DATA_R^=0x04; 
}

static void T3(void)
{
   GPIO_PORTF_DATA_R^=0x08;
}