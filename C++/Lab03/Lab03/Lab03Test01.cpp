//#include <iostream>
//#include <windows.h>
//#include <math.h>
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
//double edgeLength(double x1, double y1, double x2, double y2) {
//	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//}
//
//double semiPerimeter(double a, double b, double c) {
//	return (a + b + c) / 2;
//}
//
//double triangleSquare(double a, double b, double c, double p) {
//	return sqrt(p * (p - a) * (p - b) * (p - c));
//}
//
//double pentagonSquare(double s1, double s2, double s3) {
//	return s1 + s2 + s3;
//}
//
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	//cout.precision(3);
//
//	double x1, x2, x3, x4, x5;
//	double y1, y2, y3, y4, y5;
//	cout << "Введите координату первой точки пятиугольника: " << endl;
//	cout << "x1 = "; cin >> x1;
//	cout << "y1 = "; cin >> y1;
//	cout << "Введите координату второй точки пятиугольника: " << endl;
//	cout << "x2 = "; cin >> x2;
//	cout << "y2 = "; cin >> y2;
//	cout << "Введите координату третьей точки пятиугольника: " << endl;
//	cout << "x3 = "; cin >> x3;
//	cout << "y3 = "; cin >> y3;
//	cout << "Введите координату четвёртой точки пятиугольника: " << endl;
//	cout << "x4 = "; cin >> x4;
//	cout << "y4 = "; cin >> y4;
//	cout << "Введите координату пятой точки пятиугольника: " << endl;
//	cout << "x5 = "; cin >> x5;
//	cout << "y5 = "; cin >> y5;
//
//	double a = edgeLength(x1, y1, x5, y5);
//	double b = edgeLength(x1, y1, x2, y2);
//	double c = edgeLength(x2, y2, x3, y3);
//	double d = edgeLength(x3, y3, x4, y4);
//	double e = edgeLength(x4, y4, x5, y5);
//	double f = edgeLength(x2, y2, x5, y5);
//	double g = edgeLength(x3, y3, x5, y5);
//	double p1 = semiPerimeter(a, b, f);
//	double p2 = semiPerimeter(c, f, g);
//	double p3 = semiPerimeter(d, e, g);
//	double s1 = triangleSquare(a, b, f, p1);
//	double s2 = triangleSquare(c, f, g, p2);
//	double s3 = triangleSquare(d, e, g, p3);
//	cout << "Площадь пятиугольника равна " << pentagonSquare(s1, s2, s3);
//	return 0;
//}