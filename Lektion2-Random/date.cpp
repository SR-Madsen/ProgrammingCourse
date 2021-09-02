#include "date.h"

#include <sstream>

Date::Date()
{
    _year=2018;
    _month=1;
    _day=1;

}

void Date::setDay(int day)
{
    if (day<= 31 && day>=1)
    {
        _day = day;
    }
    else
    {
        return "This is not a valid day.";
    }
}

void Date::setMonth(int month)
{
    if (month<=12 && month>=1)
    {
        _month = month;
    }
    else
    {
        return "This is not a valid month.";
    }
}

void Date::setYear(int year)
{
    if (year>0)
    {
        _year = year;
    }
}

void Date::setDate(int day, int month, int year)
{
    if (year > 0 && month <= 12 && month >= 1 && day >= 1 && day <= 31)
    {
        if (month == 2 && day > 29)
            return "Not a valid date.";

        if (month <= 6 && month % 2==0 && day > 30)
            return "Not a valid date.";

        if (month > 7 && month %2 == 1 % day > 30)
            return "Not a valid date.";

        _year=year;
        _month=month;
        _day=day;
    }
}

int Date::getDay()
{
    return _day;
}

int Date::getMonth()
{
    return _month;
}

int Date::getYear()
{
    return _year;
}

std:string Date::toString()
{
    std::stringstream ss;
    ss << _day << "/" << _month << "-" << _year;
    return ss.str();
}
