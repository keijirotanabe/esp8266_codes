/*
 * スライドスイッチでLEDの点灯状態を切り替える
 *
 * スライドスイッチ | IO2の状態
 *          OFF  ->   LOW
 *          ON   ->   HIGH
 *
 *      IO12  |  IO2
 *      HIGH -> HIGH
 *      LOW  ->  LOW
 * 配線
 *   IO2  --- LED
 *   IO12 --- スライドスイッチ
 */
const int ledPin = 2;
const int slideSwPin = 12;

void setup() {
  Serial.begin(115200);        // シリアル通信を115200bpsで使用
  pinMode(ledPin, OUTPUT);     // IO2を出力ピンとして使う
  pinMode(slideSwPin, INPUT);  // IO12を入力ピンとして使う
}

void loop() {
    int slideSwState = digitalRead(slideSwPin);  // スライドスイッチの状態読み取り
    if (slideSwState == HIGH) {
        digitalWrite(ledPin, HIGH);  // LDEをON
    } else {
        digitalWrite(ledPin, LOW);   // LDEをOFF
    }
}