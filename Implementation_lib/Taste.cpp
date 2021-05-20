#include "pch.h"
#include "Taste.h"

Taste::Taste()
	:interactionType("Taste")
{
}

Taste::Taste(std::string name)
	:interactionType(name)
{
}

std::string Taste::startInteraction()
{
	return "You try to " + this->getInteractionName();
}
