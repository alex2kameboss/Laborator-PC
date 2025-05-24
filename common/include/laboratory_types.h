#ifndef LABORATORY_TYPES_H
#define LABORATORY_TYPES_H

enum LedState {
    ON  ,
    OFF 
};

enum ButtonState {
    PRESSED     ,
    NOT_PRESSED 
};

enum I2cResponse {
    ACKNOWLEDGE     ,
    NOT_ACKNOWLEDGE
};

#endif // LABORATORY_TYPES_H
