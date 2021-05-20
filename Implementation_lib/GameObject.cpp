#include "pch.h"
#include "GameObject.h"

GameObject::GameObject()
	:GameElement(""), inScene("")
{
	isCurrentInteractionStarted = false;
	/*interactionOptions.push_back("Greet");
	interactionOptions.push_back("Goodbye");
	interactionOptions.push_back("Salute");
	interactionOptions.push_back("Fight");
	currentInteraction = interactionOptions[0];
	*/
}

GameObject::GameObject(std::string elementName)
	:GameElement(elementName), inScene("")
{
	isCurrentInteractionStarted = false;
	interactionOptionsSize = 4;
	std::string temp = "Greet";
	interactionOptions = new std::string * [4]{ nullptr };
	interactionOptions[0] = new std::string("Greet");
	interactionOptions[1] = new std::string("Goodbye");
	interactionOptions[2] = new std::string("Salute");
	interactionOptions[3] = new std::string("Fight");

}

GameObject::GameObject(std::string elementName, std::string location)
	:GameElement(elementName), inScene(location)
{
}

GameObject::~GameObject()
{
	//GLÖM INTE DELETE INTERACTION************
}

std::string GameObject::listInteractionTypes() const
{
	return interactionTypes;
}

bool GameObject::startInteraction(std::string interactionType)
{
	for (int i = 0; i < interactionOptionsSize; i++)
	{
		if (interactionType == *interactionOptions[i])
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
	for (int i = 0; i < interactionOptionsSize; i++)
	{
		tempString += std::to_string(i +1);
		tempString += ". ";
		tempString += *interactionOptions[i];
		tempString += "\n";
		
	}
	return tempString;
}

std::string GameObject::setCurrentInteractionOptions(std::string theOptions)
{
	for (int i = 0; i < interactionOptionsSize; i++)
	{
		if (theOptions == *interactionOptions[i])
		{
			currentInteraction = *interactionOptions[i];
			return "Was able to set current interaction to " + theOptions;
		}
	}
	return "Couldnt set interaction option to " + theOptions;
	//interactionOptions.push_back(theOptions);
}

std::string GameObject::startCurrentInteraction()
{
	return currentInteraction;
}

void GameObject::abbortCurrentInteraction()
{
	isCurrentInteractionStarted = false;
}

void GameObject::setLocation(std::string location)
{
	this->inScene = location;
}

std::string GameObject::getLocation() const
{
	return this->inScene;
}
