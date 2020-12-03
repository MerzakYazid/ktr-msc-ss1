#pragma once
#include "WeaponExecption.h"
class Mage : public WeaponExecption
{
public:
	Mage();
	Mage(string, string);
	void attack(string);

	void moveRight();

	void moveLeft();

	void moveForward();

	void moveBack();

	void getmessage();

	void trytoattack(string);
};

