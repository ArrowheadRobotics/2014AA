// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "ClawTop.h"
#include "../Subsystems/Claw.h"

float top = 20;

ClawTop::ClawTop() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void ClawTop::Initialize() {
	Robot::claw->pot1->GetValue();
}

// Called repeatedly when this Command is scheduled to run
void ClawTop::Execute() {
	float topat = Robot::claw->pot1->GetValue();
	float topspd = 1-topat/top;
	if(topspd >.7){
		topspd = .7;
	}
	if (topspd <.1 && topspd !=0) {
		topspd = .1;
	}
	if(topat>20) {
		topspd = 0;
	}
	RobotMap::clawlifter->Set(topspd);
}

// Make this return true when this Command no longer needs to run execute()
bool ClawTop::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ClawTop::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClawTop::Interrupted() {

}
