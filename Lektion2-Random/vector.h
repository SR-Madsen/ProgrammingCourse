#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    double x, y, z;

public:
    Vector();

    double get(int i);
    void set(int i, double value);

    double inner_product(Vector v);

};

#endif // VECTOR_H
