//#include <iostream>
//#include <Windows.h>
//#include<string>
//
//using namespace std;
//
//class Student {
//public:
//	
//
//private:
//	int scores[5];			//������������� ������
//	double average_score;	//������� ����
//	string name;			//���
//	string last_name;		//�������
//};
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	//�������� ������� ������ Student
//	Student student01;
//	string name;
//	string last_name;
//	int scores[5];
//	//���� �����
//	cout << "Name: ";
//	getline(cin, name);
//	//���� �������
//	cout << "Last name: ";
//	getline(cin, last_name);
//	//����� ���� ������
//	int sum = 0;
//	//���� ������������� ������
//	for (int i = 0; i < 5; ++i) {
//		cout << "Score " << i + 1 << ": ";
//		cin >> scores[i];
//		//������������ ������
//		sum += scores[i];
//	}
//
//	//���������� ����� � ������� � ������ ������ Student
//	student01.set_name(name);
//	student01.set_last_name(last_name);
//	//���������� ������������� ������ � ������ ������ Student
//	student01.set_scores(scores);
//	double average_score = sum / 5.0;
//	//���������� �������� ����� � ������ ������ Student
//	student01.set_average_score(average_score);
//
//	cout << "Average ball for " << student01.get_name() << " "
//		<< student01.get_last_name() << " is "
//		<< student01.get_average_score() << endl;
//	return 0;
//}
