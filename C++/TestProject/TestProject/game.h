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
			cout << "�� ��������� � ������������� ������ - ���������� ����." << endl;
			cout << "����������� ��������� (y) ��� ���������� �������� (n)?" << endl;
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
					cout << player.name << " : " << player.health << " ����� ������� ����. " << endl;
					if (round % 3 == 0)
					{
						epull.push_back(Generator::gen());
					}
					round++;

					cout << "\n�������� ����������!" << endl;
					cout << "�������� ���������� � ������� (1) ��� ���������� (2)?" << endl;
					cin >> ch;
					if (ch == 2)
					{
						if (!epull.empty())
						{
							player.attack(epull[0]);
							if (epull[0].health <= 0)
							{
								cout << epull[0].name << " ����. " << player.name << " ������������ 10 ����� ������� ����!\n";
								epull.pop_back();
								score += 10;
							}
						}
						else
							cout << "���� ��� �� �� ���� ����������." << endl;
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
						cout << "\n��� ������� ������������ � ��������� �������!" << endl;
						cout << "��..." << endl;
						levelDist -= player.speed;

						if (levelDist <= 0)
						{
							score += 100;
							levelDist = 200;
							cout << "\n���� ����: " << score << "! ������������ � ������ �������.\n";
							epull.clear();
						}
					}
				}
				cout << "\n��� ���� �������! �� �������� � ������ ����� �������� � ��� �� ������� ����������!" << endl;
				cout << "��� �������� ��������� �� ���������� " << score << " �����, ����� ��������� ���� ����!" << endl;
				cout << "�� ��� �� �������..." << endl;
				
				result.insert(pair<string, int>(player.name, score));
				
				ofstream fileOut;

				fileOut.open("results.txt");
				for (auto it = result.begin(); it != result.end(); ++it)
				{
					fileOut << "\n�����: " << it->first << " ����: " << it->second << endl;
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

				std::cout << "\n����������� ������������ � ��������� ����� (y) ��� ���������� ������ (n)?" << endl;
				std::cin >> ask;
			}

		}

		static Player create()
		{
			string name;
			int choice;
			cout << "��������, �� �����-�� ����� ��������� ������." << endl;
			cout << "������� ���� ���: " << endl;
			cin >> name;
			Player player(name);
			cout << "������, ��� ���������� �� ����� ��� ��������� �� ������ �����." << endl;
			cout << "������� ���������� �� ��� ��� ����������." << endl;
			cout << "\n";
			cout << "� ����� �������� �� ������ ���������� � ����� ������ (1) � ���� (2)." << endl;
			cout << "� ��� ���� ���� ��������� ���-�� �����." << endl;		
			cout << "��� ��������� (1/2)?" << endl;
			cin >> choice;
			if (choice == 1)
			{
				Club w;
				player.equip(w, 0);
				cout << "�������� ������." << endl;
				cout << "����������, �� �� ������ ����� ������ ��������, ���� �������." << endl;
				cout << "\n";
			}
			else if (choice == 2)
			{
				Pitchfork w;
				player.equip(w, 0);
				cout << "������, ����..." << endl;
				cout << "��, ������ �����-�� ���� �������� �������� ������." << endl;
				cout << "\n";
			}
			else
			{
				cout << "�� �� ��������! �������� ��� �������, ������ ��� ������ ��� ��� �����!" << endl;
			}

			cout << "\n";
			cout << "�� ����� �� ���������� �� ��� �����. ��� �������� � ������." << endl;
			cout << "������� ���� �� ���������������� ������!" << endl;
			cout << "�� ��������� ������ ������� ������� ����� (1) - �����, � ��� ������ �������������, �� �������� ��� ����." << endl;
			cout << "�� ������ ������ ������� �������� ������� - ������ �������, �� � ��� ����� �� ����������." << endl;
			cout << "��� �������� (1/2)?" << endl;
			cin >> choice;
			if (choice == 1)
			{
				DeadKnightClothing ar;
				player.equip(ar, 1);
				cout << "�������� �����!" << endl;
				cout << "����� � �������������, � �� ������ �� ��� ������ ��������!" << endl;
				cout << "\n";
			}

			else if (choice == 2)
			{
				Rags ar;
				player.equip(ar, 1);
				cout << "�� �� �����������!" << endl;
				cout << "������, � ����� ������� �� �����������..." << endl;
				cout << "\n";
			}

			else
			{
				cout << "�������� ���� �����������? ��� �� ������ ������?" << endl;
				cout << "��� �� � ����, ������������� �������." << endl;
				cout << "\n";
			}

			player.Info();
			return player;
		}
	};
}