#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H


class QuadraticEquation
{

public:
    QuadraticEquation();
    QuadraticEquation(double a, double b, double c);

    double Discriminant();

    double solveReal();
    double solveImaginary();

private:
    double _a, _b, _c;

};

#endif // QUADRATICEQUATION_H
