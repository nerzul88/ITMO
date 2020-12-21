//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std;
//
//int addNumbers(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return(n + addNumbers(n - 1));
//}
//
//int addNumbers(int* n, int m) {
//	if (m == *n)
//		return *n;
//	else
//		return(m + addNumbers(m - 1));
//}
//
//int gcd(int m, int n) {
//	if (n == 0)
//		return m;
//	return gcd(n, m % n);
//}
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	cout.precision(3);
//
//	int n, m;
//	cout << "Введите число n, большее 1: " << endl;
//	cin >> n;
//	cout << "Введите второе число m, большее n: " << endl;
//	cin >> m;
//	
//	cout << "Сумма чисел от 1 до n: " << addNumbers(n) << endl;
//	cout << "Сумма чисел от n до m: " << addNumbers(&n, m) << endl;
//	cout << "НОД n и m: " << gcd(m, n) << endl;
//	return 0;
//}