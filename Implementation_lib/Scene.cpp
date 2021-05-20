#include "pch.h"
#include "Scene.h"

Scene::Scene()
	:GameElement("")
{
	gameObjects = new GameObject * [2]{ nullptr };
}

Scene::Scene(std::string sceneName)
	:GameElement(sceneName)
{
	//this->name = sceneName;
	gameObjects = new GameObject * [2]{ nullptr };
}

void Scene::getObjects(GameObject** other)
{
	gameObjects = other;
}

void Scene::addObject(GameObject* object)
{
	for (int i = 0; i < 2; i++) {
		if (gameObjects[i] == nullptr) {
			this->gameObjects[i] = object;
			break;
		}
	}
}


std::string Scene::listAvalibleElements() const
{
	std::string tempString;
	for (int i = 0; i < 2; i++)
	{
		tempString += std::to_string(i + 1);
		tempString += ". ";
		tempString += gameObjects[i]->getElementName();
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
