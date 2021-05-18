#include "pch.h"
#include "GameObject.h"

GameObject::GameObject()
	:elementName("")
{
}

GameObject::GameObject(std::string elementName)
	:elementName(elementName)
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

std::string GameObject::getName()
{
	return this->elementName;
}

void GameObject::startCurrentInteraction()
{
}

void GameObject::abbortCurrentInteraction()
{
}
