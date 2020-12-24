#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//������ ��������
	vector<int> scores;

	//���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("������", "����", "����������", scores);
	cout << "������� ����: " << stud->get_average_score() << endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	cout << tch->get_full_name() << endl;
	cout << "���������� �����: " << tch->get_work_time() << endl;
	return 0;
}