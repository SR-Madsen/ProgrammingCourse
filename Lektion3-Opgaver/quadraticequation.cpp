#include "quadraticequation.h"
#include <cmath>

QuadraticEquation::QuadraticEquation()
{
}

QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
    _a = a;
    _b = b;
    _c = c;
}

double QuadraticEquation::Discriminant()
{
    return (_b*_b)-4*_a*_c;
}

double QuadraticEquation::solveReal()
{
    if (Discriminant()<0)
    {
        return -_b/(2*_a);
    }

    return (-_b + sqrt(Discriminant()))/(2*_a);
}

double QuadraticEquation::solveImaginary()
{
    if (Discriminant()<0)
    {
        return sqrt(-Discriminant())/(2*_a);
    }

    return 0;
}
