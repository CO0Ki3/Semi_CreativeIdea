#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);
String BTString="";
 
void setup() {
  Serial.begin(9600); 
  BTSerial.begin(9600);
 
}
 
void loop() {
  while(BTSerial.available()){
    char BTChar = (char)BTSerial.read();
    BTString+=BTChar;
    delay(5);
  }
  if(!BTString.equals("")) {
    if(BTString == "a") {
      BTSerial.println("asdf");
    }
    Serial.println(BTString);
    BTString="";
  }
}
