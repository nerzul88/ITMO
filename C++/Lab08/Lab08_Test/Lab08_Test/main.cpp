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

    
    Time s(1, 70, 70);

    Time d(2, 80, 80);

    Time m;
    s.add_time(d.getHours(), d.getMinutes(), d.getSeconds());
    m.setHours(s.getHours());
    m.setMinutes(s.getMinutes());
    m.setSeconds(s.getSeconds());

    m.Print();

	return 0;
}