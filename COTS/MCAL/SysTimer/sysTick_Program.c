#include "BIT_MATH.h" 
#include "STD_TYPES.h"
#include "sysTick_InterFac.h"


void sys_Init(void){
	
	SET_BIT(STCTRL ,CLL_SRC);/* 0x010 ,2*/

	
}
/*void sys_delay_ms(u32 delay_time){
	
	STRELOAD = delay_time; 
	SET_BIT(STCTRL ,ENABLE);
	while(GET_BIT (STCTRL ,COUNT )==0);/*0*/
	/*CLR_BIT(STCTRL ,ENABLE);*/

void sysTick_delay_ONE_SECOND(void){

	STRELOAD = 	0xF42400; 
	SET_BIT(STCTRL ,ENABLE);
	while(GET_BIT (STCTRL ,COUNT )==0);/*0*/
	STCTRL&= (u32)0x1;
}
	
