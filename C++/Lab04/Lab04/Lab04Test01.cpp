//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
////Решение квадратного уравнения
//
//int myRoots(double, double, double, double&, double&);
//
//int myRoots(double a, double b, double c, double *x1, double *x2) {
//
//	double d;
//
//	if (a == 0.0 && b == 0.0 && c == 0.0)
//		return -1;
//	else {
//		if (a == 0.0) {
//			if(b == 0.0)
//				return -1;
//			*x1 = -c / b;
//			return 0;
//		}
//		else{
//			d = b * b - 4.0 * a * c;
//			if (d < 0.0)
//				return -1;
//			else {
//				if (d == 0.0) {
//					*x1 = -b / (2.0 * a);
//					return 0;
//				}
//				else {
//					*x1 = (-b - sqrt(d)) / (2.0 * a);
//					*x2 = (-b + sqrt(d)) / (2.0 * a);
//					return 1;
//				}
//			}
//		}
//			
//	}
//}
//
//
//void print(int x1, int x2) {
//	cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
//}
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	double a, b, c;
//	double x1, x2;
//
//	cout << "Введите a: ";
//	cin >> a;
//	cout << "Введите b: ";
//	cin >> b;
//	cout << "Введите c: ";
//	cin >> c;
//
//	switch (myRoots(a, b, c, &x1, &x2)) {
//	case -1:
//		cout << "Корней уравнения не существует";
//		break;
//	case 0:
//		cout << "Корни уравнения совпадают:" << endl;
//		cout << "x1 = " << x1 << endl;
//		break;
//	case 1:
//		cout << "У уравнения два корня:" << endl;
//		cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
//		break;
//	}
//
//	return 0;
//}