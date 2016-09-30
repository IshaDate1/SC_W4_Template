#include "BrakeIntake.h"

BrakeIntake::BrakeIntake()
{
	Requires(Intake);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void BrakeIntake::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void BrakeIntake::Execute()
{
	Intake->BrakeIntake();
}

// Make this return true when this Command no longer needs to run execute()
bool BrakeIntake::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void BrakeIntake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BrakeIntake::Interrupted()
{

}
