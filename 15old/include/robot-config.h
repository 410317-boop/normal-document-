using namespace vex;

extern brain Brain;
extern motor left_front_motor;
extern motor left_back_motor;
extern motor left_middle_motor;
extern motor right_middle_motor;
extern motor right_front_motor;
extern motor right_back_motor;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
extern motor_group  right_chassis( right_front_motor, right_back_motor, right_middle_motor );
extern motor_group  left_chassis( left_front_motor, left_back_motor, left_middle_motor );