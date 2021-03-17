#include "minuterie.h"

#include <avr/io.h>
#include "init.h"

Minuterie::Minuterie() : mode_(PWM_MODE) {
	init::initPWM();
}

Minuterie::Minuterie(int mode) : mode_(mode) {
	if (mode_ == PWM_MODE) {
		init::initPWM();
	} else {
		init::initCTCMode();
	}
}

Minuterie::~Minuterie() {

}


void Minuterie::setDureeA(uint16_t d) {
	float inter = 255.0/100;
	uint8_t value = (uint8_t)d*inter;
	OCR1A = value;
}

void Minuterie::setDureeB(uint16_t d) {
	float inter = 255.0/100;
	uint8_t value = (uint8_t)d*inter;
	OCR1B = value;
}

void Minuterie::setDureeAB(uint16_t d) {
	float inter = 255.0/100;
	uint8_t value = (uint8_t)d*inter;
	OCR1A = value;
	OCR1B = value;
}