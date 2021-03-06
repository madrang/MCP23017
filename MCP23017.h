/*************************************************** 
  This is a library for the MCP23017 i2c port expander

  These displays use I2C to communicate
  2 pins are required to interface

  Written by Limor Fried/Ladyada for Adafruit Industries.
    Adafruit invests time and resources providing this open source code, 
    please support Adafruit and open-source hardware by purchasing 
    products from Adafruit!

  Edited by Marc-Andre Ferland/Madrang.

  BSD license, all text above must be included in any redistribution
 ****************************************************/

#ifndef _MCP23017_H_
#define _MCP23017_H_

// Don't forget the Wire library
class MCP23017 {
public:
  void begin(uint8_t addr);
  void begin(void);
  void begin(bool a, bool b, bool c);
  
  uint8_t read8(uint8_t addr);
  uint16_t read16(uint8_t addr);
  
  void write8(uint8_t addr, uint8_t val);
  void write16(uint8_t addr, uint16_t val);

  void pinMode(uint8_t p, uint8_t d);
  void digitalWrite(uint8_t p, uint8_t d);
  void pullUp(uint8_t p, uint8_t d);
  uint8_t digitalRead(uint8_t p);

  void writeGPIOAB(uint16_t);
  uint16_t readGPIOAB();
  
  uint8_t address();

 private:
  uint8_t i2caddr;
};

#define MCP23017_ADDRESS 0x20
#define MCP23017_ADDRES_Msk 0x27

// registers
#define MCP23017_IODIRA 0x00
#define MCP23017_IPOLA 0x02
#define MCP23017_GPINTENA 0x04
#define MCP23017_DEFVALA 0x06
#define MCP23017_INTCONA 0x08
#define MCP23017_IOCONA 0x0A
#define MCP23017_GPPUA 0x0C
#define MCP23017_INTFA 0x0E
#define MCP23017_INTCAPA 0x10
#define MCP23017_GPIOA 0x12
#define MCP23017_OLATA 0x14

#define MCP23017_IODIRB 0x01
#define MCP23017_IPOLB 0x03
#define MCP23017_GPINTENB 0x05
#define MCP23017_DEFVALB 0x07
#define MCP23017_INTCONB 0x09
#define MCP23017_IOCONB 0x0B
#define MCP23017_GPPUB 0x0D
#define MCP23017_INTFB 0x0F
#define MCP23017_INTCAPB 0x11
#define MCP23017_GPIOB 0x13
#define MCP23017_OLATB 0x15

#endif
