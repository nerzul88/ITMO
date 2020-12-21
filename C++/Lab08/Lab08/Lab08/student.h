#pragma once	//Защита от двойного подключения заголовочного файла
#include <string>

using namespace std;

class Student {
public:
	//Установка имени студента
	void set_name(string);
	//Получение имени студента
	string get_name();
	//Установка фамилии студента
	void set_last_name(string);
	//Получение фамилии студента
	string get_last_name();
	//Установка промежуточных оценок
	void set_scores(int[]);
	//Установка среднего балла
	void set_average_score(double);
	//Получение среднего балла
	double get_average_score();
	//Конструктор класса Student
	Student(string, string);
	//Запись данных о студенте в файл
	void save();
	//Деструктор класса Student
	~Student();

private:
	int scores[5];			//Промежуточные оценки
	double average_score;	//Средний балл
	string name;			//Имя
	string last_name;		//Фамилия	
};
