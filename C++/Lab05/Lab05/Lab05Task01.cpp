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
//	double m = s / n; //среднее арифметическое элементов
//
//	int sp = 0; //сумма положительных элементов
//	int sn = 0; //сумма отрицательных элементов
//	for (int i = 0; i < n; i++) {
//		if (mas[i] < 0)
//			sn += mas[i];
//		else
//			sp += mas[i];
//	}
//
//	int se = 0; //сумма чётных элементов
//	int so = 0; //сумма нечётных элементов
//	for (int i = 0; i < n; i++) {
//		if (mas[i] % 2 == 0)
//			se += mas[i];
//		else
//			so += mas[i];
//	}
//
//	cout << "Сумма всех элементов массива равна " << s << endl;
//	cout << "Среднее арифметическое элементов массива: " << m << endl;
//	cout << "Сумма всех положительных элементов массива: " << sp << endl;
//	cout << "Сумма всех отрицательных элементов массива: " << sn << endl;
//	cout << "Сумма всех чётных элементов массива: " << se << endl;
//	cout << "Сумма всех нечётных элементов массива: " << so << endl;
//
//	return 0;
//}