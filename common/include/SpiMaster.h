#ifndef SPI_MASTER_H
#define SPI_MASTER_H

/// @brief Implement high level functions for SPI protocol, in master mode, in ATmega328p
class SpiMaster{
public:
    /// @brief This function enable and configure SPI peripheral. Also configure MCU pins
    void init();

    /// @brief Do one SPI data movement
    /// @param d The byte to be send on MOSI
    /// @return The byte received on MISO
    char transmit(const char& d);
};

#endif // SPI_MASTER_H