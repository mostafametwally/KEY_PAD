#ifndef _PEREFERALS_
#define _PEREFERALS_
#define slave_address_write 0xA0// 10100110
#define slave_address_read 0xA1//  10100111
char KEY_PAD_GET_KEY(void);
void PORTS_INIT(void);
void SEVEN_SEGMENT(char xxx);
void SPI_MASTER_SEND(char Data);
void UART_SEND_CHAR(char data);
char UART_ERECEIVE_CHAR(void);
void UART_SEND_STRING(char* string);
void TWI_SEND_START(void);
void TWI_WRITE(unsigned char DATA);
char TWI_READ(void);
void send_ack(void);
void TWI_SEND_STOP(void);
unsigned char TWI_GetS_tatus(void);
char compare(char *pass_word);
//extern void UART_SEND_CHAR(char data);
//extern void SEVEN_SEGMENT();
#endif
