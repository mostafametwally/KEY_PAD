#include <avr/io.h>
#include <avr/interrupt.h>
void UART_SEND_CHAR(char data)
{
	while(!(UCSRA&1<<UDRE));
	UDR=data;
}
unsigned char UART_ERECEIVE_CHAR(void)
{
	while(!(UCSRA&1<<RXC));
	return UDR;
}
void UART_SEND_STRING(char* string)
{
	while (*string!='\0')
	UART_SEND_CHAR(* string++);

}
