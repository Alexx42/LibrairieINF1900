#ifndef _LED_H
#define _LED_H

#include <stdint.h>

enum LED_COULEUR {
	ETEINTE,
	VERTE,
	ROUGE
};

class LED {
	public:
		LED();
		LED(uint8_t couleur);
		~LED();

		void mettreCouleur(uint8_t couleur);

		const uint8_t& obtenirCouleur() const;

	private:
		bool estAllume_;
		uint8_t couleur_;
};

#endif