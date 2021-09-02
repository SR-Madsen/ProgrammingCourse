#include "floorticket.h"

FloorTicket::FloorTicket()
{
}

double FloorTicket::getPrice() const
{
    return BasicTicket::getPrice()*1.3;
}
