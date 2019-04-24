#include "esp32_spiffs.h"

ESP32_SPIFFS spiffs;

char file_buf[16384];

void setup() { 
  Serial.begin(115200);
  memset(file_buf,0,sizeof(file_buf));
  spiffs.begin();
  
  // ファイルを作成して文字列を書き込む
  spiffs.writeFile("/hello.txt", "Hello ");
  // 指定したファイルに文字列を追記
  spiffs.appendFile("/hello.txt", "World!\n");
  // ファイルをリスト表示
  spiffs.listDir("/", 0);
  // 指定したファイル名を変更
  spiffs.renameFile("/hello.txt", "/foo.txt");
  // 指定したファイルを読み込む
  spiffs.readFile("/foo.txt",file_buf);
  Serial.printf("%s\n",file_buf);
  // 指定したファイルを削除
  spiffs.deleteFile("/foo.txt");
//  spiffs.testFileIO("/test.txt");
//  spiffs.deleteFile("/test.txt");
  Serial.println( "Test complete" );  
}

void loop() {
}
