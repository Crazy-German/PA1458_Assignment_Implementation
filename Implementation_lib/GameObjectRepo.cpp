#include "pch.h"
#include "GameObjectRepo.h"

GameObjectRepo::GameObjectRepo()
{
	this->gameObjects = new GameObject * [4] {nullptr};
	this->gameObjects[0] = new GameObject("Ball","CurrentScene");
	this->gameObjects[1] = new GameObject("Rock","CurrentScene");
	this->gameObjects[2] = new GameObject("Stick","PlayerInventory");
	this->gameObjects[3] = new GameObject("Penny","PlayerInventory");
	/*gameobjects.push_back(GameObject("Stig"));
	gameobjects.push_back(GameObject("Bertil"));
	gameobjects.push_back(GameObject("Mons"));
	gameobjects.push_back(GameObject("A"));*/
}

GameObject* GameObjectRepo::getObjects(int nr)
{
	return gameObjects[nr];
}



GameObject* GameObjectRepo::getGameObject(std::string gameElement)//getgame om det inte finns något att returna så krash very bad
{

	for (int i = 0; i < 4; i++)
	{
		if (gameObjects[i]->getElementName() == gameElement)
		{
			return gameObjects[i];
		}
	}
	
}

bool GameObjectRepo::isInteracting()
{
	bool temp = false;
	for (int i = 0; i < 4; i++)
	{
		if (gameObjects[i]->isInteracting())
		{
			temp = true;
		}
	}
	return temp;
}

std::string GameObjectRepo::getInteractingWithObject()
{
	std::string tempname;
	for (int i = 0; i < 4; i++)
	{
		if (gameObjects[i]->isInteracting())
		{
			tempname = gameObjects[i]->getElementName();
		}
	}
	return tempname;
}
