const int ledPin = 2;       // IO2をLDEに使用

void setup() {
  pinMode(ledPin, OUTPUT);  // IO2を出力に設定
}

void loop() {
  digitalWrite(ledPin, HIGH); // LEDをONにする
  delay(500);                 // 0.5秒待つ
  digitalWrite(ledPin, LOW);　// LEDをOFFにする
  delay(500);                 // 0.5秒待つ
}
