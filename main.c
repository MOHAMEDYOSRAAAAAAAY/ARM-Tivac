/*1#include <stdint.h> */
/*#include <TM4C123.h> */
#include "BIT_MATH.h"
#include "RCC_InerFace.h"
#include "sysTick_InterFac.h"
#include "GPIO_InterFace.h"
int main(void){
/*MAP 0x40000000, 0x400FFFFF read write*/

RCC_Init();	
	RCC_GPIO(PORTF);
GPIO_PIN_Init(GPIO_PORTF,GPIO_PIN1);
GPIO_Pin_Mode(GPIO_PORTF, GPIO_PIN1,OUTPUT);
while(1){

GPIO_SetPinValue(GPIO_PORTF, GPIO_PIN1,HIGH);			 	
	sysTick_delay_ONE_SECOND();
GPIO_SetPinValue(GPIO_PORTF, GPIO_PIN1,LOW);			 
sysTick_delay_ONE_SECOND();
}
}