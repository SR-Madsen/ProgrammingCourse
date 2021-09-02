#include <iostream>
#include "resonancecalc.h"

using namespace std;

int main()
{
    double L, C, R;
    char ResType;

    cout << "This is a resonance calculator. Please select your type of resonance." << endl
         << "Type 'S' for series resonance and 'P' for parallel resonance" << endl;

    cin >> ResType;

    if (ResType=='S' || ResType=='s')
    {
        cout << "You have chosen series resonance." << endl;
    }
    else if (ResType=='P' || ResType=='s')
    {
        cout << "You have chosen parallel resonance." << endl;
    }
    else
    {
        cout << "Incorrect input.";
        return 0;
    }

    cout << "Now please input the values of your inductor, capacitor, and resistor in decimals." << endl;
    cout << "Value of inductor, L, in Henries: ";
    cin >> L;

    cout << "Value of capacitor, C, in Fahrads: ";
    cin >> C;

    cout << "Value of resistor, R, in Ohms: ";
    cin >> R;

    cout << "The following has been calculated with values L = " << L << ", C = " << C << ", and R = " << R << "." << endl;

    ResonanceCalc Resonance(ResType, L, C, R);
    cout << "Center frequency is: " << Resonance.getCenterFreq() << " rad/s." << endl;
    cout << "The first corner frequency is: " << Resonance.getCornerFreq1() << " rad/s." << endl;
    cout << "The second corner frequency is: " << Resonance.getCornerFreq2() << " rad/s." << endl;
    cout << "The quality is: " << Resonance.getQuality() << "." << endl;
    cout << "The bandwidth is: " << Resonance.getBandwidth() << "." << endl;

    return 0;
}
