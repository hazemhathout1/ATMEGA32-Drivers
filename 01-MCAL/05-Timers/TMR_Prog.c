/***********************************************/
/***************SW     :TMR_Program********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :16th OCTOBER 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "TMR_Private.h"
#include "TMR_Interface.h"
#include "TMR_Config.h"

/*******************************************
 * Func Name   : TMR0_vidCTCInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to initialise TIMER0 on CTC Mode
 *
 * ******************************************/
void TMR0_vidCTCInit()
{
	/*Select CTC WGM*/
	SET_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00);


	/*Select Compare Match Mode*/
	CLR_BIT(TCCR0,COM00);
	CLR_BIT(TCCR0,COM01);

	/*Select prescalar*/
	CLR_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS00);

	/*Select OCR with need compare match value
	 * OCR0=200->tick
	 * TCNT=0-->for checking reason
	 * */
	TMR_OCR=200;


	/*
	 * one second Inturupt:
	 * Ttick=Pre/Fsys-->Hakhtar el prescale
	 *
	 *
	 * */
	/*Interrupt for Timer0 */
	SET_BIT(TIMSK,OCIE0);


}
/*******************************************
 * Func Name   : TMR0_VidNormalInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to initialise TIMER0 on Normal Mode
 *
 * ******************************************/
void TMR0_VidNormalInit()
{
	/*set Normal mode*/
	CLR_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);
	/*select prescalar 8*/
	CLR_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS02);
	/*Enable interrupt*/
	SET_BIT(TIMSK,TOIE0);
}
/*******************************************
 * Func Name   : TMR0_vidClrTime
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to Clear Timer0(TCNT0)
 *
 * ******************************************/
void TMR0_vidClrTime()
{
	TCNT0=0;
}

/*******************************************
 * Func Name   : TMR0_u8GetTimer
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: u8
 * Description : TMR_TCNT0
 * Description : This function is used to Return the value in TIMER0
 *
 * ******************************************/
u8 TMR0_u8GetTimer()
{
	return TMR_TCNT0;
}

/*******************************************
 * Func Name   : TMR0_vidFPWMInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to Initialise Timer0 as FPWM
 *
 * ******************************************/
void TMR0_vidFPWMInit()
{
	/*Select wgm as FPWM*/
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	/*select compare match fast pwm
	 * select set on top clear on CMP*/
	CLR_BIT(TCCR0,COM00);
	SET_BIT(TCCR0,COM01);
	/*Set OCR Value
	 * Duty=OCR/256*/
	TMR_OCR=64;
	/*Select Prescalar*/
	CLR_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS00);
}

/*******************************************
 * Func Name   : TMR0_vidSetOCR
 * *****************************************
 * Input Par   : duty
 * Description : The duty cycle needed
 * Return Value: void
 * Description : N/A
 * Description : This function is used to set the Duty Cycle in Timer0 pwm
 *
 * ******************************************/

void TMR0_vidSetOCR(u8 duty)
{
	TMR_OCR=(256/100)*duty;
}

/*******************************************
 * Func Name   : TMR0_vidICUFPWMInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to initialise the ICU as FPWM in Timer0
 *
 * ******************************************/
void TMR0_vidICUFPWMInit()
{
	/*Select wgm as FPWM*/
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	/*select compare match fast pwm
	 * select set on top clear on CMP*/
	CLR_BIT(TCCR0,COM00);
	SET_BIT(TCCR0,COM01);
	/*Set OCR Value
	 * Duty=OCR/256*/
	TMR_OCR=64;
	/*Select Prescalar*/
	CLR_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS00);
}

/************************************************************************************/
/************************************************************************************/
/************************************************************************************/
/************************************Timer1******************************************/
/************************************************************************************/
/************************************************************************************/
/************************************************************************************/
/************************************************************************************/

/*******************************************
 * Func Name   : TMR1_vidInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to Initialise Timer1 as CTC Mode
 *
 * ******************************************/
void TMR1_vidInit()
{
	/*set on top clear on cmp*/
	CLR_BIT(TCCR1A,COM1A0);
	SET_BIT(TCCR1A,COM1A1);
	/*set CTC with icr1*/
	SET_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,WGM12);
	SET_BIT(TCCR1A,WGM11);
	CLR_BIT(TCCR1A,WGM10);
	/*set prescalar*/
	SET_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS10);
	CLR_BIT(TCCR1B,CS12);

	/*set maximum overflow time*/
	ICR1L=20000;
}


