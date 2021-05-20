#include "pch.h"
#include "GameElement.h"

GameElement::GameElement()
	:name("")
{
}

GameElement::GameElement(std::string name)
	:name(name)
{
}

GameElement::~GameElement()
{
}

std::string GameElement::getName() const
{
	return this->name;
}
