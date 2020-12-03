#pragma once
#include<string.h>
#include<iostream>
#include <string>
#include "Character.h"
using namespace std;

class WeaponExecption : public Character
{
public:
	virtual void getmessage() = 0 ;
	virtual void trytoattack(string) = 0;

};

