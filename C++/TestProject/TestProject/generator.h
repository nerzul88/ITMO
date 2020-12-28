#pragma once
#include "leprous.h"

class Generator
{
public:

	static Leprous gen()
	{
		int diceRoll;
		srand(time(NULL));
		diceRoll = rand() % 6 + 1;

		Leprous e(diceRoll * 5, diceRoll * 10, diceRoll + 25);
		return e;
	}
};