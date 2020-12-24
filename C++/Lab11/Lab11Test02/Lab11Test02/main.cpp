#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include <algorithm>
#include "point.h"


using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // “ребуетс€ перергрузка оператора < дл€ класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // “ребуетс€ перергрузка оператора << дл€ класса Point

	return 0;
}