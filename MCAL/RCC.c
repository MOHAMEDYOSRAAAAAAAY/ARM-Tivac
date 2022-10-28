
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_InerFace.h"
void RCC_Init(){
SET_BIT(RCC, ACG);
RCC |= ((u32)SYSDIV)<<26;
RCC |= ((u32)USESYSDIV)<<22;
RCC |= ((u32)XTAL)<<10;
RCC |=((u32)SYSOC)<<5;
RCC |=((u32)MOSCDIS)<<0;

return ;
}
void RCC_GPIO(u8 Peripheral_ID){
switch (Peripheral_ID){
case PORTA :RCGCGPIO |=PORTA ;break;
case PORTB :RCGCGPIO |=PORTB ;break;
case PORTC :RCGCGPIO |=PORTC ;break;
case PORTD :RCGCGPIO |=PORTD;break;
case PORTE :RCGCGPIO |=PORTE;break;
case PORTF :RCGCGPIO |=PORTF ;break;


default : break;}
}