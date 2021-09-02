#include "heartrate.h"

HeartRate::HeartRate()
{
}

HeartRate::HeartRate(int hr, int time)
{
    if((hr>0 && time>=0))
    {
        _hr=hr;
        _time=time;
    }
}

void HeartRate::setHeartRate(int hr)
{
    if(hr>0)
    {
        _hr=hr;
    }
}

void HeartRate::setTime(int time)
{
    if(time>=0)
    {
        _time=time;
    }
}

int HeartRate::getHeartRate()
{
    return _hr;
}

int HeartRate::getTime()
{
    return _time;
}
