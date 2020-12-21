//#include <iostream>
//#include <windows.h>
//#include <string>
//
//using namespace std;
//
//long double firBinSearch(double a, int n) {
//	double l = 0;
//	double r = a;
//	while (r - l > 1e-10){
//		double m = (l + r) / 2;
//		if (pow(m, n) < a)
//			l = m;
//		else
//			r = m;
//	}
//	return r;
//}
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	cout.precision(3);
//
//	double a;
//	int n;
//	cout << "¬ведите число больше 0, но меньше 1000: " << endl;
//	cin >> a;
//	cout << "¬ведите натуральное чило, не превосход€щее 10: " << endl;
//	cin >> n;
//
//	cout << firBinSearch(a, n);
//
//	return 0;
//}