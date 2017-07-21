void setup() {
  Serial.begin(115200);   // シリアル通信を115200bpsで使用
}

void loop() {
  Serial.println("Hello, ESP8266"); // シリアルモニタに「Hello, ESP8266」を表示
  delay(1000);                      // 1秒待つ
}

