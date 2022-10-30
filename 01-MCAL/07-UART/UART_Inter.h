/***********************************************/
/***************SW     :UART_interface********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :30th October 2022********************************/
/***********************************************/


#ifndef UART_INTER_H
#define UART_INTER_H


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
void UART_vidInit();

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
void UART_vidSend(u16 copy_u16DATA);

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
u16 UART_vidRecieve(void);



#endif
