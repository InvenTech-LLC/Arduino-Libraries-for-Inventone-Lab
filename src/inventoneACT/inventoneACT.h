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
    private:
        uint8_t _ledPin;
        uint8_t _relayPin;
};

#endif
