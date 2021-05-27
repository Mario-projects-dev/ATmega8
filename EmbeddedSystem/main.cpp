/*
 * EmbeddedSystem.cpp
 *
 * Created: 24. 5. 2021 20:03:35
 * Author : Mario
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define LED_ON PORTB |= (1<<PORTB5)
#define LED_OFF PORTB &= ~(1<<PORTB5)
#define LED_TOGGLE  PIN |= (1<<PINB5)

int main(int argc, char **argv)
{
	//Set PORTB1 as output
	DDRB |= (1<<DDB5);
	DDRB &= ~(1<<DDB5);

	while(1)
	{
		if (!(PINB & (1<<PINB7)))
		{
			LED_ON;
		}
		else
		{
			LED_OFF;
		}
		
	}
		
}

