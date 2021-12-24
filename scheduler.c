#include "scheduler.h"
#include "task.h"
#include "systick.h"
#include "stdint.h"

void scheduler(void)
{ 
  uint8_t iter=0;
 static uint32_t tickCtr=0;
 
    if(true==Systick_Is_Time_Out())
    { tickCtr++;
 
 while(iter<tasksNo)
        {
          if(tickCtr%task[iter].period==0)
            {
                task[iter].code();
            }
 iter++;
        }
    }
}
