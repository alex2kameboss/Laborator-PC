// Objectives:
// 1. configure SPI
// 2. comupaction over SPI
// 3. ADXL345 usage

// Components
// ADXL345 module
// Bidirectional level shifter

// Docs
// ADXL345 Datasheet: https://www.analog.com/media/en/technical-documentation/data-sheets/adxl345.pdf


// HINTS
// use UART lib from lab2 to send messages to PC
// use itoa to convert int to string

#include "Arduino.h"
#include "avr8-stub.h"
#include "app_api.h" // only needed with flash breakpoints
#include <SpiMaster.h>

SpiMaster spi;

void ADXL_enable() {
  // TODO: 2. select ADXL
}

void ADXL_disable() {
  // TODO: 2. deselect ADXL
}

char ADXL_cmdBuilder(char addr, bool rw, bool mb) {
  return (addr & 0b00111111) | (mb << 6) | (rw << 7);
}

void setup() {
  // initialize GDB stub
  debug_init();

  // TODO: 1. set an CS pin and make it as output
  
  ADXL_disable();

  spi.init();

  // TODO: 2. read ADXL DEVICE ID
  // analyze SPI protocol on oscilloscope
  // expected response 0xE5

  delay(500);
  
  // TODO: 3. enable ADXL read mode

  delay(500);
}

void ADXL_readData() {
  // TODO: 3. read X, Y, Z from ADXL and send to PC
}

void loop() {
  ADXL_readData();
  delay(500);
}