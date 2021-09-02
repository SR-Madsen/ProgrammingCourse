#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
public:
    Triangle(double height=0, double width=0);

private:
    void calcArea();

    double _height, _width;
};

#endif // TRIANGLE_H
