/***********************************************/
/***************SW     :HSSD_INITIALIZE********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :27th AUGUST 2022********************************/
/***********************************************/

#ifndef HSSD_INT_H
#define HSSD_INT_H

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
void HSSD_VidInit(u8 Copy_u8SSD_Id);

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
void HSSD_VidDisplayNumber(u8 Copy_u8SSD_Id,u8 Copy_u8Number);

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
void HSSD_VidTurnOFF(u8 Copy_u8SSD_Id);

#define  SSD_ID_0	0
#define  SSD_ID_1	1
#define  SSD_ID_2	2
#define  SSD_ID_3	3






#endif
