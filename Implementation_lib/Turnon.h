#pragma once
#include"InteractionType.h"
class TurnOn : public interactionType
{
private:

public:
	TurnOn();
	TurnOn(std::string name);

	// Inherited via interactionType
	virtual std::string startInteraction() override;
};