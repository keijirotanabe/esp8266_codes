# EEPROMへの書き込み

EEPROMの0番地から順に「Hello, ESP8266!」の文字列を書き込みます。

書き込んだ文字列は[eeprom_read_msg](./eeprom_read_msg)で読み込めます。

また、EEPROMのメモリをクリアするには[eeprom_clear](./eeprom_clear)を使用してください