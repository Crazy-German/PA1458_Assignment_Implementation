#pragma once
#include "GameElement.h"
class Scene : public GameElement{
private: 

public:
	Scene();
	Scene(std::string sceneName);
	std::string listAvalibleElements() const;
	bool isAvalible(std::string gameElement);
	bool isGameObject(std::string gameElement);
};