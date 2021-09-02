//SEBASTIAN RUD MADSEN, SEMAD17@STUDENT.SDU.DK

#ifndef VECTOR_H
#define VECTOR_H

template<class T>
class Vector
{
public:
    //Default constructor
    Vector() {}

    //Constructor
    Vector(int size);

    //Copy constructor
    Vector(const Vector<T>& vector);

    //Destructor
    ~Vector();

    //getSize and setSize
    int getSize();
    void setSize(int size);

    //Get element [i] of vector
    T& operator()(int i);
    const T& operator()(int i) const;

    //Calculate the dot product
    T operator*(Vector<T>& vector);

    //Calculate the cross product
    template <class U>
    friend Vector<U> cross(Vector<U>& lhs, Vector<U>& rhs);

private:
    int _size;
    T *_elems;
};

//IMPLEMENTATION OF FUNCTIONS
//Constructor
template <class T>
Vector<T>::Vector(int size)
{
    if(size>0)
    {
        _size=size;
        _elems=new T[_size];
    }
}

//Copy constructor
template <class T>
Vector<T>::Vector(const Vector<T> &vector)
{
    _size=vector._size;
    delete []_elems;
    _elems=new T[_size];

    for(int i=0; i<_size; i++)
    {
        _elems[i]=vector._elems[i];
    }
}

//Destructor
template <class T>
Vector<T>::~Vector()
{
    delete []_elems;
}

//getSize and setSize
template <class T>
int Vector<T>::getSize()
{
    return _size;
}

template <class T>
void Vector<T>::setSize(int size)
{
    _size=size;
    delete []_elems;
    _elems = new T[_size];
}

//Get element [i] of vector
template <class T>
T& Vector<T>::operator()(int i)
{
    return _elems[i-1];
}

template <class T>
const T& Vector<T>::operator()(int i) const
{
    return _elems[i-1];
}

//Calculate the dot product
template <class T>
T Vector<T>::operator*(Vector<T>& vector)
{
    if (vector._size == _size)
    {
        T dotprod=0;
        for(int i=0; i<_size; i++)
        {
            dotprod+=vector._elems[i]*_elems[i];
        }
        return dotprod;
    }
    else
    {
        return 0;
    }
}

//Calculate the cross product (friend function)
template<class U>
Vector<U> cross(Vector<U>& lhs, Vector<U>& rhs)
{
    if(lhs._size==3 && rhs._size==3)
    {
        Vector<U> crossprod(3);
        crossprod(1)=(lhs(2)*rhs(3)-lhs(3)*rhs(2));
        crossprod(2)=(lhs(3)*rhs(1)-lhs(1)*rhs(3));
        crossprod(3)=(lhs(1)*rhs(2)-lhs(2)*lhs(1));
        return crossprod;
    }
    else
    {
        Vector<U> crossprod(1);
        crossprod(0)=0;
        return crossprod;
    }
}

#endif // VECTOR_H
