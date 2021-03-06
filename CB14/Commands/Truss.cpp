// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "Truss.h"

Truss::Truss() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void Truss::Initialize() {
	RobotMap::clawarmSol->Set(true);
	Robot::claw->lifter->Set(-1.0);
	//RobotMap::armSol1->Set(true);
	//RobotMap::armSol2->Set(false);
	while(Robot::claw->pot1->GetValue()>290)
	{
		Robot::drive->M_Drive(Robot::oi->getjoy1(), Robot::oi->getjoy2());
	}
	Robot::claw->lifter->Set(0);
	Robot::claw->fire();
}

// Called repeatedly when this Command is scheduled to run
void Truss::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool Truss::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Truss::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Truss::Interrupted() {

}
