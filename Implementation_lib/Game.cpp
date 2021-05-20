#include "pch.h"
#include "Game.h"
#include<iostream>

Game::Game()
{
	currentScene.addObject(myGameObjects.getGameObject("Ball"));
	currentScene.addObject(myGameObjects.getGameObject("Rock"));
	playerInventory.addObject(myGameObjects.getGameObject("Stick"));
	playerInventory.addObject(myGameObjects.getGameObject("Penny"));
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
		if (playerResponse == "2")
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
			std::cout << myGameObjects.getGameObject(playerResponse)->listCurrentInteractionOptions();
			std::cin >> playerResponse2;
			std::cin.ignore();
			std::cout << myGameObjects.getGameObject(playerResponse)->startInteraction(playerResponse2);
		}
		if (playerResponse == "Stick" || playerResponse == "Penny")
		{
			std::cout << "interact stuff\n";
			std::cout << myGameObjects.getGameObject(playerResponse)->listCurrentInteractionOptions();
			std::cin >> playerResponse2;
			std::cin.ignore();
			std::cout << myGameObjects.getGameObject(playerResponse)->startInteraction(playerResponse2);
		}
		if (playerResponse == "Exit" || playerResponse2 == "Exit") {
			break;
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
