#include "inventoneACT.h"

inventoneACT::inventoneACT(uint8_t pin) {
    pinMode(pin, OUTPUT);
    _ledPin = pin;
    _relayPin = pin;
}

void inventoneACT::turnLedOn() {
    digitalWrite (_ledPin, HIGH);
}

void inventoneACT::turnLedOff() {
    digitalWrite (_ledPin, LOW);
}

void inventoneACT::turnRelayOn() {
    digitalWrite (_relayPin, HIGH);
}

void inventoneACT::turnRelayOff() {
    digitalWrite (_relayPin, LOW);
}