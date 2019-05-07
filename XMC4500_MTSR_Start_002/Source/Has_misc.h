/*
 * Has_misc.h
 *
 *  Created on: Oct 13, 2015
 *      Author: haselb
 */

#ifndef HAS_MISC_H_
#define HAS_MISC_H_

#include <Dave.h>

/* Minimum value  calculation macro */
#define MIN(a,b) ((a) < (b) ? (a) : (b))

/* Maximum value  calculation macro */
#define MAX(a,b) ((a) > (b) ? (a) : (b))

/*!
 * @brief 	   Function to calculate  average of a value (datatype doesnt matter).
 * @param[in]  	1.) ave_value; calculated value
 * 				2.) ave_value_old; former ave_value
 * 				3.) ave_factor; range 2^n (1,2,4,8,16,32,64,..) to ease division procedure (lsr)
 * @param[out] None
 * @retval     void
 * @pre        None
 * @post       None
 * @attention  None
 * @note       None
 */
#define val_average(ave_value,ave_value_old,ave_factor)\
	do { \
		ave_value = ave_value_old + ((ave_value - ave_value_old) / ave_factor);\
		ave_value_old = ave_value;	\
	} while(0)


//struct of different values of a sensor value
typedef struct
{
	uint16_t raw_value;		/* direct from HAL	*/
	float ave_value;		/* nominal value 	*/
	float ave_value_old;	/* for averaging 	*/
	float max_value;		/* boundary			*/
	float min_value;		/* boundary			*/
	uint8_t ave_factor;		/* filter coeff, 2^n*/
}STRUCT_VALUE_t;

typedef struct FLAG_ARRAY
{
	uint16_t KEY0	 			:1;
	uint16_t KEY1 				:1;
	uint16_t KEY2				:1;
	uint16_t KEY3				:1;
	uint16_t rx_completion		:1;
	uint16_t tx_completion		:1;
	uint16_t I2C_NACK			:1;
	uint16_t eject_at_I2C_NACK	:1;
	uint16_t NTP_in_progress	:1;
	uint16_t TCP_in_progress	:1;
	uint16_t res10				:1;
	uint16_t res11				:1;
	uint16_t res12				:1;
	uint16_t res13				:1;
	uint16_t res14				:1;
	uint16_t res15				:1;
}FLAG_ARRAY_t;

extern volatile FLAG_ARRAY_t f;


#define ON 1
#define OFF 0

extern volatile uint8_t mainloop_ticks;
extern volatile uint16_t incr_all_sec;
extern volatile uint16_t SNTP_sec_time_ticks;
extern XMC_RTC_TIME_t timeval;

extern void tim_sys_check_timeouts_wrap(void *args);
extern void MAINLOOP_IRQ(void);
extern void RTC_init(void);
extern void delay100us(uint32_t dwUs);


#endif /* HAS_MISC_H_ */
