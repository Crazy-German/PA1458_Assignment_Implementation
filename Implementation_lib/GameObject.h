#pragma once
#include "GameElement.h"
#include <string>
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
	void startCurrentInteraction();
	void abbortCurrentInteraction();
};