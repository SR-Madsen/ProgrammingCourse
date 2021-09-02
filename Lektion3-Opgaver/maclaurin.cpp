#include "maclaurin.h"
#include <cmath>

Maclaurin::Maclaurin()
{
    order=1;
    point=1;
    value=0;
}

Maclaurin::Maclaurin(int _order, double _point)
{
    if (_order>0)
    {
        order=_order;
        point=_point;
        value=0;
    }
}

int Maclaurin::Factorial(int factorial_order)
{
    if (factorial_order>0)
    {
        int valueFactorial=1, i;

        for(int n=factorial_order; n>0; n--)
        {
            i=n;
            valueFactorial=valueFactorial*i;
        }

        return valueFactorial;
    }
    return 0;
}

double Maclaurin::valueCalculation()
{
    int i;

    for(int n=order; n>0; n--)
    {
        i=n;
        value=value+(1.0/(Factorial(i)))*pow(point, i);
    }
    return value;
}
