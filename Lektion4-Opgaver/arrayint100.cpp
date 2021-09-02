#include "arrayint100.h"
#include <ctime>
#include <cstdlib>
#include <limits>
#include <iostream>

ArrayInt100::ArrayInt100()
{
}

void ArrayInt100::fillRandom()
{
    //srand(time(0));

    for(int n=0; n<100; n++)
    {
        Array[n]=rand()%201-100;
    }
}

int ArrayInt100::returnMax()
{
    int Max=std::numeric_limits<double>::min();  //Kan også være Max=Array[0]

    for(int n=0; n<100; n++)
    {
        if(Max<Array[n])
        {
            Max=Array[n];
        }
    }
    return Max;
}

void ArrayInt100::printContent()
{
    for(int n=0; n<100; n++)
    {
        std::cout << "Array element " << n << " has the value: " << Array[n] << std::endl;
    }
}

int ArrayInt100::searchNumber(int _search)
{
    int counter=0;

    for(int n=0; n<100; n++)
    {
        if(Array[n]==_search)
            counter+=1;
    }

    return counter;
}
