#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() :
		Subsystem("Shooter")ShooterMotor (new Talon(4));
{

}

void Shooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand (new ShootBall(), new BrakeShooter());
}
void Shooter::ShootBall()
{
	ShooterMotor->Set(1);
}
void Shooter::BrakeShooter()
{
	ShooterMotor->Set(0);
}




// Put methods for controlling this subsystem
// here. Call these from Commands.
