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
	osMessageQueueId_t queueHandle = (osMessageQueueId_t)argument;
	uint16_t value;
	/* Infinite loop */
	for(;;)
	{
		osMessageQueueGet(queueHandle, &value, NULL, osWaitForever);
		HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, value & 1);
	}
}
