#include "pch.h"
#include "GameObject.h"

GameObject::GameObject()
{
}

GameObject::GameObject(std::string elementName)
{
}

std::string GameObject::listInteractionTypes() const
{
	return std::string();
}

void GameObject::startInteraction(std::string interactionType)
{
}

std::string GameObject::listCurrentInteractionOptions() const
{
	return std::string();
}

void GameObject::setCurrentInteractionOptions(std::string theOptions)
{
}

void GameObject::startCurrentInteraction()
{
}

void GameObject::abbortCurrentInteraction()
{
}
