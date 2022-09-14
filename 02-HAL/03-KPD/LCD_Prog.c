/********************************************************************/
/***************SW     :LCD_PROGRAM**********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :10th of September 2022***********************/
/********************************************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "LCD_Private.h"
#include "LCD_Config.h"
#include "LCD_int.h"
#include "util/delay.h"


/*******************************************
 * Func Name   : LCD_Clear
 * *****************************************
 * Input Par   : Void
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Clear the LCD
 *
 * ******************************************/
void LCD_Clear(void)
{
	LCD_VidSendCmd(0b00000001);
}

/*******************************************
 * Func Name   : LCD_VidSetFont
 * *****************************************
 * Input Par   : Copy_u8Cmd
 * Description : Receive the required CMD
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Set the FONT on the LCD
 *
 * ******************************************/
void LCD_VidSetFont(u8 Copy_u8Cmd)
{
	if(Copy_u8Cmd==Large)
	{
		LCD_VidSendCmd(0b00111100);
	}
	else if(Copy_u8Cmd==Small)
	{
		LCD_VidSendCmd(0b00111000);
	}
}

/*******************************************
 * Func Name   : LCD_VidDispONOFF
 * *****************************************
 * Input Par   : Copy_u8Cmd
 * Description : Receive the required CMD
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to enable and disable the Display on the LCD
 *
 * ******************************************/
void LCD_VidDispONOFF(u8 Copy_u8Cmd)
{
	if(Copy_u8Cmd==DispON)
	{
		LCD_VidSendCmd(0b00001100);
	}
	else if(Copy_u8Cmd==DispOFF)
	{
		LCD_VidSendCmd(0b00001000);
	}
}

/*******************************************
 * Func Name   : LCD_VidSendCmd
 * *****************************************
 * Input Par   : Copy_u8Cmd
 * Description : Receive the required CMD
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Set a specefic CMD
 *
 * ******************************************/
void LCD_VidSendCmd(u8 Copy_u8Cmd)
{
	DIO_VidSetPinValue(CONT_PORT,RS_PIN,PinLow);
	DIO_VidSetPinValue(CONT_PORT,RW_PIN,PinLow);
	DIO_VidSetPortValue(DATA_PORT,Copy_u8Cmd);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinHigh);
	_delay_ms(3);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinLow);
}

/*******************************************
 * Func Name   : LCD_VidSendCmd2
 * *****************************************
 * Input Par   : Copy_u8Cmd
 * Description : Receive the required CMD
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Set a specefic CMD
 *
 * ******************************************/
u8 LCD_VidSendCmd2()
{
	DIO_VidSetPinValue(CONT_PORT,RS_PIN,PinLow);
	DIO_VidSetPinValue(CONT_PORT,RW_PIN,PinHigh);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinHigh);
	_delay_ms(3);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinLow);
	return DATA_PORT;
}

/*******************************************
 * Func Name   : LCD_VidSendData
 * *****************************************
 * Input Par   : Copy_u8Data
 * Description : Required Data to be displayed
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Send data to the LCD and display it
 *
 * ******************************************/
void LCD_VidSendData(u8 Copy_u8Data)
{
	DIO_VidSetPinValue(CONT_PORT,RS_PIN,PinHigh);
	DIO_VidSetPinValue(CONT_PORT,RW_PIN,PinLow);
	DIO_VidSetPortValue(DATA_PORT,Copy_u8Data);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinHigh);
	_delay_ms(3);
	DIO_VidSetPinValue(CONT_PORT,EN_PIN,PinLow);
}


/*******************************************
 * Func Name   : LCD_VidInit
 * *****************************************
 * Input Par   : Void
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Initialise the LCD
 *
 * ******************************************/
void LCD_VidInit(void)
{
	_delay_ms(30);
	LCD_VidSendCmd(0b00111111);
	_delay_ms(1);
	LCD_VidSendCmd(0b00001100);
	_delay_ms(2);
	LCD_VidSendCmd(0b00000001);
	_delay_ms(2);
}

/*******************************************
 * Func Name   : LCD_VidGoToXY
 * *****************************************
 * Input Par   : Copy_u8XPos/Copy_u8YPos
 * Description : the x&y positions that is required to display the character on it
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Set the position on the LCD
 *
 * ******************************************/
void LCD_VidGoToXY(u8 Copy_u8XPos,u8 Copy_u8YPos)
{
	u8 Local_u8Address=Copy_u8YPos;
	if(Copy_u8XPos==1)
	{
		Local_u8Address=(Copy_u8YPos+0x40);
	}
	LCD_VidSendCmd(Local_u8Address+128);//128 is the cmd to access DDRam Address
}

/*******************************************
 * Func Name   : LCD_VidSendSpecChar
 * *****************************************
 * Input Par   : *ptrPattern/Copy_u8Loc/Copy_u8Xpos/Copy_u8Ypos
 * Description : Array Contain the special Character/Location in the CGRAM/X Position/Y Position
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used To Display a special Character on the LCD
 *
 * ******************************************/
void LCD_VidSendSpecChar(u8 *ptrPattern,u8 Copy_u8Loc,u8 Copy_u8Xpos,u8 Copy_u8Ypos)
{
	u8 Loc_CGRAMLoc=Copy_u8Loc*8;
	LCD_VidSendCmd(Loc_CGRAMLoc+64);//CGRAm is accessed succeffully as 64 is the cmd in LCD controller to access the cgram
	for(int i=0;i<8;i++)
	{
		LCD_VidSendData(ptrPattern[i]);
	}
	LCD_VidGoToXY(Copy_u8Xpos,Copy_u8Ypos);
	LCD_VidSendData(Copy_u8Loc);//
}

/*******************************************
 * Func Name   : LCD_VidSendINT
 * *****************************************
 * Input Par   : Num
 * Description : Required number to be displayed
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Write an integer on the LCD
 *
 * ******************************************/
void LCD_VidSendINT(u32 Num)
{
	if(Num!=0)
	{
		LCD_VidSendINT(Num/10);
		LCD_VidSendData((Num%10)+48);
	}
}

/*******************************************
 * Func Name   : LCD_VidSendStr
 * *****************************************
 * Input Par   : *Copy_u8Str
 * Description : Required array of Character to be displayed
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Write a String on the LCD
 *
 * ******************************************/
void LCD_VidSendStr(u8 *Copy_u8Str)
{
	for(int i=0;i<16;i++)
	{
		if(Copy_u8Str[i]!='\0')
		{
			LCD_VidSendData(Copy_u8Str[i]);
		}
		else break;
	}
}
