#pragma once
#include <string>
#include <sstream>
#include <iostream>

class human {
public:
	human() {

	}
	human(std::string last_name, std::string name, std::string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}

	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void getdata()
	{
		std::cout << "\n������� ������� : ";
		std::cin >> last_name;
		std::cout << "������� ��� : ";
		std::cin >> name;
		std::cout << "������� �������� : ";
		std::cin >> second_name;
	}
	virtual void putdata()
	{
		std::cout << "\n�������: " << last_name;
		std::cout << "\n���:" << name;
		std::cout << "\n��������:" << second_name;
	}
private:
	std::string name;
	std::string last_name;
	std::string second_name;
};