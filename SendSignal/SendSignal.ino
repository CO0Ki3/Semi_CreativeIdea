#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3);

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("chech-!\n");
  BTSerial.println("cheack-!\n");
}

void loop() {
  while(BTSerial.available() && serial.available()) {
    char c = BTSerial.read();
    delay(5);
    }
    if(c == 'a') {
      BTSerial.println('a');
      c = '';
    }
}
