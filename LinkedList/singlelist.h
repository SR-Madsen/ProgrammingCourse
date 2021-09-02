#ifndef SINGLELIST_H
#define SINGLELIST_H

#include "singlenode.h"

class SingleList
{
public:
    SingleList();

    void newNode(int value);
    void printList();

    void insertStart(int value);
    void insertPos(int value, int pos);

    void deleteStart();
    void deleteEnd();
    void deletePos(int pos);

private:
    SingleNode *head, *tail;
};

#endif // SINGLELIST_H
