 // Include the AccelStepper library:
#include <AccelStepper.h>
// Define the AccelStepper interface type:
#define MotorInterfaceType 4
// Create a new instance of the AccelStepper class:
AccelStepper stepper = AccelStepper(MotorInterfaceType, 8, 9, 10, 11);
void setup() {
  // Set the maximum steps per second:
  stepper.setMaxSpeed(200);
  // Set the maximum acceleration in steps per second^2:
  stepper.setAcceleration(50);
}
void loop() {
  // Set target position:
  stepper.moveTo(1000);
  // Run to position with set speed and acceleration:
  stepper.runToPosition();
  delay(1000);
  // Move back to original position:
  stepper.moveTo(0);
  // Run to position with set speed and acceleration:
  stepper.runToPosition();
  delay(1000);
}
