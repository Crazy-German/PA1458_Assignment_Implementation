#pragma once
#include <string>

class GameElement {
private:
	std::string name;
public:
	GameElement();
	GameElement(std::string name);
	~GameElement();
	std::string getName() const;
};