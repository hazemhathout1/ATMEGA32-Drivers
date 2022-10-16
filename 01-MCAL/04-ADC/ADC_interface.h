/***********************************************/
/***************SW     :ADC_Interface********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :1th OCTOBER 2022********************************/
/***********************************************/

#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

typedef enum
{
	ADC0_channel,
	ADC1_channel,
	ADC2_channel,
	ADC3_channel,
	ADC4_channel,
	ADC5_channel,
	ADC6_channel,
	ADC7_channel
}et_ADC;


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
void ADC_vidInit();


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
u16 ADC_u16GetReading(u8 copy_u8Channel);


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
void ADC_vidIntEnab();


#endif
