#include "SH1106_command.h"

#define SH1106_LCDWIDTH                  128
#define SH1106_LCDHEIGHT                 64

#define BLACK 0
#define WHITE 1
#define INVERSE 2


class SH1106 {
 public:
    SH1106(int8_t SID, int8_t SCLK, int8_t DC, int8_t RST, int8_t CS);
    SH1106(int8_t DC, int8_t RST, int8_t CS);

  void begin(uint8_t switchvcc, bool reset=true);
  void SH1106_command(uint8_t c);
  void SH1106_data(uint8_t c);

  void clearDisplay(void);
  void invertDisplay(uint8_t i);
  void display();

  /*void startscrollright(uint8_t start, uint8_t stop);
  void startscrollleft(uint8_t start, uint8_t stop);

  void startscrolldiagright(uint8_t start, uint8_t stop);
  void startscrolldiagleft(uint8_t start, uint8_t stop);
  void stopscroll(void); */
  
  void dim(uint8_t contrast);

  void drawPixel(int16_t x, int16_t y, uint16_t color);

  void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
  void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);

 private:
  int8_t _vccstate, sid, sclk, dc, rst, cs;
  int16_t width, high;    
  inline void drawFastVLineInternal(int16_t x, int16_t y, int16_t h, uint16_t color) __attribute__((always_inline));
  inline void drawFastHLineInternal(int16_t x, int16_t y, int16_t w, uint16_t color) __attribute__((always_inline));

};
