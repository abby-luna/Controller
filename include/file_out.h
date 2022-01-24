#include <controller_setup.h>
#include <sstream>
#include <fstream>
#include <vector>

std::string to_string(double num){

  std::ostringstream strs;
  strs << num;
  return strs.str();

}
void log(){

  std::string f_line = ""; 

  for(int i = 0; i <= MOTORS; i++){

    std::string DoubleVal = to_string(ControllerPorts[i].port_id.velocity(vex::percent));
    f_line += DoubleVal + " ";
  }
  f_line += "\n";

  std::vector<uint8_t> vec(f_line.begin(), f_line.end());
  uint8_t *p = &vec[0];

  int nWritten = Brain.SDcard.savefile( "test.txt", p, sizeof(p) );
  // Brain.SDcard.

}    

  