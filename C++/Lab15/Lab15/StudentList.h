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
		cout << "Новый журнал под названием " << "\"" << journalName << "\"" << " создан." << endl;
	}

	void addStudent(StudentGrade& studentGrade)
	{
		studentInfo.insert(pair<string, char>(studentGrade.name, studentGrade.grade));
		cout << "Студент " << studentGrade.name << " был добавлен в журнал." << endl;
	}

	void openJournal()
	{
		cout << "Журнал: " << journalName << endl;
		for (auto it = studentInfo.begin(); it != studentInfo.end(); ++it)
		{
			cout << it->first << " : " << it->second << endl;
		}
	}

	void changeGrade(string name, char grage)
	{
		studentInfo.at(name) = grage;
		cout << "Оценка ученика " << name << " была изменена на " << grage << "." << endl;
	}

	~Journal()
	{
		cout << "Журнал " << journalName << " удалён.";
	}
};