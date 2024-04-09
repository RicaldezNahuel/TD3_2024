#include "blinkyTask.h"
#include <Arduino.h>
#include "timerClass.h"

namespace blinky
{
    int _st=0;
    uint8_t _pin;
    Timer _tim;
    uint32_t _period;

    void init(uint8_t pin, uint32_t period)
    {
        pinMode(pin,OUTPUT);
        _st= 1;
        _pin= pin;
        _period=period;
    }

    void task()
    {
        if(_st ==0)
            return;

        if(_st ==1){
            digitalWrite(_pin,HIGH);
            _tim.reset();
            _st=2;
            return;
        }
        if(_st ==2){
            if(_tim.elapsed() < _period)
                return;
                _st=3;
            return;
        }
        if(_st==3){
            digitalWrite(_pin,LOW);
            _tim.reset();
            _st=4;
            return;
        }
        if(_st==4){
            if(_tim.elapsed() < _period)
                return;
                _st=1;
            return;
        }
        
    }
}//namespace blinky