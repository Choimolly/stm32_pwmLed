/*
 * uart.c
 *
 *  Created on: Jan 10, 2024
 *      Author: choiheawon2
 */

#include "uart.h"

UART_HandleTypeDef *huart;

void initUart(UART_HandleTypeDef *inHuart){
	huart = inHuart; //haurt의 주소는 inHuart의 주소를 가져다 넣어라
}

int _write(int file, char *p, int len){
	HAL_UART_Transmit(huart, (uint8_t *)p, len, len);
	return len;
}
