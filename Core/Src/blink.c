/*
 * blink.c
 *
 *  Created on: Oct 17, 2021
 *      Author: ep14231
 */

#include "main.h"
#include "cmsis_os.h"

void blinkTask(void* argument)
{
	osSemaphoreId_t semaphoreHandle = (osSemaphoreId_t)argument;
	/* Infinite loop */
	for(;;)
	{
		osSemaphoreAcquire(semaphoreHandle, osWaitForever);
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
	}
}
