#include "parent.h"

Parent::Parent()
{
    std::cout << "Creating a Parent." << std::endl;
}

void Parent::Output()
{
    std::cout << "Called from Parent." << std::endl;
}
