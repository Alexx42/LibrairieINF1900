#include "boutonPoussoir.h"
#include "init.h"
#include "f_cpu.h"
#include <avr/io.h>
#include <util/delay.h>

Bouton::Bouton() : estInteruption_(false) {
}

Bouton::Bouton(bool estInterruption) : estInteruption_(estInterruption) {
	if (estInteruption_) {
		init::initINT0();
	}
}

Bouton::~Bouton() {
}

bool Bouton::estAppuye() {
	if(PIND & (1 << PD2)) {
		_delay_ms(4);
		return PIND & (1 << PD2);
	}
	return false;
}
