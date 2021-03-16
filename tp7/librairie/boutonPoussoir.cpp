#include "boutonPoussoir.h"

Boutton::Boutton() : estInteruption_(false) {
}

Boutton::Boutton(bool a) : estInteruption_(a) {
	if (estInteruption_) {
		init::initINT0();
	}
}

Boutton::~Boutton() {
}

bool estAppuyé(){
	if(PIND & PD2) {
		_delay_ms(4);
		return PIND & (1 << PD2);
	}
	return false;
}
