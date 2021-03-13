#ifndef _PWM_H
#define _PWN_H

#define F_CPU 8000000L
#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>
#include <avr/interrupt.h>


class Minuterie {
	public:
		Minuterie();
		~Minuterie();

		void minuterieCTC(uint16_t duree);
		void minuteriePWMCorrect(uint8_t duty);

	
};

#endif