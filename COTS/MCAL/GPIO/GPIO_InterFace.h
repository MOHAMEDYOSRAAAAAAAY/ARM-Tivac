
#include "STD_TYPES.h"


#define	GPIO_PORTA_DATA_MASK (*((volatile u32 *)(0x40058000+ 0x598 )))
#define	GPIO_PORTB_DATA_MASK (*((volatile u32 *)(0x40058000+ 0x598 )))
#define	GPIO_PORTC_DATA_MASK (*((volatile u32 *)(0x40058000+ 0x598 )))
#define	GPIO_PORTE_DATA_MASK (*((volatile u32 *)(0x40058000+ 0x598 )))
#define	GPIO_PORTD_DATA_MASK (*((volatile u32 *)(0x40058000+ 0x598 )))

#define GPIO_PORTA_DATA	(*((volatile u32 *)(0x40058000)))
#define GPIO_PORTA_DIR	(*((volatile u32 *)(0x40058400)))
#define GPIO_PORTA_DEN	(*((volatile u32 *)(0x4005851C)))	
#define GPIO_PORTB_DATA	(*((volatile u32 *)(0x40059000)))
#define GPIO_PORTB_DIR	(*((volatile u32 *)(0x40059400)))
#define GPIO_PORTB_DEN	(*((volatile u32 *)(0x4005951C)))	
#define GPIO_PORTC_DATA	(*((volatile u32 *)(0x4005A000)))
#define GPIO_PORTC_DIR	(*((volatile u32 *)(0x4005A400)))
#define GPIO_PORTC_DEN	(*((volatile u32 *)(0x4005A51C)))	
#define GPIO_PORTD_DATA	(*((volatile u32 *)(0x4005B000)))
#define GPIO_PORTD_DIR	(*((volatile u32 *)(0x4005B400)))
#define GPIO_PORTD_DEN	(*((volatile u32 *)(0x4005B51C)))	
#define GPIO_PORTE_DATA	(*((volatile u32 *)(0x4005C000)))
#define GPIO_PORTE_DIR	(*((volatile u32 *)(0x4005C400)))
#define GPIO_PORTE_DEN	(*((volatile u32 *)(0x4005C51C)))	
#define GPIO_PORTF_DATA	(*((volatile u32 *)(0x40025000)))
#define GPIO_PORTF_LOCK	(*((volatile u32 *)(0x40025520 )))
#define GPIO_PORTF_DATA_MASK	(*((volatile u32 *)(0x400253FC)))	
#define GPIO_PORTF_CR	(*((volatile u32 *)	  			(0x40025524)))	
#define GPIO_PORTF_DIR	(*((volatile u32 *)(0x40025400)))
#define GPIO_PORTF_DEN	(*((volatile u32 *)(0x4002551C)))
	
#define GPIO_PIN0 0
#define GPIO_PIN1 1
#define GPIO_PIN2 2
#define GPIO_PIN3 3
#define GPIO_PIN4 4
#define GPIO_PIN5 5
#define GPIO_PIN6 6
#define GPIO_PIN7 7
#define HIGH 1
#define LOW 0

#define OUTPUT 1
#define INPUT 0
#define GPIO_PORTF 5
#define GPIO_PORTE 4
#define GPIO_PORTD 3
#define GPIO_PORTC 2
#define GPIO_PORTB 1
#define GPIO_PORTA 0
void GPIO_PIN_Init(u8 Port ,u8 pin);	   
void GPIO_Pin_Mode(u8 PORT, u8 PIN , u8 Mode);
void GPIO_SetPortValue ( u8 PORT ,u8 DATA );
void GPIO_SetPinValue(u8  PORT ,u8 pin ,u8 Value);