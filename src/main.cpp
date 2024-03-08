#include <Arduino.h>
#include "sensorBuilder.hpp"

SensorBuilderClass SensorBuilder;

void setup()
{
  Serial.begin(115200);
  SensorBuilder.check_grove();

  sensorTemperature *pTempSensor = new sensorTemperature();
  SensorBuilder.addSensor(pTempSensor);
  
  sensorMultiGas* pMultiGasSensor = new sensorMultiGas();
  SensorBuilder.addSensor(pMultiGasSensor);

  SensorBuilder.begin();
}

void loop()
{
  SensorBuilder.poll();
  delay(100);
}