/*

*/
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <Arduino.h>
#include "Loudness.h"


Loudness::Loudness(int pin) {
    _pin = pin;
}

/**
    @description:  get the adc value of LOUDNESS SENSOR
    @param {type}:  None
    @return: uint32_t
*/

long Loudness::MeasureLoud(){
    int num_samples =1;
    long loud_ = 0;
    for (int i=0;i<num_samples;i++){
        loud_ += analogRead(_pin);
// Serial.print("Loudness::MeasureLoud() i: ");
// Serial.print(i);
// Serial.print("  ,  analogRead(_pin): ");
// Serial.println(analogRead(_pin));
    }
    loud_ /= num_samples;
    return loud_;
    //return int(analogRead(_pin));
}