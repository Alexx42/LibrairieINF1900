#ifndef ROBOT_H
#define ROBOT_H

#include "led.h"
#include "uart.h"
#include "moteur.h"
#include "f_cpu.h"
#include "boutonPoussoir.h"

struct Robot {
	LED led;
	Moteur moteur;
	Minuterie minuterie;
	Bouton bouton;
	UART uart;
};

#endif

