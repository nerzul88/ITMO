#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;


int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x, y, z; 
	double dot_1, dot_2, dot_3;
	double result; 
	double center;
	double count = 0;


	dot_1 = 10;
	dot_2 = 20;
	dot_3 = 30;
	result = 0;


	while (result < 50) 
	{
		center = rand() % 30; 
		

		cout << "Введите координату X: " << endl;
		cin >> x;
		x += center; 
		cout << "Введите координату Y: " << endl;
		cin >> y;
		y += center;

		z = sqrt(pow(x, 2) + pow(y, 2));


		if (z <= dot_1)
		{
			cout << "Вам начислено 10 баллов" << endl;
			result += 10;
			cout << "Общий счёт: " << result << endl;
		}
		else if (z <= dot_2)
		{
			cout << "Вам начислено 5 баллов" << endl;
			result += 5;
			cout << "Общий счёт: " << result << endl;
		}
		else if (z <= dot_3)
		{
			cout << "Вам начислен 1 балл" << endl;
			result += 1;
			cout << "Общий счёт: " << result << endl;
		}
		else
		{
			cout << "Вы промахнулись!" << endl;
			result += 0;
			cout << "Общий счёт: " << result << endl;
		}

		count++;
	}

	cout << "Game over!" << endl;
	cout << "Ваш счёт: " << result << endl;
	if (count <= 5)
	{
		cout << "Количество ходов: " << count << endl;
		cout << "Ваш ранг: снайпер" << endl;
	}
	else if (count > 5 && count < 10)
	{
		cout << "Количество ходов: " << endl;
		cout << "Ваш ранг: стрелок" << endl;
	}
	else
	{
		cout << "Количество ходов: " << endl;
		cout << "Ваш ранг: салага" << endl;
	}
	return 0;
}