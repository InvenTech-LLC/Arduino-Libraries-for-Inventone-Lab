#ifndef inventonneACT_h
#define inventonneACT_h

#include "Arduino.h"

class inventoneACT
{
    public:
        inventoneACT (uint8_t pin);
        void turnLedOn ();
        void turnLedOff ();
        void turnRelayOn ();
        void turnRelayOff ();
        void rotate(int speed);
        void turn(int degrees);
    private:
        uint8_t _pin;
};

#endif
