// Obiective:
// 1. configurare UART
// 2. scrierea pe UART
// 3. citirea pe UART
// 4. protocol text

// Componente
// 2 LED-uri + rezistente de ??? Ohmi (se va calcula)
// 1 Push Button + rezistenta de ??? Ohmi (se va argumenta)

#define FOSC 16e6 // 16MHz

void setup() {
  // TODO: 1. configure UART
  // set UART pin direction
  // set baud rate 9600
  // enable RX and TX
  // set frame format: 8 bits, 1 stop bit, no parity
}

void uartWrite(unsigned char d) {
  // TODO: 2. implement write + test it and capture on osciloscope
  // wait to empty transmit buffer
  // write data
}

unsigned char uartRead() {
  // TODO: 3. implement read
  // wait for data
  // read data
}

void uartWrite(const char* msg) {
  for (int i = 0; i < strlen(msg); i++)
    uartWrite(msg[i]);
}

void responseBack(const char* userMsg) {
  uartWrite("You said: ");
  uartWrite(userMsg);
}

void loop() {
  // TODO: 3. buffer bytes from user and when reach newline(\n) send the buffer back - use responseBack(...)
  // TODO: 4. implementa text protocol, minimal turn leds on/off, read btn state
}
