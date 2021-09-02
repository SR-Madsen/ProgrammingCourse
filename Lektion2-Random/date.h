#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{

public:

    Date();

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void setDate(int day, int month, int year);

    int getDay();
    int getMonth();
    int getYear();

    std::string toString();

private:
    int _day, _month, _year

};

#endif // DATE_H
