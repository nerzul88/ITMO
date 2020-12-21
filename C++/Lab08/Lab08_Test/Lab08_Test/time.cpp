//#include <iostream>
//#include "time.h"
//
////Установка часов
//void Time::set_hours(int hours) {
//	Time::hours = hours;
//}
////Получение часов
//int Time::get_hours() {
//	return Time::hours;
//}
////Установка минут
//void Time::set_minutes(int minutes) {
//	Time::minutes = minutes;
//}
////Получение минут
//int Time::get_minutes() {
//	return Time::minutes;
//}
////Установка секунд
//void Time::set_seconds(int seconds) {
//	Time::seconds = seconds;
//}
////Получение секунд
//int Time::get_seconds() {
//	return Time::seconds;
//}
////Конструктор по умолчанию
//Time::Time() {
//	hours = 0;
//	minutes = 0;
//	seconds = 0;
//}
////Конструктор, инициализирующий заданные значения
//Time::Time(const int& hours, const int& minutes, const int& seconds) {
//	Time::set_hours(hours);
//	Time::set_minutes(minutes);
//	Time::set_seconds(seconds);
//
//	if (seconds >= 60) {
//		minutes += seconds / 60;
//		seconds %= 60;
//	}
//}
//void show_time(int hours, int minutes, int seconds) {
//	cout << hours << ":" << minutes << ":" << seconds << endl;
//}