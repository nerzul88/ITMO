#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "player.h"

using namespace std;

class Club : public Item {
public:
	Club() : Item()	{
		setN("Дубина");
		setW(10);
		setD(20);
	}
};

class Pitchfork : public Item {
public:
	Pitchfork() : Item() {
		setN("Вилы");
		setW(5);
		setD(10);
	}
};