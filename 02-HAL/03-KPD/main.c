/*
 * main.c
 *
 *  Created on: 13 Sep 2022
 *      Author: hazem
 */
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "KPD_int.h"
#include "LCD_int.h"
#include "LCD_Config.h"



int main()
{
	u8 z,x=0;
	KPD_u8InitKPD();
	DIO_VidSetPortDir(CONT_PORT,PortHigh);
	DIO_VidSetPortDir(DATA_PORT,PortHigh);
	LCD_VidInit();
	while(1)
	{
		z=KPD_GetPressedKKey();
		if(z==101)
		{

		}
		else
		{
			LCD_VidSendData(z);
			LCD_VidSendCmd(0b00011000);
		}
	}

}

