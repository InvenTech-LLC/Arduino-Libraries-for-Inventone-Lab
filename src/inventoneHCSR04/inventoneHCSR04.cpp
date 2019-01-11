#include "inventoneHCSR04.h"
#include "Arduino.h"

#include "HCSR04.h"

int _trigPin;
int _echoPin;

inventoneHCSR04::inventoneHCSR04(int trigPin, int echoPin){
    _trigPin = trigPin;
    _echoPin = echoPin;
}

HCSR04 sensor(_trigPin, _echoPin);

float inventoneHCSR04::getDistanceIn(char distUnit[]){
    
    float distanceInCm = sensor.dist();

    if (!strcmp(distUnit, "cm") || !strcmp(distUnit, "CM")){
        return distanceInCm;
    }
    else if (!strcmp(distUnit, "m") || !strcmp(distUnit, "M")){
        float distanceInM = distanceInCm/100;
        return distanceInM;
    }
    
}