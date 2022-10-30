/***********************************************/
/***************SW     :WDT_Interface********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :15th October 2022********************************/
/***********************************************/

#ifndef WDT_INTERFACE_H
#define WDT_INTERAFCE_H


/*******************************************
 * Func Name   : WDT_Enable
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to enable Watchdog
 *
 * ******************************************/
void WDT_Enable();



/*******************************************
 * Func Name   : WDT_Disable
 * *****************************************
 * Input Par   : N/A
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to Disable Watchdog
 *
 * ******************************************/
void WDT_Disable();


/*******************************************
 * Func Name   : WDT_vidSleep
 * *****************************************
 * Input Par   : copy_u8Sleep
 * Description : The sleep time
 * Return Value: Void
 * Description : N/A
 * Description : This function is used to set the sleep time of watchdog
 *
 * ******************************************/
void WDT_vidSleep(u8 copy_u8Sleep);

typedef enum
{
	zero,
	one,
	two,
	three,
	four,
	five,
	six,
	seven
}et_WTSleep;




#endif
