#include "timerClass.h"


void Timer::reset()
{
    tstart = ~millis() + 1;
}

uint32_t Timer::elapsed()
{
    return tstart + millis();
}