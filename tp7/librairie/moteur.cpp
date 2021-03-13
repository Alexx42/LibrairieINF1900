#include "moteur.h"

Moteur::Moteur() : direction_(1), vitesseDroite_(0), vitesseGauche_(0) {

}

Moteur::~Moteur() {

}


void Moteur::setDirection(int direction) {
	direction_ = direction;
}

void Moteur::initialisation(){
	TCCR1A |=  1 << COM1A1;
	TCCR1A |=  1 << COM1B1;
	TCCR1A |=  1 <<  WGM10;
	TCCR1B |=  1 << CS11;
	TCCR1C = 0;
}

void Moteur::setVitesseUniform(uint8_t duty) {

	initialisation();
	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1A = value;
	OCR1B = value;
}

void Moteur::setVitesseDroite(uint8_t duty) {

	initialisation();
	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1A = value;
}

void Moteur::setVitesseGauche(uint8_t duty) {

	initialisation();
	float inter = 255.0/100;
	uint8_t value = (uint8_t)duty*inter;
	OCR1B = value;
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
