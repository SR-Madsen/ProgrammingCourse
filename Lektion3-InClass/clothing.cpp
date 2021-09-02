#include "clothing.h"

Clothing::Clothing()
{
}

void Clothing::setAge(int _age)
{
    if(_age>0)
    {
        age=_age;
    }
}

void Clothing::setHeight(double _height)
{
    if(_height>0)
    {
        height=_height;
    }
}

void Clothing::setWeight(double _weight)
{
    if(_weight>0)
    {
        weight=_weight;
    }
}

double Clothing::hatSize()
{
    double hatSize;

    hatSize=(weight/height)*3.3;
    return hatSize;
}

double Clothing::jacketSize()
{
    double jacketSize;

    if(age>30)
    {
        jacketSize=((height*weight)/335)+(1/8)*((age-30))/10;
    }
    else
    {
        jacketSize=((height*weight/335));
    }
    return jacketSize;
}

double Clothing::waistSize()
{
    double waistSize;

    if(age>28)
    {
        waistSize=(weight/2.6)+(1/10)*((age-28))/2;
    }
    else
    {
        waistSize=(weight/2.6);
    }
    return waistSize;
}
