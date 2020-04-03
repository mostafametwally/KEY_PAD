#include <avr/io.h>
#include <util/delay.h>
extern char flag;
char KEY_PAD_GET_KEY(void)
{
	char row_val=0;
	char count=4;
	static char key_val=0;
	for (count=0;count<4;count++)

	{
		PORTA=(PORTA|0xF0);
		PORTA=PORTA&(~(0x10<<count));
  		_delay_ms(5);
		row_val=PINA&0x0F;
		if (row_val!=0x0F)
		{
			while((PINA&0x0F)!=0x0F);
			break;}


		}

	switch (count)
	{
	case 0:
			{
				switch (row_val){//column 0 row 0,1,2,3
				case 0x0E:  key_val=7;flag=1;break;
				case 0x0D:  key_val=4;flag=1;break;
				case 0x0B:  key_val=1;flag=1;break;
				case 0x07:  key_val=16;flag=1;break;}
			}break;
	case 1:
 			{
				switch (row_val){ //column 1 row 0,1,2,3
				case 0x0E:  key_val=8;flag=1;break;
				case 0x0D:  key_val=5;flag=1;break;
				case 0x0B:  key_val=2;flag=1;break;
				case 0x07:  key_val=0;flag=1;break;}break;
			}
	case 2:
			{
				switch(row_val){//column 2 row 0,1,2,3
				case 0x0E:  key_val=9;flag=1;break;
				case 0x0D:  key_val=6;flag=1;break;
				case 0x0B:  key_val=3;flag=1;break;
				case 0x07:  key_val=13;flag=1;break;}break;
			}
	case 3:
			{
				switch(row_val){//column 3 row 0,1,2,3
				case 0x0E:  key_val=-1;flag=1;break;
				case 0x00D: key_val=-6;flag=1;break;
				case 0x00B: key_val=-3;flag=1;break;
				case 0x07:  key_val=-5;flag=1;break;}break;
			}
			}
			return key_val;

 		}