/*******************************************
 * Func Name   : TMR1_vidSetAngle
 * *****************************************
 * Input Par   : copy_u16Angle
 * Description : The needed angle
 * Return Value: void
 * Description : N/A
 * Description : This function is used to set the angle with PWM in Timer1
 *
 * ******************************************/
void TMR1_vidSetAngle(u16 copy_u16Angle)
{
	OCR1AL=copy_u16Angle;
}


/************************************************************************************/
/************************************************************************************/
/************************************************************************************/
/************************************ICU*********************************************/
/************************************************************************************/
/************************************************************************************/
/************************************************************************************/
/************************************************************************************/




/*******************************************
 * Func Name   : TMR1_vidICUInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to initialise ICU in Timer1
 *
 * ******************************************/
void TMR1_vidICUInit()
{
	/*set initial edge as Rising*/
	SET_BIT(TCCR1B,ICES1);
	/*Enable interrupt of ICU*/
	SET_BIT(TIMSK,TICIE1);
}


/*******************************************
 * Func Name   : TMR1_vidSetEdge
 * *****************************************
 * Input Par   : copy_etEdge
 * Description : The Ege needed -Rising/Falling-
 * Return Value: void
 * Description : N/A
 * Description : This function is used to set the sense control of the interrupt
 *
 * ******************************************/
void TMR1_vidSetEdge(et_Edge copy_etEdge)
{
	if(copy_etEdge==ICU_RISING)
	{
		SET_BIT(TCCR1B,ICES1);
	}
	else if(copy_etEdge==ICU_FALLING)
	{
		SET_BIT(TCCR1B,ICES1);
	}
}
/*******************************************
 * Func Name   : TMR1_vidSetInterrupt
 * *****************************************
 * Input Par   : copy_InterruptState
 * Description : enable/Disable the interrupt
 * Return Value: void
 * Description : N/A
 * Description : This function is used to enable/disable the interrupt
 *
 * ******************************************/
void TMR1_vidSetInterrupt(et_InterruptStatus copy_InterruptState)
{
	if(copy_InterruptState==ISR_Enable)
	{
		SET_BIT(TIMSK,TICIE1);
	}
	else if(copy_InterruptState==ISR_Disable)
	{
		CLR_BIT(TIMSK,TICIE1);
	}
}


/*******************************************
 * Func Name   : TMR1_vidOverFlowInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to set Timer1 as overflow mode-Normal-
 *
 * ******************************************/
void TMR1_vidOverFlowInit()
{
	/*By default all the bits are set to be zero*/

	/*set prescalar->8*/
	SET_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS10);
	CLR_BIT(TCCR1B,CS12);

}


/*******************************************
 * Func Name   : TMR1_u16GetTimerValue
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: u16
 * Description : Value in TCNT1L
 * Description : This function is used to return the value in Timer1
 *
 * ******************************************/
u16 TMR1_u16GetTimerValue(void)
{
	return TCNT1L;
}


/*******************************************
 * Func Name   : Tmr1_u16SetTimerValue
 * *****************************************
 * Input Par   : Copy_u16Val
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to set the value in Timer1
 *
 * ******************************************/

void Tmr1_u16SetTimerValue(u16 Copy_u16Val)
{
	TCNT1L=Copy_u16Val;
}

/*******************************************
 * Func Name   : TMR0_vidICUFPWMInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to initialise the ICU as FPWM in Timer0
 *
 * ******************************************/
void TMR0_vidICUFPWMInit()
{
	/*Select wgm as FPWM*/
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	/*select compare match fast pwm
	 * select set on top clear on CMP*/
	CLR_BIT(TCCR0,COM00);
	SET_BIT(TCCR0,COM01);
	/*Set OCR Value
	 * Duty=OCR/256*/
	TMR_OCR=64;
	/*Select Prescalar*/
	CLR_BIT(TCCR0,CS02);
	SET_BIT(TCCR0,CS01);
	CLR_BIT(TCCR0,CS00);
}

/*******************************************
 * Func Name   : TMR1_vidClrTime
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to clear the time in timer1
 *
 * ******************************************/
void TMR1_vidClrTime()
{
	TMR_TCNT1=0;
}


/*******************************************
 * Func Name   : TMR1_u16GetICUValue
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: void
 * Description : N/A
 * Description : This function is used to get the value in the ICU
 *
 * ******************************************/
u16 TMR1_u16GetICUValue()
{
	return ICR1L;
}
