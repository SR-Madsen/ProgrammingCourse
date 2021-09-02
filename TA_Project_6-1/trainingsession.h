#ifndef TRAININGSESSION_H
#define TRAININGSESSION_H
#include <vector>
#include <string>
#include "HeartRate.h"


class TrainingSession
{
public:
    TrainingSession();

    void setAge(int age);
    void setWeight(int weight);
    void setHeight(int height);
    void setVO2Max(int VO2Max);
    void setGender(char Gender);

    void readData(std::string filename);

    double calcCalorieBurnNet();
    double calcCalorieBurnGross();
    double calcBMR();

    double aveCadence();
    double maxTemperature();

private:
    std::vector<HeartRate> _hr;
    std::vector<int> _cadence;
    std::vector<double> _temperature;
    int _age, _weight, _height, _VO2Max;
    double _totalTime, _aveHeartRate;
    char _gender;
};

#endif // TRAININGSESSION_H
