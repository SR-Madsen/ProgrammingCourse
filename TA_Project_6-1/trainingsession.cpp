#include "trainingsession.h"
#include <iostream>
#include <fstream>
#include <cstring>

TrainingSession::TrainingSession()
{
    _aveHeartRate=0;
}

void TrainingSession::setAge(int age)
{
    if(age>0)
    {
        _age=age;
    }
}

void TrainingSession::setWeight(int weight)
{
    if(weight>0)
    {
        _weight=weight;
    }
}

void TrainingSession::setHeight(int height)
{
    if(height>0)
    {
        _height=height;
    }
}

void TrainingSession::setVO2Max(int VO2Max)
{
    if(VO2Max>0)
    {
        _VO2Max=VO2Max;
    }
}

void TrainingSession::setGender(char gender)
{
    if(gender=='M' || gender=='F' || gender=='m' || gender=='f')
    {
        _gender=gender;
    }
}

void TrainingSession::readData(std::string filename)
{
    std::string sTimeHour, sTimeMinute, sTimeSecond, sHR, sCadence, sTemperature;//Getline variables
    std::string initLine;
    std::ifstream hrstream(filename);

    int timeHour, timeMinute, timeSecond, HR, Cadence;//Number variables
    double Temperature;


    std::getline(hrstream, initLine); //Removes initial line from input stream as it's no use.

    while(hrstream.good()) //Reads data as long as the file has not ended.
    {
        //The next parts collects data and converts it to useable variables.
        std::getline(hrstream, sTimeHour, ':');
        std::getline(hrstream, sTimeMinute, ':');
        std::getline(hrstream, sTimeSecond, ',');
        std::getline(hrstream, sHR, ',');
        std::getline(hrstream, sCadence, ',');
        std::getline(hrstream, sTemperature);

        timeHour=stoi(sTimeHour);
        timeMinute=stoi(sTimeMinute);
        timeSecond=stoi(sTimeSecond);
        HR=stoi(sHR);
        Cadence=stoi(sCadence);
        Temperature=stod(sTemperature);

        //Conversion from H:M:S to total time in seconds for futher calculation.
        timeHour*=3600;
        timeMinute*=60;
        _totalTime=timeHour+timeMinute+timeSecond;

        _hr.push_back(HeartRate(HR, _totalTime));
        _cadence.push_back(Cadence);
        _temperature.push_back(Temperature);
    }
    hrstream.close();

    //The calculations rely on knowing for how long a certain heartrate persists
    //Therefore the _time member variable of HeartRate must be recalculated.
    //It should instead describe the range of seconds for which the heartrate is found.
    for(unsigned int n=0; n<_hr.size(); n++)
    {
        _hr[n].setTime(_hr[n+1].getTime()-_hr[n].getTime());
    }
    //Obviously this will result in the final input element being equal to _totalTime.
    //Logic dictates that the final input element would be 1 second long, so it's manually changed.
    _hr[_hr.size()-1].setTime(1);

    //Next, the average heartrate across the entire session will be found.
    for(unsigned int n=0; n<_hr.size(); n++)
    {
        _aveHeartRate+=(_hr[n].getHeartRate()*_hr[n].getTime());
    }
    _aveHeartRate/=_totalTime;
}

double TrainingSession::calcBMR()
{
    if(_gender=='M' || _gender=='m')
    {
        return ((10.0*_weight)+(6.25*_height)-(5.0*_age)+5.0);
    }
    else
    {
        return ((10.0*_weight)+(6.25*_height)-(5.0*_age)-161.0);
    }
}

double TrainingSession::calcCalorieBurnGross()
{
    if(_gender=='M' || _gender=='m')
    {
        return ((-95.7735+(0.634*_aveHeartRate)+(0.404*_VO2Max)+(0.394*_weight)+(0.271*_age))/(4.184))*_totalTime/60.0;
    }
    else
    {
        return ((-59.3954+(0.45*_aveHeartRate)+(0.380*_VO2Max)+(0.103*_weight)+(0.274*_age))/(4.184))*_totalTime/60.0;
    }
}

double TrainingSession::calcCalorieBurnNet()
{
    return calcCalorieBurnGross()-((calcBMR()*_totalTime/3600.0)/24.0);
}

double TrainingSession::aveCadence()
{
    double aveCadence=0;

    for(unsigned int n=0; n<_cadence.size(); n++)
    {
        aveCadence+=_cadence[n];
    }
    return aveCadence/=(_cadence.size()-1);
}

double TrainingSession::maxTemperature()
{
    double maxTemp=0;

    for(unsigned int n=0; n<_temperature.size(); n++)
    {
        if(maxTemp<_temperature[n])
        {
            maxTemp=_temperature[n];
        }
    }
    return maxTemp;
}
