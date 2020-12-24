#pragma once
#include <string>
//#include <int>
using namespace std;
class Time
{
public:

	//Установка количества часов
	void set_hours(int);
	//Получение количества часов
	int get_hours();

	//Установка количества минут
	void set_minutes(int);
	//Получение количества минут
	int get_minutes();

	//Установка количества секунд
	void set_seconds(int);
	//Получение количества секунд
	int get_seconds();

	//Получение времени
	string get_time();

	//Сложение времени
	string summ_time(Time&, Time&);
	string summ_time(Time* time1, Time*);
	
	//Конструктор Time по умолчанию
	Time();

	//Конструктор Time с тремя параметрами
	Time(int, int, int);
	//Конструктор Time с одним параметром
	Time(int);



	//Конструктор Time c сылками
	Time(Time&, Time&);
	Time(Time* time1, Time* time2);
		
	operator int() const;

	Time operator+ (const Time&) const;
	Time operator- (const Time&) const;
	int operator> (const Time&) const;
	friend std::ostream& operator<< (std::ostream& out, const Time& dist);

	friend Time operator+(const Time& d1, int value);
	friend Time operator+(int value, const Time& d1);


private:
	int hours;
	int minutes;
	int seconds;
};