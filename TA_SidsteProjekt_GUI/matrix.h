//SEBASTIAN RUD MADSEN, SEMAD17@STUDENT.SDU.DK

#ifndef MATRIX_H
#define MATRIX_H
#include <vector.h>

template <class T>
class Matrix
{
public:
    //Constructors
    Matrix() : _rows(0), _cols(0) {}
    Matrix(int rows, int cols) : _rows(rows), _cols(cols)
    {
        _elems = new T[rows*cols];
    }

    //Copy constructor
    Matrix(const Matrix<T>& matrix);

    //Destructor
    ~Matrix();

    //getRows, getCols, setRows, and setCols
    int getRows();
    int getCols();
    void setRows(int rows);
    void setCols(int cols);

    //Get element (i,j) of matrix
    T& operator()(int i, int j);
    const T& operator()(int i, int j) const;

    //Calculate the matrix-matrix product
    Matrix<T> operator*(Matrix<T>& matrix2);

    //Calculate matrix-vector product
    Vector<T> operator*(Vector<T>& vector);

private:
    int _rows, _cols;
    T *_elems;
};

//IMPLEMENTATION OF FUNCTIONS
//Copy constructor
template <class T>
Matrix<T>::Matrix(const Matrix<T> &matrix)
{
    _rows=matrix._rows;
    _cols=matrix._cols;
    delete []_elems;
    _elems=new T[_rows*_cols];

    for(int i=0; i<(_rows*_cols); i++)
    {
        _elems[i]=matrix._elems[i];
    }
}

//Destructor
template <class T>
Matrix<T>::~Matrix()
{
    delete []_elems;
}

//getRows, getCols, setRows, and setCols
template <class T>
int Matrix<T>::getRows()
{
    return _rows;
}

template <class T>
int Matrix<T>::getCols()
{
    return _cols;
}

template <class T>
void Matrix<T>::setRows(int rows)
{
    _rows=rows;
    delete []_elems;
    _elems=new T[_rows*_cols];
}

template <class T>
void Matrix<T>::setCols(int cols)
{
    _cols=cols;
    delete []_elems;
    _elems=new T[_rows*_cols];
}

//Get element (i,j) of matrix
template <class T>
T& Matrix<T>::operator()(int i, int j)
{
    return _elems[(i-1)*_cols+(j-1)];
}

template <class T>
const T& Matrix<T>::operator()(int i, int j) const
{
    return _elems[(i-1)*_cols+(j-1)];
}

//Calculate the matrix-matrix product
template <class T>
Matrix<T> Matrix<T>::operator*(Matrix<T>& matrix2)
{
    if (_cols==matrix2.getRows())
    {
        Matrix<T> result;
        result.setCols(matrix2.getCols());
        result.setRows(_rows);

        int sum=0;

        for (int i=0; i<result.getCols(); i++)
        {
            for (int n=0; n<result.getRows(); n++)
            {
                sum=0;

                for (int j=0; j<matrix2.getRows(); j++)
                {
                    sum+=(_elems[i*_cols+j])*(matrix2._elems[n*matrix2.getRows()+j]);
                }
                result._elems[i*result.getCols()+n]=sum;
            }
        }
        return result;
    }
    else
    {
        Matrix<T> res(1,1);
        res(1,1)=0;
        return res;
    }
}

//Calculate the matrix-vector product
template <class T>
Vector<T> Matrix<T>::operator*(Vector<T>& vector)
{
    if (_cols==vector.getSize())
    {
        Vector<T> result;
        result.setSize(_rows);
        int sum;

        for (int k=0; k<result.getSize(); k++)
        {
            result(k)=0;
        }

        for (int i=0; i<_cols; i++)
        {
            sum=0;
            for (int n=0; n<_rows; n++)
            {
                sum+=_elems[i*_cols+n]*vector(n);
            }
            result(i)=sum;
        }
        return result;
    }
    else
    {
        Vector<T> result;
        result.setSize(1);
        result(1)=0;
        return result;
    }
}

#endif // MATRIX_H
