#include "shape.h"

Shape::Shape()
{
    _area=0;
}

double Shape::getArea()
{
    return _area;
}

const std::string& Shape::getName() const
{
    return _name;
}
