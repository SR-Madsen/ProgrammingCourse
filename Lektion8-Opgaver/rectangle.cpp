#include "rectangle.h"

Rectangle::Rectangle(double height, double width)
{
    _height=height;
    _width=width;
    _name="Rectangle";
    calcArea();
}

void Rectangle::calcArea()
{
    _area=_height*_width;
}
