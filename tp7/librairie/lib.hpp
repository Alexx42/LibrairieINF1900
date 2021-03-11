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

class Moteur{

    public:
        Moteur() = default;
        Moteur(int d){
            direction_ = d;
        }
        void setDirection();
        static void setVitesseUniform();
        static void setVitesseDroit();
        static void setVitesseGauche();
        ~Moteur(){}

    private:
        int direction_ = 0;
};

class Init {
    
    public:
        static void initINT0();
        static void initINT1();

        static void initUART();
};

class Robot{
    public:
        static void allumerLED(char PORT, uint8_t broche, uint8_t couleur);
        static bool bouttonPoussoir(uint8_t masque, char);
        static void transmissionUART(uint8_t);
        static uint8_t lireValeurCAN(uint8_t broche);
    private: 
        Moteur moteur;
        initialisateur init;
};

class PWM : public Robot {
    public:
        static void minuterieCTC(uint16_t duree);
        static void minuteriePWMCorrect(uint8_t duty);
};

#endif