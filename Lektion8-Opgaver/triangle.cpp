#include "triangle.h"

Triangle::Triangle(double height, double width)
{
    _height=height;
    _width=width;
    _name="Triangle";
    calcArea();
}

void Triangle::calcArea()
{
    _area=_width*_height/2;
}
