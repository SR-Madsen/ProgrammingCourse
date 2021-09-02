#ifndef FIBONACCI_H
#define FIBONACCI_H


class Fibonacci
{
public:
    Fibonacci();
    Fibonacci(double weight_in, int period_in);

    double Growth();

private:
    double weight;
    int period;

};

#endif // FIBONACCI_H
