
#include <stdio.h>
#include "M051Series.h"

void device_init(void);
void SYS_Init(void);
void UART0_init(void);
void I2C0_init(void);
void I2C_MasterRx(uint32_t u32Status);
void I2C_MasterTx(uint32_t u32Status);
void I2C0_Close(void);


void device_run(void);
