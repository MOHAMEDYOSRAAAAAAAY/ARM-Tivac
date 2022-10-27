



#define STCTRL	(*((volatile u32 *)(0xE000E010)))
#define STRELOAD	(*((volatile u32 *)(0xE000E014)))



void sys_Init(void);
void sysTick_delay_ONE_SECOND(void);
void sys_delay_ms(unsigned long  int delay_time);




#define CLL_SRC 2
#define ENABLE 0
#define COUNT 16
