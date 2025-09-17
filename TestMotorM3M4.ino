#include "AFMotor.h"

AF_Stepper Stepper1(20,2); // #2  M3,M4    
void setup() {

  Stepper1.setSpeed(255);

}

void loop() 
{

  Stepper1.step(200, FORWARD,MICROSTEP);
  delay(1000);

  Stepper1.step(200,BACKWARD,MICROSTEP);
  delay(1000);

}
