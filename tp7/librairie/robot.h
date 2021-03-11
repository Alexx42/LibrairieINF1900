#ifndef LIB
#define LIB
#define F_CPU 8000000L
#include <stdint.h>
#include "moteur.h"
#include "led.h"

namespace Interruption {
	void initINT0();
	void initINT1();
}

struct Robot {

	LED led;
	Moteur moteur;
	Minuterie minuterie;
	
}

