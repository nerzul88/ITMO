//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	const int n = 10;
//	int mas[n];
//
//	for (int i = 0; i < n; i++) {
//		cout << "mas[" << i << "] = ";
//		cin >> mas[i];
//	}
//
//	int s = 0;
//	for (int i = 0; i < n; i++) {
//		s += mas[i];
//	}
//
//	double m = s / n; //������� �������������� ���������
//
//	int sp = 0; //����� ������������� ���������
//	int sn = 0; //����� ������������� ���������
//	for (int i = 0; i < n; i++) {
//		if (mas[i] < 0)
//			sn += mas[i];
//		else
//			sp += mas[i];
//	}
//
//	int se = 0; //����� ������ ���������
//	int so = 0; //����� �������� ���������
//	for (int i = 0; i < n; i++) {
//		if (mas[i] % 2 == 0)
//			se += mas[i];
//		else
//			so += mas[i];
//	}
//
//	cout << "����� ���� ��������� ������� ����� " << s << endl;
//	cout << "������� �������������� ��������� �������: " << m << endl;
//	cout << "����� ���� ������������� ��������� �������: " << sp << endl;
//	cout << "����� ���� ������������� ��������� �������: " << sn << endl;
//	cout << "����� ���� ������ ��������� �������: " << se << endl;
//	cout << "����� ���� �������� ��������� �������: " << so << endl;
//
//	return 0;
//}