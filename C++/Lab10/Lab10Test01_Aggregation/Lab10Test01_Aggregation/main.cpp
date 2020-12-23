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
	//���������� ���������� ���������
	Triangle(Dot pA, Dot pB, Dot pC)
	{
		this->pointA = pA;
		this->pointB = pB;
		this->pointC = pC;
	}

	//��������� ������ ������������
	void getTriangleSide()
	{
		cout << "����� ������� AB �����: " << pointA.distanceTo(pointB) << endl;
		cout << "����� ������� �� �����: " << pointB.distanceTo(pointC) << endl;
		cout << "����� ������� �� �����: " << pointC.distanceTo(pointA) << endl;
	}
	//���������� ��������� ������������
	void getTrianglePerimeter()
	{
		cout << "�������� ������������ �����: " << 
			pointA.distanceTo(pointB) + pointB.distanceTo(pointC) + pointC.distanceTo(pointA) << endl;
	}
	//���������� ������� ������������ �� ������� ������
	void getTriangleArea()
	{
		//���������� �������������
		double p = (pointA.distanceTo(pointB) + pointB.distanceTo(pointC) + pointC.distanceTo(pointA)) / 2;
		//���������� �������
		cout << "������� ������������ �����: " << sqrt(p * (p - pointA.distanceTo(pointB)) * 
			(p - pointB.distanceTo(pointC)) * (p - pointC.distanceTo(pointA))) << endl;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double xA, xB, xC;
	double yA, yB, yC;
	//������ ����� ��������� ����� ������ ������������
	cout << "������� ���������� ������ ������������: " << endl;
	cout << "������� ���������� ����� �: " << endl;
	cout << "x� = "; cin >> xA;
	cout << "yA = "; cin >> yA;
	cout << "������� ���������� ����� B: " << endl;
	cout << "xB = "; cin >> xB;
	cout << "yB = "; cin >> yB;
	cout << "������� ���������� ����� C: " << endl;
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