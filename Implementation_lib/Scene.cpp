#include "pch.h"
#include "Scene.h"

Scene::Scene()
{
}

Scene::Scene(std::string sceneName)
{
	//this->name = sceneName;
	gameObjects = new GameObject * [2]{ nullptr };
}

void Scene::getObjects(GameObject** other)
{
	gameObjects = other;
}


std::string Scene::listAvalibleElements() const
{
	std::string tempString;
	for (int i = 0; i < 2; i++)
	{
		tempString += std::to_string(i + 1);
		tempString += ". ";
		tempString += gameObjects[i]->getName();
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
