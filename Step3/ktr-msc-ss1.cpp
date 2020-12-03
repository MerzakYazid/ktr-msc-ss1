// ktr-msc-ss1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Character.h"
#include "Warrior.h"
#include "Mage.h"
int main()
{


	Character player3("Alex", "Character");
	player3.moveBack();
	player3.moveForward();
	player3.moveRight();
	player3.moveLeft();


}
