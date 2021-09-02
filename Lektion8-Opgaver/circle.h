#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
public:
    Circle(double r = 0);

private:
    void calcArea();

    double _radius;
};

#endif // CIRCLE_H
