// Objectives:
// 1. configure I2C
// 2. comupaction over I2C
// 3. ADXL345 usage

// Components
// ADXL345 module
// Bidirectional level shifter

// Docs
// ADXL345 Datasheet: https://www.analog.com/media/en/technical-documentation/data-sheets/adxl345.pdf

#include "Arduino.h"
#include "avr8-stub.h"
#include "app_api.h" // only needed with flash breakpoints
#include <I2cMaster.h>

#define ADX345_I2C_ADDR 0x53

I2cMaster wire;

void setup() {
  // initialize GDB stub
  debug_init();

  wire.init();

  delay(500);
  // TODO: 2. read ADXL DEVICE ID
  // expected response 0xE5

  delay(500);
  
  // TODO: 3. enable ADXL read

  delay(500);
}

void ADXL_readData() {
  // TODO: 3. read X, Y, Z from ADXL and send to PC
}

void loop() {
  ADXL_readData();
  delay(500);
}
