#include "pch.h"
#include "InteractionType.h"

interactionType::interactionType()
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

