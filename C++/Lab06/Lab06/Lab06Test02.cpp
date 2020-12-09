#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>


using namespace std;

//Запись массива в файл

int* max_vect(int kc, int a[], int b[]) {
	for (int i = 0; i < kc; i++) {
		if (a[i] < b[i]) {
			swap(a[i], b[i]);
		}
	}
	return a;
}

//void arrayPrint(int a[], int kc) {
//	for (int i = 0; i < kc; i++) {
//		cout << a[i] << " ";
//	}
//}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
	int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };

	int kc = sizeof(a) / sizeof(a[0]);
	int* c;
	c = max_vect(kc, a, b);

	cout << "Результаты записаны в файл Lab06Test02.txt" << endl;

	ofstream out("Lab06Test02.txt", ios::out);
	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}
	out << "Исходные массивы:" << endl;
	for (int i = 0; i < kc; i++) {
		out << a[i] << " ";
	}
	out << endl;
	for (int i = 0; i < kc; i++) {
		out << b[i] << " ";
	}
	out << endl;
	out << "Полученный массив:" << endl;
	for (int i = 0; i < kc; i++) {
		out << c[i] << " ";
	}
	out.close();

	delete[]c;

	return 0;
}