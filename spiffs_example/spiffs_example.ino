#include "esp32_spiffs.h"

// コンストラクタ
ESP32_SPIFFS spiffs;

void setup() { 
  Serial.begin(115200);
  spiffs.begin();
  
  spiffs.listDir("/", 0);
  spiffs.writeFile("/hello.txt", "Hello ");
  spiffs.appendFile("/hello.txt", "World!\r\n");
  spiffs.readFile("/hello.txt");
  spiffs.renameFile("/hello.txt", "/foo.txt");
  spiffs.readFile("/foo.txt");
  spiffs.deleteFile("/foo.txt");
  spiffs.testFileIO("/test.txt");
  spiffs.deleteFile("/test.txt");
  Serial.println( "Test complete" );  
}

void loop() {

}
