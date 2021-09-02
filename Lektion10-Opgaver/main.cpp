#include <iostream>
#include "floorticket.h"

using namespace std;

int main()
{
    BasicTicket* tickets[10];

    for (unsigned int i=0; i<10; i++)
    {
        tickets[i]=new FloorTicket;
        tickets[i]->setPrice(100*(i+1));
    }

    for (unsigned int i=0; i<10; i++)
    {
        cout << "Ticket price is: " << tickets[i]->getPrice() << endl;
    }

    return 0;
}
