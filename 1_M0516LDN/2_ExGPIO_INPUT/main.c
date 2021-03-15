/******************************************************************************
 * @file     main.c
 * @note
 *****************************************************************************/
 
 #include "common.h"
 
 
 int main()
 {
	 device_init();
	 
	 printf("\n\n CPU @ %d Hz\n", SystemCoreClock);
	 printf(" Input P4.1 \n");
	 printf(" Output P3.6 \n");
	 
	 GPIO_SetMode(P3, BIT6, GPIO_PMD_OUTPUT);
	 GPIO_SetMode(P4, BIT1, GPIO_PMD_INPUT);
	 
	 while(1)
	 {
		 if(P41 == 1)		P36 = 1;
		 else				P36 = 0;
	 }
 }
