#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "inputs_outputs.h"
#include "tasks.c"



int main(){
	// A task for the south/north cars road
	xTaskCreate(vcars_vertical, "Normal cars mode,S/N", configMINIMAL_STACK_SIZE, NULL,1,NULL);
	// A task for east/west cars road
	xTaskCreate(vcars_horizontal, "Normal cars mode,E/W", configMINIMAL_STACK_SIZE, NULL,2,NULL);
	// A task for pedestrians crossing or hazzard 
	xTaskCreate(vpedestrians, "Pedestrians/hazzard", configMINIMAL_STACK_SIZE, NULL,3,NULL);
	// A task for the train
	xTaskCreate(vtrain, "Train", configMINIMAL_STACK_SIZE, NULL,4,NULL);
	
	
	// Start the scheduler
	vTaskStartScheduler();
}

