#include <EEPROM.h>

String msg = "";         // 空の文字列を用意

void setup() {
  Serial.begin(115200);   // シリアル通信を115200bpsで使用
  EEPROM.begin(512);      // EEPROM の 512バイトを使用

  // '!'が読み取られるまで EEPROM から msg に追加
  int i = 0;
  while(1) {
    char chr = EEPROM.read(i); // EEPROM の iアドレスから 1バイト読み取り
    msg += String(chr);        // 読み取った 1文字を文字列に追加
    if (chr == '!') { break; } // '!'を読み取ったらループから抜ける
    i++;
  }

  Serial.println();       // 改行
  Serial.println(msg);    // 読み込んだメッセージをシリアルモニタに表示
}

void loop() {

}

