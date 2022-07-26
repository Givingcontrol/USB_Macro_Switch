#include "DigiKeyboard.h"
const int ledPin = 1; // Pin the RGB Led is connected to.
const int keyPin = 2; // Pin the switch/key is connected to.

int keyCode = KEY_A;
int keyCode_SpaceBar = KEY_SPACE;

void setup() {
pinMode(keyPin, INPUT_PULLUP);
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);
delay(1000);
digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);

}

void loop() {
DigiKeyboard.sendKeyStroke(0); // Fix for older systems
if(digitalRead(keyPin)==LOW){
DigiKeyboard.sendKeyStroke(KEY_SPACE);
/*  
  digitalWrite(ledPin, HIGH);
delay(500);
if(digitalRead(keyPin)==HIGH){
DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT );//windows desktop shortcut
delay(2000);digitalWrite(ledPin, LOW);}
else{DigiKeyboard.sendKeyStroke(KEY_L , MOD_GUI_LEFT);//windows lock shortcut
digitalWrite(ledPin, HIGH);delay(200);
digitalWrite(ledPin, LOW);delay(200);
digitalWrite(ledPin, HIGH);delay(200);
digitalWrite(ledPin, LOW);delay(200);
digitalWrite(ledPin, HIGH);delay(200);
digitalWrite(ledPin, LOW);delay(200);
digitalWrite(ledPin, HIGH);delay(200);
digitalWrite(ledPin, LOW);delay(200);
digitalWrite(ledPin, HIGH);delay(200);
digitalWrite(ledPin, LOW);delay(200);}
*/
}

}
