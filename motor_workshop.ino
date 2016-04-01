#include <Stepper.h>

#define BUTTON_PIN 4

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
int buttonState = 0;

void setup() { // WILL RUN ONCE
  pinMode(BUTTON_PIN, INPUT);
  motor.setSpeed(900);
}

void loop() { // WILL RUN OVER AND OVER AND OVER
  buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    motor.step(10);
  }
}
