// Filename: Stepper_custom.ino
// Author: Adam Fabo
// Last edit: 24.4.2023
// License: Feel free to use this code in any way, shape or form
// University: FIT, BUT, Brno, Czech republic
// This file is a part of authors bachelors thesis
// Description: File contains unfinished code that controls stepper motor using custom implementation


// Pins for the stepper motor IN1-4 is for ULN2003 Stepper Motor Driver
#define STEPPER_1 11      // IN1  
#define STEPPER_2 10      // IN2
#define STEPPER_3 9       // IN3
#define STEPPER_4 8       // IN4

// Delay between every step
// After implementation change this number to ~200 to see blinkind leds at the motor driver
#define STEPPER_DELAY 2

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;


// Sets output pins for desired value
//                   coil 1       coil 2       coil 3       coil 4 
void stepper_set(int value_1, int value_2, int value_3, int value_4) {
  /**********************************************

  Implement setting values to the output pins of Arduino

  1. Set given values to the coils of the stepper motor
      - Set all 4 values
      - Use digitalWrite(pin,value) function
        
  Write your code below this line
  **********************************************/



}


void make_step(int step_number){
  /**********************************************

  Implement setting the right value per given step

  1. Compare variable step_number to numbers 1-4 and based on that do step
      - Set all 4 values using function stepper_set()
      - Go by following table
      
      step_number  |  output combination
      -------------+--------------
          1        |  1 0 0 0
          2        |  0 1 0 0 
          3        |  0 0 1 0 
          4        |  0 0 0 1


      
  OPTIONAL TASK:
    Change the output combination to the following: 

      step_number  |  output combination
      -------------+--------------
          1        |  1 1 0 0
          2        |  0 1 1 0 
          3        |  0 0 1 1 
          4        |  1 0 0 1

    Does the motor behave differently? 
    What is the difference?


  Write your code below this line
  **********************************************/




}




  // Do not edit code under this line
  /******************************************************************/


// Rotate counter-clockwise
void rotate_left(int steps){
  for (int i = 0; i < steps; i++){
    make_step(i%4);                   // Modulo operation for choosing one of 4 steps
    delay(STEPPER_DELAY);             // Delay to let the motor "catch up" with the changed magnetic field
  }  
}

// Rotate clockwise
void rotate_right(int steps){
  for (int i = steps; i >= 0 ; i--){
    make_step(i%4);                   // Modulo operation for choosing one of 4 steps
    delay(STEPPER_DELAY);             // Delay to let the motor "catch up" with the changed magnetic field
  }
  
}

void setup() {
  // Set up pins as outputs
  pinMode(STEPPER_1, OUTPUT);
  pinMode(STEPPER_2, OUTPUT);
  pinMode(STEPPER_3, OUTPUT);
  pinMode(STEPPER_4, OUTPUT);

}

void loop() {

  rotate_left(stepsPerRevolution);   // Rotate one revolution to the left
  delay(1000);                       // Small delay to see the motor stop

  rotate_right(stepsPerRevolution);  // Rotate one revolution to the right
  delay(1000);                       // Small delay to see the motor stop

}












