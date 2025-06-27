#ifndef I_ADXL_TRANSPORT_H
#define I_ADXL_TRANSPORT_H

/// @brief Interface for ADXL345 transport layer
class IAdxlTransport {
public:
    /// @brief Initialize the hardware peripheral
    virtual void init() = 0;

    /// @brief Read bytes from ADXL345
    /// @param addr ADXL345 start register address
    /// @param d The received data will be in this buffer
    /// @param len The number of bytes required from ADXL345
    /// @return If operation was successful
    virtual bool read(int addr, char* d, int len = 1);

    /// @brief Write bytes to ADXL345
    /// @param addr ADXL345 start register address
    /// @param d Write data buffer
    /// @param len The number of bytes to be written to ADXL345
    /// @return If operation was successful
    virtual bool write(int addr, const char* d, int len = 1);
};

#endif // I_ADXL_TRANSPORT_H