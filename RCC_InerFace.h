
#include "STD_TYPES.h"
#define RCC	(*((volatile u32 *)(0x400FE060)))
#define GPIOHBCTL	(*((volatile u32 *)(0x400FE06C)))
#define RCGCGPIO	(*((volatile u32 *)(0x400FE608)))

void RCC_Init(void);
void RCC_GPIO (u8 Peripheral_ID);

#define ACG 27
#define SYSDIV DIV_5
#define USESYSDIV 22
#define XTAL Clock_16MHZ
#define SYSOC MOSC 
#define MOSCDIS MOSCDIS_ON
#define PORTA 0x01
#define PORTB 0x02
#define PORTC 0x03
#define PORTD 0x04
#define PORTE 0x10
#define PORTF 0x20



#define MOSC 0x0
#define DIV_5 0x4
#define Clock_16MHZ 0x15
#define MOSCDIS_ON 0
#define MOSCDIS_OFF 1



