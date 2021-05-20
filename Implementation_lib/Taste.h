#pragma once
#include"InteractionType.h"
class Taste : public interactionType
{
private:

public:
	Taste();
	Taste(std::string name);

	// Inherited via interactionType
	virtual std::string startInteraction() override;
};