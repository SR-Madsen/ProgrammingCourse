#include "vector.h"

Vector::Vector()
{

}

double Vector::get(int i)
{
    if (i==1)
    {
        return x;
    }
    else if (i==2)
    {
        return y;
    }
    else if (i==3)
    {
        return z;
    }
}

void Vector::set(int i, double value)
{
    if (i==1)
    {
        x=value;
    }
    else if (i==2)
    {
        y=value;
    }

    else if (i==3)
    {
        z=value;
    }
}

double Vector::inner_product(Vector v)
{
    double xp=x*v.get(1);
    double yp=y*v.get(2);
    double zp=z*v.get(3);

    double ip=xp+yp+zp;
    return ip;
}
