/******************************************************************************
 * @file     main.c
 * @note
 *****************************************************************************/

#include "common.h"




int main()
{
	device_init();
	
	printf("\n External Interrupt Test \n");
	printf(" P4.5 Interrupt \n");
	printf(" P3.6 Output \n");
	
	
	GPIO_SetMode(P3, BIT6, GPIO_PMD_OUTPUT);
	GPIO_SetMode(P4, BIT5, GPIO_PMD_INPUT);
    GPIO_EnableInt(P4, 5, GPIO_INT_FALLING);
    NVIC_EnableIRQ(GPIO_P2P3P4_IRQn);
	
    while(1);
}

