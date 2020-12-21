//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
//void cubicRootEasy(double a) {
//	double x;
//	x = pow(a, 1.0 / 3);
//	cout << x << endl;
//}
//
//void cubicRootHard(double a) {
//	const double e = 1e-5;
//	double x_prev;
//	double x_curr = a / 3.0;
//	do {
//		x_prev = x_curr;
//		x_curr = (a / (x_prev * x_prev) + 2.0 * x_prev) / 3.0;
//	} while (abs(x_prev - x_curr) >= e);
//	cout.precision(6);
//	cout << x_curr << endl;
//}
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	double a;
//	cout << "������� ���� ��� ���������� ����������� �����: " << endl;
//	cin >> a;
//
//	cout << "���������� ������ " << a << " ��� ���������� ����� ����������� ������� 'pow' �����: " << endl;
//	cubicRootEasy(a); cout << endl;
//	cout << "���������� ������ " << a << " ��� ���������� ����� ������������ ������� �� �������� �������� 1e-5 �����: " << endl;
//	cubicRootHard(a);
//	
//	return 0;	
//}