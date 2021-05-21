#pragma once
#include<string>
#include<iostream>
#include"Scene.h"
#include"GameObject.h"

class Secretary
{
private:

public:
	Secretary();

	void listAllObjectsInScene(Scene &other);
	void choosenInteractWithObject(std::string other);
	void choseObject(std::string other);
	void dummyAnswer();
	void listOptionsForObject(GameObject& other);
	void choseScene();


};