#pragma once
#include "GameElement.h"
#include<vector>
class GameObject : public GameElement {
private:
	std::string interactionTypes;
	//std::vector<std::string> interactionOptions;
	std::string** interactionOptions;
	int interactionOptionsSize;
	std::string currentInteraction;
	bool isCurrentInteractionStarted;
	std::string inScene;
public:
	GameObject();
	GameObject(std::string elementName);
	GameObject(std::string elementName, std::string location);
	~GameObject();
	std::string listInteractionTypes() const;
	bool startInteraction(std::string interactionType);
	std::string listCurrentInteractionOptions() const;
	std::string setCurrentInteractionOptions(std::string theOptions);
	std::string startCurrentInteraction();
	void abbortCurrentInteraction();
	void setLocation(std::string location);
	std::string getLocation() const;
};