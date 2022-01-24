#ifndef port_H              
#define port_H 

#include "vex.h"

/*
This includes the structure that helps us to easily define vex ports
*/

struct port{

  vex::motor port_id;
  std::string cont_id;
  int max_vel;

};

#endif