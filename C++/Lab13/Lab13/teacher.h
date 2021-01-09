#pragma once
#include "human.h"
#include <string>
class teacher : public human {
public:
	teacher() {

	}
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void getdata()
	{
		human::getdata();
		std::cout << "\n������� ���� ������ : ";
		std::cin >> work_time;

	}
	virtual void putdata()
	{
		human::putdata();
		std::cout << "���������� �����: " << get_work_time() << std::endl;
	}
private:
	unsigned int work_time;
};