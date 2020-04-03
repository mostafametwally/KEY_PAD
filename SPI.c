#include <avr/io.h>
#include <util/delay.h>
	void SPI_MASTER_SEND(char Data)
	{
		// Start transmission 
			SPDR = Data;
		// Wait for transmission complete 
		while(!(SPSR & (1<<SPIF)));
		
	}
