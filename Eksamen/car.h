#ifndef CAR_H
#define CAR_H

#include <string>
#include "vehicle.h"

class Child : public Parent
{
public:
    Child() {}
    void function() {std::cout << "Child function()" << std::endl;}

    //void overloadMe(int value1, int value2) {std::cout << "overloadMe 1" << std::endl;}
    //void overloadMe(double value1, double value2) {std::cout << "overloadMe 2" << std::endl;}
    //void overloadMe(std::string string1, std::string string2) {std::cout << "overloadMe 3" << std::endl;}
};

#endif // CAR_H
