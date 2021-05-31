// Include the AccelStepper library:
#include <AccelStepper.h>
// Define the AccelStepper interface type:
#define MotorInterfaceType 4
// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(MotorInterfaceType, 8, 9, 10, 11);
void setup() {
  // Set the maximum steps per second:
  stepper.setMaxSpeed(1000);
}
void loop() {
  // Set the current position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor forward at 200 steps/second until the motor reaches 400 steps (2 revolutions):
  while (stepper.currentPosition() != 400)  {
    stepper.setSpeed(200);
    stepper.runSpeed();
  }
  delay(1000);
  // Reset the position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor backwards at 600 steps/second until the motor reaches -200 steps (1 revolution):
  while (stepper.currentPosition() != -200)   {
    stepper.setSpeed(-600);
    stepper.runSpeed();
  }
  delay(1000);
  // Reset the position to 0:
  stepper.setCurrentPosition(0);
  // Run the motor forward at 400 steps/second until the motor reaches 600 steps (3 revolutions):
  while (stepper.currentPosition() != 600)  {
    stepper.setSpeed(400);
    stepper.runSpeed();
  }
  delay(3000);
}
