#ifndef MACLAURIN_H
#define MACLAURIN_H


class Maclaurin
{
public:
    Maclaurin();
    Maclaurin(int _order, double _point);

    int Factorial(int factorial_order);
    double valueCalculation();

private:
    int order;
    double point, value;

};

#endif // MACLAURIN_H
