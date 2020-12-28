#pragma once
#include "sufferer.h"

class Leprous : public Sufferer
{
public:
	int dist = 10000;
	int health;
	int speed;

	int vitality = 0;
	
	Leprous(int h, int s, int d) :Sufferer(d)
	{
		this->speed = s;
		this->health = h;
		setName(" Прокажённый ");
	}

};