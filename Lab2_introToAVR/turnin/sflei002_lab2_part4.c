/*	Author: sflei002
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
  DDRA = 0x00; 

  PORTA = 0xFF;

  DDRB = 0x00;

  PORTB = 0xFF;

  DDRC = 0x00; 

  PORTC = 0xFF;

  DDRD = 0xFF;

  PORTD = 0x00; 

  /* Insert DDR and PORT initializations */

  unsigned char weight_A = 0x00;

  unsigned char weight_B = 0x00;

  unsigned char weight_C = 0x00;

  unsigned char weight_diff = 0x00;

  unsigned char weight_1 = 0x00;

  unsigned short weight_tot = 0x0000;

    while (1) {
	weight_A = PINA;

	weight_B = PINB;

	weight_C = PINC;

	weight_tot = weight_A + weight_B + weight_C;
	weight_1 = 0x00;


	if(abs((weight_A - weight_C)) > 0x50){

		weight_diff = 0x02;

}

	if(weight_tot > 0x008C){

		weight_1 = 0x01;

}
	else{
		weight_1 = 0x00;
}
	PORTD =(weight_diff | weight_1);
	PORTD = PORTD | (weight_tot >> 2);
}
}
