#include "pch.h"
#include "Game.h"
#include<iostream>

Game::Game()
{

	currentScene.initializeCurrentScene(myGameObjects.getObjects(0));
	currentScene.initializeCurrentScene(myGameObjects.getObjects(1));
	playerInventory.initializePlayerInventory(myGameObjects.getObjects(2));
	playerInventory.initializePlayerInventory(myGameObjects.getObjects(3));
	current = " ";

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
			current = "CurrentScene";
		}
		else if(playerResponse == "1")
		{
			secretary.listAllObjectsInScene(playerInventory);
			current = "PlayerInventory";
		}
		std::cin >> playerResponse;
		std::cin.ignore();

		if (playerResponse == "Rock" || playerResponse == "Ball" && current == "CurrentScene")
		{
			std::cout << "interact stuff\n";
			std::cout << myGameObjects.getGameObject(playerResponse)->listCurrentInteractionOptions();
			std::cin >> playerResponse2;
			std::cin.ignore();
			std::cout << myGameObjects.getGameObject(playerResponse)->startInteraction(playerResponse2);
		}
		if (playerResponse == "Stick" || playerResponse == "Penny" && current == "PlayerInventory")
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
