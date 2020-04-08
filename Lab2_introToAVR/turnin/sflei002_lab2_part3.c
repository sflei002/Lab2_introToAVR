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

  DDRC = 0xFF; 

  PORTC = 0x00; 

  unsigned char park_1 = 0x00;

  unsigned char park_2 = 0x00;

  unsigned char park_3 = 0x00;

  unsigned char park_4 = 0x00;

  unsigned char cntavail = 0x00;

    while (1) {
	park_1 = PINA & 0x01;

	park_2 = PINA & 0x02;

	park_3 = PINA & 0x04;

	park_4 = PINA & 0x08;

	cntavail = park_1 + (park_2 >> 1) + (park_3 >> 2) + (park_4 >> 3);

	if(cntavail >= 0x04){

		PORTC = 0x80;
}



	else{

		cntavail = 0x04 - cntavail;

		PORTC = cntavail;


}
	
}
}
