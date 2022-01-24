#include <controller_setup.h>

namespace controls{

  void axis1(){
    for (int i = 0; i <= MOTORS; i++) {
      if(ControllerPorts[i].cont_id == "1"){
        ControllerPorts[i].port_id.setVelocity(MasterController.Axis1.position(percent), percent);
        ControllerPorts[i].port_id.spin(forward);
      }
    }
      
  }

  void axis2(){
    for (int i = 0; i <= MOTORS; i++) {
      if(ControllerPorts[i].cont_id == "2"){
        ControllerPorts[i].port_id.setVelocity(MasterController.Axis2.position(percent), percent);
      }
    }
  }

  void axis3(){
    for (int i = 0; i <= MOTORS; i++) {
      if(ControllerPorts[i].cont_id == "3"){
        ControllerPorts[i].port_id.setVelocity(MasterController.Axis3.position(percent), percent);
      }
    }    
  }

  void axis4(){
    for (int i = 0; i <= MOTORS; i++) {
      if(ControllerPorts[i].cont_id == "4"){
        ControllerPorts[i].port_id.setVelocity(MasterController.Axis3.position(percent), percent);
      }
    }    
  }

  namespace upward{

    void buttonA(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "a"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonB(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "b"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }

    void buttonX(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "x"){
          ControllerPorts[i].port_id.stop();
        }
      }  
    }

    void buttonY(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "y"){
          ControllerPorts[i].port_id.stop();
        }
      }     
    }

    void buttonUp(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "up"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonDown(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "dw"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonLeft(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "le"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonRight(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "ri"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }

    void buttonTL(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "l1"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonBL(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "l2"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonTR(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "r1"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
    void buttonBR(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "r2"){
          ControllerPorts[i].port_id.stop();
        }
      } 
    }
  }

  namespace downward{
    void buttonA(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "a"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      } 
    }
    void buttonB(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "b"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      }
    }

    void buttonX(){

      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "x"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      }  
    }

    void buttonY(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "y"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);

        }
      }   
    }

    void buttonUp(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "up"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);        
        }
      } 
    }
    void buttonDown(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "dw"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);        
        }
      } 
    }
    void buttonLeft(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "le"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      } 
    }
    void buttonRight(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "ri"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      } 
    }

    void buttonTL(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "ll"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
        }
      } 
    }
    void buttonBL(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "l2"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
                    
        }
      } 
    }
    void buttonTR(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "r1"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
                    
          
        }
      } 
    }
    void buttonBR(){
      for (int i = 0; i <= MOTORS; i++) {
        if(ControllerPorts[i].cont_id == "r2"){
          ControllerPorts[i].port_id.setVelocity(ControllerPorts[i].max_vel, percent);
          ControllerPorts[i].port_id.spin(forward);
                    
        }
      } 
    }

  }
}
