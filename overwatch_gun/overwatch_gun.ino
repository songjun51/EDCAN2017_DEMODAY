#include <Mouse.h>
#include <Keyboard.h>

int keyw = 8;
int keya = 9;
int keys = 10;
int keyd = 11;
void setup() {
  pinMode(keyw, INPUT_PULLUP);       
  pinMode(keya, INPUT_PULLUP);       
  pinMode(keys, INPUT_PULLUP);
  pinMode(keyd, INPUT_PULLUP);
  
  Serial.begin(9600);
//  Mouse.begin();
//  Keyboard.begin();
}

void loop() {
//   if (Serial.available() > 0) {
//    char inChar = Serial.read();
//   switch (inChar) {   
//    case 'u':
//      // 문자 'u'를 전송하면 마우스 포인터를 화면상의 0,-10 상대좌표만큼 이동합니다.
//      Mouse.move(0, -10);
//      break; 
//    case 'd':
//      // 문자 'd'를 전송하면 마우스 포인터를 화면상의 0,10 상대좌표만큼 이동합니다.
//      Mouse.move(0, 10);
//      break;
//    case 'l':
//     // 문자 'l'을 전송하면 마우스 포인터를 화면상의 -10,0 상대좌표만큼 이동합니다.
//      Mouse.move(-10, 0);
//      break;
//    case 'r':
//     // 문자 'r'을 전송하면 마우스 포인터를 화면상의 10,0 상대좌표만큼 이동합니다.   
//      Mouse.move(10, 0);
//      break;
//    case 'm':
//      // 문자 'm'을 전송하면 마우스 왼쪽클릭을 수행합니다.    
//      Mouse.click(MOUSE_LEFT);
//      break;
//    }
   
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





   
}
