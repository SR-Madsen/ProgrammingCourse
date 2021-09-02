#ifndef SORTERINGSALGORITMER_H
#define SORTERINGSALGORITMER_H
#include <vector>
#include <cstdlib>
#include <iostream>

class Sorteringsalgoritmer
{
public:
    Sorteringsalgoritmer();

    void addElement(int input);
    void randomElements();

    void printElements();

    void insertionSort();

    void mergeSort();
    void mergeSort(int p, int r);
    void merge(int p, int q, int r);

private:
    std::vector<int> inVector;
};

#endif // SORTERINGSALGORITMER_H
