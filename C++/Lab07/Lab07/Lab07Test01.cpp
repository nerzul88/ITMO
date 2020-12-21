//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//struct Time {
//	int hours;
//	int minutes;
//	int seconds;	
//	void ShowTime() {
//		cout << endl << hours << ":" << minutes << ":" << seconds << endl;
//	}
//};
//
//Time AddTime(const Time& t1, const Time& t2) {
//	Time t;	
//	t.hours = t1.hours + t2.hours;
//	t.minutes = t1.minutes + t2.minutes;
//	t.seconds = t1.seconds + t2.seconds;
//	if (t.seconds >= 60) {
//		t.seconds -= 60;
//		t.hours++;
//		if (t.minutes >= 60){
//			t.minutes -= 60;
//			t.minutes++;
//		}
//	}
//	return t;
//}
//
//Time SubtractTime(const Time& t1, const Time& t2) {
//	Time t;
//	/*t.hours;
//	t.minutes;
//	t.seconds;
//	if (t.seconds >= 60) {
//		t.seconds -= 60;
//		t.hours++;
//		if (t.minutes >= 60) {
//			t.minutes -= 60;
//			t.minutes++;
//		}
//	}*/
//	t.hours = t1.hours - t2.hours;
//	t.minutes = t1.minutes - t2.minutes;
//	t.seconds = t1.seconds - t2.seconds;
//	if (t.seconds < 0) {
//		t.seconds += 60;
//		t.minutes--;
//		
//	}
//	if (t.minutes < 0) {
//		t.minutes += 60;
//		t.hours--;
//	}
//	return t;
//}
//
//Time InputTime() {
//	Time t;
//	cout << "\nВведите количество часов: ";
//	cin >> t.hours;
//	cout << "\nВведите количество минут: ";
//	cin >> t.minutes;
//	cout << "\nВведите количество секунд: ";
//	cin >> t.seconds;
//	return t;
//}
//
//
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	Time t1 = InputTime();
//	Time t2 = InputTime();
//	Time t3 = AddTime(t1, t2);
//	Time t4 = SubtractTime(t1, t2);
//	t3.ShowTime();
//	t4.ShowTime();
//	return 0;
//}