#pragma once
#include"GameElement.h"
#include<string>

class EventManager
{
private:

public://byta ut eventcondition variabeln senare
	EventManager();
	void createEvent(int EventCondition, int Event);//byta ut event variabeln
	void listAffectedEvents(int EventCondition);
	void triggerEvents(int EventCondition);
	void clearEvent(int EventCondition);
	//void clearEvent(int Event);
};