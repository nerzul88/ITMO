//#include <iostream>
//#include "time.h"
//
////��������� �����
//void Time::set_hours(int hours) {
//	Time::hours = hours;
//}
////��������� �����
//int Time::get_hours() {
//	return Time::hours;
//}
////��������� �����
//void Time::set_minutes(int minutes) {
//	Time::minutes = minutes;
//}
////��������� �����
//int Time::get_minutes() {
//	return Time::minutes;
//}
////��������� ������
//void Time::set_seconds(int seconds) {
//	Time::seconds = seconds;
//}
////��������� ������
//int Time::get_seconds() {
//	return Time::seconds;
//}
////����������� �� ���������
//Time::Time() {
//	hours = 0;
//	minutes = 0;
//	seconds = 0;
//}
////�����������, ���������������� �������� ��������
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