#ifndef MASS_H
#define MASS_H


class Mass
{
public:
    Mass();
    Mass(double _weight);

    double gravitation(Mass m, double distance);
    double getWeight();

private:
    double weight;

};

#endif // MASS_H
