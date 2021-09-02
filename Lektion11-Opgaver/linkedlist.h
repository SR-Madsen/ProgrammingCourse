#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

template<class T>
class LinkedList
{
public:
    LinkedList() : _head(nullptr), _tail(nullptr) {}

    Node<T>* head() {return _head;}
    Node<T>* tail() {return _tail;}

    void push_back(Node<T>* n)
    {
        if (_tail)
        {
            _tail->next() = n;
        }
        n->previous()=_tail;
        _tail=n;

        if (!_head)
        {
            _head=n;
        }
    }

    void push_front(Node<T>* n)
    {
        if (_head)
        {
            _head->previous()=n;
        }
        n->next()=_head;

        _head=n;

        if (!_tail)
        {
            _tail=n;
        }
    }

private:
    Node<T> *_head, *_tail;
};

#endif // LINKEDLIST_H
