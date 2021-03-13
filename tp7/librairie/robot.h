#ifndef ROBOT_H
#define ROBOT_H
#define F_CPU 8000000L
#include <stdint.h>
#include "moteur.h"
#include "led.h"
#include "minuterie.h"
#include "uart.h"
#include "boutonPoussoir.h"

struct Robot {

	LED led;
	Moteur moteur;
	Minuterie minuterie;
	Boutton boutton;
	UART uart;
	
};

#endif

