#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
public:
	int durability = 30;
	int weight = 0;
	int damage = 0;
	int protection = 0;
	string name = "";

	Item() {}
	Item(string n, int w, int d, int p)
	{
		this->name = n;
		this->protection = p;
		this->damage = d;
		this->weight = w;
	}

	void setN(string n)
	{
		this->name = n;
	}

	void setW(int w)
	{
		this->weight = w;
	}

	void setD(int d)
	{
		this->damage = d;
	}

	void setP(int p)
	{
		this->protection = p;
	}

	void setDur()
	{
		this->durability = 30;
	}

	void useItem()
	{
		durability--;
		if (durability == 0)
		{
			cout << name << " сломан." << endl;
			protection = 0;
			damage = 0;
		}
	}
};
