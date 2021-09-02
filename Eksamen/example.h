#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <string>

class Example
{
public:
    Example();
    Example(int data, std::string name);

    void setData(int data);
    void setName(std::string name);

    int getData();
    std::string getName();

    friend void showVars(Example example);

    int operator*(Example example);

protected:
    int _data;

private:
    std::string _name;

};

#endif // EXAMPLE_H
