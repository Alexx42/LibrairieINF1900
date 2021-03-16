#ifndef _BOUTTON_H
#define _BOUTTON_H

#include "f_cpu.h"
#include "init.h"

class Boutton {
	public:
		Boutton();
		~Boutton();

		bool estAppuyé();

	private:

		bool estInteruption_;

};
	
#endif 