#ifndef _PWM_H
#define _PWN_H

#include <stdint.h>

#define CTC_MODE 0x00
#define PWM_MODE 0x01
#define FAST_PWM_MODE

class Minuterie {
	public:
		Minuterie();
		Minuterie(int mode);
		~Minuterie();

		void demarrerMinuterie(uint16_t d);
	
		void mettreDuree(int duree);

	private:
		int mode_;
		int duty_;
		int duree_;
};

#endif