#ifndef BrakeShooter_H
#define BrakeShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class BrakeShooter: public CommandBase
{
public:
	BrakeShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
