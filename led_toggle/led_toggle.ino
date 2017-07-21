/*
 * プッシュスイッチが押されたらにLEDのON、OFFを切り替える
 *  (ピンの状態が HIGH から LOW に変化したとき、LEDのON、OFFを切り替える)
 *
 *  スイッチ | ピンの状態
 *     OFF  ->   HIGH
 *     ON   ->   LOW
 *
 *   IO2  --- LED
 *   IO14 --- タクトスイッチ
 */
const int ledPin = 2;
const int swPin = 14;
int ledState = LOW;      // LEDの状態を保持、起動時は消灯しているので初期値を LOW に設定
int swState;             // スイッチの読み取った値を保持
int swStatePrev = HIGH;  // スイッチの読み取った前回の値を保持、初期値は HIGH に設定

void setup() {
  pinMode(ledPin, OUTPUT);       // IO2を出力ピンに設定
  pinMode(swPin, INPUT_PULLUP);  // IO14を入力ピンに設定
}

void loop() {
  swState = digitalRead(swPin);      // スイッチの読み取り
  if (swState == LOW) {              // スイッチが押されたか
    if (swState != swStatePrev) {    // 前回の状態から変化したか
      delay(100);                    // チャタリング防止
      ledState = !ledState;          // LEDの状態を反転
      digitalWrite(ledPin, ledState);// LEDの状態を反映
    }
  }
  swStatePrev = swState;       // 前回の状態を更新
}