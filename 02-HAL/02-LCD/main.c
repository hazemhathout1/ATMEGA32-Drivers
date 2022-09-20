/*
 * main.c
 *
 *  Created on: 9 Sep 2022
 *      Author: hazem
 */


#include "STD_Types.h"
#include "BIT_MATH.h"
#include "LCD_int.h"
#include "LCD_Config.h"
#include "DIO_interface.h"
#include "util/delay.h"


int main()
{

//	u8 HamokshaArr[8]
//				  = {
//						   0b01110,
//						   0b01010,
//						   0b01110,
//						   0b10100,
//						   0b01110,
//						   0b00101,
//						   0b00100,
//						   0b01010
//				   };
//	DIO_VidSetPortDir(CONT_PORT,PortHigh);
//	DIO_VidSetPortDir(DATA_PORT,PortHigh);
//	DIO_VidSetPinDir(PORT_C,Pin_0,Input);
//	DIO_VidSetPinValue(PORT_C,Pin_0,PinHigh);
//	LCD_Clear();
//	LCD_VidInit();
//	u8 x=5;
//	while(1)
//	{
//		DIO_VidGetPinValue(PORT_C,Pin_0,&x);
//		if(x==0)
//		{
//			char slo[10]="Start Race";
//			for(int i=0;i<10;i++)
//			{
//				LCD_VidSendData(slo[i]);
//			}
//			_delay_ms(2000);
//			LCD_Clear();
//		for(int i=0;i<16;i++)
//		{
//			LCD_VidInit();
//			LCD_VidSendSpecChar(HamokshaArr,0,0,i);
//			LCD_VidSendSpecChar(HamokshaArr,0,1,i+1);
//			_delay_ms(500);
//			LCD_Clear();
//		}
//		char slo2[20]="Hamoksha two wins";
//		for(int i=0;i<20;i++)
//		{
//			LCD_VidSendData(slo2[i]);
//		}
//		_delay_ms(3000);
//		}
//	}
	DIO_VidSetPortDir(CONT_PORT,PortHigh);
	DIO_VidSetPortDir(DATA_PORT,PortHigh);
	LCD_VidInit();
	LCD_VidSendStr("Hazem Mahmoud");

}
