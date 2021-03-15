/******************************************************************************
 * @file     main.c
 * @note
 *****************************************************************************/

#include "common.h"



int main()
{
	device_init();
	
	printf("\n I2C Driver with EEPROM 24LC64 \n");
	printf(" I2C0 SDA, SCL \n");
	
	device_run();
	
    while(1)
	{
		uint32_t i;
		GPIO_TOGGLE(P36);
		for(i=0; i<10000000; i++);
	}
}



