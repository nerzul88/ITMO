#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x1, x2, x3, x4, x5;
	double y1, y2, y3, y4, y5;
	double s;
	cout << "Введите координаты первой точки пятиугольника: " << endl;
	cout << "x1 = "; cin >> x1;
	cout << "y1 = "; cin >> y1; cout << endl;
	cout << "Введите координаты второй точки пятиугольника: " << endl;
	cout << "x2 = "; cin >> x2;
	cout << "y2 = "; cin >> y2; cout << endl;
	cout << "Введите координаты третьей точки пятиугольника: " << endl;
	cout << "x3 = "; cin >> x3;
	cout << "y3 = "; cin >> y3; cout << endl;
	cout << "Введите координаты четвёртой точки пятиугольника: " << endl;
	cout << "x4 = "; cin >> x4;
	cout << "y4 = "; cin >> y4; cout << endl;
	cout << "Введите координаты пятой точки пятиугольника: " << endl;
	cout << "x5 = "; cin >> x5;
	cout << "y5 = "; cin >> y5; cout << endl;

	s = fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;
	cout << "Площадь пятиугольника равна: " << s << endl;
	return 0;
}