#include "phonebook.h"
#include <iostream>

using namespace std;

PhoneBook::PhoneBook()
{
}

PhoneBook::PhoneBook(Person person_input_ini)
{
    Persons.push_back(person_input_ini);
    Stored+=1;
}

int PhoneBook::searchBook(string searchName)
{
    int flag=0;

    for(unsigned int n=0; n<Persons.size(); n++)
    {
        Person temp=Persons[n];
        if(temp.getName()==searchName)
        {
            cout << "The person named " << temp.getName() << " has the number " << temp.getNumber() << endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout << "No person with that name found in our records." << endl;
    }
}

void PhoneBook::addPerson(Person person_input)
{
    Persons.push_back(person_input);
    Stored+=1;
}
