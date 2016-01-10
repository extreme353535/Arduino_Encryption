/* this project is designed by Tuna & Elif*/
/* Date 10.01.2016 */
 
char* alphabet[26] = { 
'a',
'b',
'c',
'd',
'e',
'f',
'g',
'h',
'i',
'j',
'k',
'l',
'm',
'n',
'o',
'p',
'q',
'r',
's',
't',
'u',
'v',
'w',
'x',
'y',
'z' 
};
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int i=0;i<=26;i++)
    {
      serial.println(alphabet[i]);
      delay(100);
    }
  
}
