#ifndef SINGLENODE_H
#define SINGLENODE_H


class SingleNode
{
public:
    SingleNode() {next = nullptr; data = 0;}

    int data;
    SingleNode *next;
};

#endif // SINGLENODE_H
