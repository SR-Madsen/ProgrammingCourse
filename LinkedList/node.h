#ifndef NODE_H
#define NODE_H

class SingleNode
{
public:
    SingleNode() {next = nullptr; data = 0;}

    int data;
    SingleNode *next;
};

#endif // NODE_H
