// Obiective:
// 1. configurare interfata I2C
// 2. scrierea si citirea pe I2C
// 3. utilizarea accelerometru ADXL345

// Componente
// Senzor acelerometru ADXL345

// Documentatie
// ADXL345 Datasheet: https://www.analog.com/media/en/technical-documentation/data-sheets/adxl345.pdf

#define ADX345_I2C_ADDR 0x53

char ADXL_cmdBuilder(char addr, bool rw, bool mb = false) {
  return (addr & 0b00111111) | (mb << 6) | (rw << 7);
}

class I2cMaster {
protected:
  void _writeByte(char data) {
    // TODO: 2. send 1 byte on i2c
    // writa byte
    // send command to send byte
    // wait for ack or nack
  }

  void _readByte(char& data) {
    // TODO: 2. read 1 byte from i2c
    // send command to read byte
    // wait for ack or nack
    //read byte;
  }
public:
  void init() {
    // TODO: 1. configure SPI for master mode
    // set frequency; read datasheet for SCLK frequency
    // set SCLK pin output
    // enable internal pull up rezistor for SCLK and SDA, set PORTxn = 1
  }

  void sendStart() {
    // TODO: 2. send i2c start condition
    // send start condition
    // wait for start has been transmitted
  }

  // write addr and write mode
  bool writeAddrW(char addr) {
    // TODO: 2. send slave addr for write
    // add write bit to addr {addr[6:0],r/w}
    _writeByte(0x00);
    // check if ack received for addr
    return false;
  }

  // write addr and read mode
  bool writeAddrR(char addr) {
    // TODO: 2. send slave addr for read
    // add read bit to addr {addr[6:0],r/w}
    _writeByte(0x00);
    // check if ack received for addr
    return false;
  }

  bool writeByte(char d) {
    // TODO: 2. send byte on i2c
    // send byte
    _writeByte(d);
    // retrun if ack received
    return false;
  }

  bool readByte(char& d) {
    // TODO: 2. read byte from i2c
    _readByte(d);
    // retrun if ack received
    return false;
  }

  void sendStop() {
    // TODO: 2. send i2c stop condition
  }
};

I2cMaster wire;

void setup() {
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
