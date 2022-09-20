/********************************************************************/
/***************SW     :DCMOTOR_INTERFACE*****************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :19th of September 2022***********************/
/********************************************************************/
#ifndef DCM_INTER_H
#define DCM_INTER_H

typedef enum
{
	DcmON,
	DcmOFF
}et_DCMONOFF;

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
void DCM_vidDcmONOFF(u8 Copy_u8Opp);


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
void DCM_vidDCMHbridge(u8 Copy_u8opp);




#endif
