#pragma warning(disable :4996)
#include "Warrior.h"
#include<iostream>
using namespace std;


Warrior::Warrior()
{
	
	this->LifeSet(100);
	this->AgilitySet(10);
	this->StrenghSet(8);
	this->WitSet(3);
	cout << this->NameGet() << " : My name will go down in history !" << endl;
}

Warrior::Warrior(string N, string R)
{
	this->RPGClassSet(R);
	this->NameSet(N);
	this->LifeSet(100);
	this->AgilitySet(10);
	this->StrenghSet(8);
	this->WitSet(3);
	cout << this->NameGet() << " : My name will go down in history !" << endl;
}


void Warrior::attack(string wp)
{
	
	if (wp == "Hammer") {
		cout << this->NameGet() << " : " << "Rrrrrrrr....." << "\n";
		cout << this->NameGet() << " : I'll crush you with my " << wp << "!" << endl;
	}
	else if (wp == "Sword") {
		cout << this->NameGet() << " : " << "Rrrrrrrr....." << "\n";
		cout << this->NameGet() << " : I'll crush you with my " << wp << "!" << endl;
	}
	else {
		cout << this->NameGet() << " : A " << wp << "?? What should I do with this ?!" << endl;
	}
	
	
	
		

	
}

void Warrior::moveRight()
{
	cout << this->NameGet() << " : moves right like a bad boy " << endl;
}

void Warrior::moveLeft()
{
	cout << this->NameGet() << " : moves left like a bad boy " << endl;
}

void Warrior::moveForward()
{
	cout << this->NameGet() << " : moves forward like a bad boy " << endl;
}

void Warrior::moveBack()
{
	cout << this->NameGet() << " : moves back like a bad boy " << endl;
}

void Warrior::getmessage()
{
	cout << this->NameGet() << " : I refuse to fight with my bare hands ." << endl;
}

void Warrior::trytoattack(string wp)
{
	try
	{
		if (wp == "") {
			throw(wp);
		}
		else
		{
			this->attack(wp);
		}
		
	}
	catch (string wp)
	{
		this->getmessage();
	}
	
}



