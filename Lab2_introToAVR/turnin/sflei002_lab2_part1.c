/*	Author: sflei002
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #1
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



  DDRB = 0xFF; 



  PORTB = 0x00; 



  unsigned char input_1 = 0x00;



  unsigned char input_2 = 0x00;

 /* Insert DDR and PORT initializations */

    /* Insert your solution below */
    while (1) {
	input_1 = PINA & 0x01;



	input_2 = PINA & 0x02;



	if((input_1 == 0x01)&&(input_2 == 0x00)){



		PORTB = 0x01;



}



	else{



		PORTB = 0x00;



}

    }

    return 0;

}	
