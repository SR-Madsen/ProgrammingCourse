#ifndef BASICTICKET_H
#define BASICTICKET_H


class BasicTicket
{
public:
    BasicTicket();

    void setPrice(double price);
    virtual double getPrice() const;

private:
    double _price;
};

#endif // BASICTICKET_H
