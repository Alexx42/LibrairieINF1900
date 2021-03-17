#include "moteur.h"

Moteur::Moteur() : direction_(1), vitesseDroite_(0), vitesseGauche_(0) {
}

Moteur::~Moteur() {

}

void Moteur::setDirection(int direction) {
	direction_ = direction;
}

void Moteur::setVitesseUniform(uint8_t duty) {
	minuterie.setDureeAB(duty);
	vitesseDroite_ = duty;
	vitesseGauche_ = duty;
}

void Moteur::setVitesseDroite(uint8_t duty) {
	minuterie.setDureeA(duty);
	vitesseDroite_ = duty;
}

void Moteur::setVitesseGauche(uint8_t duty) {
	minuterie.setDureeB(duty);
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
