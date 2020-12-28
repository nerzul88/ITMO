#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "item.h"
#include "sufferer.h"
#include "player.h"
#include "armor.h"
#include "weapon.h"
#include "generator.h"
#include "leprous.h"
#include <vector>
#include <array>
#include <fstream>
#include <map>

using namespace std;

namespace Game
{
	class NewGame
	{
	public:
		static void startGame()
		{
			map<string, int>result;
			string ask;
			cout << "Вы оказались в средневековом городе - рассаднике чумы." << endl;
			cout << "Попытаетесь выбраться (y) или останетесь страдать (n)?" << endl;
			cin >> ask;

			while (ask == "y")
			{
				Player player = NewGame::create();
				int round = 1;
				int ch = 0;
				int levelDist = 200;
				int score = 0;
				vector<Leprous>epull;
				epull.push_back(Generator::gen());

				while (player.health > 0)
				{
					cout << player.name << " : " << player.health << " очков святого духа. " << endl;
					if (round % 3 == 0)
					{
						epull.push_back(Generator::gen());
					}
					round++;

					cout << "\nНападает прокажённый!" << endl;
					cout << "Пытаемся увернуться и убежать (1) или отбиваемся (2)?" << endl;
					cin >> ch;
					if (ch == 2)
					{
						if (!epull.empty())
						{
							player.attack(epull[0]);
							if (epull[0].health <= 0)
							{
								cout << epull[0].name << " мёртв. " << player.name << " зарабатывает 10 очков святого духа!\n";
								epull.pop_back();
								score += 10;
							}
						}
						else
							cout << "Пока что не от кого отбиваться." << endl;
					}

					else if (ch == 1)
					{
						if (!epull.empty())
						{
							for (Leprous e : epull)
							{
								e.attack(player);
							}
							epull[0].dist = epull[0].dist - player.speed - epull[0].speed;
							if (epull[0].dist <= 0)
							{
								player.health = 0;
							}
						}
						cout << "\nВам удалось продвинуться в следующий квартал!" << endl;
						cout << "Но..." << endl;
						levelDist -= player.speed;

						if (levelDist <= 0)
						{
							score += 100;
							levelDist = 200;
							cout << "\nВаши очки: " << score << "! Поворачиваем в другой квартал.\n";
							epull.clear();
						}
					}
				}
				cout << "\nВаш путь окончен! Вы умираете и будете вечно страдать в аду на радость инквизиции!" << endl;
				cout << "Для утешения страданий вы заработали " << score << " очков, чтобы облегчить свои муки!" << endl;
				cout << "Но это не надолго..." << endl;
				
				result.insert(pair<string, int>(player.name, score));
				
				ofstream fileOut;

				fileOut.open("results.txt");
				for (auto it = result.begin(); it != result.end(); ++it)
				{
					fileOut << "\nИгрок: " << it->first << " Очки: " << it->second << endl;
				}

				fileOut.close();

				string resText;
				ifstream fileIn;
				fileIn.open("results.txt");
				while (fileIn)
				{
					getline(fileIn, resText);
					cout << resText << endl;
				}
				fileIn.close();

				std::cout << "\nПопытаетесь переродиться и выбраться снова (y) или останетесь гореть (n)?" << endl;
				std::cin >> ask;
			}

		}

		static Player create()
		{
			string name;
			int choice;
			cout << "Допустим, вы каким-то чудом научились писать." << endl;
			cout << "Введите ваше имя: " << endl;
			cin >> name;
			Player player(name);
			cout << "Учтите, что прокажённые не дадут вам выбраться из города живым." << endl;
			cout << "Придётся отбиваться от них или уклоняться." << endl;
			cout << "\n";
			cout << "В узком переулке вы видете валяющиеся в грязи дубину (1) и вилы (2)." << endl;
			cout << "У вас есть силы орудовать чем-то одним." << endl;		
			cout << "Что подберете (1/2)?" << endl;
			cin >> choice;
			if (choice == 1)
			{
				Club w;
				player.equip(w, 0);
				cout << "Неплохая дубина." << endl;
				cout << "Тяжеловата, но по голове такой хорошо прилетит, если попадёшь." << endl;
				cout << "\n";
			}
			else if (choice == 2)
			{
				Pitchfork w;
				player.equip(w, 0);
				cout << "Значит, вилы..." << endl;
				cout << "Ну, такими когда-то даже ведьмака заколоть смогли." << endl;
				cout << "\n";
			}
			else
			{
				cout << "Да вы смельчак! Порхайте как бабочка, потому что жалить вам уже нечем!" << endl;
			}

			cout << "\n";
			cout << "За углом вы наткнулись на два трупа. Это стражник и рыцарь." << endl;
			cout << "Неплохо было бы помародёрствовать одёжкой!" << endl;
			cout << "На стражнике надета дублёная кожаная броня (1) - лёгкая, в ней хорошо уворачиваться, но защищает так себе." << endl;
			cout << "На рыцаре надеты помятые железные доспехи - защита хорошая, но в них особо не попрыгаешь." << endl;
			cout << "Что наденете (1/2)?" << endl;
			cin >> choice;
			if (choice == 1)
			{
				DeadKnightClothing ar;
				player.equip(ar, 1);
				cout << "Неплохой выбор!" << endl;
				cout << "Можно и уворачиваться, и по голове не так больно получать!" << endl;
				cout << "\n";
			}

			else if (choice == 2)
			{
				Rags ar;
				player.equip(ar, 1);
				cout << "Да вы продуманный!" << endl;
				cout << "Правда, в таком панцире не разбежишься..." << endl;
				cout << "\n";
			}

			else
			{
				cout << "Считаете себя бессмертным? Или вы просто глупец?" << endl;
				cout << "Так уж и быть, отправляйтесь налегке." << endl;
				cout << "\n";
			}

			player.Info();
			return player;
		}
	};
}