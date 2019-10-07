/*	Author: kmaka003
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#include <stdio.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0xFF; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0xFF; 
	DDRC = 0x00; PORTC = 0x00;
  
	unsigned char tmpB = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char tmpC = 0x00;
	unsigned char i = 0x00; 

    /* Insert your solution below */
    while (1) {
	tmpB = PINB;
	tmpA = PINA;
	i = 0x00;
	tmpC = 0x00;
	// Check if each bit in Port A has a 1
	for (i = 0x01; i != 0x00; i = i << 1){
		if (tmpA & i){
			tmpC = tmpC + 1;
			
		}
	}
	// Check if each bit in Port B has a 1
	for (i = 0x01; i != 0x00; i = i << 1){
                if (tmpB & i){
                        tmpC = tmpC + 1;
                }
        }
	PORTC = tmpC;
		
    }
    return 1;
}
