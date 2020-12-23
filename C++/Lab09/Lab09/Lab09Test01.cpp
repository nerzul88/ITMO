//#include <iostream>
//#include<string>
//#include <Windows.h>
//#include <math.h>
//
//using namespace std;
//
//class  Triangle
//{
//public:
//	
//	double getEdges(double a, double b, double c)
//	{
//		if (a > (b + c))
//		{
//			throw a;
//		}
//		else if (b > (a + c))
//		{
//			throw b;
//		}
//		else if (c > (a + b))
//		{
//			throw c;
//		}
//
//		double p = (a + b + c) / 2;
//		return sqrt(p * (p - a) * (p - b) * (p - c));
//	}
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	
//	Triangle myTriangle;
//	try
//	{
//		cout << "Будем считать площадь треугольника" << endl;
//		double a, b, c;
//		cout << "Введите длину стороны a: " << endl;
//		cin >> a;
//		cout << "Введите длину стороны b: " << endl;
//		cin >> b;
//		cout << "Введите длину стороны c: " << endl;
//		cin >> c;
//		cout << "Площадь треугольника равна: " << myTriangle.getEdges(a, b, c) << endl;
//	}
//	catch (const double ex)
//	{
//		cout << "Что-то не так с числом " << ex << endl;
//	}
//
//	return 0;
//}