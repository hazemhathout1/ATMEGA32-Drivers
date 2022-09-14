/***********************************************/
/***************SW     :HSSD_PROGRAM********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :2nd SEPTAMBER 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "HSSD_private.h"
#include "DIO_interface.h"
#include "HSSD_config.h"
#include "HSSD_int.h"


/*******************************************
 * Func Name   : HSSD_VidInit
 * *****************************************
 * Input Par   : Copy_u8SSD_Id
 * Description : Recieve SSD_ID
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to initialize SSD
 *
 * ******************************************
 * */
void HSSD_VidInit(u8 Copy_u8SSD_Id)
{
	switch(Copy_u8SSD_Id)
	{
	case SSD_ID_0:

		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_A_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_B_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_C_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_D_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_E_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_F_PIN,Output);
		DIO_VidSetPinDir(SSD0_PORT,SSD0_SEG_G_PIN,Output);

		break;
	case SSD_ID_1:
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_A_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_B_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_C_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_D_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_E_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_F_PIN,Output);
		DIO_VidSetPinDir(SSD1_PORT,SSD1_SEG_G_PIN,Output);

		break;
	case SSD_ID_2:/*Fall Through*/
	case SSD_ID_3:/*Fall Through*/break;

	default :
		#warning  ("Invalid SSD ID ya doctor");
		break;

	}

}

/*******************************************
 * Func Name   : HSSD_VidDisplayNumber
 * *****************************************
 * Input Par   : Copy_u8SSD_Id/Copy_u8Number
 * Description : Recieve SSD_ID
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Display Number
 *
 * ******************************************
 * */
void HSSD_VidDisplayNumber(u8 Copy_u8SSD_Id,u8 Copy_u8Number)
{
	switch(Copy_u8SSD_Id)
	{
	case SSD_ID_0:
#if SSD0_TYPE==COM_CATHODE
		//Clear ssd
		DIO_VidSetPortValue(SSD0_PORT,0x00);
		//display number
		DIO_VidSetPortValue(SSD0_PORT,SSD_CommCathArr[Copy_u8Number]);
#elif SSD0_TYPE==COM_ANODE

#else #error "Enta betzarat ya basha"

#endif
		break;
	case SSD_ID_1:
#if SSD0_TYPE==COM_CATHODE

#elif SSD0_TYPE==COM_ANODE

#else #error "Enta betzarat ya basha"

#endif
break;
	}
}

/*******************************************
 * Func Name   : HSSD_VidTurnOFF
 * *****************************************
 * Input Par   : Copy_u8SSD_Id
 * Description : Recieve SSD_ID
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Turn OFF SSD
 *
 * ******************************************
 * */
void HSSD_VidTurnOFF(u8 Copy_u8SSD_Id)
{
	switch(Copy_u8SSD_Id)
	{
	case SSD_ID_1:
#if SSD0_TYPE==COM_CATHODE

#elif SSD0_TYPE==COM_ANODE

#else #error "Enta betzarat ya basha"

#endif
		break;
	}
}
