/*
 * LEDを徐々に明るくする
 *
 * 配線
 *    IO2  --- LED
 */
const int ledPin = 2;

void setup() {

}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(ledPin, i);    // i の値を 0 -> 255 まで増加
    delay(5);                  // 0.005秒待つ
  }
  delay(1000);                 // 1秒待つ
}