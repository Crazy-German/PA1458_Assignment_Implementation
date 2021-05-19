#include "pch.h"
#include "GameObjectRepo.h"

GameObjectRepo::GameObjectRepo()
{
	//this->gameObjects = new GameObject * [2] {nullptr};
	//this->gameObjects[0] = new GameObject();
	//this->gameObjects[1] = new GameObject();
	gameobjects.push_back(GameObject("Stig"));
	gameobjects.push_back(GameObject("Bertil"));
	gameobjects.push_back(GameObject("Mons"));
	gameobjects.push_back(GameObject("A"));
}

GameObject GameObjectRepo::getGameObject(std::string gameElement)//getgame om det inte finns något att returna så krash very bad
{

	for (int i = 0; i < gameobjects.size(); i++)
	{
		if (gameobjects[i].getName() == gameElement)
		{
			return gameobjects[i];
		}
	}
	
}
