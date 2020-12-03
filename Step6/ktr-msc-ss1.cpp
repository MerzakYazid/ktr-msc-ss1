// ktr-msc-ss1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
int main()
{

	Warrior player1("Jean-Luc", "Warrior");
	Mage player2("Robert", "Mage");
	Character player3("Alex", "Character");
	player1.trytoattack("screwdriver");
	player2.trytoattack("hammer");
	player1.trytoattack("Hammer");
	player2.trytoattack("");


}
