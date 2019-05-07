/*
 * Has_Misc.c
 *
 *  Created on: Oct 13, 2015
 *      Author: haselb
 */

#include <Dave.h>
#include "Has_Misc.h"



volatile uint32_t timetick_count=0;	// global variable for time tick count
volatile uint8_t mainloop_ticks=0;
volatile uint16_t incr_all_sec=0;
volatile uint16_t SNTP_sec_time_ticks=0;
XMC_RTC_TIME_t timeval;
volatile FLAG_ARRAY_t f;


/*!
 * @brief 	   Callback function for mainloop endurance.
 * @param[in]  None
 * @param[out] None
 * @retval     void
 * @pre        adheres one of 16 available SYSTIMER, initiated by DAVE.
 * @post       Function updates global variable @ref mainloop_ticks.
 * @attention  SYSTIMER_CreateTimer in @ref INIT.c defines time endurance.
 * @note       This routine is the callback function of SYSTIMER. It is initiated in @ref INIT.c and
 * invoked by the ISR generated from SYSTIMER.
 */
void MAINLOOP_IRQ(void)
{
	mainloop_ticks++; // Increment time count
}


/*!
 * @brief 	   Function to handle IRQ via TIMER_0.
 * @param[in]  None
 * @param[out] None
 * @retval     void
 * @pre        retrieves TIMER_0-IRQ all 100µs
 * @post       None
 * @attention  None
 * @note       This routine increments the counter variable @ref timetick_count .
 */
 void UserIRQHandler(void)
 {

 	/* Acknowledge the period match interrupt*/
	 TIMER_ClearEvent(&TIMER_0);

 	/* Increment time tick count */
 	timetick_count++;
 }


void UserIRQHandler_Key0(void)
{
	f.KEY0=1;
}

 /*!
  * @brief 	   Function to wait for n 100µs.
  * @param[in]  uint32_t dwUs
  * @param[out] None
  * @retval     void
  * @pre        manages TIMER_0-IRQ
  * @post       None
  * @attention  None
  * @note       This routine uses the TIMER_0.
  */
 void delay100us(uint32_t dwUs)
 {
	 timetick_count=0;
	 TIMER_Start(&TIMER_0);
	 while(timetick_count < dwUs);
	  {
	    while(TIMER_GetInterruptStatus(&TIMER_0));
	    TIMER_Stop(&TIMER_0);
	  }

 }

/*!
* @brief 	  Callback Handler initiated by DAVE RTC-IRQ-Service and is invoked all 1 Second.
* @param[in]  None
* @param[out] None
* @retval     void
* @pre        requires RTC-App, initiated by DAVE.
* @post       Function increment global variables @ref set_time_ticks.
* @attention  Enable Interrupt Settings - Time Interrupt Settings - SECOND.
* @note       This routine is the callback function of DAVE. It is invoked by the ISR generated from DAVE.
*/
void RTC_Time_Handler(void) //RTC_IRQ_Handler
{
	SNTP_sec_time_ticks++;
	incr_all_sec++;
}

/*!
 * @brief 	   Function sanitizes @ref timeval struct and is invoked in init cycle.
 * @param[in]  None
 * @param[out] None
 * @retval     void
 * @pre        invoked in init cycle
 * @post       Function updates global variable @ref timeval
 * @attention  None
 * @note       This routine initializes @ref timeval values in RTC_0 App.
 */
void RTC_init(void)
{
	timeval.seconds=0;
	timeval.minutes=0;
	timeval.hours=16;
	timeval.days=4;
	timeval.month=11;
	timeval.year=2018;
	RTC_Stop();
	RTC_SetTime(&timeval);
	RTC_Start();
}


