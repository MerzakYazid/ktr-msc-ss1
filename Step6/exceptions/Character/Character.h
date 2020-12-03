#pragma once
#include<string.h>
#include<iostream>
#include <string>
#include "Movable.h"

using namespace std;

class Character: public Movable
{
private:
	string name;
	const string RPGClass;
	int life, agility, strengh, wit;

public:
	void NameSet(string);
	string NameGet();

	void RPGClassSet(string);
	string RPGClassGet();

	void LifeSet(int);
	int LifeGet();

	void AgilitySet(int);
	int AgilityGet();

	void StrenghSet(int);
	int StrenghGet();

	void WitSet(int);
	int WitGet();

	Character();

	Character(string N, string R);

	virtual void attack(string);

	void showstats();

	void moveRight();

	void moveLeft();

	void moveForward();

	void moveBack();

	void unsheathe();






};



