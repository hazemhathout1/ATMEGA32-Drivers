/***********************************************/
/***************SW     :UART_Program********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :30th October 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "UART_Inter.h"
#include "UART_Private.h"

/*******************************************
 * Func Name   : UART_vidInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to initialise The UART
 *
 * ******************************************/
void UART_vidInit()
{

	SET_BIT(UCSRC,URSEL);//select to write on ucsrc
//	SET_BIT(UCSRC,UCSZ1);//select 8 bit mode
//	SET_BIT(UCSRC,UCSZ0);//select 8 bit mode
//	CLR_BIT(UCSRB,UCSZ2);
	UCSRC=0b10000110;
	UBRRH=0;
	UBRRL=51;//select baud rate=9600
	//enable the RX and TX
	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);


}
/*******************************************
 * Func Name   : UART_vidSend
 * *****************************************
 * Input Par   : copy_u16DATA
 * Description : The Data sent
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to send data with the UART
 *
 * ******************************************/
void UART_vidSend(u16 copy_u16DATA)
{
	while(GET_BIT(UCSRA,UDRE)==0);
	UDR=(u8)copy_u16DATA;
}

/*******************************************
 * Func Name   : UART_vidRecieve
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: u16
 * Description : the the data received
 * Description : This function is used to receive data with the UART
 *
 * ******************************************/
u16 UART_vidRecieve()
{
	while((GET_BIT(UCSRA,RXC)==0));
	return UDR;
}
