#include <ctime>
#include "sorteringsalgoritmer.h"

using namespace std;

int main()
{
    vector<int> v;
    srand(time(0));

    /*for (int i=100; i>0; i--)
    {
        v.push_back(i);
    }*/

    Sorteringsalgoritmer Sorter;
    Sorter.randomElements();

    /*for (int i=0; i<100; i++)
    {
        Sorter.addElement(v[i]);
    }*/

    Sorter.printElements();

    cout << std::endl;

    Sorter.mergeSort();

    Sorter.printElements();

    return 0;
}
