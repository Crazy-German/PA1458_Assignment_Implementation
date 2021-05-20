#pragma once
#include "GameElement.h"
#include "InteractionType.h"
#include "Taste.h"
#include "Touch.h"
#include "Turnoff.h"
#include "Turnon.h"
#include<vector>

#include<iostream>

class GameObject : public GameElement {
private:

	interactionType** testingInteraction;
	interactionType* currentInteraction;

	bool isOn;

	std::string interactionTypes;
	std::string** interactionOptions;
	int INTERACTIONOPTIONSIZE;

	bool isCurrentInteractionStarted;
public:
	GameObject();
	GameObject(std::string elementName);

	std::string listInteractionTypes() const;
	std::string startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	std::string setCurrentInteractionOptions(std::string theOptions);
	std::string startCurrentInteraction();
	void abbortCurrentInteraction();
};