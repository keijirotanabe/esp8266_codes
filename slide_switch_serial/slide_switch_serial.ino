/*
 * スライドスイッチの状態をシリアルモニタに表示する
 *      (IO12の状態をシリアルモニタに表示する)
 *
 * スライドスイッチ | ピンの状態
 *          OFF  ->   LOW
 *          ON   ->   HIGH
 * 配線
 *   IO12 --- スライドスイッチ
 */
const int slideSwPin = 12;

void setup() {
  Serial.begin(115200);        // シリアル通信を115200bpsで使用
  pinMode(slideSwPin, INPUT);  // IO12を入力ピンとして使う
}

void loop() {
  int slideSwState = digitalRead(slideSwPin);  // スライドスイッチの状態読み取り
  Serial.println(slideSwState);                // シリアルモニタにスライドスイッチの状態を表示
  delay(100);　　　　　　　　　　　　　　　　　　 // 100ms待つ
}