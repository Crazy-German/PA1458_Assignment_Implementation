#pragma once
#include"GameObject.h"
#include"Scene.h"
#include"GameObjectRepo.h"
#include<string>
#include<iostream>
class Game {

private:
	GameObjectRepo myGameObjects;
	Scene currentScene;
	Scene playerInventory;
	GameObject testObj;
public:
	Game();
	~Game();
	void gameRun();
	GameObject *selectGameObject(std::string name);
	void selectInteraction(GameObject& theGameObj, std::string theInteraction);
	void setInteractionOptions(std::string theOptions);
	void startInteraction();
	void abortInteraction();

};