#define GET_BIT(REG, BIT)  ( ( (REG) >> (BIT) ) & 1 )
#define TOG_BIT(REG, BIT)  ( (REG) ^=  (1<<(BIT)) )
#define CLR_BIT(REG, BIT)  ( (REG) &= (~(1<<(BIT))) )
#define SET_BIT(REG, BIT)  ( (REG) |=  (1<<(BIT)) )