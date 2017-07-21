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

void setup() {
  pinMode(ledPin, OUTPUT);       // IO2を出力ピンに設定
  pinMode(swPin, INPUT_PULLUP);  // IO14を入力ピンに設定
  attachInterrupt(swPin, onPushed, FALLING);  // 外部割込みの設定
}

void loop() {

}

void onPushed() {
  int ledState = digitalRead(ledPin);  // LEDの状態を読み取り
  digitalWrite(ledPin, !ledState);     // LEDの状態を反転させる
}