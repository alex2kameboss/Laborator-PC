#ifndef UART_H
#define UART_H

class Uart {
public: 
    void init();

    void writeByte(const char& d);

    bool available();

    char readByte();

    void writeString(const char* msg);

    void writeIntegerNumber(const int& number, const int& base = 10);
};

#endif // UART_H