/********************************************************************/
/***************SW     :LCD_INTERFACE********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :10th of September 2022***********************/
/********************************************************************/

#ifndef LCD_INT_H
#define LCD_INT_H


typedef enum
{
	DispOFF,
	DispON
}et_Disp;

typedef enum
{
	Large,
	Small
}et_Font;


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
void LCD_VidSendCmd(u8 Copy_u8Cmd);

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
void LCD_VidSetFont(u8 Copy_u8Cmd);

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
u8 LCD_VidSendCmd2();

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
void LCD_VidDispONOFF(u8 Copy_u8Cmd);

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
void LCD_VidGoToXY(u8 Copy_u8XPos,u8 Copy_u8YPos);

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
void LCD_Clear(void);

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
void LCD_VidInit(void);

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
void LCD_VidSendSpecChar(u8 *ptrPattern,u8 Copy_u8Loc,u8 Copy_u8Xpos,u8 Copy_u8Ypos);

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
void LCD_VidSendINT(u32 Num);

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
void LCD_VidSendStr(u8 *Copy_u8Str);

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
void LCD_VidSendData(u8 Copy_u8Data);










#endif
