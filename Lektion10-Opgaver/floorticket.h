#ifndef FLOORTICKET_H
#define FLOORTICKET_H

#include "basicticket.h"


class FloorTicket : public BasicTicket
{
public:
    FloorTicket();

    virtual double getPrice() const;

private:

};

#endif // FLOORTICKET_H
