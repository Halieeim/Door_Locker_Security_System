 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the UART AVR driver
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_

#include "std_types.h"

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

typedef enum{
	ASYNC_NORMAL_SPEED,ASYNC_DOUBLE_SPEED,SYNC
}UART_MODE;

typedef enum{
	SIZE_5,SIZE_6,SIZE_7,SIZE_8,SIZE_9
}UART_dataSize;

typedef enum{
	DISABLED,RESERVED,EVEN_PARITY,ODD_PARITY
}UART_parityMode;

typedef enum{
	ONE_STOP_BIT,TWO_STOP_BITS
}UART_stopMode;

typedef enum{
	RISING_EDGE,FALLING_EDGE
}UART_clockPolarity;

typedef struct{
	uint32 baudRate;
	UART_MODE mode;
	UART_parityMode parityMode;
	UART_stopMode stopMode;
	UART_dataSize dataSize;
	UART_clockPolarity clockPolarity;
}UART_configType;

/*
 * Description :
 * Functional responsible for Initialize the UART device by:
 * 1. Setup the Frame format like number of data bits, parity bit type and number of stop bits.
 * 2. Enable the UART.
 * 3. Setup the UART baud rate.
 */
void UART_init(const UART_configType *configPtr);

/*
 * Description :
 * Functional responsible for send byte to another UART device.
 */
void UART_sendByte(const uint8 data);

/*
 * Description :
 * Functional responsible for receive byte from another UART device.
 */
uint8 UART_recieveByte(void);

/*
 * Description :
 * Send the required string through UART to the other UART device.
 */
void UART_sendString(const uint8 *Str);

/*
 * Description :
 * Receive the required string until the '#' symbol through UART from the other UART device.
 */
void UART_receiveString(uint8 *Str); // Receive until #

#endif /* UART_H_ */
