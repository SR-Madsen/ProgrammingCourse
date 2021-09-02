#include "sorteringsalgoritmer.h"

#include <sstream>
#include <limits>

Sorteringsalgoritmer::Sorteringsalgoritmer()
{
}

void Sorteringsalgoritmer::addElement(int input)
{
    inVector.push_back(input);
}

void Sorteringsalgoritmer::randomElements()
{
    for(unsigned int n=0; n<100; n++)
    {
        inVector.push_back(rand()%100+1);
    }
}

void Sorteringsalgoritmer::printElements()
{
    for(unsigned int n=0; n<inVector.size(); n++)
    {
        std::cout << "Vector element " << n << " has the value: " << inVector[n] << std::endl;
    }
}

void Sorteringsalgoritmer::insertionSort()
{
    int key, i;
    for(unsigned int n=1; n<inVector.size(); n++)
    {
        key=inVector[n];
        i=n-1;

        while(i>=0 && inVector[i]>key)
        {
         inVector[i+1]=inVector[i];
         i--;
        }
        inVector[i+1]=key;
    }
}

void Sorteringsalgoritmer::mergeSort()
{
    mergeSort(0, inVector.size()-1);
}

void Sorteringsalgoritmer::mergeSort(int p, int r)
{
    if (p < r)
    {
        int q = (p+r)/2;
        mergeSort(p, q);
        mergeSort(q+1,r);
        merge(p,q,r);
    }
}

void Sorteringsalgoritmer::merge(int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    std::vector<int> LeftVector(n1+1);
    std::vector<int> RightVector(n2+1);

    for (int i = 0; i<n1; i++)
    {
        LeftVector[i]=inVector[p+i];
    }

    for (int j = 0; j<n2; j++)
    {
        RightVector[j]=inVector[q+j+1];
    }

    LeftVector[n1] = std::numeric_limits<int>::max();
    RightVector[n2] = std::numeric_limits<int>::max();

    int i = 0, j = 0;
    for (int k=p; k<=r; k++)
    {
        if (LeftVector[i]<=RightVector[j])
        {
            inVector[k]=LeftVector[i];
            i++;
        }
        else
        {
            inVector[k]=RightVector[j];
            j++;
        }
    }
}
