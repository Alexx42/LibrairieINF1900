#ifndef _BOUTTON_H
#define _BOUTTON_H

#define F_CPU 8000000L
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

class Boutton {
	public:
		Boutton();
		~Boutton();

        void initINT0();
	    void initINT1();

		bool estAppuyé();

	private:

        bool estInteruption_;
        char port_;
		uint8_t broche_;

};
	
#endif 