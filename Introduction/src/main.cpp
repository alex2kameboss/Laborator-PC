// Objectives:
// 1. presenting ATmega32p datasheet
// 2. pin configuration for in/out
// 3. read/write from pins
// 4. introduction in electrical workbench equipments
//  4.1. presentation + utilization multimeter (measure R, Vd)
//  4.2. presentation + visualization on oscilloscope
//  4.3. presentation programmable power supply

// Components
// 2 LEDs + resistors
// 1 Push Button + resistor

#include <Arduino.h>
#include <laboratory_types.h>

void setup() {
  // TODO: 1. configure pin directions and turn off leds
}

void inline setLed0State(LedState state) {
  // TODO: 1. turn led0 on or off based on state
}

// read button state
ButtonState inline readBtnState() {
  // TODO: 1. return if button is pressed
 return ButtonState::NOT_PRESSED; 
}

void inline setLed1State(LedState state) {
  // TODO: 2. turn led1 on or off based on state
}

static void oscillatingLed() {
  // TODO: 2. toggle the led1 with the pattern: 500ms on, 200ms off
  // TODO: 3. analyze on oscliisop the  led1 signal and measure the timing
}

// detect button press and toggle the led0 state
static void toggleLed(ButtonState btnState) {
  static bool lastState = ButtonState::NOT_PRESSED;
  static bool ledState = false;
  if ( lastState == ButtonState::NOT_PRESSED && 
        btnState == ButtonState::PRESSED ) {
    ledState = !ledState;
    setLed0State(ledState ? LedState::ON : LedState::OFF);
  }
  lastState = btnState;
}

void loop() {
  toggleLed(readBtnState());
  oscillatingLed();
  delay(100);
}