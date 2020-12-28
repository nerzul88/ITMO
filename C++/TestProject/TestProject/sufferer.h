#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"


class Sufferer
{
public:
	string name = "—традалец ";
	int damage = 0;

	Sufferer() {}
	Sufferer(int d)
	{
		this->damage = d;
	}

	Sufferer(string n, int d)
	{
		this->name = n;
		this->damage = d;
	}

	void setDamage(int d)
	{
		this->damage = d;
	}

	void setName(string n)
	{
		this->name = n;
	}
	
	template<class T>
	void attack(T& t)
	{
		srand(time(NULL));
		int diceRoll;
		diceRoll = rand() % 6 + 1;
		if (diceRoll > 2)
		{
			diceRoll = damage + diceRoll - t.vitality;
			t.health = t.health - diceRoll;
			cout << "\n";
			cout << name << " наносит удар." << endl;
			cout << t.name << " получает " << diceRoll << " единиц урона!\n";
		}
	}	
};
