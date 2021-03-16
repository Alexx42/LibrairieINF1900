#include <led.h>
#include <boutonPoussoir.h>
#include <uart.h>
#include <minuterie.h>
#include <moteur.h>

#include <f_cpu.h>
#include <avr/io.h>
#include <util/delay.h>

int main() {
	LED led;
	Bouton bouton;
	UART uart;
	Minuterie min;
	Moteur moteur;

	DDRD = 0xff;
	moteur.setVitesseDroite(20);
	_delay_ms(1000);
	moteur.setVitesseGauche(50);
	_delay_ms(1000);
	moteur.setVitesseDroite(80);
	_delay_ms(1000);
	for (;;) {
		uart.transmissionMessage("test\n", 5);
		if (bouton.estAppuye()) {
			led.mettreCouleur(0x02);
			break ;
		}
	}
	return 0;
}
