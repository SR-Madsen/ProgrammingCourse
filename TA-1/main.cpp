#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


class Vehicle{
public:
    Vehicle() {std::cout << "Creating vehicle" << std::endl; }
    virtual void method() = 0;
    virtual method2();
};

class Car : public Vehicle {
public:
    Car() {std:: cout << "Creating car" << std::endl;}
    virtual void method() {std::cout << "Cars method()" << std::endl;}
};


int main()
{

Vehicle *v = new Car;
v->method();

Vehicle vnew;

return 0;

}
