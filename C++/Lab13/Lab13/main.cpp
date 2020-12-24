#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Item {
private:
	string title;
	double price;
public:
	virtual void getdata() {
		cout << "\n������� ���������: ";
		cin >> title;
		cout << "\n������� ����: ";
		cin >> price;
	}
	virtual void putdata() {
		cout << "\n���������: " << title;
		cout << "\n����: " << price;
	}
};

class Paperbook : public Item {
private:
	int pages;

public:
	void getdata() {
		Item::getdata();
		cout << "\n������� ����� �������: ";
		cin >> pages;
	}
	void putdata() {
		Item::putdata();
		cout << "\n�������: " << pages;
	}
};

class AudioBook : public Item {
private:
	double time;
public:
	void getdata() {
		Item::getdata();
		cout << "\n������� ����� ��������: ";
		cin >> time;
	}
	void putdata() {
		Item::putdata();
		cout << "\n����� ��������: " << time;
	}
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Item* pubarr[100];

	int n = 0;
	char choice;
	do {
		cout << "\n������� ������ ��� ����� ��� ��������� ����� (b/a)?";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		cout << "\n����������(y/n)?";
		cin >> choice;
	} 
	while (choice == 'y');

	for (int j = 0; j < n; j++)
		pubarr[j]->putdata();
	cout << endl;	

	return 0;
}