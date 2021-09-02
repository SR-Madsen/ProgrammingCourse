#include "doublelist.h"
#include <iostream>

DoubleList::DoubleList()
{
    head=nullptr;
    tail=nullptr;
}

void DoubleList::printList()
{
    DoubleNode *temp = new DoubleNode;
    temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->data << "\t";
        temp=temp->next;
    }
    std::cout << std::endl;
    delete temp;
}

void DoubleList::newNode(int value)
{
    DoubleNode *temp = new DoubleNode;
    temp->data = value;
    temp->next = nullptr;

    if(head==nullptr)
    {
        temp->prev = nullptr;
        head=temp;
        tail=temp;
        temp=nullptr;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void DoubleList::insertPos(int value, int pos)
{
    DoubleNode *temp, *q;
    int i;
    q = head;
    for (i=0; i<pos-1; i++)
    {
        q =q->next;
        if (q==nullptr)
        {
            std::cout << "Error" << std::endl;
        }
    }
    temp = new DoubleNode;
    temp->data = value;
    if (q->next == nullptr)
    {
        q->next = temp;
        temp->next = nullptr;
        temp->prev = q;
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
}

void DoubleList::deleteStart()
{
    DoubleNode *temp;

    temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
}

void DoubleList::deleteEnd()
{
    DoubleNode *temp;

    temp = tail;
    tail->prev->next = nullptr;
    tail = tail->prev;
    delete temp;
}

void DoubleList::deletePos(int pos)
{
    DoubleNode *cur = new DoubleNode;
    DoubleNode *prev = new DoubleNode;
    cur = head;

    for (int i=1; i<pos; i++)
    {
        prev=cur;
        cur=cur->next;
    }

    prev->next=cur->next;
    cur->next->prev=cur->prev;
    delete cur;
}
