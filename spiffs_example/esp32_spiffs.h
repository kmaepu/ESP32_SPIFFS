/*
MIT License
Copyright (c) 2019 maepu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include "FS.h"
#include "SPIFFS.h"

#ifndef ESP32SPIFFS
#define ESP32SPIFFS

class ESP32_SPIFFS {
 public:

  void begin(void);
  void listDir(const char * dirname, uint8_t levels);
  void readFile(const char * path, char *buf);
  void writeFile(const char * path, const char * message);
  void appendFile(const char * path, const char * message);
  void renameFile(const char * path1, const char * path2);
  void deleteFile(const char * path);
  void testFileIO(const char * path);

  private:
    fs::FS &fs = SPIFFS;
};
#endif
