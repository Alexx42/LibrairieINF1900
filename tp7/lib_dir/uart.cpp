#include "uart.h"

#include <avr/eeprom.h>

UART::UART() {

}

UART::~UART() {

}

void UART::transmissionUART ( uint8_t donnee ) {
	while ( !(UCSR0A & (1 << UDRE0))) {
		;
	}
	UDR0 = donnee;
}

void UART::transmissionMessage(const char* message, uint32_t taille) {
	for (uint32_t i = 0; i < taille; ++i) {
		transmissionUART(message[i]);
	}
}