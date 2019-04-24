# ESP32_SPIFFS

　espressif(公式）がgithubで提供しているSPIFFSのサンプルコードをライブラリ化しました。  
 元のソースコードは[こちら](https://github.com/espressif/arduino-esp32/tree/master/libraries/SPIFFS)です。    

## 環境
　開発環境：Arduino-IDE（Arduino-ESP32  
　使用ボード：ESP-32-DevKit  

## 関数一覧

 ・void __begin__(void)  
　　SPIFFSの初期化  
 ・void __listDir__(const char *dirname, uint8_t levels)  
　　SPIフラッシュメモリ内のファイルをリスト表示  
 ・void __readFile__(const char *path, char *buf)    
　　指定したパス（*path）のファイルを読み込んで、引数の＊bufに格納   
 ・void __writeFile__(const char *path, const char *message)  
　　指定したパス(*path)のファイルを作成し、文字列(*message)を書き込み  
 ・void __appendFile__(const char *path, const char *message)  
　　指定したパス（*path）のファイルに文字列(*message)を追記  
 ・void __renameFile__(const char *path1, const char *path2)    
　　指定したパス(*path1)のファイル名を指定したファイル名(*path2)に変更    
 ・void __deleteFile__(const char *path)   
　　指定したファイル（*path）を削除  
 ・void __testFileIO__(const char * path)    
　　SPIFFSの動作確認  

## サンプルコード
サンプルコードは関数全てを順に実行するようになっています。    
実行すると以下のようにシリアルコンソールへログが表示されます。    

<img width="208" alt="Serial console output.PNG" src="https://qiita-image-store.s3.ap-northeast-1.amazonaws.com/0/183282/2fe5ed08-e0f0-bbcc-e5ef-33273e1a35b1.png">

