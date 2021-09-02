#ifndef DOUBLELIST_H
#define DOUBLELIST_H

#include "doublenode.h"

class DoubleList
{
public:
    DoubleList();

    void printList();

    void newNode(int value);
    void insertPos(int value, int pos);

    void deleteStart();
    void deleteEnd();
    void deletePos(int pos);

private:
    DoubleNode *head = nullptr, *tail = nullptr;
};

#endif // DOUBLELIST_H
