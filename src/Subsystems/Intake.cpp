#include "Intake.h"
#include "../RobotMap.h"

Intake::Intake()
: Subsystem("Intake"), intakeMotor (new Talon(4));
{
}

void Intake::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand (new IntakeBall(), new BrakeIntake());
}

void Intake::IntakeBall()
{
	intakeMotor->Set(-1);
}

void Intake::brakeIntakeMotor()
{
	intakeMotor->Set(0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
