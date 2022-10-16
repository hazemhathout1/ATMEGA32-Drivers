/***********************************************/
/***************SW     :TMR_INTERFACE********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :16th OCTOBER 2022********************************/
/***********************************************/

#ifndef TMR_INTERFACE_H
#define TMR_INTERFACE_H
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
void TMR0_vidCTCInit();

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
void TMR0_VidNormalInit();

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
void TMR0_vidClrTime();

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
u8 TMR0_u8GetTimer();

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
void TMR0_vidFPWMInit();


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
void TMR0_vidSetOCR(u8 duty);


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
void TMR0_vidICUFPWMInit();



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
void TMR1_vidInit();


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
void TMR1_vidSetAngle(u16 copy_u16Angle);


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
void TMR1_vidICUInit();


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
void TMR1_vidSetEdge(u8 copy_etEdge);



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
void TMR1_vidSetInterrupt(u8 copy_InterruptState);


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
void TMR1_vidOverFlowInit();


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
u16 TMR1_u16GetTimerValue(void);


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
void Tmr1_u16SetTimerValue(u16 Copy_u16Val);


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
void TMR1_vidClrTime();


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
u16 TMR1_u16GetICUValue();


typedef enum
{
	ISR_Enable,
	ISR_Disable
}et_InterruptStatus;

typedef enum
{
	ICU_RISING,
	ICU_FALLING
}et_Edge;

#endif
