#include <EEPROM.h>

void setup() {
  Serial.begin(115200);   // シリアル通信を115200bpsで使用
  EEPROM.begin(512);      // EEPROM の 512バイトを使用

  // EEPROMの0~511番地に0を書き込む
  for (int i = 0; i < 512; i++) {
    EEPROM.write(i, 0);
  }

  EEPROM.commit();        // EEPROM へ変更を実際に書き込む
  Serial.println("Cleared!");
}

void loop() {

}

