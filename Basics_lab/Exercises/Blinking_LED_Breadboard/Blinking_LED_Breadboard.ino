// Filename: Blinking_LED_Breadboard.ino
// Author: Adam Fabo
// Last edit: 24.4.2023
// License: Feel free to use this code in any way, shape or form
// University: FIT, BUT, Brno, Czech republic
// This file is a part of authors bachelors thesis
// Description: File contains code that controls LED connected to PIN 2

// Pin to which you connect the LED
#define LED_PIN 2

// Set how long will be LED on in miliseconds
#define TIME_ON 1000

// Set how long will be LED off in milisecond
#define TIME_OFF 1000


// The setup function runs once when you press reset or power the board
void setup() {
  // Initialize digital pin that you defined as an output.
  pinMode(LED_PIN, OUTPUT);
}



// The loop function runs over and over again forever
void loop() {

  
  digitalWrite(LED_PIN, HIGH);   // Turn the LED ON  (HIGH is the voltage level [+5 Volts])
  delay(TIME_ON);                // Wait for a given time
  digitalWrite(LED_PIN, LOW);    // Turn the LED OFF (LOW is the voltage level [0 Volts])
  delay(TIME_OFF);               // Wait for a given time
}
