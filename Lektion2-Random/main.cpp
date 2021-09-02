#include <iostream>

#include "vector.h"
#include "date.h"

using namespace std;

int main()
{
    Vector v1;

    v1.set(1, 3.0);
    v1.set(2, 5.5);
    v1.set(3, 7.5);

    Vector v2;
    v2.set(1, -3.0);
    v2.set(2, 5.5);
    v2.set(3, -7.5);

    cout << "Vector 1 has x: " << v1.get(1) << endl;
    cout << "Vector 1 has y: " << v1.get(2) << endl;
    cout << "Vector 1 has z: " << v1.get(3) << endl << endl;

    cout << "Vector 2 has x: " << v2.get(1) << endl;
    cout << "Vector 2 has y: " << v2.get(2) << endl;
    cout << "Vector 2 has z: " << v2.get(3) << endl << endl;

    //Indre produkt
    cout << "The inner product of these vectors is: ";
    double ip=v1.inner_product(v2);
    cout << ip << endl;

    return 0;
}
