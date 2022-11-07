 /******************************************************************************
 *
 * Module: Buzzer
 *
 * File Name: buzzer.h
 *
 * Description: Header file for the Buzzer driver
 *
 * Author: Ahmed Abd El-Halim
 *
 *******************************************************************************/


#ifndef BUZZER_H_
#define BUZZER_H_

#include "std_types.h"
#include "gpio.h"

#define BUZZER_PORTID		PORTD_ID
#define BUZZER_PINID		PIN7_ID

void Buzzer_init();

void Buzzer_on(void);

void Buzzer_off(void);

#endif /* BUZZER_H_ */
