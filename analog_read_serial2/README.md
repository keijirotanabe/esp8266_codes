# アナログ入力値のちらつきを減した改良版

```
- analogVal = analogRead(A0);
+ analogVal = analogVal * 0.8 + analogRead(A0) * 0.2;
```

# アナログ入力の値を読み取って、シリアルモニタに表示する

0V ~ 1V の電圧を読み取って 0 ~ 1023 に変換する  
「`analogRead(A0)`」で読み取り  
配線
 * TOUT --- 可変抵抗