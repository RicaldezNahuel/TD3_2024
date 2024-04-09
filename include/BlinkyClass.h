#pragma once
#include <stdint.h>
#include "timerClass.h"
class Blinky
{
private:
    /* data */
public:
    void init(uint8_t pin, uint32_t period);
    void task();
private:
    enum State {Shutdown, Toggle, Wait}; //me sirve para etiquetar los numeros
    State _st=Shutdown; // _st=0;
    uint8_t _pin;
    Timer _tim;
    uint32_t _period;
};
