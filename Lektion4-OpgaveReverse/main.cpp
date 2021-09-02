#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void ReverseFunc(double _array[], int size)
{
    int temp;
    for(int n=0; n<=size/2.0; n++)
    {
        temp=_array[n];
        _array[n]=_array[size-n];
        _array[size-n]=temp;
    }
}


int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    double* array=new double[size];

    srand(time(0));
    for(int n=0; n<=size; n++)
    {
        array[n]=rand()%201-100;
    }

    cout << "The elements before getting reversed are:" << endl;
    for(int n=0; n<=size; n++)
    {
        cout << "Element " << n << "is: " << array[n] << endl;
    }

    ReverseFunc(array, size);
    cout << "The elements after getting reversed are: " << endl;
    for(int n=0; n<=size; n++)
    {
        cout << "Element " << n << "is: " << array[n] << endl;
    }

    return 0;
}
