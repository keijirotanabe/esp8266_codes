#include <Wire.h>     // I2Cライブラリの読み込み
#include <ST7032.h>   // 液晶用ライブラリの読み込み

ST7032 lcd(0x3E);     // スレーブアドレスを 0x3E に設定

const int swPin = 14;
int swPinState;
int swPinStatePrev = HIGH;     // 初期値は押されていないので HIGH に設定
int counter = 0;               // カウンターの値を0にセット

void setup() {
  lcd.begin(8, 2);            // lcd の使用宣言 (8x2)
  lcd.setContrast(30);        // コントラストの設定
  lcd.setCursor(0, 0);           // カーソルを1列目の1行目に移動
  lcd.print(counter);            // lcd にカウンタ値を表示
  pinMode(swPin, INPUT_PULLUP);  // IO14を入力ピンとして使う
}

void loop() {
  swPinState = digitalRead(swPin);      // スイッチの読み取り
  if (swPinState == LOW) {              // スイッチが押されたか
    if (swPinState != swPinStatePrev) { // 前回の状態から変化したか
      delay(200);                     // チャタリング防止
      counter++;                      // カウンタの値を1増やす
      lcd.clear();                    // lcd クリア
      lcd.setCursor(0, 0);            // カーソルを1列目の1行目に移動
      lcd.print(counter);             // lcd にカウンタ値を表示
    }
  }
  swPinStatePrev = swPinState;       // 前回の状態を更新
}