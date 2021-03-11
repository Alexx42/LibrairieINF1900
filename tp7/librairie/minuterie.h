#ifndef _PWM_H
#define _PWN_H

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