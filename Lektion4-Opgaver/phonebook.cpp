#include "phonebook.h"
#include <iostream>

using namespace std;

PhoneBook::PhoneBook()
{
}

PhoneBook::PhoneBook(string _Names[], int _Numbers[], int _size)
{
    for(int n=0; n<_size; n++)
    {
        Names[n]=_Names[n];
        Numbers[n]=_Numbers[n];
    }
    Stored=_size;
}

int PhoneBook::searchBook(string SearchName)
{
    int flag=0;

    for(int n=0; n<Stored; n++)
    {

        if(Names[n]==SearchName)
        {
            flag=1;
            cout << "The phonenumber of " << SearchName << " is " << Numbers[n] << endl;
            return Numbers[n];
            break;
        }
    }

    if(flag==0)
    {
        cout << "The name is not stored in our records." << endl;
    }
}

void PhoneBook::addPerson(string AddName, int PhoneNumber)
{
    Names[Stored]=AddName;
    Numbers[Stored]=PhoneNumber;
    Stored+=1;

    cout << "Person succesfully added to the list." << endl;
}
