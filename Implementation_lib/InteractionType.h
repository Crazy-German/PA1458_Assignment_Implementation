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

	virtual std::string startInteraction() = 0;
};