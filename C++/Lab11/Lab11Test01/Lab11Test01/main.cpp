#include <iostream>
#include <string>
#include <Windows.h>
#include "time.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int hours;
	int minutes;
	int seconds;

	cout << "������� ������ ��� ������ ��������� �����: " << endl;
	cout << "����: " << endl;
	cin >> hours;
	cout << "������: " << endl;
	cin >> minutes;
	cout << "�������: " << endl;
	cin >> seconds;
	Time time01 =  Time(hours, minutes, seconds);
	cout <<"����� �1 = "<< time01<< endl;
	cout << "������� ������ ��� ������ ��������� �����: ";
	cout << "����: " << endl;
	cin >> hours;
	cout << "������: " << endl;
	cin >> minutes;
	cout << "�������: " << endl;
	cin >> seconds;
	Time time02 = Time(hours, minutes, seconds);
	cout <<"����� �2 = "<< time02 << endl;
	cout << "���������� ����������: " << endl;
	Time time03 = time01 + time02;
	cout << "����� �3 = ����� �1 + ����� �2 = "<< time03<< endl;
	Time time04 = time03 - time02;
	cout << "����� �4 = ����� �3 - ����� �2 = " << time04 << endl;
	int time04int = (int)time04;
	cout << "����� �4 (int) = " << time04int << endl;
	Time time05 = time03 + 320;
	cout << "����� �5 = ����� �3 + 555 = " << time05 << endl;
	Time time06 = 555 + time03;
	cout << "����� �6 = 666 + ����� �3 = " << time06 << endl;
	int compResult = time01 > time02;
	cout << "��������� �������" << endl;
	cout << "����� �1 > ����� �2 ?" << compResult << endl;
	cout << "���� 1 - ������; ���� -1 - ����, ���� 0 - ��������� "  << endl;
	return 0;
}