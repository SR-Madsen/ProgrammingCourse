#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    Person(string _Name, int _Number);

    void setName(string _Name);
    void setNumber(int _Number);

    string getName();
    int getNumber();

private:
    string Name;
    int Number;
};

#endif // PERSON_H
