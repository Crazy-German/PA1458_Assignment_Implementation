#pragma once
#include"InteractionType.h"
class Touch : public interactionType
{
private:

public:
	Touch();
	Touch(std::string name);

	// Inherited via interactionType
	virtual std::string startInteraction() override;
};