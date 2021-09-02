#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "arrayint100.h"
#include "phonebook.h"

using namespace std;

void Array()
{
    int maximum, search_number, search_result;

    cout << "This program fills an array with 100 elements with random numbers." << endl;
    cout << "The program outputs the largest number, then all elements of the array." << endl;

    ArrayInt100 Array;
    srand(time(0));
    Array.fillRandom();

    maximum=Array.returnMax();
    cout << "The largest random number is: " << maximum << endl << endl;

    cout << "The following 100 lines are all the numbers of the array." << endl;
    Array.printContent();


    cout << "You can now have the program count the amount of times a specific entry appears." << endl;
    cout << "Please input the integer, you're searching for: ";

    cin >> search_number;
    search_result=Array.searchNumber(search_number);

    cout << "The number " << search_number << " appears " << search_result << " time(s) in the list." << endl;

    cout << "End of program." << endl;
}

void PhoneBookProgram()
{
    char addResponse;
    string Search_input, Names[0];
    int Numbers[0], size=0;

    cout << "This is a phonebook. Search for a name: ";
    cin >> Search_input;

    PhoneBook BookOfEli(Names, Numbers, size);
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

        BookOfEli.addPerson(addName, addNumber);
    }
}

int main()
{
    int choice;

    cout << "Pick a program." << endl;
    cout << "Press 1 for 100 element array." << endl;
    cout << "Press 2 for phonebook program." << endl;
    cin >> choice;

    if(choice==1)
    {
        Array();
    }

    else if(choice==2)
    {
        PhoneBookProgram();
    }
    else
    {
        cout << "Number not valid.";
    }

    return 0;
}
