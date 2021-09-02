#include <iostream>
#include "mass.h"
#include "clothing.h"
#include "montyhall.h"

using namespace std;

void MontyHall()
{

}


void Gravitation()
{
    double m1, m2, distance, force;

    //Initialization
    cout << "This program will calculate the gravitational force between two masses of given size." << endl;
    cout << "Initially you must input the size of mass 1 in kilos: ";
    cin >> m1;
    cout << "Now mass 2 in kilos: ";
    cin >> m2;
    cout << "Lastly, the distance between the two masses in metres: ";
    cin >> distance;

    //Calculations
    Mass mass1(m1);
    force=mass1.gravitation(m2, distance);

    //Output
    cout << "The two masses of sizes: " << m1 << " kg and " << m2 << " kg with a distance of " << distance << " metres," << endl;
    cout << "have a gravitational pull of: " << force << " Newtons between them." << endl;
}


void ClothingSize()
{
    int age;
    double weight, height, hatSize, jacketSize, waistSize;

    //Initialization
    cout << "This program will calculate the sizes of hats, jackets, and waists given certain input." << endl;
    cout << "First type the height of the individual: ";
    cin >> height;
    cout << "Now the weight (don't worry, this is anonymous): ";
    cin >> weight;
    cout << "Lastly the age: ";
    cin >> age;

    //Calculations
    Clothing Person;

    Person.setAge(age);
    Person.setHeight(height);
    Person.setWeight(weight);

    hatSize=Person.hatSize();
    jacketSize=Person.jacketSize();
    waistSize=Person.waistSize();

    //Output
    cout << "For a person of age " << age << " years with a height of " << height << " centimeters and weight of " << weight << " kilos, the following sizes have been calculated." << endl;
    cout << "Size of the hat: " << hatSize << endl;
    cout << "Size of the jacket: " << jacketSize << endl;
    cout << "Size of the waist: " << waistSize << endl;

}


int main()
{
    int choice;

    cout << "Chose a program from the list by typing the corresponding number: " << endl;
    cout << "Press 1 for simulation of the Monty Hall Game Show problem." << endl;
    cout << "Press 2 for calculation of gravitation between two masses." << endl;
    cout << "Press 3 for calculation of clothing sizes for a person." << endl;
    cout << "Enter your input here: ";
    cin >> choice;

    if (choice==1)
    {
        cout << "Initializing program..." << endl << endl;
        MontyHall();
    }

    else if (choice==2)
    {
        cout << "Initializing program..." << endl << endl;
        Gravitation();
    }

    else if (choice==3)
    {
        cout << "Initializing program..." << endl << endl;
        ClothingSize();
    }

    return 0;
}
