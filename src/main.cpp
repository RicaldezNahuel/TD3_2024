#include <Arduino.h>
#include <td3_timmer.h>
#include "timerClass.h"
#include "BlinkyClass.h"
/* Time Arduino millis() y micros() cuenta cantidad de microsegundos 
 millis() desborda cada 32bits/overflow en 49,7
 
 micros() de Timmer de 32bits desborda en 1,19hr no podemos superar este set (es mas fino el ajuste)

desltaT = (negadoTinit + 1 ) + Tactual

 */
//probando el git
enum State{ Shutdown , Toggle, Wait}; //se enumera de 0 en adelante automaticamente

void toggleLed()
{
if(digitalRead(LED_BUILTIN)== HIGH)
  {
    digitalWrite(LED_BUILTIN,LOW);
  }else{
    digitalWrite(LED_BUILTIN,HIGH);
  }

}

//uint32_t tstart;
Timer timer;
Timer serialPin;

Blinky _blinky;
Blinky _blinky2;
Blinky _blinky3;

void setup() {
/*    
  millis()
  micros()
 
  pinMode(LED_BUILTIN, OUTPUT);
 // tstart = ~millis() + 1ULL //Iteral Unsigned Long Long Int;
  //tstart = (uint32_t)(~millis()) + (uint32_t)1; //Iteral Unsigned Long Long Int;
  timerReset(); //No reinica el timmer realmente
 */
//blinky::init(2,250);

_blinky.init(2,250);
_blinky2.init(4,500);
_blinky3.init(6,750);

State st;
st=Shutdown;
}

void loop() {
/* //calculo delta t
//uint32_t dt= tstart + (uint32_t)millis();
//if(dt > 250) //250 segundos
if(timer.elapsed() > 250)
{
  //tstart = (uint32_t)(~millis()) + (uint32_t)1; //reinicio el tiempo del comienzo
  timer.reset(); 
  toggleLed();
}

if(serialPin.elapsed() > 1000)
{
  serialPin.reset();
  Serial.print("1 second tik");
}
 */

//blinky::task();

_blinky.task();
_blinky2.task();
_blinky3.task();

}

