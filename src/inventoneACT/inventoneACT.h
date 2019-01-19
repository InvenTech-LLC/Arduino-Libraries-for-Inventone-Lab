#ifndef inventonneACT_h
#define inventonneACT_h

#include "Arduino.h"

class inventoneACT
{
    public:
        inventoneACT (uint8_t pin);
        inventoneACT ();
        void setupForRead (uint8_t pin);
        void setupForWrite (uint8_t pin);
        void turnLedOn ();
        void turnLedOff ();
        void turnRelayOn ();
        void turnRelayOff ();
        void rotate(int speed);
        void turn(int degrees);
        float multiplex(float data1, float data2, char *conditon);
        float pass(float input, bool boolean);
        bool threshold(float data1, float data2, char *condition);
        int map(long data, int in_min, int in_max, int out_min, int out_max); 
        char *string(char *text);
        char *buildText(char *text1, float x, char *text2);
        int analog_read(uint8_t pin);
        void analog_write(uint8_t pin);
        bool digital_read(uint8_t pin);
        void digital_write(uint8_t pin);
    private:
        uint8_t _pin;
};

#endif
