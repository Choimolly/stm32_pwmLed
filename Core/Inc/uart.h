/*
 * uart.h
 *
 *  Created on: Jan 10, 2024
 *      Author: choiheawon2
 */

#ifndef INC_UART_H_ //중복을 막기 위해 쓰는것
#define INC_UART_H_

#include "main.h" //얘 안 하면 오류남

//변수 prototype 선언
void initUart(UART_HandleTypeDef *); //UART 장치 초기화 //구체적인 이름인 huart생략 가능


#endif /* INC_UART_H_ */
