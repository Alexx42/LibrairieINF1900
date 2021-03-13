#ifndef _LED_H
#define _LED_H

#define F_CPU 8000000L
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define LED_ROUGE (0x02)
#define LED_VERTE (0x01)


class LED {
	public:
		LED();
		LED(char port, uint8_t broche, uint8_t couleur);
		~LED();

		void changerCouleur();
		void allumerLED(uint8_t couleur);

		const uint8_t& obtenirCouleur() const;

	private:
		bool is_on_;
		char port_;
		uint8_t broche_;
		uint8_t couleur_;
};

#endif