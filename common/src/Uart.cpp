#include <Uart.h>
#include <string.h>

void Uart::init() {
    // TODO: 1. configure UART
    // set UART pin directions
    // set baud rate 9600
    // enable RX and TX
    // set frame format: 8 bits, 1 stop bit, no parity
    // DO NOT CHANGE ALL BITS
}

void Uart::writeByte(const char& d) {
    // TODO: 2. implement write + test it and capture on oscilloscope
    // wait to empty transmit buffer
    // write data
}

bool Uart::available() {
    // TODO: 3. check if are data in UART buffer
    return false;
}

char Uart::readByte() {
    // TODO: 3. implement read
    // wait for data
    // read data and return it
}

void Uart::writeString(const char* msg) {
    for (int i = 0; i < strlen(msg); i++)
        writeByte(msg[i]);
}

void Uart::writeIntegerNumber(const int &number, const int &base) {
    
}
