/***********************************************/
/***************SW     :ADC_PROGRAM********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :1th OCTOBER 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "ADC_Private.h"
#include "ADC_Config.h"



/*******************************************
 * Func Name   : ADC_vidInit
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to initialise The ADC
 *
 * ******************************************/
void ADC_vidInit()
{
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);
	/*Set ADLAr for Right adj   ustment*/
	CLR_BIT(ADMUX,ADLAR);
	/*Prescal  8*/
	CLR_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	CLR_BIT(ADCSRA,ADPS2);
	/*ADC Enable*/
	SET_BIT(ADCSRA,ADEN);
}



/*******************************************
 * Func Name   : ADC_u16GetReading
 * *****************************************
 * Input Par   : copy_u8Channel
 * Description : The channel of ADC[A0..A7]
 * Return Value: u16
 * Description : The Digital value in the required Channel
 * Description : This function is used to Get the Digital Value Reading
 *
 * ******************************************/
u16 ADC_u16GetReading(u8 copy_u8Channel)
{
	ADMUX&=0b11100000;
	ADMUX|=copy_u8Channel;
	SET_BIT(ADCSRA,ADSC);
	u16 counter=200;
	while((GET_BIT(ADCSRA,ADIF)==0)&&counter--);//timeout mechanism with 200 3ada
	SET_BIT(ADCSRA,ADIF);
	return  ADCL;

}



/*******************************************
 * Func Name   : ADC_vidIntEnab
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to Enable The ADC Interrupt
 *
 * ******************************************/
void ADC_vidIntEnab()
{
	SET_BIT(ADCSRA,ADIE);

}
