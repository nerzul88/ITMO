#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "sufferer.h"
#include "game.h"
#include <vector>
#include <array>
#include <fstream>
#include <Windows.h>

using namespace std;
using namespace Game;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    NewGame::startGame();
    return 0;
}
