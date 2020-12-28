#include <iostream>
#include <string>
#include <map>
#include <Windows.h>
#include "StudentList.h"

using namespace std;


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    StudentGrade student1;
    StudentGrade student2;
    StudentGrade student3;
    StudentGrade student4;
    StudentGrade student5;
    student1.name = "Тюков Алексей";
    student1.grade = '4';
    student2.name = "Суханов Данил";
    student2.grade = '5';
    student3.name = "Минин Олег";
    student3.grade = '3';
    student4.name = "Саша Коен";
    student4.grade = '4';
    student5.name = "Мякота Иван";
    student5.grade = '5';

    string jrnlName = "Журнал успеваемости группы 01";
    Journal journal1(jrnlName);
    journal1.addStudent(student1);
    journal1.addStudent(student2);
    journal1.addStudent(student3);
    journal1.addStudent(student4);
    journal1.addStudent(student5);
    journal1.changeGrade(student3.name, '4');
    journal1.openJournal();
}