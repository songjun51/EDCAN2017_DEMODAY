#include <Mouse.h>
#include <Keyboard.h>
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(8, 9); // RX, TX
int keyw = 10;
int keya = 11;
int keys = 12;
int keyd = 13;
void setup() {
  pinMode(keyw, INPUT_PULLUP);       
  pinMode(keya, INPUT_PULLUP);       
  pinMode(keys, INPUT_PULLUP);
  pinMode(keyd, INPUT_PULLUP);
  
  Serial.begin(9600);
  BTSerial.begin(9600);
//  Mouse.begin();
//  Keyboard.begin();
}

void loop() {
     if (digitalRead(keyw) == LOW) {
    Keyboard.write('w'); 
    delay(10);
  }
  if (digitalRead(keya) == LOW) {
    Keyboard.write('a'); 
    delay(10);
  }
  if (digitalRead(keys) == LOW) {
    Keyboard.write('s'); 
    delay(10);
  }
  if (digitalRead(keyd) == LOW) {
    Keyboard.write('d'); 
    delay(10);

    
  }
  if (BTSerial.read()=='r') {
    Keyboard.write('r'); 
    Serial.println('r');
    delay(10);
  }
  if (BTSerial.read()=='s') {
    Mouse.click(MOUSE_LEFT);
    delay(10);
  }
  if (BTSerial.read()=='h') {
   Mouse.click(MOUSE_RIGHT);
    delay(10);
  }
}
