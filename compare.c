#include <util/delay.h>
#include "PEREFERALS.h"
char compare(char *pass_word)
{
	char key[4]={0,0,0,0};
	TWI_SEND_START();
	TWI_WRITE( slave_address_write );
	TWI_WRITE(0x00);
	TWI_SEND_START();
	TWI_WRITE( slave_address_read);
	key[0]=TWI_READ();
	TWI_SEND_STOP();
	_delay_ms(10);
	if(key[0]==pass_word[0])
	{
		TWI_SEND_START();
		TWI_WRITE( slave_address_write );
		TWI_WRITE(0x01);
		TWI_SEND_START();
		TWI_WRITE( slave_address_read);
		key[1]=TWI_READ();
		TWI_SEND_STOP();
		_delay_ms(10);
		if(key[1]==pass_word[1])
		{
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x02);
			TWI_SEND_START();
			TWI_WRITE( slave_address_read);
			key[2]=TWI_READ();
			TWI_SEND_STOP();
			_delay_ms(10);
		
			if(key[2]==pass_word[2])
			{
				TWI_SEND_START();
				TWI_WRITE( slave_address_write );
				TWI_WRITE(0x03);
				TWI_SEND_START();
				TWI_WRITE( slave_address_read);
				key[3]=TWI_READ();
				TWI_SEND_STOP();
				if(key[3]==pass_word[3])
				return 11;
				else ;
			}
			else ;
		}
		else ;
	}
	
//====================================================
//====================================================
	TWI_SEND_START();
	TWI_WRITE( slave_address_write );
	TWI_WRITE(0x04);
	TWI_SEND_START();
	TWI_WRITE( slave_address_read);
	key[0]=TWI_READ();
	TWI_SEND_STOP();
	_delay_ms(10);
	if(key[0]==pass_word[0])
	{
		TWI_SEND_START();
		TWI_WRITE( slave_address_write );
		TWI_WRITE(0x05);
		TWI_SEND_START();
		TWI_WRITE( slave_address_read);
		key[1]=TWI_READ();
		TWI_SEND_STOP();
		_delay_ms(10);
		if(key[1]==pass_word[1])
		{
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x06);
			TWI_SEND_START();
			TWI_WRITE( slave_address_read);
			key[2]=TWI_READ();
			TWI_SEND_STOP();
			_delay_ms(10);
			
			if(key[2]==pass_word[2])
			{
				TWI_SEND_START();
				TWI_WRITE( slave_address_write );
				TWI_WRITE(0x07);
				TWI_SEND_START();
				TWI_WRITE( slave_address_read);
				key[3]=TWI_READ();
				TWI_SEND_STOP();
				if(key[3]==pass_word[3])
				return 12;
				else ;
			}
			else ;
		}
		else ;
	}

//========================================================
//========================================================

		TWI_SEND_START();
	TWI_WRITE( slave_address_write );
	TWI_WRITE(0x08);
	TWI_SEND_START();
	TWI_WRITE( slave_address_read);
	key[0]=TWI_READ();
	TWI_SEND_STOP();
	_delay_ms(10);
	if(key[0]==pass_word[0])
	{
		TWI_SEND_START();
		TWI_WRITE( slave_address_write );
		TWI_WRITE(0x09);
		TWI_SEND_START();
		TWI_WRITE( slave_address_read);
		key[1]=TWI_READ();
		TWI_SEND_STOP();
		_delay_ms(10);
		if(key[1]==pass_word[1])
		{
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x0A);
			TWI_SEND_START();
			TWI_WRITE( slave_address_read);
			key[2]=TWI_READ();
			TWI_SEND_STOP();
			_delay_ms(10);
			
			if(key[2]==pass_word[2])
			{
				TWI_SEND_START();
				TWI_WRITE( slave_address_write );
				TWI_WRITE(0x0B);
				TWI_SEND_START();
				TWI_WRITE( slave_address_read);
				key[3]=TWI_READ();
				TWI_SEND_STOP();
				if(key[3]==pass_word[3])
				return 13;
				else ;
			}
			else ;
		}
		else ;
	}
//====================================================
//====================================================
		TWI_SEND_START();
	TWI_WRITE( slave_address_write );
	TWI_WRITE(0x0C);
	TWI_SEND_START();
	TWI_WRITE( slave_address_read);
	key[0]=TWI_READ();
	TWI_SEND_STOP();
	_delay_ms(10);
	if(key[0]==pass_word[0])
	{
		TWI_SEND_START();
		TWI_WRITE( slave_address_write );
		TWI_WRITE(0x0D);
		TWI_SEND_START();
		TWI_WRITE( slave_address_read);
		key[1]=TWI_READ();
		TWI_SEND_STOP();
		_delay_ms(10);
		if(key[1]==pass_word[1])
		{
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x0E);
			TWI_SEND_START();
			TWI_WRITE( slave_address_read);
			key[2]=TWI_READ();
			TWI_SEND_STOP();
			_delay_ms(10);
			
			if(key[2]==pass_word[2])
			{
				TWI_SEND_START();
				TWI_WRITE( slave_address_write );
				TWI_WRITE(0x0F);
				TWI_SEND_START();
				TWI_WRITE( slave_address_read);
				key[3]=TWI_READ();
				TWI_SEND_STOP();
				if(key[3]==pass_word[3])
				return 14;
				else ;
			}
			else ;
		}
		else ;
	}
	//==========================================================================
	//==================================================================
	TWI_SEND_START();
	TWI_WRITE( slave_address_write );
	TWI_WRITE(0x10);
	TWI_SEND_START();
	TWI_WRITE( slave_address_read);
	key[0]=TWI_READ();
	TWI_SEND_STOP();
	_delay_ms(10);
	if(key[0]==pass_word[0])
	{
		TWI_SEND_START();
		TWI_WRITE( slave_address_write );
		TWI_WRITE(0x11);
		TWI_SEND_START();
		TWI_WRITE( slave_address_read);
		key[1]=TWI_READ();
		TWI_SEND_STOP();
		_delay_ms(10);
		if(key[1]==pass_word[1])
		{
			TWI_SEND_START();
			TWI_WRITE( slave_address_write );
			TWI_WRITE(0x12);
			TWI_SEND_START();
			TWI_WRITE( slave_address_read);
			key[2]=TWI_READ();
			TWI_SEND_STOP();
			_delay_ms(10);
		
			if(key[2]==pass_word[2])
			{
				TWI_SEND_START();
				TWI_WRITE( slave_address_write );
				TWI_WRITE(0x13);
				TWI_SEND_START();
				TWI_WRITE( slave_address_read);
				key[3]=TWI_READ();
				TWI_SEND_STOP();
				if(key[3]==pass_word[3])
				return 16;
				else ;
			}
			else ;
		}
		else ;
	}
	//=======================================================================
	//========================================================================
	 return 15;
	
}
