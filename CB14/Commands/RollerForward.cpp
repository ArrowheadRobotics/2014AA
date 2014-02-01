// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RollerForward.h"
#include "../Robot.h"
#include "../Subsystems/Arm.h"


RollerForward::RollerForward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void RollerForward::Initialize() {
	Robot::arm->roll1->Set(Relay::kForward); //set the spike to run forward
}

// Called repeatedly when this Command is scheduled to run
void RollerForward::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool RollerForward::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void RollerForward::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollerForward::Interrupted() {

}
