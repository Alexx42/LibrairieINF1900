#ifndef _MINUTERIE_H
#define _MINUTERIE_H

#include <stdint.h>

#define CTC_MODE 0x00
#define PWM_MODE 0x01

class Minuterie {
	public:
		Minuterie();
		Minuterie(int mode);
		~Minuterie();

		void setDureeA(uint16_t d);
	
		void setDureeB(uint16_t d);
		void setDureeAB(uint16_t d);

	private:
		int mode_;
};

#endif