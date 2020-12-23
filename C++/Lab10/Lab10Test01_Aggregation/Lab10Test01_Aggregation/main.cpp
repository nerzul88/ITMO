#include <iostream>
#include <Windows.h>
#include "dot.h"

using namespace std;

class Triangle
{
private:
	Dot pointA;
	Dot pointB;
	Dot pointC;

public:
	//Коструктор параметров координат
	Triangle(Dot pA, Dot pB, Dot pC)
	{
		this->pointA = pA;
		this->pointB = pB;
		this->pointC = pC;
	}

	//Получение сторон треугольника
	void getTriangleSide()
	{
		cout << "Длина стороны AB равна: " << pointA.distanceTo(pointB) << endl;
		cout << "Длина стороны ВС равна: " << pointB.distanceTo(pointC) << endl;
		cout << "Длина стороны СА равна: " << pointC.distanceTo(pointA) << endl;
	}
	//Вычисление периметра треугольника
	void getTrianglePerimeter()
	{
		cout << "Периметр треугольника равен: " << 
			pointA.distanceTo(pointB) + pointB.distanceTo(pointC) + pointC.distanceTo(pointA) << endl;
	}
	//Вычисление площади треугольника по формуле Герона
	void getTriangleArea()
	{
		//Вычисление полупериметра
		double p = (pointA.distanceTo(pointB) + pointB.distanceTo(pointC) + pointC.distanceTo(pointA)) / 2;
		//Вычисление площади
		cout << "Площадь треугольника равна: " << sqrt(p * (p - pointA.distanceTo(pointB)) * 
			(p - pointB.distanceTo(pointC)) * (p - pointC.distanceTo(pointA))) << endl;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double xA, xB, xC;
	double yA, yB, yC;
	//Запрос ввода координат точек вершин треугольника
	cout << "Введите координаты вершин треугольника: " << endl;
	cout << "Введите координаты точки А: " << endl;
	cout << "xА = "; cin >> xA;
	cout << "yA = "; cin >> yA;
	cout << "Введите координаты точки B: " << endl;
	cout << "xB = "; cin >> xB;
	cout << "yB = "; cin >> yB;
	cout << "Введите координаты точки C: " << endl;
	cout << "xC = "; cin >> xC;
	cout << "yC = "; cin >> yC;
	Dot pA(xA, yA);
	Dot pB(xB, yB);
	Dot pC(xC, yC);

	Triangle triangle1(pA, pB, pC);
	triangle1.getTriangleSide();
	triangle1.getTrianglePerimeter();
	triangle1.getTriangleArea();
}