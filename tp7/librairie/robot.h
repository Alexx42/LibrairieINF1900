#ifndef LIB
#define LIB
#define F_CPU 8000000L
#include <stdint.h>
#include "moteur.h"

class Robot{
    public:
        static void allumerLED(char PORT, uint8_t broche, uint8_t couleur);
        static bool bouttonPoussoir(uint8_t masque, char);
        static void transmissionUART(uint8_t);
        static uint8_t lireValeurCAN(uint8_t broche);
    private: 
        Moteur moteur;
};
