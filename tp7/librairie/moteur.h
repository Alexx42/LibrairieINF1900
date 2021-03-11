#ifndef _MOTEUR_H
#define _MOTEUR_H
#define F_CPU 8000000L

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

class Moteur{
    public:
		Moteur();
		~Moteur();

		void setDirection();
		void setVitesseUniform();
		void setVitesseDroite();
		void setVitesseGauche();

		const int& getDirection() const;
		const float& getVitesseDroite() const;
		const float& getVitesseGauche() const;

	private:
		int direction_;
		float vitesseDroite_;
		float vitesseGauche_;
};

#endif