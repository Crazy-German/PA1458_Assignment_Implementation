#pragma once
#include "GameElement.h"
#include "GameObject.h"

class Scene : public GameElement{
private: 
	GameObject** gameObjects;
	std::string description;
public:
	Scene(std::string sceneName, std::string description);
	void addObject(GameObject &gameObject);
	void getObjects(GameObject** other);
	std::string listAvalibleElements() const;
	bool isAvalible(std::string gameElement);
	bool isGameObject(std::string gameElement);
	std::string describeScene() const;
};