#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class MyException
{
public:

    string message;
    int value;
    MyException(string msg, int val)
    {
        message = msg;
        value = val;
    }

};

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }


    Time(int h, int m, int s)
    {
        hours = 0;
        minutes = 0;
        seconds = 0;

        if (h < 0)
        {
            throw MyException("Ошибка! Отрицательное значение часов: ", h);
        }

        if (m < 0)
        {
            throw MyException("Ошибка! Отрицательное значение минут: ", m);
        }

        if (s < 0)
        {
            throw MyException("Ошибка! Отрицательное значение секунд: ", s);
        }

        if (s > 60)
        {
            minutes += floor(s / 60);
            seconds = s % 60;
        }
        else
        {
            seconds = s;
        }

        if (m > 60)
        {
            hours = floor(m / 60);
            minutes += m % 60;
        }
        else
        {
            minutes += m;
        }

        if (h > 24)
        {
            hours += floor(h % 24);
        }
        else
        {
            hours += h;
        }
    }
    //Функция сложения времени
    void add_time(int h, int m, int s)
    {
        hours += h;
        minutes += m;
        seconds += s;

        if (seconds > 60)
        {
            minutes += floor(s / 60);
            seconds %= 60;
        }

        if (minutes > 60)
        {
            hours += floor(m / 60);
            minutes %= 60;
        }

        if (hours > 24)
        {
            hours +=floor(hours % 24);
        }

    }
    //Функция вычитания времени
    void subtract_time(int h, int m, int s)
    {
        //Проверка на реальность введённых значений времени
        if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
        {
            if (h <= hours)
            {
                hours -= h;
            }
            else
            {
                throw MyException("Ошибка! Введённое значение времени больше реально существующего!", h);
            }

            if (m <= minutes)
            {
                minutes -= m;
            }
            else if (hours > 0)
            {
                minutes += 60;
                hours -= 1;
                minutes -= m;
            }
            else if (hours <= 0)
            {
                throw MyException("Ошибка! Введённое значение времени больше реально существующего!", h);
            }

            if (s <= seconds)
            {
                seconds -= s;
            }
            else if (minutes > 0)
            {
                seconds += 60 - s;
                minutes -= 1;

            }
            else if (hours > 0 && minutes == 0)
            {
                hours -= 1;
                minutes = 59;
                seconds = seconds + 60 - s;

            }

        }
        else
        {
            throw MyException("Введённое значение выходит за пределы диапазона часов, минут и секунд", h);
        }

    }

    void Print()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    int getHours() { return hours; }
    int getMinutes() { return minutes; }
    int getSeconds() { return seconds; }

    void setHours(int h) { hours = h; }
    void setMinutes(int m) { minutes = m; }
    void setSeconds(int s) { seconds = s; }
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    try
    {
        int h1, m1, s1;
        int h2, m2, s2;
        cout << "Первая временная точка" << endl;
        cout << "Введите количество часов: " << endl;
        cin >> h1;
        cout << "Введите количество минут: " << endl;
        cin >> m1;
        cout << "Введите количество секунд: " << endl;
        cin >> s1;

        cout << "Вторая временная точка" << endl;
        cout << "Введите количество часов: " << endl;
        cin >> h2;
        cout << "Введите количество минут: " << endl;
        cin >> m2;
        cout << "Введите количество секунд: " << endl;
        cin >> s2;

        Time t1(h1, m1, s1);
        Time t2(h2, m2, s2);
        Time t3;
        
        t1.subtract_time(t2.getHours(), t2.getMinutes(), t2.getSeconds());
        t3.setHours(t1.getHours());
        t3.setMinutes(t1.getMinutes());
        t3.setSeconds(t1.getSeconds());

        t3.Print();
    }
    catch (MyException& ex)
    {
        cout << ex.message << " " << ex.value << endl;
    }

    return 0;
}