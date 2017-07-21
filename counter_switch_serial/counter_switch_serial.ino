/*
 * スイッチが押されたらカウンターを1ずつ増やす
 *  (ピンの状態が HIGH から LOW に変化したとき)
 *
 *  スイッチ | ピンの状態
 *     OFF  ->   HIGH
 *     ON   ->   LOW
 *
 *   IO14 --- タクトスイッチ
 */
const int swPin = 14;
int swPinState;
int swPinStatePrev = HIGH;     // 初期値は押されていないので HIGH に設定
int counter = 0;               // カウンターの値を0にセット

void setup() {
  Serial.begin(115200);
  Serial.println(counter);       // シリアルモニタにカウンターの値を表示
  pinMode(swPin, INPUT_PULLUP);  // IO14を入力ピンとして使う
}

void loop() {
  swPinState = digitalRead(swPin);      // スイッチの読み取り
  if (swPinState == LOW) {              // スイッチが押されたか
    if (swPinState != swPinStatePrev) { // 前回の状態から変化したか
      delay(100);                     // チャタリング防止
      counter++;                      // カウンターの値を1増やす
      Serial.println(counter);       // シリアルモニタにカウンターの値を表示
    }
  }
  swPinStatePrev = swPinState;       // 前回の状態を更新
}