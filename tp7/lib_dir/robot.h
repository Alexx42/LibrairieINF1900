#ifndef ROBOT_H
#define ROBOT_H

#include "led.h"
#include "uart.h"
#include "moteur.h"
#include "f_cpu.h"
#include "minuterie.h"
#include "boutonPoussoir.h"

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

struct Robot {
	LED led;
	Moteur moteur;
	Minuterie minuterie;
	Bouton bouton;
	UART uart;
};

#endif

