//AF SEBASTIAN RUD MADSEN

//RESULTATET AF BEREGNINGEN:
//Nettoforbrændingen er udregnet til 1040,17 kalorier.

//KOMMENTAR:
//Man kunne også anvende en class til personoplysninger, så man derved kunne gemme oplysninger med en ofstream og have et kartotek.
//Dette har jeg valgt ikke at gøre, fordi jeg i forvejen har brugt lang tid på programmet.

//En Person class (med SET- og GET-funktioner) ville fra TrainingSession kunne tilgås ved at gøre følgende:
//1. Opret en member variabel "Person [NAVN]".
//2. Lav ny funktion med persondata, hvor input er alder, højde osv.
//3. Funktionen bruger [NAVN].set[DATA] for at ændre input.
//4. I stedet for variabel f.eks. _weight-variablen bruges derfor Person.getWeight til udregninger.

#include <iostream>
#include "HeartRate.h"
#include "TrainingSession.h"

using namespace std;

int main()
{
    string filename="hrdata.csv";
    char DataAnswer, Gender;
    int VO2Max, Weight, Age, Height;
    double NetBurn, GrossBurn, BMR, Cadence, MaxTemperature;

    cout << "Use custom .csv-file? For the program to work, it must have fully identical layout to hrdata.csv. Y/N: ";
    cin >> DataAnswer;
    if(DataAnswer=='y' || DataAnswer=='Y')
    {
        cout << "Please input the filename and extension. If it is not located in the default folder, the path is also required:" << endl;
        cin >> filename;
    }

    TrainingSession Session1;
    Session1.readData(filename);

    //Customization options for general use.
    //Realistically would require if-checks of values to prevent misuse, but we'll ignore that.
    cout << "Input your gender (M/F): ";
    cin >> Gender;
    cout << "Input VO2Max: ";
    cin >> VO2Max;
    cout << "Input weight and height separated by whitespace (in kg & cm): ";
    cin >> Weight >> Height;
    cout << "Finally input your age: ";
    cin >> Age;
    cout << endl;

    Session1.setAge(Age);
    Session1.setHeight(Height);
    Session1.setVO2Max(VO2Max);
    Session1.setWeight(Weight);
    Session1.setGender(Gender);

    //Calculation and output
    BMR=Session1.calcBMR();
    GrossBurn=Session1.calcCalorieBurnGross();
    NetBurn=Session1.calcCalorieBurnNet();
    Cadence=Session1.aveCadence();
    MaxTemperature=Session1.maxTemperature();

    cout << "In the training session provided (" << filename << "), a person of gender " << Gender << endl;
    cout << "with an age of " << Age << " years, weight of " << Weight << " kilos, height of " << Height << " cm, and VO2Max of "
         << VO2Max << " ml/kg/min," << endl;
    cout << "would have a net burn of approximately: " << NetBurn << " calories." << endl << endl;

    cout << "The net burn was calculated in part with a gross burn of " << GrossBurn << " calories and a BMR of " << BMR << "." << endl << endl;

    cout.setf(ios::fixed);
    cout.precision(1);
    cout << "The average cadence across the entire session, including periods with 0 rpm, was " << Cadence << " revolutions per minute." << endl;

    cout << "The maximum temperature recorded during the session was " << MaxTemperature << " degrees Celsius." << endl << endl;

    return 0;
}
