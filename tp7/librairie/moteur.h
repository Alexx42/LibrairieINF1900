#ifndef LIB
#define LIB
#define F_CPU 8000000L

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