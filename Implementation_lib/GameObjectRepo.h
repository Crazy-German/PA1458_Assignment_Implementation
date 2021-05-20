#pragma once
#include "GameObject.h"
#include <string>
#include <vector>

class GameObjectRepo {
private:
	GameObject** gameObjects;
	//std::vector<GameObject> gameobjects;

public:
	GameObjectRepo();
	GameObject** getObjects();
	GameObject *getGameObject(std::string gameElement);
};