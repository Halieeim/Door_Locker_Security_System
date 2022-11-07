/******************************************************************************
 *
 * Module: Buzzer
 *
 * File Name: buzzer.c
 *
 * Description: Source file for the Buzzer driver
 *
 * Author: Ahmed Abd El-Halim
 *
 *******************************************************************************/

#include "buzzer.h"

void Buzzer_init(){
	/* set up buzzer pin direction to be output pin */
	GPIO_setupPinDirection(BUZZER_PORTID, BUZZER_PINID, PIN_OUTPUT);
	/* Initially turn off the buzzer by writing zero on its pin */
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_LOW);
}

void Buzzer_on(void){
	/* Turn on the buzzer by writing one on its pin */
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_HIGH);
}

void Buzzer_off(void){
	/* Turn off the buzzer by writing zero on its pin */
	GPIO_writePin(BUZZER_PORTID, BUZZER_PINID, LOGIC_LOW);
}
