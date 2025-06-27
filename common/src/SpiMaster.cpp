#include <SpiMaster.h>

void SpiMaster::init() {
    // TODO: 1. configure SPI
    /* ---!VERY IMPORTANT!--- */
    // write 1 on CS after set CS as OUTPUT

    // in the end configure SPI
    // set MOSI, SCK - output
    // set MISO - input
    // enable SPI as master
    // check ADXL datasheet for clock frequency
    // check ADXL datasheet for clock polarity
    // check ADXL datasheet for clock phase
}

char SpiMaster::transmit(const char& d) {
    // TODO: 2. transmit 1 byte on SPI
    // start transmission
    // wait for transmission complete
    // return response from slave
    return 0x00;
}