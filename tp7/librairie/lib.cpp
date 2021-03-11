#include <lib.hpp>

void Robot::allumerLED(char PORT, uint8_t broche, uint8_t couleur){
    if(PORT == 'A' || PORT == 'a'){
        PORTA = couleur << broche;                       
    }
    else if(PORT == 'B' || PORT == 'b'){
        PORTB = couleur << broche;                  
    }
    else if(PORT == 'C' || PORT == 'c'){
        PORTC = couleur << broche;                 
    }
    else if(PORT == 'D' || PORT == 'd'){
        PORTD = couleur << broche;  
    }
}   

bool Robot::bouttonPoussoir(uint8_t masque, char PORT){

    if(PORT == 'A' || PORT == 'a'){
        if(PINA & masque){
        _delay_ms(4);
        return PINA & masque;                  
        }
    }

    else if(PORT == 'B' || PORT == 'b'){
        if(PINB & masque){
        _delay_ms(4);
        return PINB & masque;
        }
    }

    else if(PORT == 'C' || PORT == 'c'){
        if(PINC & masque){
        _delay_ms(4);
        return PINC & masque;
        }
    }

    else if(PORT == 'D' || PORT == 'd'){
        if(PIND & masque){
        _delay_ms(4);
        return PIND & masque;
        }
    }
    return false; 
}

void Robot::transmissionUART(uint8_t donnee ){ 
    while ( !( UCSR0A & (1<<UDRE0))){
    }
    UDR0 = donnee;
}

uint8_t Robot::lireValeurCAN(uint8_t broche){
    can convertisseur = can();
    return (uint8_t)convertisseur.lecture(broche) >> 2;
   
}

void Init::initINT0(){
    cli ();
    EIMSK |= (1 << INT0);
    EICRA |= 1 << ISC00;
    EICRA |= 1 << ISC01; 
    sei();
}

void Init::initINT1(){
    cli();
    EIMSK |= 1 << INT1;
    EICRA |= 1 << ISC10; 
    EICRA |= 1 << ISC11; 
    sei(); 
}

void PWM::minuterieCTC(uint16_t duree){
    TCNT1 = 0;
    OCR1A = duree*(F_CPU/1024);
    TCCR1A |=  1 << COM1A0;
    TCCR1B |= 1 << CS12;
    TCCR1B |= 1 << CS10;
    TCCR1C = 0;
    TIMSK1 |= 1 << OCIE1A;
}

void PWM::minuteriePWMCorrect(uint8_t duty){

    float inter = 255.0/100;
    uint8_t value = (uint8_t)duty*inter;
    OCR1A = value;
    OCR1B = value;
    TCCR1A |=  1 << COM1A1;
    TCCR1A |=  1 << COM1B1;
    TCCR1A |=  1 <<  WGM10;
    TCCR1B |=  1 << CS11;
    TCCR1C = 0;
}
