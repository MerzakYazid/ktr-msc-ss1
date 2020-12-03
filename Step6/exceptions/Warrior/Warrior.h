#pragma once
#include "WeaponExecption.h"
class Warrior: public WeaponExecption
{
public:
	Warrior();
	Warrior(string N, string R);
	void attack(string);

	void moveRight();

	void moveLeft();

	void moveForward();

	void moveBack();

	void getmessage();

	void trytoattack(string);

};

