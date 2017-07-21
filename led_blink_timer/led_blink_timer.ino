#include <Ticker.h>         // Tickerライブラリの読み込み

const int ledPin = 2;       // IO2をLDEに使用

Ticker ticker;              // Tickerのインスタンス作成

void ledBlink() {
  int ledState = digitalRead(ledPin);   // LEDの状態を読み取り
  digitalWrite(ledPin, !ledState);      // LEDの状態を反転
}

void setup() {
  pinMode(ledPin, OUTPUT);         // IO2を出力に設定
  ticker.attach_ms(500, ledBlink); // 0.5秒おきに"ledBlink"関数の呼び出し
}

void loop() {
  // なし
}