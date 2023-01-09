// todo main comment

// Pin to which servo is connected
#define SERVO_PIN 9 

// Servo period is 20 miliseconds or 20'000 microseconds
#define SERVO_PERIOD 20000

// Constants for transforming angle to microseconds 
#define FromLow  0
#define FromHigh 180
#define ToLow    400
#define ToHigh   2200

void setup() {
  // Set servo pin as output
  pinMode(SERVO_PIN, OUTPUT);

}

void loop() {
  /**********************************************

  !!! Secondary assignment, firstly implement function set_servo_angle() and after that implement this part

  Your assignment make servo rotate form one side to another

  1. You need to crate 2 for() loops 
      - First for loop to go from 0 to 180
      - Second one to go from 180 to 0
      - Make increments of 1 degree per step
      - For each step in loops pass the value into set_servo_angle() function
        
  Write your code below this line
  **********************************************/

  // Set servo on given pin to 90 degrees
  set_servo_angle(SERVO_PIN, 90);

}


// Set servo angle on given pin using PWM
void set_servo_angle(int pin, int angle){

  /**********************************************

  Your assignment is to implement PWM to control servo

  1. You need to transform given angle into miliseconds
      - Angle range is <0, 180> 
      - Miliseconds range should be <1000, 2000>
      - Use map() function: 
          result = map(angle, fromLow, fromHigh, toLow, toHigh) 

          angle:    the number to map.
          fromLow:  the lower bound of the angle’s current range.
          fromHigh: the upper bound of the angle’s current range.
          toLow:    the lower bound of the angle’s target range.
          toHigh:   the upper bound of the angle’s target range.
  
  2. After transformation you need to generate PWM signal
      - Use fucntions digitalWrite(pin, LOW/HIGH) and delayMicroseconds()
      - Set pin into Logic 1 [HIGH] for time that you calculated in previous step
      - Set pin into Logic 0 [LOW] for time that is equal to  SERVO_PERIOD - result 

        
  Write your code below this line
  **********************************************/





  // Do not edit code under this line
  /******************************************************************/
  delay(10);  
}
