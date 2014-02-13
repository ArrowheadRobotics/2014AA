// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static SpeedController* driveLeftDrive;
	static SpeedController* driveRightDrive;
	static RobotDrive* drivedriveTrain;
	static Encoder* driveenLeft;
	static Encoder* driveenRight;
	static Solenoid* driveswitchSol1;
	static Solenoid* driveswitchSol2;
	static Solenoid* clawtriggerSol1;
	static Solenoid* clawtriggerSol2;
	static DigitalInput* clawballSwitch;
	static DigitalInput* clawballinSwitch;
	static Solenoid* clawshooterSol1;
	static Solenoid* clawshooterSol2;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Relay* armrollerrelay1;
	static Compressor* compressor;
	static AnalogChannel* clawPot1;
	static SpeedController* clawLifter;
	static Solenoid* armSol1;
	static Solenoid* armSol2;


	static void init();
};
#endif
