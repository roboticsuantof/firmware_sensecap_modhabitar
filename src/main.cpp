#include <Arduino.h>
#include "sensorBuilder.hpp"

#define FW_VERSION "1.0.0"

SensorBuilderClass SensorBuilder;

void setup()
{
  Serial.begin(115200);
  SensorBuilder.check_grove();
  // SensorBulder class modbus address starts at 4 (DEC), the other address are for device data.
  // Temperature using MCP9808 uses address 4
  sensorTemperature *pTempSensor = new sensorTemperature();
  SensorBuilder.addSensor(pTempSensor);
  
  // Mutigas uses 4 modbus address: 6(No2) 8(C2H5OH) 10(VOC) 12(CO)
  sensorMultiGas* pMultiGasSensor = new sensorMultiGas();
  SensorBuilder.addSensor(pMultiGasSensor);

  // SEN54 sensor uses 4 modbus address: 14(Temp) 16(RH) 18(VOC) 20(PM1.0) 22(PM2.5) 24(PM10.0)
  sensorEnvironmental* pEnviromentalS54Sensor = new sensorEnvironmental();
  SensorBuilder.addSensor(pEnviromentalS54Sensor);

  SensorBuilder.begin();
}

void loop()
{
  SensorBuilder.poll();
}