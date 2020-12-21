#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

void triangleSquare(double a) {
	double s;
	s = (sqrt(3) / 4) * (a * a);
	cout << "ѕлощадь равностороннего треугольника равна " << s << endl;
}

void triangleSquare(double a, double b, double c) {
	double s;
	double p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "ѕлощадь разностороннего треугольника равна " << s << endl;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int typeOfTriangle;
	double a, b, c;
	cout << "¬ведите 1, чтобы вычислить площадь равностороннего треугольника, или введите 2, чтобы вычислить площадь разностороннего треугольника: " << endl;
	cin >> typeOfTriangle;
	if (typeOfTriangle == 1) {
		cout << "¬ведите длину стороны равностороннего треугольника: " << endl;
		cin >> a;
		triangleSquare(a);
	}
	else if (typeOfTriangle == 2){
		cout << "¬ведите длину стороны a: " << endl;
		cout << "a = "; cin >> a; cout << endl;
		cout << "¬ведите длину стороны b: " << endl;
		cout << "b = "; cin >> b; cout << endl;
		cout << "¬ведите длину стороны c: " << endl;
		cout << "c = "; cin >> c; cout << endl;
		triangleSquare(a, b, c);
	}
	else {
		cout << "¬ведены неверные данные" << endl;
	}

	

	

	return 0;
}