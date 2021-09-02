#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "person.h"
#include <vector>

using namespace std;

class PhoneBook
{
public:
    PhoneBook();
    PhoneBook(Person person_input_ini);

    int searchBook(string searchName);

    void addPerson(Person person_input);

private:
    vector<Person> Persons;
    int Stored=0;
};

#endif // PHONEBOOK_H
