#pragma once
#include "GameElement.h"
#include "GameObject.h"
#include<vector>

class Scene : public GameElement{
private: 
	//GameObject** gameObjects;
	std::vector<GameObject*> gameobjects;
	int nrOfElements;
public:
	Scene();
	Scene(std::string sceneName);
	void initializePlayerInventory(GameObject* other);
	void initializeCurrentScene(GameObject* other);
	std::string listAvalibleElements() const;
	bool isAvalible(std::string gameElement);
	bool isGameObject(std::string gameElement);
};