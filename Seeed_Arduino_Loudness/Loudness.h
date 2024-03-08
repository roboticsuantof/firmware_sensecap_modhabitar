/*

*/
#ifndef LOUDNESS_H
#define LOUDNESS_H

#include "Arduino.h"

// #if defined(ARDUINO_ARCH_AVR) // AVR verf 5V
// #define GM_VERF 5
// #else
// #define GM_VERF 3.3
// #endif


//template <class T>
class Loudness {
  public:
    Loudness(int pin);
    long MeasureLoud();
    // void begin(T& wire = Wire, uint8_t address = 0x08);
    // void setAddress(uint8_t address = 0x08);
    // void changeLoudAddr(uint8_t address = 0x08);
    // uint32_t measure_NO2(){
    //     return getGM102B();
    // };
    // uint32_t getGM102B();
    // inline float calcVol(uint32_t adc, float verf = GM_VERF, int resolution = GM_RESOLUTION) {
    //     return (adc * verf) / (resolution * 1.0);
    // };
  private:
    // T* _Wire;
    // bool isPreheated;
    // uint8_t GMXXX_ADDRESS;
    // void GMXXXWriteByte(uint8_t cmd);
    // uint32_t GMXXXRead32();
    int _pin;//pin number of Arduino that is connected with SIG pin of Loudness Sensor.

};
#endif
