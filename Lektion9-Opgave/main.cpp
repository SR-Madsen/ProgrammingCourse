#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array<char> TEST(5);
    TEST[0]='A';
    TEST[1]='B';
    TEST[2]='C';
    TEST[3]='D';
    TEST[4]='E';

    for (int i=0; i<5; i++)
    {
        cout << "Element " << i << " is: " << TEST[i] << endl;
    }

    cout << endl;

    Array<char> TEST1(3);
    TEST1[0]='H';
    TEST1[1]='I';
    TEST1[2]='J';

    for (int i=0; i<3; i++)
    {
        cout << "Element " << i << " is: " << TEST1[i] << endl;
    }

    TEST1=TEST;

    cout << endl;

    for (int i=0; i<5; i++)
    {
        cout << "Element " << i << " is: " << TEST1[i] << endl;
    }

    return 0;
}
