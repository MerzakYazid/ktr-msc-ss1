#include "Mage.h"

Mage::Mage()
{
	this->LifeSet(70);
	this->AgilitySet(3);
	this->StrenghSet(10);
	this->WitSet(10);
	cout << this->NameGet() << " : May the gods be with me ." << endl;
}

Mage::Mage(string N, string R)
{
	this->RPGClassSet(R);
	this->NameSet(N);
	this->LifeSet(70);
	this->AgilitySet(3);
	this->StrenghSet(10);
	this->WitSet(10);
	cout << this->NameGet() << " : May the gods be with me ." << endl;
}

void Mage::attack(string wp)
{
	if (wp == "Magic") {
		cout << this->NameGet() << " : " << "Rrrrrrrr....." << "\n";
		cout << this->NameGet() << " : Feel the power of my " << wp << "!" << endl;
	}
	else if (wp == "Wand") {
		cout << this->NameGet() << " : " << "Rrrrrrrr....." << "\n";
		cout << this->NameGet() << " : Feel the power of my " << wp << "!" << endl;
	}

}

void Mage::moveRight()
{
	cout << this->NameGet() << " : moves right furtively " << endl;
}

void Mage::moveLeft()
{
	cout << this->NameGet() << " : moves left furtively " << endl;
}

void Mage::moveForward()
{
	cout << this->NameGet() << " : moves forward furtively " << endl;
}

void Mage::moveBack()
{
	cout << this->NameGet() << " : moves back furtively " << endl;
}
