#pragma once
#include "GameElement.h"
#include "GameObject.h"

class Scene : public GameElement{
private: 
	//std::string name;
	GameObject** gameObjects;
public:
	Scene();
	Scene(std::string sceneName);
	void getObjects(GameObject** other);
	std::string listAvalibleElements() const;
	bool isAvalible(std::string gameElement);
	bool isGameObject(std::string gameElement);
};