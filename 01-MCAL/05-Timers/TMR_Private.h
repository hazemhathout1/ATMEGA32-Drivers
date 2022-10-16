/***********************************************/
/***************SW     :TMR_Privarte********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :16th OCTOBER 2022********************************/
/***********************************************/

#ifndef TMR_PRIVATE_H
#define TMR_PRIVATE_H

#define OCR0 *((volatile u8*)0x5C)


#define TCNT0 *((volatile u8*)0x52)


#define TCCR0 *((volatile u8*)0x53)
#define WGM00 6
#define WGM01 3
#define COM01 5
#define COM00 4
#define CS02 2
#define CS01 1
#define CS00 0


#define TIMSK *((volatile u8*)0x59)
#define TICIE1 5
#define OCIE0 1
#define TOIE0 0

#define TIFR *((volatile u8*)0x58)
#define OCF0 1
#define TOV0 0

/*Timer1 Servo*/

#define TCCR1A *((volatile u8*)0x4F)
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4
#define FOC1A 3
#define FOC1B 2
#define WGM11 1
#define WGM10 0


#define TCCR1B *((volatile u8*)0x4E)
#define ICNC1 7
#define ICES1 6
#define WGM13 4
#define WGM12 3
#define CS12 2
#define CS11 1
#define CS10 0

#define TCNT1L *((volatile u16*)0x4C)
#define OCR1AL *((volatile u16*)0x4A)
#define ICR1L *((volatile u16*)0x46)





#endif
