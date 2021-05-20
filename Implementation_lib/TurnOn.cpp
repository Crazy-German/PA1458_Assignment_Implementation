#include "pch.h"
#include "TurnOn.h"

TurnOn::TurnOn()
	:interactionType("TurnOn")
{
}

TurnOn::TurnOn(std::string name)
	: interactionType(name)
{
}

std::string TurnOn::startInteraction()
{
	
	return "You try to " + this->getInteractionName();
}