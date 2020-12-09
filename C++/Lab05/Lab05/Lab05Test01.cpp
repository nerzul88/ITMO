//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
//void showArray(const int, const int);
//void sum(const int, const int);
//void average(const int, const int);
//void sumPositive(const int, const int);
//void sumNegative(const int, const int);
//void sumEven(const int, const int);
//void sumOdd(const int, const int);
//
//
////вывод массива
//void showArray(const int Arr[], const int N) {
//	for (int i = 0; i < N; i++) {
//		cout << Arr[i] << " ";
//	}
//	cout << "\n";
//}
//
////сумма элементов массива
////среднее арифметическое элементов
//void sum(const int Arr[], const int N) {
//	int s = 0;
//	for (int i = 0; i < N; i++) {
//		s += Arr[i];
//	}
//	double m = s / N;
//	cout << "Сумма всех элементов массива равна " << s << endl;
//	cout << "Среднее арифметическое всех элементов массива: " << m << endl;
//}
//
////сумма положительных элементов
//void sumPositive(const int Arr[], const int N) {
//	int sp = 0; 
//	for (int i = 0; i < N; i++) {
//		if (Arr[i] >= 0)
//			sp += Arr[i];
//	}
//	cout << "Сумма всех положительных элементов массива: " << sp << endl;
//}
//
////сумма отрицательных элементов
//void sumNegative(const int Arr[], const int N) {
//	int sn = 0;
//	for (int i = 0; i < N; i++) {
//		if (Arr[i] < 0)
//			sn += Arr[i];
//	}
//	cout << "Сумма всех отрицательных элементов массива: " << sn << endl;
//}
//
////сумма чётных элементов
//void sumOdd(const int Arr[], const int N) {
//	int so = 0;
//	for (int i = 0; i < N; i++) {
//		if (Arr[i] % 2 != 0)
//			so += Arr[i];
//	}
//	cout << "Сумма всех чётных элементов массива: " << so << endl;
//}
//
////сумма нечётных элементов
//void sumEven(const int Arr[], const int N) {
//	int se = 0;
//	for (int i = 0; i < N; i++) {
//		if (Arr[i] % 2 == 0)
//			se += Arr[i];
//	}
//	cout << "Сумма всех чётных элементов массива: " << se << endl;
//}
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	const int n = 10;
//	/*int mas[n];
//
//	for (int i = 0; i < n; i++) {
//		cout << "mas[" << i << "] = ";
//		cin >> mas[i];
//	}*/
//	int mas[n] = { 1, 2, 3, -4, -5, 6, -7, 8, 9, -2 };
//
//	showArray(mas, n);
//	sum(mas, n);	
//	sumPositive(mas, n);
//	sumNegative(mas, n);
//	sumOdd(mas, n);
//	sumEven(mas, n);
//	return 0;
//}