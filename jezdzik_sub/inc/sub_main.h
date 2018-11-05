/*
 * sub_main.h
 *
 *  Created on: 02.11.2018
 *      Author: Bepok
 */

#ifndef SUB_MAIN_H_
#define SUB_MAIN_H_

#include "main.h"
#include "stm32f3xx_hal.h"
#include "i2c.h"
#include "spi.h"
#include "tim.h"
#include "usb.h"
#include "gpio.h"
#include "stdint.h"

#define LEFT 0
#define RIGHT 1
#define FORWARD 1
#define BACKWARD 0

volatile uint16_t jezdzik_time;

void loop();

void start_motor(uint8_t direction, uint8_t side);
void stop_motor(uint8_t side);
void non_blocking_delay(uint16_t current_time );



#endif /* SUB_MAIN_H_ */
