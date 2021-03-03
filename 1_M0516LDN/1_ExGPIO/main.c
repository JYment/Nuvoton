/******************************************************************************
 * @file     main.c
 * @note
 *****************************************************************************/

#include "common.h"




int main()
{
	device_init();
	
	printf("\n P36 Blink Test \n");
	
	GPIO_SetMode(P3, BIT6, GPIO_PMD_OUTPUT);
	
    while(1)
	{
		uint32_t i;
		GPIO_TOGGLE(P36);
		for(i=0; i<10000000; i++);
	}
}



