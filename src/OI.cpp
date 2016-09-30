#include "OI.h"

OI::OI()
{
	Joystick* driveStick= new Joystick(JOYSTICK);
	Button* shootBallButton= new Button(driveStick, 1);
	Button* ballIntakeButton= new Button(driveStick, 2);

	ballIntake ->WhenPressed(new IntakeBall());
	ballIntake ->WhenReleased(new BrakeIntake());

	shootBall ->WhenPressed(new ShootBall());
	shootBall ->WhenReleased(new BrakeShooter());

}


void OI::getJoystick()
{

}
