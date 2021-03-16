#include "led.h"

#include <avr/io.h>

// On cree un comportement de base tels que la LED est branchee au port 0
LED::LED() : estAllume_(false), couleur_(0x00) {
}

LED::LED(uint8_t couleur) : couleur_(couleur) {
	if (couleur == LED_COULEUR::ETEINTE) {
		estAllume_ = false;
	} else {
		estAllume_ = true;
	}
}

LED::~LED() {

}


void LED::mettreCouleur(uint8_t couleur) {
	if (couleur == LED_COULEUR::ETEINTE) {
		estAllume_ = false;
	} else {
		estAllume_ = true;
	}
	// on clear les deux premiers bits du port A
	PORTA &= ~((1 << PA0) | (1 << PA1));
	PORTA |= couleur;
	couleur_ = couleur;
}

const uint8_t& LED::obtenirCouleur() const {
	return couleur_;
}