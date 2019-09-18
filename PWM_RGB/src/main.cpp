#include <Arduino.h>


#define PIN_RGB1_Red           D8  
#define PIN_RGB1_Green         D6  
#define PIN_RGB1_Blue          D7 

const int MIN_ANALOG_VALUE = 0;
const int MAX_ANALOG_VALUE = 1023;

void PwmCycle(int pin);

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_RGB1_Red, OUTPUT);
  pinMode(PIN_RGB1_Green, OUTPUT);
  pinMode(PIN_RGB1_Blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PwmCycle(PIN_RGB1_Red);
  PwmCycle(PIN_RGB1_Green);
  PwmCycle(PIN_RGB1_Blue);
}

void PwmCycle(int pin){
  for (short i = MIN_ANALOG_VALUE; i < MAX_ANALOG_VALUE; i++)
  {
    analogWrite(pin, i);
    delay(1);
  }
  for (short i = MAX_ANALOG_VALUE; i > MIN_ANALOG_VALUE; i--)
  {
    analogWrite(pin, i);
    delay(1);
  }
}