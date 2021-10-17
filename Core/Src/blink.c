/*
 * blink.c
 *
 *  Created on: Oct 17, 2021
 *      Author: ep14231
 */

#include "main.h"
#include "cmsis_os.h"

void StartBlinkTask(void *argument)
{
	/* Infinite loop */
	for(;;)
	{
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
	  osDelay(100);
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
	  osDelay(100);
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
	  osDelay(100);
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
	  osDelay(700);
	}
}
