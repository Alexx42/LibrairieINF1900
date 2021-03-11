#include "moteur.h"

Moteur::Moteur() : direction_(1), vitesseDroite_(0), vitesseGauche_(0) {

}

Moteur::~Moteur() {

}

void Moteur::setDirection() {

}

void Moteur::setVitesseUniform() {

}

void Moteur::setVitesseDroite() {

}

void Moteur::setVitesseGauche() {

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