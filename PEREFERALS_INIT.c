#include "PEREFERALS.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
void PORTS_INIT(void)
{
//=====================================================
//=====================================================
//KEY _PAD INTERFACE
	DDRA=0xF0;
	PORTA=0xFF;
	PINA=0xFF;
//=====================================================
//=====================================================
//SPI communication  PORTB4 to PORTB7
	DDRB=0xBF;
	PORTB=0x00;
	////((1<<6)|(1<<4)|(1<<0));   //SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
	SPCR=0x5C;
	SPSR=0x00;
//=====================================================
//=====================================================
//UART_INITIALIZATION
	UCSRA=0x22;
	UCSRB=0x8F;
	UCSRC=0x86;
	UBRRL=12;
	UBRRH=0;
//======================================================
//======================================================
//TWI INITIALIZATION
	TWAR=0x04;
	TWBR=3;
	TWCR=0x44;
	TWSR=0x00;
}
