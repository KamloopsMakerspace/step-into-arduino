#include <Stepper.h>

// THIS IS STEPS PER REVOLUTION BEFORE GEARS
#define STEPS_PER_REVOLUTION_INTERNAL 32

// GEAR RATIO IS 1:64, SO 32 * 64 = 2048
#define STEPS_PER_REVOLUTION 32 * 64

// INSTANCE OF THE LIBRARY CLASS!
// PARAMETERS: steps/rev, pin 1, pin 2, pin 3, pin 4
Stepper motor(STEPS_PER_REVOLUTION_INTERNAL, 8, 10, 9, 11);

/* IT IS A GOOD PRACTICE TO DECLARE ESSENTIAL VARIABLES AS GLOBALS 
   FOR ARDUINO, THIS HELPS TO AVOID OUT OF MEMORY CONDITIONS */
int steps;

void setup() { // WILL RUN ONCE
  motor.setSpeed(900);
}

void loop() { // WILL RUN OVER AND OVER AND OVER
  motor.step(STEPS_PER_REVOLUTION / 2);
  delay(1000);
  motor.step(-STEPS_PER_REVOLUTION / 2);
  delay(1000);
}
