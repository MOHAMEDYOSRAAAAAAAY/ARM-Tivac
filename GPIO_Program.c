#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "GPIO_InterFace.h"

void GPIO_PIN_Init(u8 Port ,u8 pin){
switch (Port){
case GPIO_PORTA: GPIO_PORTA_LOCK = 0x0;GPIO_PORTA_CR = 0xFF;SET_BIT(GPIO_PORTA_DEN,pin); break;
case GPIO_PORTB: GPIO_PORTB_LOCK = 0x0;GPIO_PORTB_CR = 0xFF;SET_BIT(GPIO_PORTB_DEN,pin);break;
case GPIO_PORTC: GPIO_PORTC_LOCK = 0x0;GPIO_PORTC_CR = 0xFF;SET_BIT(GPIO_PORTC_DEN,pin);break;
case GPIO_PORTD: GPIO_PORTD_LOCK = 0x0;GPIO_PORTD_CR = 0xFF;SET_BIT(GPIO_PORTD_DEN,pin);break;
case GPIO_PORTE: GPIO_PORTE_LOCK = 0x0;GPIO_PORTE_CR = 0xFF;SET_BIT(GPIO_PORTE_DEN,pin);break;
case GPIO_PORTF: GPIO_PORTF_LOCK = 0x0;GPIO_PORTF_CR = 0xFF;SET_BIT(GPIO_PORTF_DEN,pin);break;
	default:break;
}
return ;
}
void GPIO_Pin_Mode (u8 PORT, u8 pin ,u8 Mode)
{
	if (Mode == OUTPUT){
switch (PORT){
case GPIO_PORTA:SET_BIT(GPIO_PORTA_DIR,pin); break;
case GPIO_PORTB:SET_BIT(GPIO_PORTB_DIR,pin);break;
case GPIO_PORTC:SET_BIT(GPIO_PORTC_DIR,pin);break;
case GPIO_PORTD:SET_BIT(GPIO_PORTD_DIR,pin);break;
case GPIO_PORTE:SET_BIT(GPIO_PORTE_DIR,pin);break;
case GPIO_PORTF:SET_BIT(GPIO_PORTF_DIR,pin);break;
	default:break;
}
}
	else if (Mode == INPUT) {
switch (PORT){	
case GPIO_PORTA:CLR_BIT(GPIO_PORTA_DIR,pin); break;
case GPIO_PORTB:CLR_BIT(GPIO_PORTB_DIR,pin);break;
case GPIO_PORTC:CLR_BIT(GPIO_PORTC_DIR,pin);break;
case GPIO_PORTD:CLR_BIT(GPIO_PORTD_DIR,pin);break;
case GPIO_PORTE:CLR_BIT(GPIO_PORTE_DIR,pin);break;
case GPIO_PORTF:CLR_BIT(GPIO_PORTF_DIR,pin);break;
	default:break;	
	
}
	}
return ;
}
	
void GPIO_SetPortValue ( u8 PORT ,u8 DATA )
	{
switch (PORT){	
case GPIO_PORTA:GPIO_PORTA_DATA_MASK = DATA; break;
case GPIO_PORTB:GPIO_PORTB_DATA_MASK = DATA;break;
case GPIO_PORTC:GPIO_PORTC_DATA_MASK=	DATA;break;
case GPIO_PORTD:GPIO_PORTD_DATA_MASK= DATA;break;
case GPIO_PORTE:GPIO_PORTE_DATA_MASK = DATA;break;
case GPIO_PORTF:GPIO_PORTF_DATA_MASK= DATA  ;break;
	default:break;		
}
return;
}
void GPIO_SetPinValue(u8  PORT ,u8 pin ,u8 Value){

if (Value == HIGH){
switch (PORT){
case GPIO_PORTA:SET_BIT(GPIO_PORTA_DATA_MASK,pin); break;
case GPIO_PORTB:SET_BIT(GPIO_PORTB_DATA_MASK,pin);break;
case GPIO_PORTC:SET_BIT(GPIO_PORTC_DATA_MASK,pin);break;
case GPIO_PORTD:SET_BIT(GPIO_PORTD_DATA_MASK,pin);break;
case GPIO_PORTE:SET_BIT(GPIO_PORTE_DATA_MASK,pin);break;
case GPIO_PORTF:SET_BIT(GPIO_PORTF_DATA_MASK,pin);break;
default:break;		
}	}
else if (Value == LOW){
switch (PORT){
case GPIO_PORTA:CLR_BIT(GPIO_PORTA_DATA_MASK,pin); break;
case GPIO_PORTB:CLR_BIT(GPIO_PORTB_DATA_MASK,pin);break;
case GPIO_PORTC:CLR_BIT(GPIO_PORTC_DATA_MASK,pin);break;
case GPIO_PORTD:CLR_BIT(GPIO_PORTD_DATA_MASK,pin);break;
case GPIO_PORTE:CLR_BIT(GPIO_PORTE_DATA_MASK,pin);break;
case GPIO_PORTF:CLR_BIT(GPIO_PORTF_DATA_MASK,pin);break;
default:break;		
}
}
return;
}