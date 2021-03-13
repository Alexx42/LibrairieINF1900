<<<<<<< HEAD
#include "led.h"

// On cree un comportement de base tels que la LED est branchee au port 0
LED::LED() : is_on_(false), port_('a'), broche_(0x00), couleur_(0x00) {
}

LED::LED(char p, uint8_t b, uint8_t c) : is_on_(false), port_(p), broche_(b), couleur_(c) {

}

LED::~LED() {

}


void LED::allumerLED(uint8_t couleur) {
	if(port_ == 'A' || port_ == 'a') {
		PORTA |= couleur << broche_;
	}
	if(port_ == 'B' || port_ == 'b') {
		PORTA |= couleur << broche_;
	}
	if(port_ == 'C' || port_  == 'c') {
		PORTA |= couleur << broche_;
	}
	if(port_ == 'D' || port_ == 'd') {
		PORTA |= couleur << broche_;
	}
}

const uint8_t& LED::obtenirCouleur() const {
	return couleur_;
=======
#include "led.h"

// On cree un comportement de base tels que la LED est branchee au port 0
LED::LED() : is_on_(false), port_('a'), broche_(0x00), couleur_(0x00) {
}

LED::LED(char p, uint8_t b, uint8_t c) : is_on_(false), port_(p), broche_(b), couleur_(c) {

}

LED::~LED() {

}


void LED::allumerLED(uint8_t couleur) {
	(void)couleur;
}

const uint8_t& LED::obtenirCouleur() const {
	return couleur_;
>>>>>>> 1714e5cdd146892e81f16a6fe6118e031893a0cc
}