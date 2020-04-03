#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "PEREFERALS.h"
#include "PEREFERALS.h"

volatile char flag=0;
int main()
	
{
			PORTS_INIT();
			char pressed_key =0;
			char pass_word[4];
			int i=0;//store # that user entered
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x00);
			TWI_WRITE(1);
			TWI_WRITE(1);
			TWI_WRITE(1);
			TWI_WRITE(1);
			//===========================================
			TWI_WRITE(2);
			TWI_WRITE(2);
			TWI_WRITE(2);
			TWI_WRITE(2);
			//===========================================
			TWI_WRITE(2);
			TWI_WRITE(3);
			TWI_WRITE(5);
			TWI_WRITE(5);
			//===========================================
			TWI_WRITE(4);
			TWI_WRITE(4);
			TWI_WRITE(4);
			TWI_WRITE(4);
			TWI_SEND_STOP();
			_delay_ms(10);
			//===========================================
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x10);
			TWI_WRITE(5);
			TWI_WRITE(5);
			TWI_WRITE(5);
			TWI_WRITE(5);
			TWI_SEND_STOP();
			_delay_ms(10);
			//===========================================
	while(1)
	{		
		
		pressed_key=KEY_PAD_GET_KEY();
  		if(flag==1)
		{
			
			SPI_MASTER_SEND(pressed_key+48);
			flag=0;
			
			if (pressed_key!=16)
			{
				pass_word[i++]=pressed_key;
				if (i==4)
				{
					SPI_MASTER_SEND(compare(pass_word));
				}
			}
			else 
			i=0;	
		}
	}
	return 0;	
}
