#include "mass.h"
#include <cmath>

Mass::Mass()
{
}

Mass::Mass(double _weight)
{
    if(_weight>0)
    {
        weight=_weight;
    }
}

double Mass::getWeight()
{
    return weight;
}

double Mass::gravitation(Mass m, double distance)
{
    double force;

    force=(6.674*pow(10, -11))*((weight*m.getWeight())/pow(distance, 2));
    return force;
}
