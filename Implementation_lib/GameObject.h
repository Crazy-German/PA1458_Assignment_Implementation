#pragma once
#include "GameElement.h"
#include "InteractionType.h"
#include "Taste.h"
#include<vector>

class GameObject : public GameElement {
private:

	interactionType** testingInteraction;
	interactionType* currentInteraction;

	std::string interactionTypes;
	//std::vector<std::string> interactionOptions;
	std::string** interactionOptions;
	int interactionOptionsSize;
	//std::string currentInteraction;
	bool isCurrentInteractionStarted;
public:
	GameObject();
	GameObject(std::string elementName);
	~GameObject();
	std::string listInteractionTypes() const;
	bool startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	std::string setCurrentInteractionOptions(std::string theOptions);
	std::string getName();
	std::string startCurrentInteraction();
	void abbortCurrentInteraction();
};