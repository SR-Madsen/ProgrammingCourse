#ifndef ARRAY_H
#define ARRAY_H


template<class T>
class Array
{
public:
    Array(int n=0);

    //Destructor
    ~Array();

    //Copy constructor
    Array(const Array& a);

    //Assignemnt operator
    Array& operator=(const Array& copyFrom);

    //Operator [] to return element
    T& operator[](int i);
    const T& operator[](int i) const;

private:
    int _n;
    T *_elems;
};

template <class T>
Array<T>::Array(int n)
{
    _n=n;

    if(n>0)
    {
        _elems=new T[n];
    }
}

//Destructor
template <class T>
Array<T>::~Array()
{
    delete []_elems;
}

//Copy constructor
template <class T>
Array<T>::Array(const Array& a)
{
    _n=a._n;

    for(int i=0;i<_n;i++)
    {
        _elems[i]=a._elems[i];
    }
}

//Assignment operator
template <class T>
Array<T>& Array<T>::operator=(const Array& copyFrom)
{
    if (_n > 0)
    {
        delete []_elems;
    }

    _n=copyFrom._n;
    if (_n >0)
    {
        _elems = new T[_n];
    }

    for(int i=0;i<_n;i++)
    {
        _elems[i]=copyFrom._elems[i];
    }

    return (*this);
}

//Operators [] to return element
template <class T>
T& Array<T>::operator[](int i)
{
    return _elems[i];
}

template <class T>
const T& Array<T>::operator[](int i) const
{
    return _elems[i];
}

#endif // ARRAY_H
