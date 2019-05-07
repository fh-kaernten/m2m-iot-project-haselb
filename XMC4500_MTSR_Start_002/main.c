/*
 * main.c
 *
 *  Created on: 2015 Oct 13 11:15:10
 *  Author: haselb
 */




#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)
#include "Actors_Displays/LCD.h"
#include "Sensors/LM76.h"
#include "Source/Has_misc.h"
#include "Source/init.h"



/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */

int main(void)
{
  DAVE_STATUS_t status;


  status = DAVE_Init();           /* Initialization of DAVE APPs  */

  if(status == DAVE_STATUS_FAILURE)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");

    while(1U)
    {
    	// init failed...
    }
  }

  init();
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
	  update_LM76();
	  update_LCD();


	  while(mainloop_ticks<1);
	  mainloop_ticks=0;
	  DIGITAL_IO_ToggleOutput(&DIGITAL_O_HB_LED); //toggles : 0 -> 1
  }
}
