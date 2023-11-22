#pragma once

#include <string>
#include <iostream>

class Date
{
public:
	int day;
	int month;
	int year;
	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	Date (int _day, int _month, int _year)
	{
		day = _day;
		month = _month;
		year = _year;
	}
};
 

class Student    
{
private: 
	Date birth;
	int klass;
	std::string name, lastName;

public:

	Student(Date _birth, int _klass, std::string _name, std::string _lastName)
	{
		birth = _birth;
		klass = _klass;
		name = _name;
		lastName = _lastName;
	}

	std::string get_name();
	std::string get_lastName();
	Date get_birth();
	int get_klass();

	void set_birth(Date _birth), set_name(std::string _name), set_lastName(std::string _lastName), set_klass(int _klass);

	void info()
	{
		std::cout << "Возраст - " << birth.day << " " << "." << birth.month << " " << "." << birth.year << " " << "Kласс -"  << klass << " " << "Имя: " << name << " " << "Фамилия : " << lastName << "\n";
	}

};
      

