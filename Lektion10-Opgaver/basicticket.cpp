#include "basicticket.h"

BasicTicket::BasicTicket()
{
    _price=0;
}

void BasicTicket::setPrice(double price)
{
    _price=price;
}

double BasicTicket::getPrice() const
{
    return _price;
}
