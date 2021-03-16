#ifndef _MOTEUR_H
#define _MOTEUR_H

#include "init.h"
#include <stdint.h>

#define AVANT 1
#define ARRIERE 0

class Moteur{
    public:
		Moteur();
		~Moteur();

		void setDirection(int direction);
		void setVitesseUniform(uint8_t duty);
		void setVitesseDroite(uint8_t duty);
		void setVitesseGauche(uint8_t duty);

		const int& getDirection() const;
		const float& getVitesseDroite() const;
		const float& getVitesseGauche() const;


	private:
		int direction_;
		float vitesseDroite_;
		float vitesseGauche_;
};

#endif