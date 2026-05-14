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
    /// @param sendAck Flag if need to send acknowledge
    /// @return The byte received from transaction
    char _readByte(bool sendAck);
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
    /// @return True if acknowledge was received
    bool writeByte(const char& d);

    /// @brief Read one byte from I2C, after addressing stage
    /// @param response The response to send after receive
    /// @return The byte received
    char readByte(I2cResponse response = ACKNOWLEDGE);

    /// @brief Send stop condition for I2C
    void sendStop();
};

#endif // I2C_MASTER_H