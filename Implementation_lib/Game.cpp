#include "pch.h"
#include "Game.h"
#include<iostream>

Game::Game()
	:currentScene("StartingScene", "An old allyway"), playerInventory("Inventory", "Your old backpack")
{
	currentScene.getObjects(myGameObjects.getObjects());
}

Game::~Game()
{
}

void Game::gameRun()
{
	std::cout << currentScene.describeScene() << std::endl;
	std::cout << currentScene.listAvalibleElements();
}

GameObject Game::selectGameObject(std::string name)
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
