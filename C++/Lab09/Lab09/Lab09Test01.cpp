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
//		cout << "����� ������� ������� ������������" << endl;
//		double a, b, c;
//		cout << "������� ����� ������� a: " << endl;
//		cin >> a;
//		cout << "������� ����� ������� b: " << endl;
//		cin >> b;
//		cout << "������� ����� ������� c: " << endl;
//		cin >> c;
//		cout << "������� ������������ �����: " << myTriangle.getEdges(a, b, c) << endl;
//	}
//	catch (const double ex)
//	{
//		cout << "���-�� �� ��� � ������ " << ex << endl;
//	}
//
//	return 0;
//}