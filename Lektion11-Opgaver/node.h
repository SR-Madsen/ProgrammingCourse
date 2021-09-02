#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
    Node() {_prev=nullptr; _next=nullptr; }
    Node(const T& data) {_data=data;}
    Node(T&& data) {_data=std::move(data);}

    Node<T>*& next() {return _next;}
    Node<T>*& previous() {return _prev;}

    T& data() {return _data;}

private:
    Node<T> *_prev, *_next;
    T _data;
};

#endif // NODE_H
