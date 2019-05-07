/*
 * INIT.c

 *
 *  Created on: Jan 4, 2018
 *      Author: haselb
 */

#include <stdio.h>
#include "Actors_Displays/LCD.h"
#include "doxygen/doxy.h"
#include "HAL/hal_i2c.h"
#include "Source/HAS_MISC.h"
#include "INIT.h"




uint32_t volatile timer_1_of_16;
uint32_t volatile timer_2_of_16;
uint32_t volatile timer_3_of_16;

/*!
 * @brief 	   Function to initialize all non DAVE devices.
 * @param[in]  None
 * @param[out] None
 * @retval     void
 * @pre        None
 * @post       None
 * @attention  None
 * @note       None
 */
void init(void)
{

	//IRQ-Handler for SYSTIMER, initiated by function Soft_WDG (checkout SYSTIMER_XMC45.PDF)
	timer_1_of_16 = SYSTIMER_CreateTimer(100000, SYSTIMER_MODE_ONE_SHOT, (void *)SW_IRQ_1, NULL);
	/* Initialize and start Mainloop system timer 100ms (Timer 2 of 16)*/
	timer_2_of_16 = SYSTIMER_CreateTimer(100000, SYSTIMER_MODE_PERIODIC, (void *)MAINLOOP_IRQ, NULL);
	SYSTIMER_StartTimer(timer_2_of_16);
	/* Initialize and start lwip system timer 100ms (Timer 3 of 16)*/
//	timer_3_of_16 = SYSTIMER_CreateTimer(100000, SYSTIMER_MODE_PERIODIC , tim_sys_check_timeouts_wrap,0);
//	SYSTIMER_StartTimer(timer_3_of_16);
	delay100us(10000);  // POR is too fast for OLED...
	LCD_init();
	LCD_clearlines();
	sprintf(LCDBuffer,"MTSR V%d.%d.%d, hm,2019",MAJOR_VERSION,MINOR_VERSION,PATCH_VERSION);  // defined in doxy.h"
	LCD_text(0,0,LCDBuffer);
	delay100us(10000);
	RTC_init();

}
