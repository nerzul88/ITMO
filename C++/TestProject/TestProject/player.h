#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"
#include "sufferer.h"

class Player : public Sufferer {
public:
	Item inventory[2];
	int health = 50;
	int speed = 70;
	int vitality = 0;

	Player() {}
	Player(string name) : Sufferer(name, 0)
	{
	}

	void setSpeed(int s)
	{
		this->speed = s;
	}

	void setArmor(int a)
	{
		this->vitality = a;
	}
	
	template<class T>
	void equip(T it, int i)
	{
		this->inventory[i] = it;
		setSpeed(speed -= it.weight);
		setDamage(damage + it.damage);
		setArmor(vitality + it.protection);
	}		

	void Info()
	{
		std::cout << "\n";
		std::cout << name << "\n";
		std::cout << "Оружие: " << inventory[0].name << "\n";
		std::cout << "Здоровье: " << health
			<< "\nБроня: " << inventory[1].protection << " очков. "
			<< "Скорость передвижения: " << speed << " метров за ход. " << endl;
	}
};