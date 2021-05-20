#pragma once
#include"InteractionType.h"
class TurnOff : public interactionType
{
private:

public:
	TurnOff();
	TurnOff(std::string name);


	// Inherited via interactionType
	virtual std::string startInteraction() override;
};