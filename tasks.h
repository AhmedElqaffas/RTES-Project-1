/* This file contains the implementation of tasks representing cars/pedestrians(or hazzards)/train */
#include "tm4c123gh6pm.h"

#define tgns = 5000 // south/north can move for 5 seconds for south/north
#define tgew = 2500 // east/west can move for 2.
#define tcross 10000 // 10 seconds for pedestrians to cross
#define tsafety 30000 // A minimum of 30 seconds for train to cross

static void vcars_vertical( void *pvParameters );
static void vcars_horizontal( void *pvParameters );
static void vpedestrians( void *pvParameters );
static void vtrain( void *pvParameters );