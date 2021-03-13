#include "boutonPoussoir.h"

Boutton::Boutton() : estInteruption_(false), port_('d'), broche_(0x02) {
}

Boutton::Boutton(bool a, char p, uint8_t b) : estInteruption_(a), port_(p), broche_(b){

}

Boutton::~Boutton() {

}

void Boutton::initINT0() {
    cli ();
    EIMSK |= (1 << INT0);
    EICRA |= 1 << ISC00;
    EICRA |= 1 << ISC01; 
    sei ();
}

void Boutton::initINT1(){
    cli ();
    EIMSK |= 1 << INT1;
    EICRA |= 1 << ISC10;
    EICRA |= 1 << ISC11;  
    sei ();
}