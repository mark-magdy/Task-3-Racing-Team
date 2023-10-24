#include <SPI.h>
#include "mcp2515_can.h"

#include <Servo.h>

Servo myservo;  
int potread =0; 

void setup() {
  Serial.begin(9600); // Start the serial communication with baud rate of 9600
  pinMode(5, INPUT_PULLUP); // Assuming the button is connected to pin 2
  myservo.attach(9);
}

void loop() {
  if (digitalRead(5)) {
  Serial.write ('1') ; 
  }else{
  Serial.write ('0') ; 
  }
  if (Serial.available()) {
    potread= Serial.read() ; 
    myservo.write(potread) ; 
  }
}