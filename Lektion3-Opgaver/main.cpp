#include <iostream>
#include "quadraticequation.h"
#include "fibonacci.h"
#include "piseries.h"
#include "maclaurin.h"
#include <string>

using namespace std;

void ProgramQuadraticEquation()
{
    double a, b, c;
    string response;

    do
    {
        //Initialization and value input
        cout << "This program is designed to calculate the roots of a parabola given specific input parameters." << endl;
        cout << "Input the values of the following parameters:" << endl;
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;

        //Calculation by use of class
        QuadraticEquation Parabola(a, b, c);
        if (Parabola.Discriminant()>=0)
        {
            cout << Parabola.solveReal() << endl;
        }
        else
        {
            cout << Parabola.solveReal() << " + i" << Parabola.solveImaginary() << endl;
        }

        //End and re-run
        cout << "Press \"q\" and enter twice to quit this program. Any other input restarts the program." << endl;
        cin.ignore();
    }

    while (cin.get() != 'q');
}

void ProgramFibonacci()
{
    double weight_in;
    int period_in, weight_out, days;

    do
    {
        //Initialization
        cout << "This program will calculate the growth of a crud population according to the Fibonacci series." << endl;
        cout << "First you must input the initial weight of the crud in kilos: ";
        cin >> weight_in;
        cout << "Now, the amount of periods (each 5 days) the crud grows for: ";
        cin >> period_in;
        days=period_in*5;

        Fibonacci Crud(weight_in, period_in);

        //Calculations
        weight_out=Crud.Growth();
        cout << "The weight of the crud after " << days << " days is " << weight_out << " kilos" << endl;

        //End and re-run
        cout << "Press \"q\" and enter twice to quit this program. Any other input restarts the program." << endl;
        cin.ignore();
    }

    while (cin.get() != 'q');

}

void ProgramMaclaurin()
{
    int _order;
    double _point, _value;

    //Initialization
    cout << "This program will calculate the approximate value of Eulers number to the x'th power at a certain point and accuracy." << endl;
    cout << "Input the degree of accuracy you want to calculate the number to; higher is more accurate: ";
    cin >> _order;
    cout << "Now choose a point \'x\' around which to calculate: ";
    cin >> _point;

    //Calculations and output
    Maclaurin Eulers(_order, _point);
    _value=Eulers.valueCalculation();

    cout << "The value of Eulers number at the point " << _point << " with " << _order << " orders is: " << _value << endl;

}

void ProgramPi()
{
    int order_in;
    double value;

    //Initialization
    cout << "This program calculates the value of Pi to a certain accuracy." << endl;
    cout << "Input the degree to which you want to calculate pi; higher is more accurate: ";
    cin >> order_in;

    //Calculations and output
    PiSeries PiSize(order_in);
    value=PiSize.calculateValue();

    cout << "The value of pi at the " << order_in << "th order is: " << value << endl;

}

int main()
{
    int decider;

    cout << "This menu will help you use the correct program for your needs." << endl;
    cout << "For calculation of a quadratic equations root, press 1." << endl;
    cout << "For calculations using the Fibonacci numbers, press 2" << endl;
    cout << "For approximation of the exponential function, press 3" << endl;
    cout << "For approximation of pi using a Gregory-Leibniz Series, press 4" << endl;
    cout << "Type your number here: ";
    cin >> decider;

    if (decider==1)
    {
        cout << "Initiating program." << endl << endl;
        ProgramQuadraticEquation();
    }

    else if (decider==2)
    {
        cout << "Initiating program." << endl << endl;
        ProgramFibonacci();
    }

    else if (decider==3)
    {
        cout << "Initiating program." << endl << endl;
        ProgramMaclaurin();
    }

    else if (decider==4)
    {
        cout << "Initiating program." << endl << endl;
        ProgramPi();
    }

}
