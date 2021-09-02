#include <iostream>
#include "singlelist.h"
#include "doublelist.h"

using namespace std;

int main()
{
    SingleList ASingleList;

    ASingleList.newNode(10);
    ASingleList.newNode(20);
    ASingleList.newNode(30);
    ASingleList.newNode(50);
    ASingleList.printList();

    DoubleList ADoubleList;

    ADoubleList.newNode(10);
    ADoubleList.newNode(20);
    ADoubleList.newNode(35);
    ADoubleList.newNode(45);
    ADoubleList.printList();

    return 0;
}
