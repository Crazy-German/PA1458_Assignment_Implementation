#include "pch.h"
#include "Scene.h"

Scene::Scene(std::string sceneName, std::string description)
	:GameElement(sceneName), description(description)
{
	//this->name = sceneName;
	gameObjects = new GameObject * [2]{ nullptr };
}

void Scene::addObject(GameObject &gameObject)
{
	*gameObjects[0] = gameObject;
	gameObject.setLocation(this->getName());
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

std::string Scene::describeScene() const
{
	return this->description;
}
