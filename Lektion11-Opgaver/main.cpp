#include <iostream>
#include "linkedlist.h"
#include "node.h"

template<typename T>
void printNodes(Node<T>* node)
{
    if (node)
    {
        std::cout << node->data() << std::endl;
        printNodes(node->next());
    }
}

int main()
{

    return 0;
}
