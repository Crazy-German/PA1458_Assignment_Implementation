#include "pch.h"
#include "Scene.h"

Scene::Scene()
{
}

Scene::Scene(std::string sceneName)
{
}

std::string Scene::listAvalibleElements() const
{
	return std::string();
}

bool Scene::isAvalible(std::string gameElement)
{
	return false;
}

bool Scene::isGameObject(std::string gameElement)
{
	return false;
}
