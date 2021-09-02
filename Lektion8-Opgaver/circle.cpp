#include "circle.h"

Circle::Circle(double r)
{
    _radius = r;
    calcArea();
    _name="Circle";
}

void Circle::calcArea()
{
    _area=3.1415926*_radius*_radius;
}
