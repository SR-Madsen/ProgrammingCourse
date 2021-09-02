#include "child.h"

Child::Child()
{
    std::cout << "Creating a Child." << std::endl;
}

void Child::Output()
{
    std::cout << "Called from Child." << std::endl;
}
