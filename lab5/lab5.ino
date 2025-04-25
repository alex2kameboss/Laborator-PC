// Obiective:
// 1. folosirea avantajelor oferite de stiva OSI
// 2. realizarea unei clase independenta de protocol (I2C/SPI)

// Componente
// Senzor acelerometru ADXL345

// TODO: 1. bring classes SpiMaster and I2cMaster from previous laboratories

// TODO: 2. based on the following interface implement two other classes
// - one I2cTransport for I2C protocol
// - one SpiTransport for SPI protocol
class IAdxlTransport {
  // this interface provide basic transport function for ADXL
public:
  // initialize the hardware peripheral
  virtual void init() = 0;
  // read *len* bytes start with *addr*
  virtual bool read(int addr, char* d, int len = 1);
  // write *len* bytes start with *addr*
  virtual bool write(int addr, const char* d, int len = 1);
};

// TODO: 3. implement this high level class
// * will get an IAdxlTransport* in constructor
// need to provide the fallowing functions:
//  - check if sensor is connected by read and check device id
//  - start/stop measurement
//  - read data from sensor, not return them
//  - get the values for every axis from independent functions
//  - two consecutive read from same axis will automaticaly will update values the second time
class Adxl {};

// TODO: 4. TEST IT!

// instantiation example: 
// Adxl adxl(new SpiTransport);

void setup() {
  
}

void loop() {
  
}
