/*
 * sub_main.c
 *
 *  Created on: 02.11.2018
 *      Author: Bepok
 */

#include "sub_main.h"

volatile uint16_t jezdzik_time = 0;

void loop(){

	non_blocking_delay(200);




}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim == &htim16){
		jezdzik_time++;
		if(jezdzik_time % 100 == 0){
			HAL_GPIO_TogglePin(LD10_GPIO_Port,LD10_Pin);
		}
		if(jezdzik_time == 50000){
			jezdzik_time = 0;
		}

	}
}

void non_blocking_delay(uint16_t wait_time){
	while(((jezdzik_time % wait_time) != 0) && (jezdzik_time != 0)){
	}
		HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
}
