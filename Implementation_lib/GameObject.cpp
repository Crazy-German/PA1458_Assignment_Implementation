#include "pch.h"
#include "GameObject.h"

GameObject::GameObject()
	:elementName("")
{
	isCurrentInteractionStarted = false;
	interactionOptions.push_back("Greet");
	interactionOptions.push_back("Goodbye");
	interactionOptions.push_back("Salute");
	interactionOptions.push_back("Fight");
	currentInteraction = interactionOptions[0];
}

GameObject::GameObject(std::string elementName)
	:elementName(elementName)
{
	isCurrentInteractionStarted = false;
	interactionOptions.push_back("Greet");
	interactionOptions.push_back("Goodbye");
	interactionOptions.push_back("Salute");
	interactionOptions.push_back("Fight");
	currentInteraction = interactionOptions[0];

}

std::string GameObject::listInteractionTypes() const
{
	return interactionTypes;
}

bool GameObject::startInteraction(std::string interactionType)
{
	for (int i = 0; i < interactionOptions.size(); i++)
	{
		if (interactionType == interactionOptions[i])
		{
			startCurrentInteraction();
			return true;
		}
	}
	return false;
}

std::string GameObject::listCurrentInteractionOptions() const
{
	std::string tempString;
	for (int i = 0; i < interactionOptions.size(); i++)
	{
		tempString += std::to_string(i +1);
		tempString += ". ";
		tempString += interactionOptions[i];
		tempString += "\n";
		
	}
	return tempString;
}

std::string GameObject::setCurrentInteractionOptions(std::string theOptions)
{
	for (int i = 0; i < interactionOptions.size(); i++)
	{
		if (theOptions == interactionOptions[i])
		{
			currentInteraction = interactionOptions[i];
			return "Was able to set current interaction to " + theOptions;
		}
	}
	return "Couldnt set interaction option to " + theOptions;
	//interactionOptions.push_back(theOptions);
}

std::string GameObject::getName()
{
	return this->elementName;
}

std::string GameObject::startCurrentInteraction()
{
	return currentInteraction;
}

void GameObject::abbortCurrentInteraction()
{
	isCurrentInteractionStarted = false;
}
