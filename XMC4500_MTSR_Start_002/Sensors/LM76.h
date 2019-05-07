/*
 * LM75.h
 *
 *  Created on: 27.12.2014
 *      Author: haselb
 */

#ifndef LM76_H_
#define LM76_H_

#include"Source/Has_misc.h"

// LM76 Sensor
 struct lm76
{
	STRUCT_VALUE_t temp;
	uint8_t DevID;			//!> I2C sensors Address  	*/
	uint8_t location;		//!> where is sensor located */
	uint8_t status;
}lm76;

extern struct lm76 S_LM76;


extern uint8_t read_LM76(uint8_t DevID, uint16_t *return_value);
extern void update_LM76(void);

#endif /* LM76_H_ */
