#include "pch.h"
#include "Game.h"
#include<iostream>

Game::Game()
{
}

void Game::gameRun()
{
	/*while (1)//game loop
	{

	}*/
	testObj = selectGameObject("A");
	std::cout << "wowsers\n";
	std::cout << testObj.getName();
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
