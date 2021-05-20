#include "pch.h"
#include "Secretary.h"

Secretary::Secretary()
{

}

void Secretary::listAllObjectsInScene(Scene& other)
{
	std::cout << other.listAvalibleElements();
}

void Secretary::choosenInteractWithObject(std::string other)
{
	std::cout << "you chose " << other << std::endl;
}

void Secretary::choseObject(std::string other)
{
	std::cout << "you have chosen " << other << std::endl;
}

void Secretary::listOptionsForObject(GameObject& other)
{
	std::cout << other.listCurrentInteractionOptions();
}

void Secretary::choseScene()
{
	std::cout << "Which scene do you want to chose:\n1.playerIntentory\n2.Forest\n";
}
