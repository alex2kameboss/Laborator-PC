// Obiective:
// 1. configurare interfata SPI
// 2. scrierea si citirea pe SPI
// 3. utilizarea accelerometru ADXL345

// Componente
// Senzor acelerometru ADXL345

// Documentatie
// ADXL345 Datasheet: https://www.analog.com/media/en/technical-documentation/data-sheets/adxl345.pdf

// HINT
// use UART lib from lab2 to send messages to PC
// use itoa to convert int to string

void ADXL_enable() {
  // TODO: 2. select ADXL
}

void ADXL_disable() {
  // TODO: 2. deselect ADXL
}

char ADXL_cmdBuilder(char, bool, bool = false);

class SpiMaster{
public:
  init() {
    // TODO: 1. configure SPI
    // set MOSI, SCK - output
    // set MISO - input
    // enable SPI as master
    // check ADXL datasheet for clock frequncy
    // check ADXL datasheet for clock polarity
    // check ADXL datasheet for clock phase
  }

  char transmit(char d) {
    // TODO: 2. transmit 1 byte on SPI
    // start transmision
    // wait for transmission complete
    // return response from slave
    return 0x00;
  }
};

SpiMaster spi;

void setup() {
  // TODO: 1. set an CS pin and make it as output
  

  ADXL_disable();

  spi.init();

  // TODO: 2. read ADXL DEVICE ID
  // analyze SPI protocol on osciloscope
  // expected response 0xE5

  delay(500);
  
  // TODO: 3. enable ADXL read mode

  delay(500);
}

char ADXL_cmdBuilder(char addr, bool rw, bool mb = false) {
  return (addr & 0b00111111) | (mb << 6) | (rw << 7);
}

void ADXL_readData() {
  // TODO: 3. read X, Y, Z from ADXL and send to PC
}

void loop() {
  ADXL_readData();
  delay(500);
}
