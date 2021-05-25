/*
 * EmbeddedSystem.cpp
 *
 * Created: 24. 5. 2021 20:03:35
 * Author : Mario
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(int argc, char **argv)
{
	//Set PORTB1 as output
	DDRB=0b00000010;

	while(1)
	{
		//Set PB1=High(+5v), this will turn on the LED
		PORTB|=0b00000010;
		_delay_ms(500); // wait for half second, then turn it off

		//Set PB1=Low(GND)
		PORTB&=0b11111101;
		_delay_ms(500);
	}
		
}

