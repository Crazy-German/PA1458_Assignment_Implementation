#include "pch.h"
#include "TurnOff.h"

TurnOff::TurnOff()
	:interactionType("TurnOff")
{
}

TurnOff::TurnOff(std::string name)
	: interactionType(name)
{
}

std::string TurnOff::startInteraction()
{
	return "You try to " + this->getInteractionName();
}