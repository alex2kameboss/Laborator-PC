// Objectives:
// 1. implement an OSI model for ADXL345 with I2C and SPI

#include "Arduino.h"
#include "avr8-stub.h"
#include "app_api.h" // only needed with flash breakpoints

// TODO: 1. based on IAdxlTransport interface implement two other classes
// - one I2cTransport for I2C protocol
// - one SpiTransport for SPI protocol

// TODO: 2. implement Adxl high level class
// * will get an IAdxlTransport* in constructor
// need to provide the fallowing functions:
//  - check if sensor is connected by read and check device id
//  - start/stop measurement
//  - read data from sensor, not return them
//  - get the values for every axis from independent functions
//  - two consecutive read from same axis will automaticaly will update values the second time

// TODO: 3. TEST IT!

// instantiation example: 
// Adxl adxl(new SpiTransport);

void setup() {
    // initialize GDB stub
    debug_init();
}

void loop() {
  
}