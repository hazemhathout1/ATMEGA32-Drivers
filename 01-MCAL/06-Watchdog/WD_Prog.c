/***********************************************/
/***************SW     :WDT_prog********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :15th October 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "WDT_Private.h"




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
void WDT_Enable()
{
	SET_BIT(WDTCR,WDE);
}



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
void WDT_Disable()
{
	CLR_BIT(WDTCR,WDE);
}



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
void WDT_vidSleep(u8 copy_u8Sleep)
{
	switch(copy_u8Sleep)
	{
	case zero:
			CLR_BIT(WDTCR,WDP0);
			CLR_BIT(WDTCR,WDP1);
			CLR_BIT(WDTCR,WDP2);
			break;
	case one:
			SET_BIT(WDTCR,WDP0);
			CLR_BIT(WDTCR,WDP1);
			CLR_BIT(WDTCR,WDP2);
			break;
	case two:
			CLR_BIT(WDTCR,WDP0);
			SET_BIT(WDTCR,WDP1);
			CLR_BIT(WDTCR,WDP2);
			break;
	case three:
			SET_BIT(WDTCR,WDP0);
			SET_BIT(WDTCR,WDP1);
			CLR_BIT(WDTCR,WDP2);
			break;
	case four:
			CLR_BIT(WDTCR,WDP0);
			CLR_BIT(WDTCR,WDP1);
			SET_BIT(WDTCR,WDP2);
			break;
	case five:
			SET_BIT(WDTCR,WDP0);
			SET_BIT(WDTCR,WDP1);
			CLR_BIT(WDTCR,WDP2);
			break;
	case six:
			CLR_BIT(WDTCR,WDP0);
			SET_BIT(WDTCR,WDP1);
			SET_BIT(WDTCR,WDP2);
			break;
	case seven:
			SET_BIT(WDTCR,WDP0);
			SET_BIT(WDTCR,WDP1);
			SET_BIT(WDTCR,WDP2);
			break;
	}
}
