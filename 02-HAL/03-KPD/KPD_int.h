/********************************************************************/
/***************SW     :KEYPAD_INTERFACE*****************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0*****************************************/
/***************DATE   :14th of September 2022***********************/
/********************************************************************/

#ifndef KPD_INT_H
#define KPD_INT_H

/*******************************************
 * Func Name   : KPD_VidInitKPD
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to initialize KPD
 *
 * ******************************************/
void KPD_VidInitKPD();

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
u8 KPD_u8GetPressedKKey();




#endif
