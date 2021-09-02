#include <iostream>
#include "arrayint.h"
#include <sstream>

#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

void Exercise9_1()
{
    std::string output;

    int size;

    cout << "What is the size of the array? ";
    cin >> size;

    ArrayInt Array(size);

    for (int n=0; n<size; n++)
    {
        int input;
        cout << "What is element #" << n << "? ";
        cin >> input;
        Array.setValue(n, input);
    }

    Array.sort();
    output=Array.toString();
    cout << "When sorted, your array is:" << endl;
    cout << output;
}

void Exercise10_1()
{
    Shape* shapes[4];

    shapes[0]= new Triangle(10,10);
    shapes[1]= new Circle(10);
    shapes[2]= new Circle(3);
    shapes[3]= new Rectangle(10,10);

    for (int i=0; i<4; i++)
    {
        std::cout << "Shape " << i << " (" << shapes[i]->getName() << ") area = " << shapes[i]->getArea() << endl;
    }
}

void Exercise10_2()
{

}


int main()
{
    Exercise10_1();

    return 0;
}
