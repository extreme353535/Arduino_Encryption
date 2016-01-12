String stringOne = "123456789";
char charBuf[50];
stringOne.toCharArray(charBuf, 50) ;
Serial.println(stringOne);
for (int i = 0; i < 9; i++) {
  Serial.print(" 0x");
  Serial.print(charBuf[i], HEX);
}
Serial.println();
