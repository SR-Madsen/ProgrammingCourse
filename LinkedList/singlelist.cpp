#include "singlelist.h"
#include <iostream>

SingleList::SingleList()
{
    head=nullptr;
    tail=nullptr;
}

void SingleList::newNode(int value)
{
    SingleNode *temp = new SingleNode;
    temp->data = value;
    temp->next = nullptr;

    if(head==nullptr)
    {
        head=temp;
        tail=temp;
        temp=nullptr;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}

void SingleList::printList()
{
    SingleNode *temp = new SingleNode;
    temp = head;
    while(temp!=nullptr)
    {
        std::cout << temp->data << "\t";
        temp=temp->next;
    }
    std::cout << std::endl;
}

void SingleList::insertStart(int value)
{
    SingleNode *temp = new SingleNode;
    temp->data = value;
    temp->next = head;
    head = temp;
}

void SingleList::insertPos(int value, int pos)
{
    SingleNode *pre = new SingleNode;
    SingleNode *cur = new SingleNode;
    SingleNode *temp = new SingleNode;
    cur=head;

    for (int i=1; i<pos; i++)
    {
        pre=cur;
        cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
}

void SingleList::deleteStart()
{
    SingleNode *temp = new SingleNode;
    temp = head;
    head = head->next;
    delete temp;
}

void SingleList::deleteEnd()
{
    SingleNode *cur = new SingleNode;
    SingleNode *prev = new SingleNode;
    cur = head;

    while(cur->next!=nullptr)
    {
        prev=cur;
        cur=cur->next;
    }

    tail=prev;
    prev->next=nullptr;
    delete cur;
}

void SingleList::deletePos(int pos)
{
    SingleNode *cur = new SingleNode;
    SingleNode *prev = new SingleNode;
    cur = head;

    for (int i=1; i<pos; i++)
    {
        prev=cur;
        cur=cur->next;
    }

    prev->next=cur->next;
}
