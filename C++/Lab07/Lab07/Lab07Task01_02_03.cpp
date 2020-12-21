//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//struct Distance {
//	int feet;
//	double inches;
//	void ShowDist() {
//		cout << feet << "\'-" << inches << "\"\n";
//	}
//};
//
//Distance AddDist(const Distance &d1, const int &n) {
//	Distance d;
//	d.feet = 0;
//	d.inches = 0;
//	for (int i = 0; i < n; i++) {		
//		d.feet += d1.feet;
//		d.inches = d1.inches;
//		if (d.inches >= 12.0) {
//			d.inches -= 12.0;
//			d.feet++;
//		}
//	}	
//	return d;
//}
//
//Distance InputDist() {
//	Distance d;
//	cout << "\n¬ведите число футов: ";
//	cin >> d.feet;
//	cout << "\n¬ведите число дюймов: ";
//	cin >> d.inches;
//	return d;
//}
//
//
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	/*Distance d1 = InputDist();
//	Distance d2 = { 1, 6.25 };
//	Distance d3 = AddDist(d1, d2);
//	d1.ShowDist();	
//	d2.ShowDist();
//	d3.ShowDist();*/
//
//	int n;
//	cout << "\n¬ведите размер массива рассто€ний: ";
//	cin >> n;
//	Distance* masDist = new Distance[n];
//
//	for (int i = 0; i < n; i++) {
//		masDist[i] = InputDist();
//	}
//	for (int i = 0; i < n; i++) {
//		masDist[i].ShowDist();
//		AddDist(masDist[i], n);
//	}
//	
//	delete[]masDist;
//	return 0;
//}