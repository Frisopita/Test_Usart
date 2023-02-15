/*
 * Debug.h
 *
 *  Created on: Nov 9, 2021
 *      Author: Cesar
 */

#ifndef INC_DEBUG_H_
#define INC_DEBUG_H_

typedef	unsigned char	u_char;
#define debug_MFRC522
//#define debug_CAN

#include "stm32f1xx_hal.h"
#include "printf.h"

void print_Debug (char* str);

void init_Debug ();

uint8_t ack_DebugRdy ();

#endif /* INC_DEBUG_H_ */
