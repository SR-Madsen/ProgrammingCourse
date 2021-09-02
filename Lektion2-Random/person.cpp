#include "person.h"

Person::Person()
{
}

void Person::setFirstName(std::string firstname)
{
    _firstname = firstname
}

void Person::setLastName(std::string lastname)
{
    _lastname = lastname
}

void Person::setBirthday(Date date)
{
    _birthday = date;
}

std::string Person::getFirstName()
{
    return _firstname;
}

std::string Person::getLastName()
{
    return _lastname;
}

Date Person::getBirthday()
{
    return _birthday;
}

std::string Person::toString()
{
    std::string s = _firstname + " " + _lastname;
    s += "\nBirthday: " + _birthday.toString();

    return s;
}
