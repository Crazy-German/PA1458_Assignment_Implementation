#include "pch.h"
#include "GameElement.h"

GameElement::GameElement()
{

}

GameElement::GameElement(std::string name)
	:name(name)
{
}

std::string GameElement::getElementName()
{
	return this->name;
}
