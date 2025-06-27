#ifndef I2C_MASTER_H
#define I2C_MASTER_H

#include <laboratory_types.h>

/// @brief Implement high level functions for I2C protocol, in master mode, in ATmega328p
class I2cMaster {
protected:
    /// @brief Send one byte over I2C
    /// @param data The byte to be send
    void _writeByte(const char& data);

    /// @brief Read one byte from I2C
    /// @param data The response byte will be in this variable
    void _readByte(char& data);
public:
    /// @brief This function enable and configure I2C peripheral. Also configure MCU pins
    void init();

    /// @brief Send start condition for I2C
    void sendStart();

    /// @brief Send slave address plus write bit
    /// @param addr The slave address
    /// @return True if ACK bit was returned
    bool writeAddrWrite(const char& addr);

    /// @brief Send slave address plus read bit
    /// @param addr The slave address
    /// @return True if ACK bit was returned
    bool writeAddrRead(const char& addr);

    /// @brief Send one byte over I2C, after addressing stage
    /// @param d Data byte to be send
    /// @param expectedResponse The expected response
    /// @return True if response is equal with expected response
    bool writeByte(const char& d, I2cResponse expectedResponse = ACKNOWLEDGE);

    /// @brief Read one byte from I2C, after addressing stage
    /// @param d The response will be in this variable
    /// @param expectedResponse The expected response
    /// @return True if response is equal with expected response
    bool readByte(char& d, I2cResponse expectedResponse = ACKNOWLEDGE);

    /// @brief Send stop condition for I2C
    void sendStop();
};

#endif // I2C_MASTER_H