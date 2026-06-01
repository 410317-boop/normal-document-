#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
motor left_front_motor(PORT1, ratio36_1, false);
motor left_back_motor(PORT2, ratio36_1, false);
motor left_middle_motor(PORT3, ratio36_1, false); 
motor right_middle_motor(PORT4, ratio36_1, true);
motor right_front_motor(PORT5, ratio36_1, true);
motor right_back_motor(PORT6, ratio36_1, true);
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}