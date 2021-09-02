#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <cstring>

using namespace std;

class PhoneBook
{
public:
    PhoneBook();
    PhoneBook(string _Names[], int _Numbers[], int _size);

    int searchBook(string SearchName);

    void addPerson(string AddName, int PhoneNumber);

private:
    string Names[1000];
    int Numbers[1000], Stored=0;
};

#endif // PHONEBOOK_H
