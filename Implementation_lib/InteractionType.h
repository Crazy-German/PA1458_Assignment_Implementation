#pragma once
#include<string>
class interactionType
{
private:
	std::string interactionTypeName;
public:
	interactionType();
	interactionType(std::string nameOfInteraction);
	std::string getInteractionName();
	//std::string startInteraction();

	virtual std::string startInteraction() = 0;
};