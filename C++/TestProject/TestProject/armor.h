#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "player.h"

using namespace std;

class Rags : public Item {
public:
	Rags() :Item()
	{
		setN("������� �����");
		setP(8);
		setW(3);
	}
};

class DeadKnightClothing : public Item {
public:
	DeadKnightClothing() : Item()
	{
		setN("������� ������� ������");
		setP(30);
		setW(10);
	}
};