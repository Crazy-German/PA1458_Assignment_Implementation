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
}

GameObject::GameObject(std::string elementName)
	:elementName(elementName)
{
	isCurrentInteractionStarted = false;
	interactionOptions.push_back("Greet");
	interactionOptions.push_back("Goodbye");
	interactionOptions.push_back("Salute");
	interactionOptions.push_back("Fight");

}

std::string GameObject::listInteractionTypes() const
{
	return interactionTypes;
}

void GameObject::startInteraction(std::string interactionType)
{
	for (int i = 0; i < interactionOptions.size(); i++)
	{
		if (interactionType == interactionOptions[i])
		{
			//return??
		}
	}
}

std::string GameObject::listCurrentInteractionOptions() const
{
	return std::string();
}

std::string GameObject::setCurrentInteractionOptions(std::string theOptions)
{
	for (int i = 0; i < interactionOptions.size(); i++)
	{
		if (theOptions == interactionOptions[i])
		{
			currentInteraction = interactionOptions[i];
			return "Was able to set current interaction to" + theOptions;
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
}
