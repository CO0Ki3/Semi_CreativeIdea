#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);
String BTString="";
int led = 4;

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
      digitalWrite(led, HIGH);
    }
    if(BTSerial == "b") {
      digitalWrite(led, LOW);
    }
    Serial.println(BTString);
    BTString="";
  }
}
