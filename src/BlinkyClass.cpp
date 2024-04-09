#include "BlinkyClass.h"
#include <Arduino.h>
void Blinky::init(uint8_t pin, uint32_t period){
    pinMode (pin,OUTPUT);
    _st=1;
    _pin =pin;
}