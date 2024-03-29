// Filename: PWM_proper_method.ino
// Author: Adam Fabo
// Last edit: 24.4.2023
// License: Feel free to use this code in any way, shape or form
// University: FIT, BUT, Brno, Czech republic
// This file is a part of authors bachelors thesis
// Description: File contains code that controls LED using proper method


// Pin to which you connect the LED
#define LED_PIN 2

void setup() {

  // Set pin where LED is connected as output
  pinMode(LED_PIN, OUTPUT);
}



void loop() {
/**********************************************

  analogWrite(pin, value) uses PWM wave to deliver different ammounts of energy, 
                          therefore light brightness can be controlled this way
                          
  pin - pin to which is LED connected
  value - is from range <0, 255> where 0 means 0% ON and 255 means 100% ON
  
  Try and change brightness value to 0, 1, 5, 10, 50, 100, 255

**********************************************/
  

  int brightness = 10;
  
  analogWrite(LED_PIN, brightness);
  
}
