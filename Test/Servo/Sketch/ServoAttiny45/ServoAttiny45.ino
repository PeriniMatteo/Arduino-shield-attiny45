//Sketch da usare SOLO con Arduino IDE 1.0.5
//La libreria Servo8Bit PER ARDUINO è scaricabile qui:
//http://www.cunningturtle.com/wordpress/wp-content/uploads/2011/11/servo8bit_arduino_example.zip


#include "Servo8Bit.h"

int but = A3;

Servo8Bit myServo;

void setup() {     
  myServo.attach(4,544,2200);  
  pinMode(but, INPUT);  
}

void loop() {
  int val=analogRead(but);
  if (val>500){
  myServo.write(180); 
  }else{
  myServo.write(0); 
  }
  delay(50);      
}
