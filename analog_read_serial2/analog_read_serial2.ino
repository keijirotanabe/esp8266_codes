/*
 * アナログ入力の値を読み取って、シリアルモニタに表示する
 *
 * 0V ~ 1V の電圧を読み取って 0 ~ 1023 に変換する
 *  「 analogRead(A0) 」で読み取り
 *
 * 配線
 *   TOUT --- 可変抵抗
 */
int analogVal = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  analogVal = analogVal * 0.8 + analogRead(A0) * 0.2;  // AD変換
  Serial.println(analogVal);      // アナログ入力から読み取った値をシリアルモニタに表示
  delay(10);                     // 0.01秒待つ
}