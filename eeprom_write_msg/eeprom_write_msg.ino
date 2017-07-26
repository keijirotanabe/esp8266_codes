#include <EEPROM.h>

char msg[] = "Hello, ESP8266!";

void setup() {
  Serial.begin(115200);   // シリアル通信を115200bpsで使用
  EEPROM.begin(512);      // EEPROM の 512バイトを使用

  // msg[] の文字配列を EEPROM へ変更を保存
  for (int i = 0; i < sizeof(msg) - 1; i++) {
    EEPROM.write(i, msg[i]);
    Serial.println(msg[i]);
  }

  EEPROM.commit();        // EEPROM へ変更を実際に書き込む
  Serial.println("Writed!");
}

void loop() {

}

