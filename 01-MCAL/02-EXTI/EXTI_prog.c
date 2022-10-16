#include "STD_Types.h"
#include "BIT_MATH.h"
#include "EXTI_Private.h"
#include "EXTI_Config.h"


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
void EXTI_VidEnable(void)
{
#if INT_SRC==EXTI0_SRC
#if SENSE_CTRL==FALLING
CLR_BIT(EXTI_MCUCR,MCUCR_ISC00);
SET_BIT(EXTI_MCUCR,MCUCR_ISC01);
/*********/
#elif SENSE_CTRL==RISING
SET_BIT(EXTI_MCUCR,MCUCR_ISC00);
SET_BIT(EXTI_MCUCR,MCUCR_ISC01);
/*********/
#elif SENSE_CTRL==LOWLVL
CLR_BIT(EXTI_MCUCR,MCUCR_ISC00);
CLR_BIT(EXTI_MCUCR,MCUCR_ISC01);
/*********/
#elif SENSE_CTRL==ONCHANGE
SET_BIT(EXTI_MCUCR,MCUCR_ISC00);
CLR_BIT(EXTI_MCUCR,MCUCR_ISC01)
#endif
SET_BIT(EXTI_GICR,GICR_INT0);
/*********************************/
#elif INT_SRC==EXTI1_SRC
#if SENSE_CTRL==FALLING
CLR_BIT(EXTI_MCUCR,MCUCR_ISC10);
SET_BIT(EXTI_MCUCR,MCUCR_ISC11);
/*********/
#elif SENSE_CTRL==RISING
SET_BIT(EXTI_MCUCR,MCUCR_ISC11);
SET_BIT(EXTI_MCUCR,MCUCR_ISC10);
/*********/
#elif SENSE_CTRL==LOWLVL
CLR_BIT(EXTI_MCUCR,MCUCR_ISC11);
CLR_BIT(EXTI_MCUCR,MCUCR_ISC10);
/*********/
#elif SENSE_CTRL==ONCHANGE
SET_BIT(EXTI_MCUCR,MCUCR_ISC10);
CLR_BIT(EXTI_MCUCR,MCUCR_ISC11)
#endif
SET_BIT(EXTI_GICR,GICR_INT1);
/*********************************/
#elif INT_SRC==EXTI2_SRC
#if SENSE_CTRL==FALLING
CLR_BIT(EXTI_MCUCSR,MCUSR_ISC2);
#elif SENSE_CTRL==RISING
SET_BIT(EXTI_MCUCSR,FALLING);
#endif
/*********************************/
SET_BIT(EXTI_GICR,GICR_INT2);
#endif
}


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
void EXTI_VidDisable(void)
{
#if INT_SRC==EXTI0_SRC
	CLR_BIT(EXTI_GICR,GICR_INT0);
#elif INT_SRC==EXTI1_SRC
	CLR_BIT(EXTI_GICR,GICR_INT1);
#elif INT_SRC=EXTI2_SRC
	CLR_BIT(EXTI_GICR,GICR_INT2);
#endif
}




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
void EXTI_vidSetSenseCTRL(u8 copy_u8SENSECTRL)
{
	switch(copy_u8SENSECTRL){
		case(FALLING):
			CLR_BIT(EXTI_MCUCR,MCUCR_ISC00);
			SET_BIT(EXTI_MCUCR,MCUCR_ISC01);
			break;
		case(RISING):
			SET_BIT(EXTI_MCUCR,MCUCR_ISC00);
			SET_BIT(EXTI_MCUCR,MCUCR_ISC01);
			break;
		case(LOWLVL):
			CLR_BIT(EXTI_MCUCR,MCUCR_ISC00);
			CLR_BIT(EXTI_MCUCR,MCUCR_ISC01);
			break;
		case(ONCHANGE):
			SET_BIT(EXTI_MCUCR,MCUCR_ISC00);
			CLR_BIT(EXTI_MCUCR,MCUCR_ISC01);
			break;

	}
}
