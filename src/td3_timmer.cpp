#include "td3_timmer.h"

static uint32_t tstart; //es global pero unicamente en este cpp por eso static

void timerReset(){
    tstart = (uint32_t)(~millis()) + (uint32_t)1; 
}

uint32_t timerElapsed(){
return tstart + (uint32_t)(millis());
}