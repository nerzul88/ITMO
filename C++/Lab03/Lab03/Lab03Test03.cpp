#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

void triangleSquare(double a) {
	double s;
	s = (sqrt(3) / 4) * (a * a);
	cout << "������� ��������������� ������������ ����� " << s << endl;
}

void triangleSquare(double a, double b, double c) {
	double s;
	double p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "������� ��������������� ������������ ����� " << s << endl;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int typeOfTriangle;
	double a, b, c;
	cout << "������� 1, ����� ��������� ������� ��������������� ������������, ��� ������� 2, ����� ��������� ������� ��������������� ������������: " << endl;
	cin >> typeOfTriangle;
	if (typeOfTriangle == 1) {
		cout << "������� ����� ������� ��������������� ������������: " << endl;
		cin >> a;
		triangleSquare(a);
	}
	else if (typeOfTriangle == 2){
		cout << "������� ����� ������� a: " << endl;
		cout << "a = "; cin >> a; cout << endl;
		cout << "������� ����� ������� b: " << endl;
		cout << "b = "; cin >> b; cout << endl;
		cout << "������� ����� ������� c: " << endl;
		cout << "c = "; cin >> c; cout << endl;
		triangleSquare(a, b, c);
	}
	else {
		cout << "������� �������� ������" << endl;
	}

	

	

	return 0;
}