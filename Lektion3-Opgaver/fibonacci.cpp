#include "fibonacci.h"

Fibonacci::Fibonacci()
{
}

Fibonacci::Fibonacci(double weight_in, int period_in)
{
    if (weight_in>0 && period_in>0)
    {
        weight=weight_in;
        period=period_in;
    }
}

double Fibonacci::Growth()
{
    double next, first, second;

    for(int n=0; n<=period; n++)
    {
        next=first+second;
        first=second;
        second=next;
    }
    return second;
}
