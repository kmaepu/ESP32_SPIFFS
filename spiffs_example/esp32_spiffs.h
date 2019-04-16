#include "FS.h"
#include "SPIFFS.h"

#ifndef ESP32SPIFFS
#define ESP32SPIFFS

class ESP32_SPIFFS : public FS {
 public:
    ESP32_SPIFFS(void);

  void begin(void);
  void listDir(const char * dirname, uint8_t levels);
  void readFile(const char * path);
  void writeFile(const char * path, const char * message);
  void appendFile(const char * path, const char * message);
  void renameFile(const char * path1, const char * path2);
  void deleteFile(const char * path);
  void testFileIO(const char * path);

  private:
    fs::FS fs;
};
#endif