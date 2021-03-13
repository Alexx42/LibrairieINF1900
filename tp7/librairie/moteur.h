<<<<<<< HEAD
#ifndef _MOTEUR_H
#define _MOTEUR_H
#define F_CPU 8000000L

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

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

		static void initialisation();

	private:
		int direction_;
		float vitesseDroite_;
		float vitesseGauche_;
};

=======
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

>>>>>>> 1714e5cdd146892e81f16a6fe6118e031893a0cc
#endif