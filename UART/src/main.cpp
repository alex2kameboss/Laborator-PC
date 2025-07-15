// Objectives:
// 1. configure UART on ATmega328p
// 2. write bytes on UART
// 3. receive bytes on UART
// 4. text protocols

// Components
// 2 LEDs + resistors
// 1 Push Button + resistor

#include "Arduino.h"
#include "avr8-stub.h"
#include "app_api.h" // only needed with flash breakpoints
#include <Uart.h>

Uart uart;

void setup() {
    // initialize GDB stub
    debug_init();

    uart.init();
}

void responseBack(const char* userMsg) {
    uart.writeString("You said: ");
    uart.writeString(userMsg);
}

void loop() {
    // TODO: 3. buffer bytes from user and when reach newline(\n) send the buffer back - use responseBack(...)
    // TODO: 4. implement a text protocol with the following minimal features:
    //  - one button to read state (pressed or not)
    //  - one led to set state (on or off)
    //  - one blinking led (500ms on, 200ms off) and enable or disable it
    // DO NOT BLOCK THE MCU
    // HINT: standalone timer, internal timer, multiple options
}