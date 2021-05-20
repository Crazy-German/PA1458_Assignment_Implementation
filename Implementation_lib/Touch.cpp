#include "pch.h"
#include "Touch.h"

Touch::Touch()
	:interactionType("Touch")
{
}

Touch::Touch(std::string name)
	: interactionType(name)
{
}

std::string Touch::startInteraction()
{
	return "You try to " + this->getInteractionName();
}