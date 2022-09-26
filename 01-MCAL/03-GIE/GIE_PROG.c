/***********************************************/
/***************SW     :GIE_PROGRAM********************************/
/***************BY     :HAZEM HATHOUT********************************/
/***************VERSION:V1.0********************************/
/***************DATE   :23th SEPTEMBER 2022********************************/
/***********************************************/

#include "STD_Types.h"
#include "BIT_MATH.h"
#include "GIE_Config.h"
#include "GIE_PRIV.h"



/*******************************************
 * Func Name   : GIE_VidEnable
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Enable the GIE
 *
 * ******************************************/
void GIE_VidEnable()
{
	SET_BIT(SREG,SREG_I);
}




/*******************************************
 * Func Name   : GIE_VidDisable
 * *****************************************
 * Input Par   : VOID
 * Description : N/A
 * Return Value: Void
 * Description : N/A
 * Description : This Function is used to Disable the GIE
 *
 * ******************************************/
void GIE_VidDisable()
{
	CLR_BIT(SREG,SREG_I);
}

