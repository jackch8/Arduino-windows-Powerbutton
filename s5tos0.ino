
#include "Keyboard.h"
#include "Mouse.h"

// set pin numbers for the five buttons:
const int R1 = 2;
const int R2 = 3;
const int R3 = 4;
const int R4 = 5;
const int R5 = 6;

void setup() {  // initialize the buttons' inputs:
  pinMode(R1, INPUT);
  pinMode(R2, INPUT);
  pinMode(R3, INPUT);
  pinMode(R4, INPUT);
  pinMode(R5, INPUT);

  Serial.begin(9600);
  // initialize mouse control:
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  // use serial input to control the mouse:


  // use the pushbuttons to control the keyboard:
  if (digitalRead(R1) == HIGH) {  //S5
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('x');
    delay(50);
    Keyboard.releaseAll();
    delay(50);
    Keyboard.write('u');
    delay(50);
    Keyboard.write('u');
  }
  if (digitalRead(R2) == HIGH)     {  //S4
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('x');
      delay(50);
      Keyboard.releaseAll();
      delay(50);
      Keyboard.write('u');
      delay(50);
      Keyboard.write('h');
    }
    if (digitalRead(R3) == HIGH) {  //S3
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('x');
      delay(50);
      Keyboard.releaseAll();
      delay(50);
      Keyboard.write('u');
      delay(50);
      Keyboard.write('s');
    }
    if (digitalRead(R4) == HIGH) {  //RST
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('x');
      delay(50);
      Keyboard.releaseAll();
      delay(50);
      Keyboard.write('u');
      delay(50);
      Keyboard.write('r');
    }
    if (digitalRead(R5) == HIGH) {
      Keyboard.press(KEY_RETURN);
      delay(50);
      Keyboard.releaseAll();
    }
}
