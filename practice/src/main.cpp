
#include "vex.h"

using namespace vex;

controller ctrl; 
motor f_right(PORT10,true);
motor b_right(PORT20,true);
motor f_left(PORT3);
motor b_left(PORT12);
motor_group c_left(f_left,b_left);
motor_group c_right(f_right,b_right);


int main() {

while(true){  
  c_left.spin(directionType::fwd,ctrl.Axis3.value(),velocityUnits::pct);
  c_right.spin(directionType::fwd,ctrl.Axis2.value(),velocityUnits::pct);
  task::sleep(20);
}
}
//shiori is really really dumb!!!!! 
//Sarang is smartttt!!!
