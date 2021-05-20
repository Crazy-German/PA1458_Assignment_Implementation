#include "pch.h"
#include "GameObject.h"

GameObject::GameObject()
	:GameElement("")
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
	:GameElement(elementName)
{
	INTERACTIONOPTIONSIZE = 4;
	isOn = false;
	isCurrentInteractionStarted = false;

	testingInteraction = new interactionType * [INTERACTIONOPTIONSIZE]{ nullptr };
	testingInteraction[0] = new Taste();
	testingInteraction[1] = new Touch();
	testingInteraction[2] = new TurnOn();
	testingInteraction[3] = new TurnOff();

	currentInteraction = testingInteraction[0];
}



std::string GameObject::listInteractionTypes() const
{
	return interactionTypes;
}

std::string GameObject::startInteraction(std::string interactionType)
{
	for (int i = 0; i < INTERACTIONOPTIONSIZE; i++)
	{
		if (interactionType == testingInteraction[i]->getInteractionName())
		{
			
			currentInteraction = testingInteraction[i];
			return startCurrentInteraction();
		}
	}
	return "no matching interactionType\n";
}

std::string GameObject::listCurrentInteractionOptions() const
{
	std::string tempString;
	for (int i = 0; i < INTERACTIONOPTIONSIZE; i++)
	{
		tempString += std::to_string(i +1);
		tempString += ". ";
		tempString += testingInteraction[i]->startInteraction();
		tempString += "\n";
		
	}
	return tempString;
}

std::string GameObject::setCurrentInteractionOptions(std::string theOptions)//FIXA FLER OPTIOONS SÅ INTE KRASCHAR
{
	for (int i = 0; i < 4; i++)
	{
		if (theOptions == testingInteraction[i]->getInteractionName())
		{
			currentInteraction = testingInteraction[i];
			
			return "Was able to set current interaction to " + theOptions;
		}
	}
	return "Couldnt set interaction option to " + theOptions;
	//interactionOptions.push_back(theOptions);
}



std::string GameObject::startCurrentInteraction()
{
	//return currentInteraction;
	if (currentInteraction == testingInteraction[2])
	{
		this->isOn = true;
	}
	else if (currentInteraction == testingInteraction[3])
	{

		this->isOn = false;
	}
	
	return currentInteraction->startInteraction() + " " + this->getElementName();;
}



void GameObject::abbortCurrentInteraction()
{
	isCurrentInteractionStarted = false;
}
