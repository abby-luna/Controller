#ifndef new_controller_H  
#define new_controller_H 

#include <button_output.h>
#include <file_out.h>

namespace new_controller{
  void bind(){
    // pressing A B X Y
    MasterController.ButtonA.pressed(controls::downward::buttonA);
    MasterController.ButtonB.pressed(controls::downward::buttonB);
    MasterController.ButtonY.pressed(controls::downward::buttonY);
    MasterController.ButtonX.pressed(controls::downward::buttonX);

    // realeasing A B X Y 
    MasterController.ButtonA.released(controls::upward::buttonA);
    MasterController.ButtonB.released(controls::upward::buttonB);
    MasterController.ButtonY.released(controls::upward::buttonY);
    MasterController.ButtonX.released(controls::upward::buttonX);

    // pressing L1, L2
    MasterController.ButtonL1.pressed(controls::downward::buttonTL);
    MasterController.ButtonL2.pressed(controls::downward::buttonBL);

    // realeasing L1, L2
    MasterController.ButtonL1.released(controls::upward::buttonTL);
    MasterController.ButtonL2.released(controls::upward::buttonBL);

    // pressing R1, R2
    MasterController.ButtonR1.pressed(controls::downward::buttonTR);
    MasterController.ButtonR2.pressed(controls::downward::buttonBR);

    // realeasing R1, R2
    MasterController.ButtonR1.released(controls::upward::buttonTR);
    MasterController.ButtonR2.released(controls::upward::buttonBR);

    // pressing up, down, left, right 
    MasterController.ButtonUp.pressed(controls::downward::buttonUp);
    MasterController.ButtonDown.pressed(controls::downward::buttonDown);
    MasterController.ButtonLeft.pressed(controls::downward::buttonRight);
    MasterController.ButtonRight.pressed(controls::downward::buttonLeft);

    // realeasing up, down, left, right 
    MasterController.ButtonUp.released(controls::upward::buttonUp);
    MasterController.ButtonDown.released(controls::upward::buttonDown);
    MasterController.ButtonLeft.released(controls::upward::buttonLeft);
    MasterController.ButtonRight.released(controls::upward::buttonRight);

    // axis changes
    while (1) {
      controls::axis1();
      controls::axis2(); 
      controls::axis3();
      controls::axis4(); 

      log();
      wait(.001, seconds);

    }
  }
}

#endif