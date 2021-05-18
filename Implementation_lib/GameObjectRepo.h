#pragma once
#include "GameObject.h"
#include <string>
#include <vector>

class GameObjectRepo {
private:
	GameObject** gameObjects;

public:
	GameObjectRepo();
	GameObject getGameObject(std::string gameElement);
};