#include "stdint.h"
#include "ports.h"
#include "systick.h"
#include "task.h"
#include "scheduler.h"


void main()
{
  
  ports_init();
  systick_init();
  
 while(1)
   {
      scheduler();
   }
    
  
}
