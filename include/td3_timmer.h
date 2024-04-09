//include guards  -------> evita de que repita la inclusion de librerias dos veces
#pragma once
#include <stdint.h>

void timerReset();
uint32_t  timerElapsed(); //devuelve la cantidad de milisegundos que pasaron por el ultimo tiempo que paso
