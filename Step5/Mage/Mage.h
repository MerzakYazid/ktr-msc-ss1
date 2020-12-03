#pragma once
#include "Character.h"
class Mage : public Character
{
public:
	Mage();
	Mage(string, string);
	void attack(string);
	
	void moveRight();

	void moveLeft();

	void moveForward();

	void moveBack();

};

