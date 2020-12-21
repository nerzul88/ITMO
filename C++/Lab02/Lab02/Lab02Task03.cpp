//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	srand(time(NULL));
//	int a, b, c;
//	int k = 0, n = 10;
//
//	for (int i = 0; i <= n; i++) {
//		a = rand() % 10 + 1;
//		b = rand() % 10 + 1;
//		cout << a << " * " << b << " = ";
//		cin >> c;
//
//		if (a * b != c) {
//			k++;
//			cout << "Ошибка! ";
//			cout << a << " * " << b << " = " << a * b << endl;
//		}
//	}
//
//	cout << "Всего ошибок: " << k << endl;
//	return 0;	
//}