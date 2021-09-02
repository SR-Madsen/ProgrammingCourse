#include "person.h"

Person::Person()
{
}

Person::Person(string _Name, int _Number)
{
    Name=_Name;
    Number=_Number;
}

void Person::setName(string _Name)
{
    Name=_Name;
}

void Person::setNumber(int _Number)
{
    Number=_Number;
}

string Person::getName()
{
    return Name;
}

int Person::getNumber()
{
    return Number;
}
