/*
This is intented to be a user editable file, this allows the programmer to chose several fields in relation to 
the vex motors

It allows the user to do 2 things,

1. Bind a part of the controller to a spefic vex prot as shown in the port struct array
2. Control the maxium velocity of the port in terms of a "percentage" value

The maximum power mode is 127, and the minimum is -127 respectfully, 
Note, negitve values cuase a dirrection change in the motor
*/

#ifndef ControllerPorts_H  
#define ControllerPorts_H 

#include <port.h>
#include <string>


#define MOTORS 7

port ControllerPorts[MOTORS] = {
  {
    vex::motor(PORT7),
    "x",
    30
  },{
    vex::motor(PORT7, true),
    "b",
    30
  },{
    vex::motor(PORT1),
    "1",
    127
  },{
    vex::motor(PORT2),
    "1",
    127
  },{
    vex::motor(PORT9),
    "2",
    127
  },{
    vex::motor(PORT10),
    "2",
    127
  },{
    vex::motor(PORT10),
    "r1",
    127
  }
};

#endif