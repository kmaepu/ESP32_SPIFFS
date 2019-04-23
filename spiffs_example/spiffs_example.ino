#include "esp32_spiffs.h"

ESP32_SPIFFS spiffs;

char file_buf[16384];

void setup() { 
  Serial.begin(115200);
  memset(file_buf,0,sizeof(file_buf));
  spiffs.begin();
  

  // ファイルをリスト表示
  spiffs.listDir("/", 0);
  // ファイルを作成して書き込み
  spiffs.writeFile("/hello.txt", "Hello ");
  spiffs.appendFile("/hello.txt", "World!\n");
  spiffs.readFile("/demo.bmp", file_buf);
  spiffs.renameFile("/hello.txt", "/foo.txt");
  spiffs.readFile("/foo.txt",file_buf);
  Serial.printf("%s\n",file_buf);
  spiffs.deleteFile("/foo.txt");
//  spiffs.testFileIO("/test.txt");
//  spiffs.deleteFile("/test.txt");
  Serial.println( "Test complete" );  
}

void loop() {
}
