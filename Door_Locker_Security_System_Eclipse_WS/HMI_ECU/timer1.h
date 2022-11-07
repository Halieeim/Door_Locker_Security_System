/******************************************************************************
 *
 * Module: Timer1
 *
 * File Name: timer1.h
 *
 * Description: Header file for the Timer1 driver
 *
 * Author: Ahmed Abd El-Halim
 *
 *******************************************************************************/


#ifndef TIMER1_H_
#define TIMER1_H_

#include "std_types.h"

/* TIMER1 MODES FOR WGM13, WGM12, WGM11, WGM10 BITS */
#define NORMAL				0x00
#define CTC_OCR1A			0x04
#define FAST_PWM_8_BITS		0x05
#define FAST_PWM_9_BITS		0x06
#define FAST_PWM_10_BITS	0x07
#define CTC_ICR1			0x0C
#define FAST_PWM_TOP_ICR1	0x0E
#define FAST_PWM_TOP_OCR1A	0x0F

typedef enum{
	NO_CLK,F_CPU1,F_CPU_8,F_CPU64,F_CPU_256,F_CPU_1024,EXTERNAL_CLK_ON_FALLING_EDGE,EXTERNAL_CLK_ON_RISING_EDGE
}Timer1_Prescaler;

/* TIMER MODES FOR COM1A/COM1B BITS */
typedef enum{
	NORMAL_MODE,COMPARE_MODE
}Timer1_Mode;


typedef struct{
	uint16 initial_value;
	uint16 compare_value; // it will be used in compare mode only.
	Timer1_Prescaler prescaler;
	Timer1_Mode mode;
}Timer1_ConfigType;

void Timer1_init(const Timer1_ConfigType * Config_Ptr);
void Timer1_deInit(void);
void Timer1_setCallBack(void(*a_ptr)(void));



#endif /* TIMER1_H_ */

