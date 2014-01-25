// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.




#include "Claw.h"
#include "../Robotmap.h"
#include "../Robot.h"

Claw::Claw() : Subsystem("Claw") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	triggerSol1 = RobotMap::clawtriggerSol1;
	triggerSol2 = RobotMap::clawtriggerSol2;
	ballSwitch = RobotMap::clawballSwitch;
	shooterSol1 = RobotMap::clawshooterSol1;
	shooterSol2 = RobotMap::clawshooterSol2;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	pot1 = RobotMap::clawPot1;
	lifter = RobotMap::clawlifter;
}
    
void Claw::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Claw::fire()
{
	Robot::arm->lifter1->Set(.1); 				//Lifts the Arm up
	Robot::claw->triggerSol1->Set(true);		//Pull in Trigger
	Robot::claw->triggerSol2->Set(false);		//Pull in Trigger
	Robot::claw->shooterSol1->Set(false);		//No Pressure to Shooter Solenoids
	while(!Robot::claw->ballSwitch->Get() || !Robot::oi->getjoythumb1()->Get())
	{
		//Waiting until microswitch is hit
		//or until loop is exited by pressing button
	}
	Robot::claw->triggerSol1->Set(false);		//Push out Trigger
	Robot::claw->triggerSol2->Set(true);		//Push out Trigger
	Robot::claw->shooterSol1->Set(true);		//Pressurize Shooter Solenoids
	
	//todo Test this Function-most likely won't work
	
}



