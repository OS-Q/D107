#ifndef _ST7789H_
#define _ST7789H_

#include "ST77xx.h"

/// Subclass of ST77XX type display for ST7789 TFT Driver
class ST7789 : public ST77xx {
  public:
    ST7789(int8_t cs, int8_t dc, int8_t mosi, int8_t sclk,
      int8_t rst = -1);
    ST7789(int8_t cs, int8_t dc, int8_t rst);
#if !defined(ESP8266)
    ST7789(SPIClass *spiClass, int8_t cs, int8_t dc, int8_t rst);
#endif // end !ESP8266

    void setRotation(uint8_t m);
    void init(uint16_t width, uint16_t height, uint8_t spiMode = SPI_MODE0);
};

#endif // _ST7789H_
