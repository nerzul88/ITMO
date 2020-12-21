#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

bool Input(int, int);

bool Input(int a, int b) {	
	if (isdigit(a) && isdigit(a))
		return true;
	else
		return false;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a, b;
	cout << "¬ведите число a: ";
	cin >> a;
	cout << "¬ведите число b: ";
	cin >> b;
	if (Input(a, b) == false) {
		cerr << "error";
		return 1;
	}

	int s = a + b;	
	cout << a << "+" << b << "=" << s << endl;
	return 0;
}