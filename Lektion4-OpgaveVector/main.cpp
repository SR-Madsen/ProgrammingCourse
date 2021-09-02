#include <iostream>
#include "person.h"
#include "phonebook.h"

using namespace std;

int main()
{
    vector<Person> Persons;
    char addResponse;
    string Search_input;

    cout << "This is a phonebook. Search for a name: ";
    cin >> Search_input;

    PhoneBook BookOfEli;

    BookOfEli.searchBook(Search_input);

    cout << "Do you wish to add a person to the phonebook? Y/N: ";
    cin >> addResponse;

    if(addResponse=='Y')
    {
        string addName;
        int addNumber;

        cout << "Please enter the name of the person: ";
        cin >> addName;
        cout << "Now enter the person's phonenumber: ";
        cin >> addNumber;

        Person temp_input(addName, addNumber);
        BookOfEli.addPerson(temp_input);
    }

    return 0;
}
