#ifndef ARRAYINT100_H
#define ARRAYINT100_H


class ArrayInt100
{
public:
    ArrayInt100();

    void fillRandom();
    int returnMax();
    void printContent();

    int searchNumber(int _search);

private:
    int Array[100];

};

#endif // ARRAYINT100_H
