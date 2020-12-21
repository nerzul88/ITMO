//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
////Размен монет
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	const int r5000 = 5000;
//	const int r2000 = 2000;
//	const int r1000 = 1000;
//	const int r500 = 500;
//	const int r200 = 200;
//	const int r100 = 100;
//	const int r50 = 50;
//	const int r10 = 10;
//	const int r5 = 5;
//	const int r2 = 2;
//	const int r1 = 1;
//	int s;
//	cout << "Введите сумму: " << endl;
//	cin >> s;
//
//	if (s < r5000)
//		cout << r5000 << " = 0";
//	else
//		cout << r5000 << " = " << s / r5000 << endl;
//	s %= r5000;
//
//	if (s < r2000)
//		cout << r2000 << " = 0";
//	else
//		cout << r2000 << " = " << s / r2000 << endl;
//	s %= r2000;
//
//	if (s < r1000)
//		cout << r1000 << " = 0";
//	else
//		cout << r1000 << " = " << s / r1000 << endl;
//	s %= r1000;
//
//	if (s < r500)
//		cout << r500 << " = 0";
//	else
//		cout << r500 << " = " << s / r500 << endl;
//	s %= r500;
//
//	if (s < r200)
//		cout << r200 << " = 0";
//	else
//		cout << r200 << " = " << s / r200 << endl;
//	s %= r200;
//
//	if (s < r100)
//		cout << r100 << " = 0";
//	else
//		cout << r100 << " = " << s / r100 << endl;
//	s %= r100;
//
//	if (s < r50)
//		cout << r50 << " = 0";
//	else
//		cout << r50 << " = " << s / r50 << endl;
//	s %= r50;
//
//	if (s < r10)
//		cout << r10 << " = 0";
//	else
//		cout << r10 << " = " << s / r10 << endl;
//	s %= r10;
//
//	if (s < r5)
//		cout << r5 << " = 0";
//	else
//		cout << r5 << " = " << s / r5 << endl;
//	s %= r5;
//
//	if (s < r2)
//		cout << r2 << " = 0";
//	else
//		cout << r2 << " = " << s / r2 << endl;
//	s %= r2;
//
//	cout << r1 << " = " << s << endl;
//
//
//
//	/*int banknotes_amount = 0;
//	int banknotes_value[11] = { 5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1 };
//	int banknotes_used[11];
//	for (int i = 0; i < 9; i++) {
//		banknotes_used[i] = 0;
//	}
//
//	int money;
//	cout << "Введите сумму: " << endl;
//	cin >> money;
//	while (money != 0) {
//		for (int i = 10; i >= 0; i--) {
//			if (money >= banknotes_value[i]) {
//				money -= banknotes_value[i];
//				banknotes_amount++;
//				banknotes_used[i]++;
//				break;
//			}
//		}
//	}
//
//	cout << "Количество денежного номинала: " << banknotes_amount << endl;
//	cout << "Сумму " << money << " удалось разменять на ";
//	for (int i = 0; i < 11; i++) {
//		cout << banknotes_used[i] << "денежных единиц величиной " << banknotes_value[i] << endl;
//	}*/
//	
//	return 0;
//}