#include "pch.h"
#include "GameObjectRepo.h"

GameObjectRepo::GameObjectRepo()
{
	this->gameObjects = new GameObject * [4] {nullptr};
	this->gameObjects[0] = new GameObject("Ball");
	this->gameObjects[1] = new GameObject("Rock");
	this->gameObjects[2] = new GameObject("Stick");
	this->gameObjects[3] = new GameObject("Penny");
	/*gameobjects.push_back(GameObject("Stig"));
	gameobjects.push_back(GameObject("Bertil"));
	gameobjects.push_back(GameObject("Mons"));
	gameobjects.push_back(GameObject("A"));*/
}

GameObject** GameObjectRepo::getObjects()
{
	return gameObjects;
}



GameObject* GameObjectRepo::getGameObject(std::string gameElement)//getgame om det inte finns något att returna så krash very bad
{

	for (int i = 0; i < 2; i++)
	{
		if (gameObjects[i]->getElementName() == gameElement)
		{
			return gameObjects[i];
		}
	}
	
}
