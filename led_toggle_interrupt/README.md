# プッシュスイッチが押されたらLEDのON、OFFを切り替える

外部割り込み使用版

# "attachInterrupt"関数を使用します

`attachInterrupt(pin, function, mode)`

1. pin
    - 使用するピン
2. function
    - 呼ばれる関数
3. mode
    - 割り込みが発生する条件

### pin

**使用可能なIOピン**

0, 1, 2, 3, 4, 5, 12, 13, 14, 15

### function

割り込みが入ったときに呼ばれる関数を渡します

### mode

- LOW
    - ピンがLOWのとき
- CHANGE
    - ピンの状態が変化したとき
- RISING
    - ピンの状態がLOWからHIGHに変化したとき
- FALLING
    - ピンの状態がHIGHからLOWに変化したとき