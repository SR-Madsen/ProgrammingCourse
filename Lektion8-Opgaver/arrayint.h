#ifndef ARRAYINT_H
#define ARRAYINT_H
#include <string>

class ArrayInt
{
public:
    ArrayInt(int n);
    ~ArrayInt();

    void setValue(int idx, int value);
    int getValue(int idx);

    void sort();

    std::string toString();

private:
    int _n;
    int *_arr;
};

#endif // ARRAYINT_H
