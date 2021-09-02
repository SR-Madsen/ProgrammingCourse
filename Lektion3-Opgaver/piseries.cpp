#include "piseries.h"
#include <cmath>

PiSeries::PiSeries()
{
    order=1;
}

PiSeries::PiSeries(int order_in)
{
    if (order_in>0)
    {
        order=order_in;
    }
}

double PiSeries::calculateValue()
{
    double i;

    value=0;

    for(int n=0; n<=order; n++)
    {
        i=n;
        value=value+(pow(-1.0,i)*(1.0/(2*i+1)));
    }
    return 4*value;
}

double PiSeries::getValue()
{
    return value;
}
