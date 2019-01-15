#include "inventoneACT.h"
#include "Servo.h"

Servo myservo;

inventoneACT::inventoneACT(uint8_t pin) {
    pinMode(pin, OUTPUT);
    myservo.attach(pin);
    _pin = pin;
}

void inventoneACT::turnLedOn() {
    digitalWrite (_pin, HIGH);
}

void inventoneACT::turnLedOff() {
    digitalWrite (_pin, LOW);
}

void inventoneACT::turnRelayOn() {
    digitalWrite (_pin, HIGH);
}

void inventoneACT::turnRelayOff() {
    digitalWrite (_pin, LOW);
}

void inventoneACT::rotate(int speed){
    analogWrite (_pin, speed);
}

void inventoneACT::turn(int degrees) {
    myservo.write(degrees);
}