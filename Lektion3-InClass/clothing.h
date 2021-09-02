#ifndef CLOTHING_H
#define CLOTHING_H


class Clothing
{
public:
    Clothing();

    void setWeight(double _weight);
    void setHeight(double _height);
    void setAge(int _age);

    double hatSize();
    double jacketSize();
    double waistSize();

private:
    int age;
    double height, weight;
};

#endif // CLOTHING_H
