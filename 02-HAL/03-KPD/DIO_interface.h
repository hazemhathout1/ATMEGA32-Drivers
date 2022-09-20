/***********************************************/
/***************SW     :DIO_INTERFACE********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :27th AUGUST 2022********************************/
/***********************************************/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H


typedef enum{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
	
}et_Ports;

typedef enum{
	Pin_0,
	Pin_1,
	Pin_2,
	Pin_3,
	Pin_4,
	Pin_5,
	Pin_6,
	Pin_7
	
}et_Pins;

typedef enum{
	Input,
	Output
}et_Direction;


typedef enum
{
	PinHigh,
	PinLow
}et_PinValue;

typedef enum
{
	PortHigh=0b11111111,
	PortLow=0b00000000
}et_PortValue;



/*Set Dio Pin Direction*/
void DIO_VidSetPinDir(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Dir);

/*Set Dio Pin value*/
void DIO_VidSetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8value);

/*Get Dio Pin value*/
void DIO_VidGetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin,u8 *pu8Value);

//----------------------Ports

/*Set Dio Port Direction*/
void DIO_VidSetPortDir(u8 Copy_u8Port,u8 Copy_u8Dir);

/*Set Dio Port value*/
void DIO_VidSetPortValue(u8 Copy_u8Port,u8 Copy_u8value);

/*Get Dio Port value*/
void DIO_VidGetPortValue(u8 Copy_u8Port,u8 *pu8Value);




#endif
