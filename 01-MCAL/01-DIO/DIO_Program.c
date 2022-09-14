/***********************************************/
/***************SW     :DIO_PROGRAM********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :27th AUGUST 2022********************************/
/***********************************************/
#include "STD_Types.h"
#include "BIT_MATH.h"
#include "DIO_Private.h"
#include "DIO_interface.h"


/*Set Dio Pin Direction*/
void DIO_VidSetPinDir(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Dir)
{
	if(Copy_u8Dir==Output)
	{
		switch(Copy_u8Port)
		{
			case PORT_A:	SET_BIT(DDRA,Copy_u8Pin);break;
			case PORT_B:	SET_BIT(DDRB,Copy_u8Pin);break;
			case PORT_C:	SET_BIT(DDRC,Copy_u8Pin);break;
			case PORT_D:	SET_BIT(DDRD,Copy_u8Pin);break;
		}
	}
	else if(Copy_u8Dir==Input)
	{
		switch(Copy_u8Port)
		{
			case PORT_A:
			CLR_BIT(DDRA,Copy_u8Pin);break;
			case PORT_B:
			CLR_BIT(DDRB,Copy_u8Pin);break;
			case PORT_C:
			CLR_BIT(DDRC,Copy_u8Pin);break;
			case PORT_D:
			CLR_BIT(DDRD,Copy_u8Pin);break;
		}
	}
}

/*Set Dio Pin value*/
void DIO_VidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8value)
{
		if(Copy_u8value==PinHigh)
	{
		switch(Copy_u8Port)
		{
			case PORT_A:
			SET_BIT(PORTA,Copy_u8Pin);break;
			case PORT_B:
			SET_BIT(PORTB,Copy_u8Pin);break;
			case PORT_C:
			SET_BIT(PORTC,Copy_u8Pin);break;
			case PORT_D:
			SET_BIT(PORTD,Copy_u8Pin);break;
		}
	}
	else if(Copy_u8value==PinLow)
	{
		switch(Copy_u8Port)
		{
			case PORT_A:   CLR_BIT(PORTA,Copy_u8Pin);break;
			case PORT_B:   CLR_BIT(PORTB,Copy_u8Pin);break;
			case PORT_C:   CLR_BIT(PORTC,Copy_u8Pin);break;
			case PORT_D:   CLR_BIT(PORTD,Copy_u8Pin);break;
		}
	}
}

/*Get Dio Pin value*/
void DIO_VidGetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 *pu8Value)
{
	switch(Copy_u8Port)
	{
		case PORT_A:  *pu8Value=GET_BIT(PINA,Copy_u8Pin); break;
		case PORT_B:  *pu8Value=GET_BIT(PINB,Copy_u8Pin); break;
		case PORT_C:  *pu8Value=GET_BIT(PINC,Copy_u8Pin); break;
		case PORT_D:  *pu8Value=GET_BIT(PIND,Copy_u8Pin); break;
	}
}

//----------------------Ports

/*Set Dio Port Direction*/
void DIO_VidSetPortDir(u8 Copy_u8Port,u8 Copy_u8Dir)
{
	switch(Copy_u8Port)
	{
		case PORT_A:DDRA=Copy_u8Dir;break;
		case PORT_B:DDRB=Copy_u8Dir;break;
		case PORT_C:DDRC=Copy_u8Dir;break;
		case PORT_D:DDRD=Copy_u8Dir;break;
	}
}

/*Set Dio Port value*/
void DIO_VidSetPortValue(u8 Copy_u8Port,u8 Copy_u8value)
{
	switch(Copy_u8Port)
	{
		case PORT_A:PORTA=Copy_u8value;break;
		case PORT_B:PORTB=Copy_u8value;break;
		case PORT_C:PORTC=Copy_u8value;break;
		case PORT_D:PORTD=Copy_u8value;break;
	}
}

/*Get Dio Port value*/
void DIO_VidGetPortValue(u8 Copy_u8Port,u8 *pu8Value)
{
	switch(Copy_u8Port)
		{
			case PORT_A:*pu8Value=PINA;break;
			case PORT_B:*pu8Value=PINB;break;
			case PORT_C:*pu8Value=PINC;break;
			case PORT_D:*pu8Value=PIND;break;
		}
}
