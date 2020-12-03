#pragma once
#include<string.h>
#include<iostream>
#include <string>

using namespace std;

class Character
{
private:
	string name;
	const string RPGClass;
	int life, agility, strengh, wit;

public:

	Character();

	Character(string N, string R);


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



	virtual void attack(string);

	void showstats();







};