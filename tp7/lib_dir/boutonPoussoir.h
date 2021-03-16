#ifndef _BOUTTON_H
#define _BOUTTON_H

class Bouton {
	public:
		Bouton();
		Bouton(bool estInterruption);
		~Bouton();

		bool estAppuye();

	private:
		bool estInteruption_;

};
	
#endif 