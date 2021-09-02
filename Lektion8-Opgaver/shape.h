#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    Shape();

    double getArea();
    const std::string& getName() const;

protected:
    double _area;
    std::string _name;
};

#endif // SHAPE_H
