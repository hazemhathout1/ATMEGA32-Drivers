#ifndef EXTI_INT_H
#define EXTI_INT_H


/*******************************************
 * Func Name   : EXTI_VidEnable
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Enable the External interrupt
 *
 * ******************************************/
void EXTI_VidEnable(u8 copy_u8SENSECTRL);


/*******************************************
 * Func Name   : EXTI_VidDisable
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Disable the External interrupt
 *
 * ******************************************/
void EXTI_VidDisable(void);



/*******************************************
 * Func Name   : EXTI_vidSetSenseCTRL
 * *****************************************
 * Input Par   : copy_u8SENSECTRL
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to set the sense control of the Wxternal interrupt
 *
 * ******************************************/
void EXTI_vidSetSenseCTRL(u8 copy_u8SENSECTRL);


typedef enum
{
	FALLING,
	RISING,
	LOWLVL,
	ONCHANGE
}et_SENSECTRL;


#endif
