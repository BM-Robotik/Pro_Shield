#include "Arduino.h"
#include "ProShield.h"

void ProShield::GreenLED(bool g_data){
  pinMode(13, OUTPUT);
  digitalWrite(13, g_data); 
}
void ProShield::RedLED(bool r_data){
  pinMode(12, OUTPUT);
  digitalWrite(12, r_data); 
}
void ProShield::BlueLED(bool b_data){
  pinMode(11, OUTPUT);
  digitalWrite(11, b_data); 
}
void ProShield::YellowLED(bool y_data){
  pinMode(10, OUTPUT);
  digitalWrite(10, y_data); 
}
void ProShield::wait(int dly){
  delay(dly);
}
void ProShield::ToneBuzzer(int frequency){
  tone(9, frequency);
}
void ProShield::ToneBuzzer(int frequency, int duration){
  tone(9, frequency, duration);
}
void ProShield::NoToneBuzzer(){
  noTone(9);
}
int ProShield::ReadButton(){
  int buttonread=analogRead(A4);
  return buttonread;
}
int ProShield::ReadButtonDigital(){
  int buttonreaddigital=digitalRead(A4);
  return buttonreaddigital;
}
int ProShield::ReadLDR(){
  int ldrread=analogRead(A0);
  return ldrread;
}
