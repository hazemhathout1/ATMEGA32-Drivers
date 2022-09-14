/********************************************************************/
/***************SW     :KEYPAD_PROGRAM*******************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :14th of September 2022***********************/
/********************************************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "KPD_Config.h"
#include "KPD_Private.h"
#include "KPD_int.h"
#include "util/delay.h"



/*******************************************
 * Func Name   : KPD_VidInitKPD
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to initialise KPD
 */
void KPD_VidInitKPD(void)
{
	for(u8 i=0;i<4;i++)
	{
		DIO_VidSetPinDir(KPD_PORT,KPD_u8ColArr[i],Output);
		DIO_VidSetPinDir(KPD_PORT,KPD_u8RowArr[i],Input);
	}
	DIO_VidSetPortValue(KPD_PORT,PortHigh);
}

/*******************************************
 * Func Name   : KPD_u8GetPressedKey
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: u8
 * Description : N/A
 * Description : This Function returns the value of the pressed key
 *
 * ******************************************/

u8 KPD_u8GetPressedKKey()
{
	u8 x=0;
	u8 PressedKey;
	for(u8 i=0;i<4;i++)
	{
		DIO_VidSetPinValue(KPD_PORT,KPD_u8RowArr[i],PinHigh);
	}

	for(u8 i=0;i<4;i++)
	{
		DIO_VidSetPinValue(KPD_PORT,KPD_u8ColArr[i],PinLow);
		for( u8 j=0;j<4;j++)
		{
			DIO_VidGetPinValue(KPD_PORT,KPD_u8RowArr[j],&x);
			if(x==0)
			{
				PressedKey=SwitchValue[j][i];
				while(x==0)
				{
					DIO_VidGetPinValue(KPD_PORT,KPD_u8RowArr[j],&x);
				}
				_delay_ms(200);
				return PressedKey;
			}
		}
		DIO_VidSetPinValue(KPD_PORT,KPD_u8ColArr[i],PinHigh);
	}
	return 101;
}
