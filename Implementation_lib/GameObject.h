#pragma once
#include "GameElement.h"
class GameObject : public GameElement {
public:
	GameObject();
	std::string listInteractionTypes() const;
	void startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	void setCurrentInteractionOptions(std::string theOptions);
	void startCurrentInteraction();
	void abbortCurrentInteraction();
};