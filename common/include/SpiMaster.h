#ifndef SPI_MASTER_H
#define SPI_MASTER_H

class SpiMaster{
public:
    void init();

    char transmit(const char& d);
};

#endif // SPI_MASTER_H