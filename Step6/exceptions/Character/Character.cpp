#pragma warning(disable :4996)
#include "Character.h"
using namespace std;

Character::Character()
{
	this->RPGClassSet("Character");
	this->NameSet("Unknown");
	this->LifeSet(50);
	this->AgilitySet(2);
	this->StrenghSet(2);
	this->WitSet(2);
}

Character::Character(string N, string R)
{
	this->RPGClassSet(R);
	this->NameSet(N);
	this->LifeSet(50);
	this->AgilitySet(2);
	this->StrenghSet(2);
	this->WitSet(2);
}

void Character::NameSet(string n)
{
	name = n;
}

string Character::NameGet()
{
	return name;
}


string Character::RPGClassGet()
{
	return RPGClass;
}

void Character::RPGClassSet(string R)
{
	string& wr = const_cast <string&> (RPGClass);
	wr = R;
}

void Character::LifeSet(int L)
{
	life = L;
}

int Character::LifeGet()
{
	return life;
}

void Character::AgilitySet(int Agi)
{
	agility = Agi;
}

int Character::AgilityGet()
{
	return agility;
}

void Character::StrenghSet(int Str)
{
	strengh = Str;
}

int Character::StrenghGet()
{
	return strengh;
}

void Character::WitSet(int W)
{
	wit = W;
}

int Character::WitGet()
{
	return wit;
}

void Character::attack(string wp)
{
	cout << this->name << " : " << "Rrrrrrrr....." << "\n";
}

void Character::showstats()
{
	cout << this->name << "\n";
	cout << this->RPGClass << "\n";
	cout << this->life << "\n";
	cout << this->agility << "\n";
	cout << this->strengh << "\n";
	cout << this->wit << "\n";
}

void Character::moveRight()
{
	cout << this->name << " : moves right " << endl;
}

void Character::moveLeft()
{
	cout << this->name << " : moves left " << endl;
}

void Character::moveForward()
{
	cout << this->name << " : moves forward " << endl;
}

void Character::moveBack()
{
	cout << this->name << " : moves back " << endl;
}

void Character::unsheathe()
{
	cout << this->name << " : unsheathes his weapon." << endl;
}












