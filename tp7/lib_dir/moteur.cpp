#include "moteur.h"

#include <avr/io.h>

Moteur::Moteur() : direction_(1), vitesseDroite_(0), vitesseGauche_(0) {
	init::initPWM();
}

Moteur::~Moteur() {

}


void Moteur::setDirection(int direction) {
	direction_ = direction;
}

void Moteur::setVitesseUniform(uint8_t duty) {

	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1A = value;
	OCR1B = value;
	vitesseDroite_ = duty;
	vitesseGauche_ = duty;
}

void Moteur::setVitesseDroite(uint8_t duty) {

	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1A = value;
	vitesseDroite_ = duty;
}

void Moteur::setVitesseGauche(uint8_t duty) {

	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1B = value;
	vitesseGauche_ = duty;
}

const int& Moteur::getDirection() const {
	return direction_;
}

const float& Moteur::getVitesseDroite() const {
	return vitesseDroite_;
}

const float& Moteur::getVitesseGauche() const {
	return vitesseGauche_;
}
