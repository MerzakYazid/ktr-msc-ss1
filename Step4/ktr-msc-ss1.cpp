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
	player1.moveBack();
	player1.moveForward();
	player1.moveRight();
	player1.moveLeft();	
	player2.moveBack();
	player2.moveForward();
	player2.moveRight();
	player2.moveLeft();


}