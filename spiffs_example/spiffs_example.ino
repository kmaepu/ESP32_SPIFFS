#include "esp32_spiffs.h"

// コンストラクタ
ESP32_SPIFFS spiffs;

char file_buf[16384];

void setup() { 
  Serial.begin(115200);
  spiffs.begin();
  
  spiffs.listDir("/", 0);
//  spiffs.writeFile("/hello.txt", "Hello ");
//  spiffs.appendFile("/hello.txt", "World!\r\n");
  spiffs.readFile("/demo.bmp", file_buf);
  int i;
  for(i=0;i<8192;i++){
    Serial.printf("%x",file_buf);
  }
  
//  spiffs.renameFile("/hello.txt", "/foo.txt");
//  spiffs.readFile("/foo.txt");
//  spiffs.deleteFile("/foo.txt");
//  spiffs.testFileIO("/test.txt");
//  spiffs.deleteFile("/test.txt");
  Serial.println( "Test complete" );  
}

void loop() {

}
