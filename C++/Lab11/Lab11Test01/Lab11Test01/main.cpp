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

	cout << "Введите данные для первой временной точки: " << endl;
	cout << "Часы: " << endl;
	cin >> hours;
	cout << "Минуты: " << endl;
	cin >> minutes;
	cout << "Секунды: " << endl;
	cin >> seconds;
	Time time01 =  Time(hours, minutes, seconds);
	cout <<"Время №1 = "<< time01<< endl;
	cout << "Введите данные для второй временной точки: ";
	cout << "Часы: " << endl;
	cin >> hours;
	cout << "Минуты: " << endl;
	cin >> minutes;
	cout << "Секунды: " << endl;
	cin >> seconds;
	Time time02 = Time(hours, minutes, seconds);
	cout <<"Время №2 = "<< time02 << endl;
	cout << "Результаты вычислений: " << endl;
	Time time03 = time01 + time02;
	cout << "Время №3 = Время №1 + Время №2 = "<< time03<< endl;
	Time time04 = time03 - time02;
	cout << "Время №4 = Время №3 - Время №2 = " << time04 << endl;
	int time04int = (int)time04;
	cout << "Время №4 (int) = " << time04int << endl;
	Time time05 = time03 + 320;
	cout << "Время №5 = Время №3 + 555 = " << time05 << endl;
	Time time06 = 555 + time03;
	cout << "Время №6 = 666 + Время №3 = " << time06 << endl;
	int compResult = time01 > time02;
	cout << "Сравнение времени" << endl;
	cout << "Время №1 > Время №2 ?" << compResult << endl;
	cout << "Если 1 - истина; если -1 - ложь, если 0 - равенство "  << endl;
	return 0;
}