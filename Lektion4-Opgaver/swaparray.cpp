#include "swaparray.h"

SwapArray::SwapArray()
{
}

int SwapArray::Swap(int _Array, int _size)
{
    size=_size;
    int temp, half_length=size/2;

    for(int n=0; n<=size; n++)
    {
        Array[n]=_Array[n];
    }

    for(int n=0; n<=half_length; n++)
    {
        temp=Array[n];
        Array[n]=Array[size];
        Array[size]=temp;
    }

    return Array;
}
