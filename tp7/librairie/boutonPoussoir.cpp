#include "boutonPoussoir.h"

Boutton::Boutton() : estInteruption_(false), port_('d'), broche_(0x02) {
}

Boutton::Boutton(bool a, char p, uint8_t b) : estInteruption_(a), port_(p), broche_(b){

}

Boutton::~Boutton() {

}

bool estAppuyé(){
    if(port_ == 'A' || port_ == 'a') {
        if(PINA & (1<<broche_)){
            _delay_ms(4);
            return PINA & (1<<broche_);
        }   
        return false;
	}
	if(port_ == 'B' || port_ == 'b') {
        if(PINB & (1<<broche_)){
            _delay_ms(4);
            return PINB & (1<<broche_);
        }   
        return false;
	}
	if(port_ == 'C' || port_  == 'c') {
		if(PINC & (1<<broche_)){
            _delay_ms(4);
            return PINC & (1<<broche_);
        }   
        return false;
	}
	if(port_ == 'D' || port_ == 'd') {
		if(PIND & (1<<broche_)){
            _delay_ms(4);
            return PIND & (1<<broche_);
        }   
        return false;
	}
}
