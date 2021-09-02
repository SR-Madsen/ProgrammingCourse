#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date.h"

class Person
{
public:
    Person();

    void setFirstName(std::string firstname);
    void setLastName(std::string lastname);
    void setBirthday(Date date);

    std::string getFirstName();
    std::string getLastName();
    Date getBirthday();

    std::string toString();

private:
    std::string _firstname;
    std::string _lastname;
    Date _birthday;
};

#endif // PERSON_H
