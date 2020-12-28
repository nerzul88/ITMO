#pragma once
#include <iostream>
#include <string>
#include<map>
using namespace std;

struct StudentGrade
{
	string name;
	char grade;
};

class Journal
{
public:
	map <string, char>studentInfo;
	string journalName;

	Journal(string journalName)
	{
		cout << "����� ������ ��� ��������� " << "\"" << journalName << "\"" << " ������." << endl;
	}

	void addStudent(StudentGrade& studentGrade)
	{
		studentInfo.insert(pair<string, char>(studentGrade.name, studentGrade.grade));
		cout << "������� " << studentGrade.name << " ��� �������� � ������." << endl;
	}

	void openJournal()
	{
		cout << "������: " << journalName << endl;
		for (auto it = studentInfo.begin(); it != studentInfo.end(); ++it)
		{
			cout << it->first << " : " << it->second << endl;
		}
	}

	void changeGrade(string name, char grage)
	{
		studentInfo.at(name) = grage;
		cout << "������ ������� " << name << " ���� �������� �� " << grage << "." << endl;
	}

	~Journal()
	{
		cout << "������ " << journalName << " �����.";
	}
};