#ifndef UART_H
#define UART_H

#define FOSC 16e6 // 16MHz

/// @brief Implement high level functions for UART protocol in ATmega328p
class Uart {
public: 
    /// @brief This function enable and configure UART peripheral. Also configure MCU pins
    void init();

    /// @brief Write one byte on TX chanel, lock until send ends
    /// @param d The 8 bits will be send over UART
    void writeByte(const char& d);

    /// @brief Check if UART RX buffer has data
    /// @return If there are data in RX buffer
    bool available();

    /// @brief Take one data from RX buffer, lock until data available
    /// @return One byte (8 bits) from UART RX buffer
    char readByte();

    /// @brief Send a string over UART TX chanel
    /// @param msg The message to be send
    void writeString(const char* msg);

    /// @brief Receive an integer number, convert to string and send over UART TX
    /// @param number The integer number to be send
    /// @param base The radix in which the number will be represented
    void writeIntegerNumber(const int& number, const int& base = 10);
};

#endif // UART_H