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
	else
	{
		cout << this->NameGet() << " : I don 't need this stupid " << wp << " ! Don 't misjudge my powers !" << endl;
	}

}
