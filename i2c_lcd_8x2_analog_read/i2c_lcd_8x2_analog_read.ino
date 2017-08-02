#include <Wire.h>     // I2Cライブラリの読み込み
#include <ST7032.h>   // 液晶用ライブラリの読み込み

ST7032 lcd(0x3E);     // スレーブアドレスを 0x3E に設定

void setup() {
  lcd.begin(8, 2);       // lcd の使用宣言 (8x2)
  lcd.setContrast(30);   // コントラストの設定
}

void loop() {
  int analogVal = analogRead(A0);  // AD変換
  lcd.clear();                    // lcd クリア
  lcd.setCursor(0, 0);            // カーソルを1列目の1行目に移動
  lcd.print(analogVal);           // lcd にアナログ入力値を表示
  delay(50);                      // 0.05秒待つ
}