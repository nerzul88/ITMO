#include <iostream>
#include <Windows.h>


using namespace std;

class Triangle
{

	class Dot
	{
	private:
		double x;
		double y;

	public:
		Dot()
		{
			x = 0;
			y = 0;
		}
		Dot(double x, double y)
		{
			this->x = x;
			this->y = y;
		}
		double distanceTo(Dot point)
		{
			return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
		}

	};

public:

	Dot pointA = Dot(1, 1);
	Dot pointB = Dot(3, 2);
	Dot pointC = Dot(3, 1);

	//Конструктор
	Triangle(){}
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
	

	Triangle triangle1;
	triangle1.getTriangleSide();
	triangle1.getTrianglePerimeter();
	triangle1.getTriangleArea();
}