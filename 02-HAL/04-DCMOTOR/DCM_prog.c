/********************************************************************/
/***************SW     :DCMOTOR_PROGRAM*****************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :19th of September 2022***********************/
/********************************************************************/


#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DCM_Config.h"
#include "DCM_inter.h"
#include "util/delay.h"

/*******************************************
 * Func Name   : DCM_vidDcmONOFF
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to turn ON/OFF The Motor
 *
 * ******************************************/
void DCM_vidDcmONOFF(u8 Copy_u8Opp)
{
	DIO_VidSetPinDir(dcmPort0,dcmPin0,Output);
	if(Copy_u8Opp==DcmON)
	{
		DIO_VidSetPinValue(dcmPort0,dcmPin0,PinHigh);
	}
	else if(Copy_u8Opp==DcmOFF)
	{
		DIO_VidSetPinValue(dcmPort0,dcmPin0,PinLow);
	}
} 


/*******************************************
 * Func Name   : DCM_vidDCMHbridge
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to turn ON/OFF The Motor with H-BRIDGE
 *
 * ******************************************/
void DCM_vidDCMHbridge(u8 Copy_u8opp)
{
	DIO_VidSetPinDir(dcmPort0,dcmPin0,Output);
	DIO_VidSetPinDir(dcmPort1,dcmPin1,Output);
	if(Copy_u8opp==DcmON)
	{
		DIO_VidSetPinValue(dcmPort0,dcmPin0,PinHigh);
		_delay_ms(2000);
		DIO_VidSetPinValue(dcmPort0,dcmPin0,PinLow);
		DIO_VidSetPinValue(dcmPort1,dcmPin1,PinHigh);
		_delay_ms(2000);
		DIO_VidSetPinValue(dcmPort1,dcmPin1,PinLow);
	}
	else if(Copy_u8opp==DcmOFF)
	{
		DIO_VidSetPinDir(dcmPort0,dcmPin0,Input);
		DIO_VidSetPinDir(dcmPort1,dcmPin1,Input);
		DIO_VidSetPinValue(dcmPort0,dcmPin0,PinLow);
		DIO_VidSetPinValue(dcmPort1,dcmPin1,PinLow);
	}
}
