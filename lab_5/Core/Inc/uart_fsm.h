/*
 * uart_fsm.h
 *
 *  Created on: Sep 28, 2023
 *      Author: ADMIN
 */

#ifndef INC_UART_FSM_H_
#define INC_UART_FSM_H_

#include "global.h"

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

void uart_communiation_fsm(void);

#endif /* INC_UART_FSM_H_ */
