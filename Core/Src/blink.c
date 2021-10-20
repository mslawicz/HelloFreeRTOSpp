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
	/* Infinite loop */
	for(;;)
	{
		osDelay(10);
	}
}
