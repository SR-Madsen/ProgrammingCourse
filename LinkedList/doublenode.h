#ifndef DOUBLENODE_H
#define DOUBLENODE_H


class DoubleNode
{
public:
    DoubleNode() {next=nullptr; prev=nullptr; data=0;}

    int data;
    DoubleNode *next;
    DoubleNode *prev;
};

#endif // DOUBLENODE_H
