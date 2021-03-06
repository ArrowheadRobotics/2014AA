// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* joyPad;
	JoystickButton* armBtn2;
	JoystickButton* armBtn1;
	JoystickButton* rollerBtn3;
	JoystickButton* rollerBtn2;
	JoystickButton* rollerBtn1;
	Joystick* joy2;
	JoystickButton* joy2Trigger;
	Joystick* joy1;
	JoystickButton* joy1Trigger;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	JoystickButton* joy1Thumb;
	JoystickButton* joy2Thumb;
	JoystickButton* joy1Thumb3;
	JoystickButton* joyPadY;
	JoystickButton* joyPadA;
	JoystickButton* joyPad7;
	JoystickButton* joyPad8;
	JoystickButton* joyPad9;
	JoystickButton* joy2btn2;	
	JoystickButton* joyPad12;	
	
public:
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	Joystick* getjoy1();
	Joystick* getjoy2();
	Joystick* getjoyPad();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	JoystickButton* getjoy1Trigger();
	JoystickButton* getrollerBtn1();
	JoystickButton* getrollerBtn2();
	JoystickButton* getrollerBtn3();
	JoystickButton* getarmBtn1();
	JoystickButton* getarmBtn2();
	JoystickButton* getjoythumb1();
	JoystickButton* getjoythumb2();
	JoystickButton* getjoythumb3();
	JoystickButton* getjoyPadY();
	JoystickButton* getjoyPadA();
	
};

#endif
