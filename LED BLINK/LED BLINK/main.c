/*
 * LED BLINK.c
 *
 * Created: 31-05-2018 04:20:44
 * Author : ANUBHAV
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA=0xFF;  // This is for data direction register. This register will tell you what is the direction of data.
        /*
        
        If you want a single pin's control i.e Input/Output 

        Use this ----  DDRA = DDRA|(0x00000001); -- for A0 -- only set A0 as Output, others remain unchanged.     
        
        
        */
    while (1) 
    {
		PORTA=0xFF;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);

    /* 
    
    Alternate code

    PORTA ^=(1<<PINA0);
    _delay_ms(1000);   
    
    */

    }
}

