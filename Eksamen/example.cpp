#include "example.h"

Example::Example()
{
    _data = 0;
    _name = "Undefined";
}

Example::Example(int data, std::string name)
{
    _data = data;
    _name = name;
}

void Example::setData(int data)
{
    _data = data;
}

void Example::setName(std::string name)
{
    _name = name;
}

int Example::getData()
{
    return _data;
}

std::string Example::getName()
{
    return _name;
}

int Example::operator*(Example example)
{
    return example.getData()*_data;
}
