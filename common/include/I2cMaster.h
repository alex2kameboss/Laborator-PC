#ifndef I2C_MASTER_H
#define I2C_MASTER_H

#include <laboratory_types.h>

class I2cMaster {
protected:
    void _writeByte(const char& data);

    void _readByte(char& data);
public:
    void init();

    void sendStart();

    bool writeAddrWrite(const char& addr);

    bool writeAddrRead(const char& addr);

    bool writeByte(const char& d, I2cResponse expectedResponse = ACKNOWLEDGE);

    bool readByte(char& d, I2cResponse expectedResponse = ACKNOWLEDGE);

    void sendStop();
};

#endif // I2C_MASTER_H