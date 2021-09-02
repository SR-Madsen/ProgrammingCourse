//Sebastian Rud Madsen, semad17@student.sdu.dk

#include <iostream>

using namespace std;

int main()
{
    double time, acceleration, distancepart1, distancepart2;

    acceleration = 9.82;

    cout << "This program will calculate the distance an object drops in the span of a given timeframe." << endl;
    cout << "The program does not take friction or resistance from air into account." << endl;
    cout << "Please enter the time in seconds: ";
    cin >> time;

    distancepart1 = acceleration*(time*time);
    distancepart2 = distancepart1/2;

    cout << "Given a freefall time of " << time << " seconds, the object will drop a total of " << distancepart2 << " meters." << endl;
    cout << "This marks the end of the programming project.";

    return 0;
}
