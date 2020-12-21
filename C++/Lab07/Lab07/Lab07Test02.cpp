#include<iostream>
#include<Windows.h>

using namespace std;

int Myroot(double, double, double, double&, double&);

struct quadraticEquation
{
    double x1;
    double x2;
};

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D = b * b - 4.0 * a * c;
    if (D < 0)
        return -1;
    if (a == 0)
    {
        if (b == 0)
            return -1;
        x2 = x1 = -c / b;
        return 0;
    }
    if (D == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = x1;
        return 0;
    }
    x1 = (-b + sqrt(D)) / (2.0 * a);
    x2 = (-b - sqrt(D)) / (2.0 * a);
    return 1;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    double a, b, c, ch, x1, x2;
    cout << "����� ������ ���������� ���������" << endl;
    cout << "������� a: " << endl;
    cin >> a;
    cout << "\n������� b: " << endl;
    cin >> b;
    cout << "\n������� c: " << endl;
    cin >> c;
    ch = Myroot(a, b, c, x1, x2);
    if (ch == 1) {
        cout << "����� ����������� ���������: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (ch == 0) {
        cout << "� ����������� ��������� ���� ������: " << endl;
        cout << "x = " << x1 << endl;
    }
    else
        cout << "� ����������� ��������� ��� ������" << endl;
    
	return 0;
}