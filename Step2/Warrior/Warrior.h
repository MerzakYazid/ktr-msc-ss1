#pragma once
#include "Character.h"
class Warrior: public Character
{
public:
	Warrior();
	Warrior(string N, string R);
	void attack(string);


};