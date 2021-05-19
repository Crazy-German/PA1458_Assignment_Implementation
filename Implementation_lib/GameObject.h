#pragma once
#include "GameElement.h"
#include<vector>
class GameObject : public GameElement {
private:
	std::string elementName;
	std::string interactionTypes;
	std::vector<std::string> interactionOptions;
	std::string currentInteraction;
	bool isCurrentInteractionStarted;
public:
	GameObject();
	GameObject(std::string elementName);
	std::string listInteractionTypes() const;
	void startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	std::string setCurrentInteractionOptions(std::string theOptions);
	std::string getName();
	std::string startCurrentInteraction();
	void abbortCurrentInteraction();
};