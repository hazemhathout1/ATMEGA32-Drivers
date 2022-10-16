/***********************************************/
/***************SW     :ADC_PRIVATE********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :1th OCTOBER 2022********************************/
/***********************************************/

#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

#define ADMUX *((volatile u8*)0x27)
#define REFS0 6
#define REFS1 7
#define ADLAR 5

#define ADCSRA *((volatile u8*)0x26)
#define ADEN 7
#define ADSC 6
#define ADATE 5
#define ADIF 4
#define ADIE 3
#define ADPS0 0
#define ADPS1 1
#define ADPS2 2

#define ADCL *((volatile u16*)0x24)





#endif
