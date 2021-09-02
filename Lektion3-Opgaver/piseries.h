#ifndef PISERIES_H
#define PISERIES_H


class PiSeries
{
public:
    PiSeries();
    PiSeries(int order_in);

    double calculateValue();

    double getValue();

private:
    int order;
    double value;

};

#endif // PISERIES_H
