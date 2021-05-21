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
	GameObject* getObjects(int nr);
	GameObject *getGameObject(std::string gameElement);
	bool isInteracting();
	std::string getInteractingWithObject();
};
