/*
 * HAL_i2c.h
 *
 *  Created on: Dec 26, 2017
 *      Author: haselb
 */

#ifndef HAL_I2C_H_
#define HAL_I2C_H_

#include "DAVE.h"

#define DEVICE_READ_ERROR 	0xFFU
#define DEVICE_SUCCESSFUL 	0x00U

extern volatile uint8_t tx_completion_0;
extern volatile uint8_t rx_completion_0;
extern volatile bool flag_I2C_NACK;
extern volatile bool flag_eject_at_I2C_NACK;
extern uint32_t timer_1_of_8;

extern void SW_IRQ_1 (void *args);


extern void Soft_WDG_1 (bool on_or_off);


#endif /* HAL_I2C_H_ */
