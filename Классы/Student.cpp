#pragma once
#include "Student.h"

Date Student::get_birth()
{
    return birth;
}
void Student::set_birth(Date _birth)
{
    {
        if (_birth.day > 0)
            birth.day = _birth.day;
    }

    {
        if (_birth.month > 0)
            _birth.month = _birth.month;
    }

    {
        if (_birth.year > 0)
            _birth.year = _birth.year;
    }
}

std::string Student::get_name()
{
    return name;
}
void Student::set_name(std::string _name)
{
    name = _name;
}
void Student::set_lastName(std::string _lastName)
{
    lastName = _lastName;
}
std::string Student::get_lastName()
{
    return lastName;
}
int Student::get_klass()
{
    return klass;
}
void Student::set_klass(int _klass)
{
    if (_klass > 0)
        klass = _klass;
}