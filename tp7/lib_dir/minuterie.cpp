#include "minuterie.h"

#include <avr/io.h>
#include "init.h"

Minuterie::Minuterie() : mode_(PWM_MODE) {
	init::initPWM();
}

Minuterie::Minuterie(int mode) : mode_(mode) {
	if (mode_ == PWM_MODE) {
		init::initPWM();
	}
}

Minuterie::~Minuterie() {

}

void Minuterie::demarrerMinuterie(uint16_t d) {
	if (mode_ == CTC_MODE) {
		init::initCTCMode(d);
	}
}

void Minuterie::mettreDuree(int duree) {
	OCR1A = duree;
}
