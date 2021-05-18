#include "pch.h"
#include "GameObjectRepo.h"

GameObjectRepo::GameObjectRepo()
{
	this->gameObjects = new GameObject * [2] {nullptr};
	this->gameObjects[0] = new GameObject();
	this->gameObjects[1] = new GameObject();
}

GameObject GameObjectRepo::getGameObject(std::string gameElement)
{
	return GameObject();
}
