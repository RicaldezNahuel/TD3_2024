#pragma once
#include <stdint.h>

namespace blinky
{
    void init(uint8_t pin, uint32_t period);
    void task();
}//namespace blinky

