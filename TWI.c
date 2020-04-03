#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdlib.h>

void TWI_SEND_START(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);//Send START condition

	//clear interrupt bit ,enable start bit and TWI bit

	while (!(TWCR & (1<<TWINT)));

	//Wait for TWINT Flag set. This indicates  that the START condition has been transmitted


	// Check value of TWI Status Register. Mask prescaler bits
	//$0x08  START condition has been transmitted

}
//================================================================================
void TWI_WRITE(unsigned char DATA)
{
	TWDR = DATA;//slave address  and write state 

  	TWCR = (1<<TWINT) | (1<<TWEN);

	// ClearTWINT bit in TWCR to start transmission of address

	while (!(TWCR & (1<<TWINT)));
	

	
}
//======================================================================
	

 char TWI_READ( void)
{
	
	char x;
	TWCR = (1 << TWINT) | (1 << TWEN);
	while(!(TWCR & (1<<TWINT)));
    x=TWDR;
    return x;

}
//==============================================================
void TWI_SEND_STOP(void)
{
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWSTO);
	/**
		Transmit STOP condition **/
}
//============================================================
void send_ack(void)
{
	TWCR = (1 << TWINT) | (1 << TWEN)|(1<<TWEA);
	while (!(TWCR & (1<<TWINT)));

}
