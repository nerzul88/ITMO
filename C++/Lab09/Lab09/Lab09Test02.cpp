#include <iostream>
#include <Windows.h>
#include "time.h"

using namespace std;

class Time
{
private:    
    int hours;
    int minutes;
    int seconds;

public:
    class MyException
    {
    public:

        string message;
        int value;
        MyException(string msg, int vl)
        {
            message = msg;
            value = vl;
        }
    private:

    };

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
            minutes = minutes + m;
        }

        if (h > 24)
        {
            hours += floor(h % 24);
        }
        else
        {
            hours = hours + h;
        }

        if (h < 0)
        {
            throw MyException("ќшибка! ќтрицательное значение часов: ", h);
        }

        if (m < 0)
        {
            throw MyException("ќшибка! ќтрицательное значение минут: ", m);
        }

        if (s < 0)
        {
            throw MyException("ќшибка! ќтрицательное значение секунд: ", s);
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
    }

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
            hours += floor(hours % 24);
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

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    

    try {
        int h, m, s;
       
        cout << "¬ведите часы: " << endl;
        cin >> h;
        cout << "¬ведите минуты: " << endl;
        cin >> m;
        cout << "¬ведите сеукнды: " << endl;
        cin >> s;        
        Time t1(h, m, s);

        int h1, m1, s1;
        cout << "¬ведите часы: " << endl;
        cin >> h1;
        cout << "¬ведите минуты: " << endl;
        cin >> m1;
        cout << "¬ведите сеукнды: " << endl;
        cin >> s1;
        Time t2(h1, m1, s1);

        Time t;
        t1.add_time(t2.getHours(), t2.getMinutes(), t2.getSeconds());
        t.setHours(t1.getHours());
        t.setMinutes(t1.getMinutes());
        t.setSeconds(t1.getSeconds());

        cout << "—умма времени: " << endl;
        t.Print();
    }
    catch (Time::MyException & ex) {
        cout << ex.message << " " << ex.value << endl;
    }
    

    return 0;
}