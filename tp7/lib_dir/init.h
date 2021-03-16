#ifndef _INITIALISATION_H
#define _INITIALISATION_H

#include <stdint.h>

namespace init {
	void initINT0();
	void initINT1();
	void initUART();
	void initPWM();
	void initCTCMode(uint16_t d);
}

#endif