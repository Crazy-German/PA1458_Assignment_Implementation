#include "pch.h"
#include "Game.h"
#include<iostream>

Game::Game()
{

	currentScene.initializeCurrentScene(myGameObjects.getObjects(0));
	currentScene.initializeCurrentScene(myGameObjects.getObjects(1));
	playerInventory.initializePlayerInventory(myGameObjects.getObjects(2));
	playerInventory.initializePlayerInventory(myGameObjects.getObjects(3));


	playerResponse = " ";
}

Game::~Game()
{
}

void Game::gameRun()
{
	
	while (1)//game loop
	{
		secretary.choseScene();
		std::cin >> playerResponse;
		if (playerResponse == "1" || playerResponse == "2")
		{
			secretary.listAllObjectsInScene(currentScene);
		}
		else
		{
			secretary.listAllObjectsInScene(playerInventory);
		}
		std::cin >> playerResponse;
		std::cin.ignore();

		if (playerResponse == "Rock" || playerResponse == "Ball")
		{
			std::cout << "interact stuff\n";
			std::cin >> playerResponse2;
			std::cin.ignore();
			std::cout << myGameObjects.getGameObject(playerResponse)->startInteraction(playerResponse2);
		}
	}
	//testObj = selectGameObject("A");
	//std::cout << "wowsers\n" << selectGameObject("A").getName() << std::endl;
	//std::cout << testObj.getName();
	//std::cout << currentScene.listAvalibleElements();
	std::cout << selectGameObject("Rock")->setCurrentInteractionOptions("TurnOff");
	//std::cout << myGameObjects.getGameObject("Rock").setCurrentInteractionOptions("TurnOn") << std::endl;
	 //std::cout << myGameObjects.getGameObject("Rock").startInteraction("TurnOn");
	std::cout << myGameObjects.getGameObject("Rock")->startCurrentInteraction();
}

GameObject* Game::selectGameObject(std::string name)
{
	return myGameObjects.getGameObject(name);
}

void Game::selectInteraction(GameObject& theGameObj, std::string theInteraction)
{
}

void Game::setInteractionOptions(std::string theOptions)
{
}

void Game::startInteraction()
{
}

void Game::abortInteraction()
{

}
