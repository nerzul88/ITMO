#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	float MTF;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; 
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	void getdist()
	{
		cout << "\n������� ����� �����: ";
		cin >> feet;
		cout << "\n������� ����� ������: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	Distance operator+ (const Distance&) const;
	Distance operator- (const Distance&) const;
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
	friend Distance operator+(const Distance& d1, double value);
	friend Distance operator+(double value, const Distance& d1);
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
};
Distance Distance::operator+ (const Distance& d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}
Distance Distance::operator- (const Distance& d2) const
{
	int f;
	float i;
	if (inches > d2.inches)
	{
		i = inches - d2.inches;
		f = feet - d2.feet;
	}
	else {
		i = inches + 12 - d2.inches;
		f = feet - 1 - d2.feet;
	}
	return Distance(f, i);
}
std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\' - " << dist.inches << "\"\n";
	return out;
};
Distance operator+(const Distance& d1, double value)
{
	return Distance(float(static_cast<float>(d1) + value));
}
Distance operator+(double value, const Distance& d1)
{
	return Distance(float(static_cast<float>(d1) + value));
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();
	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;
	
	cout << "\ndist1 = " << dist1;
	
	cout << "\ndist2 = " << dist2;
	
	cout << "\ndist3 = " << dist3;

	cout << "\ndist4 = " << dist4;
	
	Distance dist5;
	dist5 = dist4 - dist1;
	
	cout << "\ndist5 = " << dist5;

	Distance dist6 = 2.35F;
	cout << "\ndist6 = " << dist6;
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist2;
	cout << "\nmtrs = " << mtrs;
	
	Distance dist7 = dist1 + 2.8;
	Distance dist8 = 2.8 + dist1;
	cout << "\ndist6 = dist1 + 2.8 = " << dist7;
	cout << "\ndist6 = 2.8 + dist1 = " << dist8;
	return 0;
}