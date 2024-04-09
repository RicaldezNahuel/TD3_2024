#pragma once
#include <stdint.h>

class Timer
{
    public:
        void reset();
        uint32_t elapsed();

    private:
        uint32_t tstart;

};