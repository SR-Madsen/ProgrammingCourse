#include "arrayint.h"
#include <sstream>

ArrayInt::ArrayInt(int n)
{
    _n=n;
    _arr=new int[n];
}

ArrayInt::~ArrayInt()
{
    delete []_arr;
}

void ArrayInt::setValue(int idx, int value)
{
    _arr[idx]=value;
}

int ArrayInt::getValue(int idx)
{
    return _arr[idx];
}

void ArrayInt::sort()
{
    int key, i;

    for(int j=1; j<_n; j++)
    {
        key=_arr[j];
        i=j-1;

        while(i>=0 && _arr[i]>key)
        {
         _arr[i+1]=_arr[i];
         i--;
        }
        _arr[i+1]=key;
    }
}

std::string ArrayInt::toString()
{
    std::stringstream outstream;
    std::string outstring;

    for(int n=0; n<_n; n++)
    {
    outstream << "Element " << n << " is: " << _arr[n] << std::endl;
    }

    outstring=outstream.str();

    return outstring;
}
