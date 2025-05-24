#include <I2cMaster.h>

void I2cMaster::_writeByte(const char& data) {
    // TODO: 2. send 1 byte on I2C
    // write byte
    // send command to send byte
    // wait for ack or nack
}

void I2cMaster::_readByte(char& data) {
    // TODO: 2. read 1 byte from I2C
    // send command to read byte
    // wait for ack or nack
    // read byte
}

void I2cMaster::init() {
    // TODO: 1. configure SPI for master mode
    // set frequency; read datasheet for SCLK frequency
    // set SCLK pin output
    // enable internal pull up resistor for SCLK and SDA, set PORTxn = 1
}

void I2cMaster::sendStart() {
    // TODO: 2. send I2C start condition
    // send start condition
    // wait for start has been transmitted
}

bool I2cMaster::writeAddrWrite(const char& addr) {
    // TODO: 2. send slave addr for write
    // add write bit to addr {addr[6:0],r/w}
    _writeByte(0x00);
    // check if ack received for addr
    return false;
}

bool I2cMaster::writeAddrRead(const char& addr) {
    // TODO: 2. send slave addr for read
    // add read bit to addr {addr[6:0],r/w}
    _writeByte(0x00);
    // check if ack received for addr
    return false;
}

bool I2cMaster::writeByte(const char& d, I2cResponse expectedResponse) {
    // TODO: 2. send byte on I2C
    // send byte
    _writeByte(d);
    // retrun if ack received
    return false;
}

bool I2cMaster::readByte(char& d, I2cResponse expectedResponse) {
    // TODO: 2. read byte from I2C
    _readByte(d);
    // retrun if ack received
    return false;
}

void I2cMaster::sendStop() {
    // TODO: 2. send I2C stop condition
}