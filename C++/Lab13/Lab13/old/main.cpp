#include <iostream>
#include <vector>
#include <Windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Оби", "Ван", "Кеноби", teacher_work_time);
    tch->get_full_name();

    std::vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    student* stud = new student("Энакин", "Скайуокер", "", scores);
    stud->get_full_name();
}