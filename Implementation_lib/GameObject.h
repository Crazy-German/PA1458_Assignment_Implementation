#pragma once
#include "GameElement.h"
class GameObject : public GameElement {
private:
	std::string elementName;
	std::string interactionTypes;
public:
	GameObject();
	GameObject(std::string elementName);
	std::string listInteractionTypes() const;
	void startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	void setCurrentInteractionOptions(std::string theOptions);
	std::string getName();
	void startCurrentInteraction();
	void abbortCurrentInteraction();
};