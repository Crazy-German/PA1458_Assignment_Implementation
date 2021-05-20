#include "pch.h"
#include "Scene.h"

Scene::Scene()
	:GameElement("")
{

}

Scene::Scene(std::string sceneName)
	:GameElement(sceneName)
{
	//this->name = sceneName;
	//gameObjects = new GameObject * [2]{ nullptr };
	nrOfElements = 0;
}

void Scene::initializePlayerInventory(GameObject* other)
{
	//gameObjects[0] = other[0];
	//gameObjects[1] = other[1];
	gameobjects.push_back(other);
}

void Scene::initializeCurrentScene(GameObject* other)
{
	gameobjects.push_back(other);
	//gameObjects[0] = other[2];
	//gameObjects[1] = other[3];
}




std::string Scene::listAvalibleElements() const
{
	std::string tempString;
	for (int i = 0; i < 2; i++)
	{
		tempString += std::to_string(i + 1);
		tempString += ". ";
		tempString += gameobjects[i]->getElementName();
		tempString += "\n";

	}
	return tempString;
}

bool Scene::isAvalible(std::string gameElement)
{
	return false;
}

bool Scene::isGameObject(std::string gameElement)
{
	return false;
}
