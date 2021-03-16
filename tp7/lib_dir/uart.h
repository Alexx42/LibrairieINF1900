#ifndef _UART_H
#define _UART_H

#include <stdint.h>

class UART {
	public:
		UART();
		~UART();

		void transmissionMessage(const char *message, uint32_t taille);
	private:
		void transmissionUART(uint8_t donneee);
};

#endif 