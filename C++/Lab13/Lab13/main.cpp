#include <iostream>
#include <vector>
#include <Windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> scores;
	human* pubarr[100];
	int n = 0;
	char choice;
	string name;
	string last_name;
	string second_name;
	int working_hours;
	do
	{
		std::cout << "\nВводить данные о студентах(s) или преподавателях(t) ? ";
		std::cin >> choice;
		if (choice == 's') {
			pubarr[n] = new student();
		}
		else {
			pubarr[n] = new teacher();
		}
		pubarr[n++]->getdata();
		std::cout << "Продолжать(у / n) ? ";
		std::cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
		pubarr[j]->putdata();
	std::cout << std::endl;
	return 0;
}