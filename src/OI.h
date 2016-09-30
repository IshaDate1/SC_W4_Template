#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "RobotMap.h"
class OI
{
private:
	Joystick* driveStick;
	Button* shootBallButton;
	Button* ballIntakeButton;
public:
	OI();
	void getJoystick();
};

#endif
