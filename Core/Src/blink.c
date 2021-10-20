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
	osMutexId_t mutexHandle = (osMutexId_t)argument;
	/* Infinite loop */
	for(;;)
	{
		osMutexAcquire(mutexHandle, osWaitForever);
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		osMutexRelease(mutexHandle);
		osDelay(100);
	}
}
