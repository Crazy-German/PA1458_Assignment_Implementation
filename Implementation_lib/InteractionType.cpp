#include "pch.h"
#include "InteractionType.h"

interactionType::interactionType()
	:interactionTypeName(" ")
{
}

interactionType::interactionType(std::string nameOfInteraction)
	:interactionTypeName(nameOfInteraction)
{
}

std::string interactionType::getInteractionName()
{
	return interactionTypeName;
}

