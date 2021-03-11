#ifndef LIB
#define LIB
#define F_CPU 8000000L
#include <stdint.h>
#include <avr/io.h> 
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <string.h>  
#include <can.h>


class Init {
    
    public:

        static void initUART();
};

Interruption::initINT0();


class BoutonPoussoir {
	public:
		BoutonPoussoir();
		~BoutonPoussoir();

	private:

};


#endif