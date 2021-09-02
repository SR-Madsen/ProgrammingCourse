#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(double height=0, double width=0);

private:
    void calcArea();

    double _height, _width;
};

#endif // RECTANGLE_H
