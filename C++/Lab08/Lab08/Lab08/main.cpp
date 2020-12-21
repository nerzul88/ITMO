#include <iostream>
#include <Windows.h>
#include <string>
#include "student.h"
#include <fstream>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	string last_name;
	//Создание объекта класса Student
	//Student student01;
	//Student* student02 = new Student();	
	
	//Ввод имени
	cout << "Name: ";
	getline(cin, name);
	//Ввод фамилии
	cout << "Last Name: ";
	getline(cin, last_name);

	//Передача параметров конструктору
	Student* student02 = new Student(name, last_name);
	//Сохранение имени и фамилии в объект класса Student
	//student01.set_name(name);
	//student01.set_last_name(last_name);
	student02->set_name(name);
	student02->set_last_name(last_name);

	//Оценки
	int scores[5];
	//Сумма всех оценок
	int sum = 0;
	//Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		//суммирование оценок
		sum += scores[i];
	}
	
	//Сохранение промежуточных оценок в объект класса Student
	//student01.set_scores(scores);
	//double average_score = sum / 5.0;
	student02->set_scores(scores);

	//Рассчёт среднего балла
	float average_score = sum / 5.0;

	//Сохранение среднего балла в объект класса Student
	//student01.set_average_score(average_score);
	student02->set_average_score(average_score);

	//Вывод данных по студенту
	/*cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;*/
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	delete student02;
	return 0;
}