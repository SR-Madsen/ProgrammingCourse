#include <iostream>

using namespace std;

void program1()
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Hej!" << endl;
    cout << "Press return after entering a number." << endl;
    cout << "Enter the number of pods: ";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod: ";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have " << number_of_pods << " pea pods and " << peas_per_pod << " peas in each pod, then ";
    cout << "you have " << total_peas << " peas in all the pods." << endl;
    cout << "Farvel!" << endl;
}

void program2()
{
    double radius_ind, pi_ind, omkreds_ud, areal_ud;
    pi_ind = 3.14159;
    cout << "Hej!" << endl;
    cout << "Indtast radius af cirklen, hvis omkreds og areal, du vil udregne, i centimeter: ";
    cin >> radius_ind;
    omkreds_ud = radius_ind * 2 * pi_ind;
    areal_ud = radius_ind * radius_ind * pi_ind;
    cout << "Hvis cirklens radius er " << radius_ind << " cm, er omkredsen " << omkreds_ud << " cm." << endl;
    cout << "Cirklens areal er " << areal_ud << " kvadratcentimeter" << endl;
}

int main()
{
    program2();

    return 0;
}
