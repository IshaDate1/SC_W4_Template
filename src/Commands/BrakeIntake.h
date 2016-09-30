#ifndef BrakeIntake_H
#define BrakeIntake_H

#include "../CommandBase.h"
#include "WPILib.h"

class BrakeIntake: public CommandBase
{
public:
	BrakeIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
