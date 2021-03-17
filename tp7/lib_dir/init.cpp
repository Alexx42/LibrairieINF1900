#include "init.h"

#include <avr/io.h>
#include <avr/interrupt.h>

void init::initINT0() {
	cli ();
	EIMSK |= (1 << INT0);
	EICRA |= 1 << ISC00;
	EICRA |= 1 << ISC01; 
	sei ();
}

void init::initUART() {
	// 2400 bauds. Nous vous donnons la valeur des deux
	// premier registres pour vous éviter des complications
	UBRR0H = 0;
	UBRR0L = 0xCF;
	// permettre la réception et la transmission par le UART0
	UCSR0A = 0x00;
	UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	// Format des trames: 8 bits, 1 stop bits, none parity
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

void init::initPWM() {
	TCCR1A |= 1 << COM1A1;
	TCCR1A |= 1 << COM1B1;
	TCCR1A |= 1 << WGM10;
	TCCR1B |= 1 << CS11;
	TCCR1C = 0;
	OCR1A = 0;
	OCR1B = 0;
}

void init::initCTCMode() {
	// mode CTC du timer 1 avec horloge divisée par 1024
	// interruption après la durée spécifiée
	TCNT1 = 0x00;
	TCCR1A = 0x00;
	TCCR1B = (1 << CS10) | (1 << CS12) | (1 << WGM12);
	TCCR1C = 0x00;
	TIMSK1 = (1 << OCIE1A);
}

