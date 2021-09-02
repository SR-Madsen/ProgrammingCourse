#include <iostream>
#include <fstream>
#include "car.h"
#include <string>
#include "example.h"
#include "examplechild.h"

using namespace std;

void Nedarvning()
{
    /*Parent *p = new Child;

    p->function();

    */

    //int a = 10, b = 20;
    //double c = 20.0, d = 30.0;
    //string e = "One", f = "Two";

    //Child Kid;

    //Kid.overloadMe(a,b);
    //Kid.overloadMe(c,d);
    //Kid.overloadMe(e,f);
}

/*void DynamicMultiDimArr()
{
    int **dpointer = new int *[4];

    for (int i=0; i<4; i++)
    {
        dpointer[i] = new int[3];
    }


    for (int i=0; i<4; i++)
    {
        for (int j=0; j<3; j++)
        {
            dpointer[i][j] = i+j+(i*j);
            cout << dpointer[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    for (int i=0; i<4; i++)
    {
        delete []dpointer[i];
    }
    delete []dpointer;
}
*/

/*
template<typename T>
void swap_values(T& v1, T& v2)
{
    T temp = v1;
    v1 = v2;
    v2 = temp;
}

int main()
{
    int a = 10, b = 20;
    string c = "One", d = "Two";

    cout << a << "\t" << b << endl << c << "\t" << d << endl << endl;

    swap_values(a,b);
    swap_values(c,d);

    cout << a << "\t" << b << endl << c << "\t" << d << endl << endl;

    return 0;
}
*/

/*template<class T>
class Example
{
public:
    Example() {}

    void setData(T input);
    T getData();

private:
    T data;
};


template<class T>
void Example<T>::setData(T input)
{
    data = input;
}

template<class T>
T Example<T>::getData()
{
    return data;
}

int main()
{
    Example<string> StringTest;
    Example<int> IntTest;
    StringTest.setData("String");

    cout << StringTest.getData() << endl;

    IntTest.setData(10);

    cout << IntTest.getData() << endl;

    return 0;
}
*/

/*
int main()
{
    Example Test;

    Test.setData(10);
    Test.setName("TestClass");

    cout << Test.getData() << "\t" << Test.getName() << endl << endl;

    return 0;
}
*/

/*
int main()
{
    ExampleChild Test;

    Test.setData(20);
    Test.setName("TestChild");

    cout << Test.getData() << "\t" << Test.getName() << endl << endl;

    return 0;
}
*/

/*
void showVars(Example example)
{
    cout << example._name << "\t" << example._data << endl;
}


int main()
{
    Example Test;

    Test.setName("ShownName");
    Test.setData(30);

    showVars(Test);


    return 0;
}
*/

int main()
{
    Example Factor1, Factor2;

    Factor1.setData(10);
    Factor2.setData(20);

    cout << Factor1*Factor2 << endl << endl;


    return 0;
}
